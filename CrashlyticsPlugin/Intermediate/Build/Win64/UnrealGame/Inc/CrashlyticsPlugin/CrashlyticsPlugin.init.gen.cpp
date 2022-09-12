// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCrashlyticsPlugin_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_CrashlyticsPlugin;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_CrashlyticsPlugin()
	{
		if (!Z_Registration_Info_UPackage__Script_CrashlyticsPlugin.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/CrashlyticsPlugin",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x3555906B,
				0xBFA28322,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_CrashlyticsPlugin.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_CrashlyticsPlugin.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_CrashlyticsPlugin(Z_Construct_UPackage__Script_CrashlyticsPlugin, TEXT("/Script/CrashlyticsPlugin"), Z_Registration_Info_UPackage__Script_CrashlyticsPlugin, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x3555906B, 0xBFA28322));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
