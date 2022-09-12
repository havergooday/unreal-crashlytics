// Copyright Epic Games, Inc. All Rights Reserved.

#include "CrashlyticsPluginBPLibrary.h"
#include "CrashlyticsPlugin.h"

#if PLATFORM_ANDROID
#include "Android/AndroidJNI.h"
#include "Android/AndroidApplication.h"
#include <android_native_app_glue.h>
#endif

UCrashlyticsPluginBPLibrary::UCrashlyticsPluginBPLibrary(const FObjectInitializer& ObjectInitializer)
: Super(ObjectInitializer)
{

}

float UCrashlyticsPluginBPLibrary::CrashlyticsPluginSampleFunction(float Param)
{
	return -1;
}

void UCrashlyticsPluginBPLibrary::Crash()
{
#if PLATFORM_ANDROID
	if (JNIEnv* Env = FAndroidApplication::GetJavaEnv())
	{
		static jmethodID Method = FJavaWrapper::FindMethod(Env, FJavaWrapper::GameActivityClassID, "AndroidThunkJava_ForceCrash", "()V", false);
		FJavaWrapper::CallVoidMethod(Env, FJavaWrapper::GameActivityThis, Method);
	}
#endif
}

