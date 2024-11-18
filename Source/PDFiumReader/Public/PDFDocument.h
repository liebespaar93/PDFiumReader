#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "fpdfview.h"
#include "PDFDocument.generated.h"

UCLASS(BlueprintType)
class PDFIUMREADER_API UPDFDocument : public UObject
{
    GENERATED_BODY()

public:
    UPDFDocument();
    virtual ~UPDFDocument();

    // PDF 파일 로드 함수
    UFUNCTION(BlueprintCallable, Category = "PDF")
    bool LoadFromFile(const FString& FilePath);

    // PDF 페이지를 텍스처로 렌더링
    UFUNCTION(BlueprintCallable, Category = "PDF")
    class UTexture2D* RenderPageToTexture(int32 PageIndex, float Scale = 1.0f);

    // PDF 정보 얻기
    UFUNCTION(BlueprintCallable, Category = "PDF")
    int32 GetPageCount() const;

    UFUNCTION(BlueprintCallable, Category = "PDF")
    FVector2D GetPageSize(int32 PageIndex) const;

private:
    // PDFium 문서 핸들
    FPDF_DOCUMENT PDFDocument;

    // 현재 로드된 파일 경로
    FString CurrentFilePath;

    // 리소스 정리
    void CleanupDocument();
};