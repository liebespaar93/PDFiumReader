// PDFiumReader.Build.cs 파일을 수정
using System.IO;
using UnrealBuildTool;

public class PDFiumReader : ModuleRules
{
    private string ThirdPartyPath
    {
        get { return Path.GetFullPath(Path.Combine(ModuleDirectory, "../../ThirdParty/")); }  // 경로 수정
    }

    public PDFiumReader(ReadOnlyTargetRules Target) : base(Target)
    {
        PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicIncludePaths.Add(Path.Combine(ThirdPartyPath, "PDFium", "Include"));

        PublicDependencyModuleNames.AddRange(
            new string[]
            {
                "Core",
                "CoreUObject",
                "Engine",
                "Projects"  // 추가
            }
        );

        if (Target.Platform == UnrealTargetPlatform.Win64)
        {
            string LibPath = Path.Combine(ThirdPartyPath, "PDFium", "Lib", "Win64");

            // 경로가 존재하는지 확인을 위한 로그 추가
            System.Console.WriteLine("PDFium Lib Path: " + LibPath);

            if (Directory.Exists(LibPath))
            {
                PublicAdditionalLibraries.Add(Path.Combine(LibPath, "pdfium.dll.lib"));
                RuntimeDependencies.Add(Path.Combine("$(BinaryOutputDir)", "pdfium.dll"), Path.Combine(LibPath, "pdfium.dll"));
                PublicDelayLoadDLLs.Add("pdfium.dll");
            }
            else
            {
                System.Console.WriteLine("PDFium library path does not exist: " + LibPath);
            }
        }
    }
}