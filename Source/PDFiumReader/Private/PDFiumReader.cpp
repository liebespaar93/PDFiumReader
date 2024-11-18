#include "PDFiumReader.h"
#include "fpdfview.h"

#define LOCTEXT_NAMESPACE "FPDFiumReaderModule"

void FPDFiumReaderModule::StartupModule()
{
    // PDFium 초기화
    FPDF_InitLibrary();
    UE_LOG(LogTemp, Log, TEXT("PDFium Library Initialized"));
}

void FPDFiumReaderModule::ShutdownModule()
{
    // PDFium 정리
    FPDF_DestroyLibrary();
    UE_LOG(LogTemp, Log, TEXT("PDFium Library Destroyed"));
}

#undef LOCTEXT_NAMESPACE

IMPLEMENT_MODULE(FPDFiumReaderModule, PDFiumReader)