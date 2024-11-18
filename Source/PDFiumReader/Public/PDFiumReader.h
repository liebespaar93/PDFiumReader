#pragma once

#include "Modules/ModuleManager.h"

class FPDFiumReaderModule : public IModuleInterface
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