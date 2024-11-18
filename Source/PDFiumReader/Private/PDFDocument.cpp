#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "fpdfview.h"  // PDFium 기본 헤더
#include "PDFDocument.generated.h"

UCLASS(BlueprintType)
class PDFIUMREADER_API UPDFDocument : public UObject
{
    GENERATED_BODY()

public:
    UPDFDocument();
    virtual ~UPDFDocument();

    UFUNCTION(BlueprintCallable, Category = "PDF")
    bool LoadFromFile(const FString& FilePath);

    UFUNCTION(BlueprintCallable, Category = "PDF")
    class UTexture2D* RenderPageToTexture(int32 PageIndex, float Scale = 1.0f);

    UFUNCTION(BlueprintCallable, Category = "PDF")
    int32 GetPageCount() const;

    UFUNCTION(BlueprintCallable, Category = "PDF")
    FVector2D GetPageSize(int32 PageIndex) const;

private:
    FPDF_DOCUMENT PDFDocument;
    FString CurrentFilePath;

    void CleanupDocument();
};