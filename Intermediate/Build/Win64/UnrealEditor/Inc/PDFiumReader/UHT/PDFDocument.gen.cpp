// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PDFiumReader/Public/PDFDocument.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePDFDocument() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
PDFIUMREADER_API UClass* Z_Construct_UClass_UPDFDocument();
PDFIUMREADER_API UClass* Z_Construct_UClass_UPDFDocument_NoRegister();
UPackage* Z_Construct_UPackage__Script_PDFiumReader();
// End Cross Module References

// Begin Class UPDFDocument Function GetPageCount
struct Z_Construct_UFunction_UPDFDocument_GetPageCount_Statics
{
	struct PDFDocument_eventGetPageCount_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PDF" },
		{ "ModuleRelativePath", "Public/PDFDocument.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPDFDocument_GetPageCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PDFDocument_eventGetPageCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPDFDocument_GetPageCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPDFDocument_GetPageCount_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPDFDocument_GetPageCount_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPDFDocument_GetPageCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPDFDocument, nullptr, "GetPageCount", nullptr, nullptr, Z_Construct_UFunction_UPDFDocument_GetPageCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPDFDocument_GetPageCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPDFDocument_GetPageCount_Statics::PDFDocument_eventGetPageCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPDFDocument_GetPageCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPDFDocument_GetPageCount_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPDFDocument_GetPageCount_Statics::PDFDocument_eventGetPageCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPDFDocument_GetPageCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPDFDocument_GetPageCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPDFDocument::execGetPageCount)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetPageCount();
	P_NATIVE_END;
}
// End Class UPDFDocument Function GetPageCount

// Begin Class UPDFDocument Function GetPageSize
struct Z_Construct_UFunction_UPDFDocument_GetPageSize_Statics
{
	struct PDFDocument_eventGetPageSize_Parms
	{
		int32 PageIndex;
		FVector2D ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PDF" },
		{ "ModuleRelativePath", "Public/PDFDocument.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_PageIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPDFDocument_GetPageSize_Statics::NewProp_PageIndex = { "PageIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PDFDocument_eventGetPageSize_Parms, PageIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPDFDocument_GetPageSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PDFDocument_eventGetPageSize_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPDFDocument_GetPageSize_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPDFDocument_GetPageSize_Statics::NewProp_PageIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPDFDocument_GetPageSize_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPDFDocument_GetPageSize_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPDFDocument_GetPageSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPDFDocument, nullptr, "GetPageSize", nullptr, nullptr, Z_Construct_UFunction_UPDFDocument_GetPageSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPDFDocument_GetPageSize_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPDFDocument_GetPageSize_Statics::PDFDocument_eventGetPageSize_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPDFDocument_GetPageSize_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPDFDocument_GetPageSize_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPDFDocument_GetPageSize_Statics::PDFDocument_eventGetPageSize_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPDFDocument_GetPageSize()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPDFDocument_GetPageSize_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPDFDocument::execGetPageSize)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_PageIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector2D*)Z_Param__Result=P_THIS->GetPageSize(Z_Param_PageIndex);
	P_NATIVE_END;
}
// End Class UPDFDocument Function GetPageSize

// Begin Class UPDFDocument Function LoadFromFile
struct Z_Construct_UFunction_UPDFDocument_LoadFromFile_Statics
{
	struct PDFDocument_eventLoadFromFile_Parms
	{
		FString FilePath;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PDF" },
		{ "ModuleRelativePath", "Public/PDFDocument.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FilePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_FilePath;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPDFDocument_LoadFromFile_Statics::NewProp_FilePath = { "FilePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PDFDocument_eventLoadFromFile_Parms, FilePath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FilePath_MetaData), NewProp_FilePath_MetaData) };
void Z_Construct_UFunction_UPDFDocument_LoadFromFile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((PDFDocument_eventLoadFromFile_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPDFDocument_LoadFromFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PDFDocument_eventLoadFromFile_Parms), &Z_Construct_UFunction_UPDFDocument_LoadFromFile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPDFDocument_LoadFromFile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPDFDocument_LoadFromFile_Statics::NewProp_FilePath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPDFDocument_LoadFromFile_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPDFDocument_LoadFromFile_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPDFDocument_LoadFromFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPDFDocument, nullptr, "LoadFromFile", nullptr, nullptr, Z_Construct_UFunction_UPDFDocument_LoadFromFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPDFDocument_LoadFromFile_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPDFDocument_LoadFromFile_Statics::PDFDocument_eventLoadFromFile_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPDFDocument_LoadFromFile_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPDFDocument_LoadFromFile_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPDFDocument_LoadFromFile_Statics::PDFDocument_eventLoadFromFile_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPDFDocument_LoadFromFile()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPDFDocument_LoadFromFile_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPDFDocument::execLoadFromFile)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_FilePath);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->LoadFromFile(Z_Param_FilePath);
	P_NATIVE_END;
}
// End Class UPDFDocument Function LoadFromFile

// Begin Class UPDFDocument Function RenderPageToTexture
struct Z_Construct_UFunction_UPDFDocument_RenderPageToTexture_Statics
{
	struct PDFDocument_eventRenderPageToTexture_Parms
	{
		int32 PageIndex;
		float Scale;
		UTexture2D* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PDF" },
		{ "CPP_Default_Scale", "1.000000" },
		{ "ModuleRelativePath", "Public/PDFDocument.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_PageIndex;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Scale;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPDFDocument_RenderPageToTexture_Statics::NewProp_PageIndex = { "PageIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PDFDocument_eventRenderPageToTexture_Parms, PageIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPDFDocument_RenderPageToTexture_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PDFDocument_eventRenderPageToTexture_Parms, Scale), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPDFDocument_RenderPageToTexture_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PDFDocument_eventRenderPageToTexture_Parms, ReturnValue), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPDFDocument_RenderPageToTexture_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPDFDocument_RenderPageToTexture_Statics::NewProp_PageIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPDFDocument_RenderPageToTexture_Statics::NewProp_Scale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPDFDocument_RenderPageToTexture_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPDFDocument_RenderPageToTexture_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPDFDocument_RenderPageToTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPDFDocument, nullptr, "RenderPageToTexture", nullptr, nullptr, Z_Construct_UFunction_UPDFDocument_RenderPageToTexture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPDFDocument_RenderPageToTexture_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPDFDocument_RenderPageToTexture_Statics::PDFDocument_eventRenderPageToTexture_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPDFDocument_RenderPageToTexture_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPDFDocument_RenderPageToTexture_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPDFDocument_RenderPageToTexture_Statics::PDFDocument_eventRenderPageToTexture_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPDFDocument_RenderPageToTexture()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPDFDocument_RenderPageToTexture_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPDFDocument::execRenderPageToTexture)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_PageIndex);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Scale);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UTexture2D**)Z_Param__Result=P_THIS->RenderPageToTexture(Z_Param_PageIndex,Z_Param_Scale);
	P_NATIVE_END;
}
// End Class UPDFDocument Function RenderPageToTexture

// Begin Class UPDFDocument
void UPDFDocument::StaticRegisterNativesUPDFDocument()
{
	UClass* Class = UPDFDocument::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetPageCount", &UPDFDocument::execGetPageCount },
		{ "GetPageSize", &UPDFDocument::execGetPageSize },
		{ "LoadFromFile", &UPDFDocument::execLoadFromFile },
		{ "RenderPageToTexture", &UPDFDocument::execRenderPageToTexture },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPDFDocument);
UClass* Z_Construct_UClass_UPDFDocument_NoRegister()
{
	return UPDFDocument::StaticClass();
}
struct Z_Construct_UClass_UPDFDocument_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "PDFDocument.h" },
		{ "ModuleRelativePath", "Public/PDFDocument.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UPDFDocument_GetPageCount, "GetPageCount" }, // 1310849371
		{ &Z_Construct_UFunction_UPDFDocument_GetPageSize, "GetPageSize" }, // 3284656654
		{ &Z_Construct_UFunction_UPDFDocument_LoadFromFile, "LoadFromFile" }, // 2579745559
		{ &Z_Construct_UFunction_UPDFDocument_RenderPageToTexture, "RenderPageToTexture" }, // 1782377525
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPDFDocument>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UPDFDocument_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_PDFiumReader,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPDFDocument_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPDFDocument_Statics::ClassParams = {
	&UPDFDocument::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPDFDocument_Statics::Class_MetaDataParams), Z_Construct_UClass_UPDFDocument_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPDFDocument()
{
	if (!Z_Registration_Info_UClass_UPDFDocument.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPDFDocument.OuterSingleton, Z_Construct_UClass_UPDFDocument_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPDFDocument.OuterSingleton;
}
template<> PDFIUMREADER_API UClass* StaticClass<UPDFDocument>()
{
	return UPDFDocument::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPDFDocument);
// End Class UPDFDocument

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_kyoulee_Documents_github_VRGuild_VRGuild_Plugins_PDFiumReader_Source_PDFiumReader_Public_PDFDocument_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPDFDocument, UPDFDocument::StaticClass, TEXT("UPDFDocument"), &Z_Registration_Info_UClass_UPDFDocument, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPDFDocument), 824069700U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kyoulee_Documents_github_VRGuild_VRGuild_Plugins_PDFiumReader_Source_PDFiumReader_Public_PDFDocument_h_470261828(TEXT("/Script/PDFiumReader"),
	Z_CompiledInDeferFile_FID_Users_kyoulee_Documents_github_VRGuild_VRGuild_Plugins_PDFiumReader_Source_PDFiumReader_Public_PDFDocument_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_kyoulee_Documents_github_VRGuild_VRGuild_Plugins_PDFiumReader_Source_PDFiumReader_Public_PDFDocument_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
