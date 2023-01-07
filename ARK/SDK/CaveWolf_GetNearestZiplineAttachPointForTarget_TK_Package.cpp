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
	 * 		Name   -> Function CaveWolf_GetNearestZiplineAttachPointForTarget_TK.CaveWolf_GetNearestZiplineAttachPointForTarget_TK_C.FindAttachLocation
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     GroundLocation                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     AttachLocation                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCaveWolf_GetNearestZiplineAttachPointForTarget_TK_C::FindAttachLocation(struct FVector* GroundLocation, struct FVector* AttachLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CaveWolf_GetNearestZiplineAttachPointForTarget_TK.CaveWolf_GetNearestZiplineAttachPointForTarget_TK_C.FindAttachLocation");
		
		UCaveWolf_GetNearestZiplineAttachPointForTarget_TK_C_FindAttachLocation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (GroundLocation != nullptr)
			*GroundLocation = params.GroundLocation;
		if (AttachLocation != nullptr)
			*AttachLocation = params.AttachLocation;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function CaveWolf_GetNearestZiplineAttachPointForTarget_TK.CaveWolf_GetNearestZiplineAttachPointForTarget_TK_C.ReceiveExecute
	 * 		Flags  -> (Event, Protected, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      OwnerActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCaveWolf_GetNearestZiplineAttachPointForTarget_TK_C::ReceiveExecute(class AActor* OwnerActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CaveWolf_GetNearestZiplineAttachPointForTarget_TK.CaveWolf_GetNearestZiplineAttachPointForTarget_TK_C.ReceiveExecute");
		
		UCaveWolf_GetNearestZiplineAttachPointForTarget_TK_C_ReceiveExecute_Params params {};
		params.OwnerActor = OwnerActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function CaveWolf_GetNearestZiplineAttachPointForTarget_TK.CaveWolf_GetNearestZiplineAttachPointForTarget_TK_C.ExecuteUbergraph_CaveWolf_GetNearestZiplineAttachPointForTarget_TK
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCaveWolf_GetNearestZiplineAttachPointForTarget_TK_C::ExecuteUbergraph_CaveWolf_GetNearestZiplineAttachPointForTarget_TK(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CaveWolf_GetNearestZiplineAttachPointForTarget_TK.CaveWolf_GetNearestZiplineAttachPointForTarget_TK_C.ExecuteUbergraph_CaveWolf_GetNearestZiplineAttachPointForTarget_TK");
		
		UCaveWolf_GetNearestZiplineAttachPointForTarget_TK_C_ExecuteUbergraph_CaveWolf_GetNearestZiplineAttachPointForTarget_TK_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCaveWolf_GetNearestZiplineAttachPointForTarget_TK_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCaveWolf_GetNearestZiplineAttachPointForTarget_TK_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass CaveWolf_GetNearestZiplineAttachPointForTarget_TK.CaveWolf_GetNearestZiplineAttachPointForTarget_TK_C");
		return ptr;
	}

}


