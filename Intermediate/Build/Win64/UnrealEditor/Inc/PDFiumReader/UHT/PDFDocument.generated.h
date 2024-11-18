// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PDFDocument.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTexture2D;
#ifdef PDFIUMREADER_PDFDocument_generated_h
#error "PDFDocument.generated.h already included, missing '#pragma once' in PDFDocument.h"
#endif
#define PDFIUMREADER_PDFDocument_generated_h

#define FID_Users_kyoulee_Documents_github_VRGuild_VRGuild_Plugins_PDFiumReader_Source_PDFiumReader_Public_PDFDocument_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetPageSize); \
	DECLARE_FUNCTION(execGetPageCount); \
	DECLARE_FUNCTION(execRenderPageToTexture); \
	DECLARE_FUNCTION(execLoadFromFile);


#define FID_Users_kyoulee_Documents_github_VRGuild_VRGuild_Plugins_PDFiumReader_Source_PDFiumReader_Public_PDFDocument_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPDFDocument(); \
	friend struct Z_Construct_UClass_UPDFDocument_Statics; \
public: \
	DECLARE_CLASS(UPDFDocument, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PDFiumReader"), NO_API) \
	DECLARE_SERIALIZER(UPDFDocument)


#define FID_Users_kyoulee_Documents_github_VRGuild_VRGuild_Plugins_PDFiumReader_Source_PDFiumReader_Public_PDFDocument_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UPDFDocument(UPDFDocument&&); \
	UPDFDocument(const UPDFDocument&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPDFDocument); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPDFDocument); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPDFDocument)


#define FID_Users_kyoulee_Documents_github_VRGuild_VRGuild_Plugins_PDFiumReader_Source_PDFiumReader_Public_PDFDocument_h_8_PROLOG
#define FID_Users_kyoulee_Documents_github_VRGuild_VRGuild_Plugins_PDFiumReader_Source_PDFiumReader_Public_PDFDocument_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_kyoulee_Documents_github_VRGuild_VRGuild_Plugins_PDFiumReader_Source_PDFiumReader_Public_PDFDocument_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_kyoulee_Documents_github_VRGuild_VRGuild_Plugins_PDFiumReader_Source_PDFiumReader_Public_PDFDocument_h_11_INCLASS_NO_PURE_DECLS \
	FID_Users_kyoulee_Documents_github_VRGuild_VRGuild_Plugins_PDFiumReader_Source_PDFiumReader_Public_PDFDocument_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PDFIUMREADER_API UClass* StaticClass<class UPDFDocument>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_kyoulee_Documents_github_VRGuild_VRGuild_Plugins_PDFiumReader_Source_PDFiumReader_Public_PDFDocument_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
