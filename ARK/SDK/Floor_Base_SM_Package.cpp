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
	 * 		Name   -> Function Floor_Base_SM.Floor_Base_SM_C.BPAllowSnapRotationForStructure
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ThisSnapPointIndex                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FName                                        ThisSnapPointName                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class APrimalStructure*                            OtherStructure                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            OtherStructureSnapPointIndex                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FName                                        OtherStructureSnapPointName                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool AFloor_Base_SM_C::BPAllowSnapRotationForStructure(int32_t ThisSnapPointIndex, const class FName& ThisSnapPointName, class APrimalStructure* OtherStructure, int32_t OtherStructureSnapPointIndex, const class FName& OtherStructureSnapPointName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Floor_Base_SM.Floor_Base_SM_C.BPAllowSnapRotationForStructure");
		
		AFloor_Base_SM_C_BPAllowSnapRotationForStructure_Params params {};
		params.ThisSnapPointIndex = ThisSnapPointIndex;
		params.ThisSnapPointName = ThisSnapPointName;
		params.OtherStructure = OtherStructure;
		params.OtherStructureSnapPointIndex = OtherStructureSnapPointIndex;
		params.OtherStructureSnapPointName = OtherStructureSnapPointName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Floor_Base_SM.Floor_Base_SM_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AFloor_Base_SM_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Floor_Base_SM.Floor_Base_SM_C.UserConstructionScript");
		
		AFloor_Base_SM_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Floor_Base_SM.Floor_Base_SM_C.ExecuteUbergraph_Floor_Base_SM
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AFloor_Base_SM_C::ExecuteUbergraph_Floor_Base_SM(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Floor_Base_SM.Floor_Base_SM_C.ExecuteUbergraph_Floor_Base_SM");
		
		AFloor_Base_SM_C_ExecuteUbergraph_Floor_Base_SM_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AFloor_Base_SM_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AFloor_Base_SM_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Floor_Base_SM.Floor_Base_SM_C");
		return ptr;
	}

}


