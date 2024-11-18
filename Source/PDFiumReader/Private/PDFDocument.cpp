#include "PDFDocument.h"
#include "HAL/FileManager.h"
#include "Misc/Paths.h"
#include "Engine/Texture2D.h"

UPDFDocument::UPDFDocument()
    : PDFDocument(nullptr)
{
}

UPDFDocument::~UPDFDocument()
{
    CleanupDocument();
}

bool UPDFDocument::LoadFromFile(const FString& FilePath)
{
    // 기존 문서 정리
    CleanupDocument();

    // 파일 존재 확인
    if (!FPaths::FileExists(FilePath))
    {
        UE_LOG(LogTemp, Error, TEXT("PDF file not found: %s"), *FilePath);
        return false;
    }

    // 파일 읽기
    TArray<uint8> FileData;
    if (!FFileHelper::LoadFileToArray(FileData, *FilePath))
    {
        UE_LOG(LogTemp, Error, TEXT("Failed to read PDF file: %s"), *FilePath);
        return false;
    }

    // PDFium에서 문서 로드
    PDFDocument = FPDF_LoadMemDocument(FileData.GetData(), FileData.Num(), nullptr);
    if (!PDFDocument)
    {
        UE_LOG(LogTemp, Error, TEXT("Failed to load PDF document: %s"), *FilePath);
        return false;
    }

    CurrentFilePath = FilePath;
    return true;
}

UTexture2D* UPDFDocument::RenderPageToTexture(int32 PageIndex, float Scale)
{
    if (!PDFDocument || PageIndex < 0 || PageIndex >= GetPageCount())
    {
        return nullptr;
    }

    // 페이지 로드
    FPDF_PAGE Page = FPDF_LoadPage(PDFDocument, PageIndex);
    if (!Page)
    {
        return nullptr;
    }

    // 페이지 크기 얻기
    int OriginalWidth = static_cast<int>(FPDF_GetPageWidth(Page));
    int OriginalHeight = static_cast<int>(FPDF_GetPageHeight(Page));

    // 스케일 적용
    int Width = static_cast<int>(OriginalWidth * Scale);
    int Height = static_cast<int>(OriginalHeight * Scale);

    // 비트맵 생성
    FPDF_BITMAP Bitmap = FPDFBitmap_Create(Width, Height, 1);
    if (!Bitmap)
    {
        FPDF_ClosePage(Page);
        return nullptr;
    }

    // 비트맵 초기화 (흰색 배경)
    FPDFBitmap_FillRect(Bitmap, 0, 0, Width, Height, 0xFFFFFFFF);

    // 페이지 렌더링
    FPDF_RenderPageBitmap(Bitmap, Page, 0, 0, Width, Height, 0,
        FPDF_ANNOT | FPDF_LCD_TEXT);

    // 비트맵 데이터 얻기
    uint8* Buffer = static_cast<uint8*>(FPDFBitmap_GetBuffer(Bitmap));
    int Stride = FPDFBitmap_GetStride(Bitmap);

    // 언리얼 텍스처 생성
    UTexture2D* Texture = UTexture2D::CreateTransient(Width, Height, PF_B8G8R8A8);
    if (Texture)
    {
        // 텍스처 데이터 복사
        void* TextureData = Texture->GetPlatformData()->Mips[0].BulkData.Lock(LOCK_READ_WRITE);
        FMemory::Memcpy(TextureData, Buffer, Width * Height * 4);
        Texture->GetPlatformData()->Mips[0].BulkData.Unlock();

        // 텍스처 업데이트
        Texture->UpdateResource();
    }

    // 리소스 정리
    FPDFBitmap_Destroy(Bitmap);
    FPDF_ClosePage(Page);

    return Texture;
}

int32 UPDFDocument::GetPageCount() const
{
    if (!PDFDocument)
    {
        return 0;
    }
    return FPDF_GetPageCount(PDFDocument);
}

FVector2D UPDFDocument::GetPageSize(int32 PageIndex) const
{
    if (!PDFDocument || PageIndex < 0 || PageIndex >= GetPageCount())
    {
        return FVector2D::ZeroVector;
    }

    FPDF_PAGE Page = FPDF_LoadPage(PDFDocument, PageIndex);
    if (!Page)
    {
        return FVector2D::ZeroVector;
    }

    double Width = FPDF_GetPageWidth(Page);
    double Height = FPDF_GetPageHeight(Page);

    FPDF_ClosePage(Page);

    return FVector2D(Width, Height);
}

void UPDFDocument::CleanupDocument()
{
    if (PDFDocument)
    {
        FPDF_CloseDocument(PDFDocument);
        PDFDocument = nullptr;
    }
    CurrentFilePath.Empty();
}