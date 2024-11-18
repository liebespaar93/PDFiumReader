using UnrealBuildTool;
using System.IO;

public class PDFiumReader : ModuleRules
{
    private string ThirdPartyPath
    {
        get { return Path.GetFullPath(Path.Combine(ModuleDirectory, "../ThirdParty/")); }
    }

    public PDFiumReader(ReadOnlyTargetRules Target) : base(Target)
    {
        PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicDependencyModuleNames.AddRange(
            new string[]
            {
                "Core",
                "CoreUObject",
                "Engine"
            }
        );

        // PDFium 헤더 경로 추가
        PublicIncludePaths.Add(Path.Combine(ThirdPartyPath, "PDFium", "Include"));

        if (Target.Platform == UnrealTargetPlatform.Win64)
        {
            string LibPath = Path.Combine(ThirdPartyPath, "PDFium", "Lib", "Win64");

            // .lib 파일 추가
            PublicAdditionalLibraries.Add(Path.Combine(LibPath, "pdfium.dll.lib"));

            // .dll 파일 런타임에 복사
            RuntimeDependencies.Add(Path.Combine("$(BinaryOutputDir)", "pdfium.dll"), Path.Combine(LibPath, "pdfium.dll"));
            PublicDelayLoadDLLs.Add("pdfium.dll");
        }
    }
}