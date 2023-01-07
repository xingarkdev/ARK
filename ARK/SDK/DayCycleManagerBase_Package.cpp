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
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DayCycleManagerBase.DayCycleManagerBase_C.Get Teleport Transfer World PP
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APostProcessVolume*                          PP                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADayCycleManagerBase_C::GetTeleportTransferWorldPP(class APostProcessVolume** PP)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DayCycleManagerBase.DayCycleManagerBase_C.Get Teleport Transfer World PP");
		
		ADayCycleManagerBase_C_GetTeleportTransferWorldPP_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PP != nullptr)
			*PP = params.PP;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DayCycleManagerBase.DayCycleManagerBase_C.Get VR World PP
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APostProcessVolume*                          PP                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADayCycleManagerBase_C::GetVRWorldPP(class APostProcessVolume** PP)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DayCycleManagerBase.DayCycleManagerBase_C.Get VR World PP");
		
		ADayCycleManagerBase_C_GetVRWorldPP_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PP != nullptr)
			*PP = params.PP;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DayCycleManagerBase.DayCycleManagerBase_C.HandleGrappleHookImpacted
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalProjectileGrapplingHook*              GrapHookProj                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FHitResult                                  HitInfo                                                    (Parm, OutParm, ReferenceParm)
	 */
	void ADayCycleManagerBase_C::HandleGrappleHookImpacted(class APrimalProjectileGrapplingHook* GrapHookProj, struct FHitResult* HitInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DayCycleManagerBase.DayCycleManagerBase_C.HandleGrappleHookImpacted");
		
		ADayCycleManagerBase_C_HandleGrappleHookImpacted_Params params {};
		params.GrapHookProj = GrapHookProj;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (HitInfo != nullptr)
			*HitInfo = params.HitInfo;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DayCycleManagerBase.DayCycleManagerBase_C.GetWeatherEventWarning
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            WeatherEventWarningType                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADayCycleManagerBase_C::GetWeatherEventWarning(int32_t* WeatherEventWarningType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DayCycleManagerBase.DayCycleManagerBase_C.GetWeatherEventWarning");
		
		ADayCycleManagerBase_C_GetWeatherEventWarning_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (WeatherEventWarningType != nullptr)
			*WeatherEventWarningType = params.WeatherEventWarningType;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DayCycleManagerBase.DayCycleManagerBase_C.Get Golem MeshClass
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      isScorchedEarthMesh                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADayCycleManagerBase_C::GetGolemMeshClass(class UClass** isScorchedEarthMesh)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DayCycleManagerBase.DayCycleManagerBase_C.Get Golem MeshClass");
		
		ADayCycleManagerBase_C_GetGolemMeshClass_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (isScorchedEarthMesh != nullptr)
			*isScorchedEarthMesh = params.isScorchedEarthMesh;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DayCycleManagerBase.DayCycleManagerBase_C.GetBaseTemperatureModified
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              ModifiedBaseTemperature                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADayCycleManagerBase_C::GetBaseTemperatureModified(float* ModifiedBaseTemperature)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DayCycleManagerBase.DayCycleManagerBase_C.GetBaseTemperatureModified");
		
		ADayCycleManagerBase_C_GetBaseTemperatureModified_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ModifiedBaseTemperature != nullptr)
			*ModifiedBaseTemperature = params.ModifiedBaseTemperature;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DayCycleManagerBase.DayCycleManagerBase_C.ActivatedStructureUpdated
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalStructureItemContainer*               ActiveStructure                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADayCycleManagerBase_C::ActivatedStructureUpdated(class APrimalStructureItemContainer* ActiveStructure)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DayCycleManagerBase.DayCycleManagerBase_C.ActivatedStructureUpdated");
		
		ADayCycleManagerBase_C_ActivatedStructureUpdated_Params params {};
		params.ActiveStructure = ActiveStructure;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DayCycleManagerBase.DayCycleManagerBase_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADayCycleManagerBase_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DayCycleManagerBase.DayCycleManagerBase_C.UserConstructionScript");
		
		ADayCycleManagerBase_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DayCycleManagerBase.DayCycleManagerBase_C.ExecuteUbergraph_DayCycleManagerBase
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADayCycleManagerBase_C::ExecuteUbergraph_DayCycleManagerBase(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DayCycleManagerBase.DayCycleManagerBase_C.ExecuteUbergraph_DayCycleManagerBase");
		
		ADayCycleManagerBase_C_ExecuteUbergraph_DayCycleManagerBase_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ADayCycleManagerBase_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ADayCycleManagerBase_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DayCycleManagerBase.DayCycleManagerBase_C");
		return ptr;
	}

}


