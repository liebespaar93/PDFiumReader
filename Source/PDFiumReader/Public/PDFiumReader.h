// Public/PDFiumReader.h
#pragma once

#include "Modules/ModuleManager.h"

// 모듈 매크로 추가
#if WITH_EDITOR
#define PDFIUMREADER_API DLLEXPORT
#else
#define PDFIUMREADER_API DLLIMPORT
#endif

class PDFIUMREADER_API FPDFiumReaderModule : public IModuleInterface
{
public:
    virtual void StartupModule() override;
    virtual void ShutdownModule() override;

    static inline FPDFiumReaderModule& Get()
    {
        return FModuleManager::LoadModuleChecked<FPDFiumReaderModule>("PDFiumReader");
    }

    static inline bool IsAvailable()
    {
        return FModuleManager::Get().IsModuleLoaded("PDFiumReader");
    }
};