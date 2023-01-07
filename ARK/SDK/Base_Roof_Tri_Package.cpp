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
	 * 		Name   -> Function Base_Roof_Tri.Base_Roof_Tri_C.IsValidSnapPointTo
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalStructure*                            childStructure                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            MySnapPointToIndex                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ABase_Roof_Tri_C::IsValidSnapPointTo(class APrimalStructure* childStructure, int32_t MySnapPointToIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Base_Roof_Tri.Base_Roof_Tri_C.IsValidSnapPointTo");
		
		ABase_Roof_Tri_C_IsValidSnapPointTo_Params params {};
		params.childStructure = childStructure;
		params.MySnapPointToIndex = MySnapPointToIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Base_Roof_Tri.Base_Roof_Tri_C.BPOverrideSnappedToTransform
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalStructure*                            childStructure                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            ChildSnapFromIndex                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FName                                        ChildSnapFromName                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     UnsnappedPlacementPos                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FRotator                                    UnsnappedPlacementRot                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     SnappedPlacementPos                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FRotator                                    SnappedPlacementRot                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            SnapToIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FName                                        SnapToName                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     OutLocation                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FRotator                                    OutRotation                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            bForceInvalidateSnap                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ABase_Roof_Tri_C::BPOverrideSnappedToTransform(class APrimalStructure* childStructure, int32_t ChildSnapFromIndex, const class FName& ChildSnapFromName, const struct FVector& UnsnappedPlacementPos, const struct FRotator& UnsnappedPlacementRot, const struct FVector& SnappedPlacementPos, const struct FRotator& SnappedPlacementRot, int32_t SnapToIndex, const class FName& SnapToName, struct FVector* OutLocation, struct FRotator* OutRotation, int32_t* bForceInvalidateSnap)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Base_Roof_Tri.Base_Roof_Tri_C.BPOverrideSnappedToTransform");
		
		ABase_Roof_Tri_C_BPOverrideSnappedToTransform_Params params {};
		params.childStructure = childStructure;
		params.ChildSnapFromIndex = ChildSnapFromIndex;
		params.ChildSnapFromName = ChildSnapFromName;
		params.UnsnappedPlacementPos = UnsnappedPlacementPos;
		params.UnsnappedPlacementRot = UnsnappedPlacementRot;
		params.SnappedPlacementPos = SnappedPlacementPos;
		params.SnappedPlacementRot = SnappedPlacementRot;
		params.SnapToIndex = SnapToIndex;
		params.SnapToName = SnapToName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutLocation != nullptr)
			*OutLocation = params.OutLocation;
		if (OutRotation != nullptr)
			*OutRotation = params.OutRotation;
		if (bForceInvalidateSnap != nullptr)
			*bForceInvalidateSnap = params.bForceInvalidateSnap;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Base_Roof_Tri.Base_Roof_Tri_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABase_Roof_Tri_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Base_Roof_Tri.Base_Roof_Tri_C.UserConstructionScript");
		
		ABase_Roof_Tri_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Base_Roof_Tri.Base_Roof_Tri_C.ExecuteUbergraph_Base_Roof_Tri
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABase_Roof_Tri_C::ExecuteUbergraph_Base_Roof_Tri(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Base_Roof_Tri.Base_Roof_Tri_C.ExecuteUbergraph_Base_Roof_Tri");
		
		ABase_Roof_Tri_C_ExecuteUbergraph_Base_Roof_Tri_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABase_Roof_Tri_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABase_Roof_Tri_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Base_Roof_Tri.Base_Roof_Tri_C");
		return ptr;
	}

}


