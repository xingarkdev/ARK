/**
 * Name: ARK
 * Version: 1.0.1
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTrueSkyComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTrueSkyComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TrueSkyPlugin.TrueSkyComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02DF2B20
	 * 		Name   -> Function TrueSkyPlugin.TrueSkySequenceActor.SetTime
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATrueSkySequenceActor::SetTime(float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TrueSkyPlugin.TrueSkySequenceActor.SetTime");
		
		ATrueSkySequenceActor_SetTime_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02DF2BF0
	 * 		Name   -> Function TrueSkyPlugin.TrueSkySequenceActor.SetPointLightSource
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, Const)
	 * Parameters:
	 * 		int32_t                                            ID                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FLinearColor                                lightColour                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Intensity                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     pos                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              MinRadius                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              MaxRadius                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATrueSkySequenceActor::SetPointLightSource(int32_t ID, const struct FLinearColor& lightColour, float Intensity, const struct FVector& pos, float MinRadius, float MaxRadius)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TrueSkyPlugin.TrueSkySequenceActor.SetPointLightSource");
		
		ATrueSkySequenceActor_SetPointLightSource_Params params {};
		params.ID = ID;
		params.lightColour = lightColour;
		params.Intensity = Intensity;
		params.pos = pos;
		params.MinRadius = MinRadius;
		params.MaxRadius = MaxRadius;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02DF3030
	 * 		Name   -> Function TrueSkyPlugin.TrueSkySequenceActor.SetPointLight
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, Const)
	 * Parameters:
	 * 		class APointLight*                                 Source                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATrueSkySequenceActor::SetPointLight(class APointLight* Source)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TrueSkyPlugin.TrueSkySequenceActor.SetPointLight");
		
		ATrueSkySequenceActor_SetPointLight_Params params {};
		params.Source = Source;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02DF30F0
	 * 		Name   -> Function TrueSkyPlugin.TrueSkySequenceActor.SetKeyframeInt
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            keyframeUid                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FString                                      Name                                                       (Parm, ZeroConstructor)
	 * 		int32_t                                            Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATrueSkySequenceActor::SetKeyframeInt(int32_t keyframeUid, const class FString& Name, int32_t Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TrueSkyPlugin.TrueSkySequenceActor.SetKeyframeInt");
		
		ATrueSkySequenceActor_SetKeyframeInt_Params params {};
		params.keyframeUid = keyframeUid;
		params.Name = Name;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02DF3320
	 * 		Name   -> Function TrueSkyPlugin.TrueSkySequenceActor.SetKeyframeFloat
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            keyframeUid                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FString                                      Name                                                       (Parm, ZeroConstructor)
	 * 		float                                              Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATrueSkySequenceActor::SetKeyframeFloat(int32_t keyframeUid, const class FString& Name, float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TrueSkyPlugin.TrueSkySequenceActor.SetKeyframeFloat");
		
		ATrueSkySequenceActor_SetKeyframeFloat_Params params {};
		params.keyframeUid = keyframeUid;
		params.Name = Name;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02DF3550
	 * 		Name   -> Function TrueSkyPlugin.TrueSkySequenceActor.SetInt
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Name                                                       (Parm, ZeroConstructor)
	 * 		int32_t                                            Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATrueSkySequenceActor::SetInt(const class FString& Name, int32_t Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TrueSkyPlugin.TrueSkySequenceActor.SetInt");
		
		ATrueSkySequenceActor_SetInt_Params params {};
		params.Name = Name;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02DF3700
	 * 		Name   -> Function TrueSkyPlugin.TrueSkySequenceActor.SetFloat
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Name                                                       (Parm, ZeroConstructor)
	 * 		float                                              Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATrueSkySequenceActor::SetFloat(const class FString& Name, float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TrueSkyPlugin.TrueSkySequenceActor.SetFloat");
		
		ATrueSkySequenceActor_SetFloat_Params params {};
		params.Name = Name;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02DF38B0
	 * 		Name   -> Function TrueSkyPlugin.TrueSkySequenceActor.GetSunRotation
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FRotator ATrueSkySequenceActor::GetSunRotation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TrueSkyPlugin.TrueSkySequenceActor.GetSunRotation");
		
		ATrueSkySequenceActor_GetSunRotation_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02DF38F0
	 * 		Name   -> Function TrueSkyPlugin.TrueSkySequenceActor.GetSunColor
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FLinearColor ATrueSkySequenceActor::GetSunColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TrueSkyPlugin.TrueSkySequenceActor.GetSunColor");
		
		ATrueSkySequenceActor_GetSunColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02DF3930
	 * 		Name   -> Function TrueSkyPlugin.TrueSkySequenceActor.GetNextModifiableSkyKeyframe
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	int32_t ATrueSkySequenceActor::GetNextModifiableSkyKeyframe()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TrueSkyPlugin.TrueSkySequenceActor.GetNextModifiableSkyKeyframe");
		
		ATrueSkySequenceActor_GetNextModifiableSkyKeyframe_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02DF3960
	 * 		Name   -> Function TrueSkyPlugin.TrueSkySequenceActor.GetNextModifiableCloudKeyframe
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		int32_t                                            Layer                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	int32_t ATrueSkySequenceActor::GetNextModifiableCloudKeyframe(int32_t Layer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TrueSkyPlugin.TrueSkySequenceActor.GetNextModifiableCloudKeyframe");
		
		ATrueSkySequenceActor_GetNextModifiableCloudKeyframe_Params params {};
		params.Layer = Layer;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02DF3A30
	 * 		Name   -> Function TrueSkyPlugin.TrueSkySequenceActor.GetKeyframeInt
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		int32_t                                            keyframeUid                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FString                                      Name                                                       (Parm, ZeroConstructor)
	 */
	int32_t ATrueSkySequenceActor::GetKeyframeInt(int32_t keyframeUid, const class FString& Name)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TrueSkyPlugin.TrueSkySequenceActor.GetKeyframeInt");
		
		ATrueSkySequenceActor_GetKeyframeInt_Params params {};
		params.keyframeUid = keyframeUid;
		params.Name = Name;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02DF3BF0
	 * 		Name   -> Function TrueSkyPlugin.TrueSkySequenceActor.GetKeyframeFloat
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		int32_t                                            keyframeUid                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FString                                      Name                                                       (Parm, ZeroConstructor)
	 */
	float ATrueSkySequenceActor::GetKeyframeFloat(int32_t keyframeUid, const class FString& Name)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TrueSkyPlugin.TrueSkySequenceActor.GetKeyframeFloat");
		
		ATrueSkySequenceActor_GetKeyframeFloat_Params params {};
		params.keyframeUid = keyframeUid;
		params.Name = Name;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02DF3DB0
	 * 		Name   -> Function TrueSkyPlugin.TrueSkySequenceActor.GetInt
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class FString                                      Name                                                       (Parm, ZeroConstructor)
	 */
	int32_t ATrueSkySequenceActor::GetInt(const class FString& Name)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TrueSkyPlugin.TrueSkySequenceActor.GetInt");
		
		ATrueSkySequenceActor_GetInt_Params params {};
		params.Name = Name;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02DF3ED0
	 * 		Name   -> Function TrueSkyPlugin.TrueSkySequenceActor.GetFloat
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class FString                                      Name                                                       (Parm, ZeroConstructor)
	 */
	float ATrueSkySequenceActor::GetFloat(const class FString& Name)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TrueSkyPlugin.TrueSkySequenceActor.GetFloat");
		
		ATrueSkySequenceActor_GetFloat_Params params {};
		params.Name = Name;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02DF4000
	 * 		Name   -> Function TrueSkyPlugin.TrueSkySequenceActor.ForceUpdate
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void ATrueSkySequenceActor::ForceUpdate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TrueSkyPlugin.TrueSkySequenceActor.ForceUpdate");
		
		ATrueSkySequenceActor_ForceUpdate_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02DF4020
	 * 		Name   -> Function TrueSkyPlugin.TrueSkySequenceActor.CloudPointTest
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		int32_t                                            queryId                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     pos                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	float ATrueSkySequenceActor::CloudPointTest(int32_t queryId, const struct FVector& pos)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TrueSkyPlugin.TrueSkySequenceActor.CloudPointTest");
		
		ATrueSkySequenceActor_CloudPointTest_Params params {};
		params.queryId = queryId;
		params.pos = pos;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02DF41C0
	 * 		Name   -> Function TrueSkyPlugin.TrueSkySequenceActor.CloudLineTest
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		int32_t                                            queryId                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     StartPos                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     EndPos                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	float ATrueSkySequenceActor::CloudLineTest(int32_t queryId, const struct FVector& StartPos, const struct FVector& EndPos)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TrueSkyPlugin.TrueSkySequenceActor.CloudLineTest");
		
		ATrueSkySequenceActor_CloudLineTest_Params params {};
		params.queryId = queryId;
		params.StartPos = StartPos;
		params.EndPos = EndPos;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ATrueSkySequenceActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATrueSkySequenceActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TrueSkyPlugin.TrueSkySequenceActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTrueSkySequenceAsset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTrueSkySequenceAsset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TrueSkyPlugin.TrueSkySequenceAsset");
		return ptr;
	}

}


