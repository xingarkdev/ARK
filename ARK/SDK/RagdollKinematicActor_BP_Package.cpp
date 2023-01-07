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
	 * 		Name   -> Function RagdollKinematicActor_BP.RagdollKinematicActor_BP_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ARagdollKinematicActor_BP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RagdollKinematicActor_BP.RagdollKinematicActor_BP_C.UserConstructionScript");
		
		ARagdollKinematicActor_BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RagdollKinematicActor_BP.RagdollKinematicActor_BP_C.ExecuteUbergraph_RagdollKinematicActor_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARagdollKinematicActor_BP_C::ExecuteUbergraph_RagdollKinematicActor_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RagdollKinematicActor_BP.RagdollKinematicActor_BP_C.ExecuteUbergraph_RagdollKinematicActor_BP");
		
		ARagdollKinematicActor_BP_C_ExecuteUbergraph_RagdollKinematicActor_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ARagdollKinematicActor_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ARagdollKinematicActor_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass RagdollKinematicActor_BP.RagdollKinematicActor_BP_C");
		return ptr;
	}

}


