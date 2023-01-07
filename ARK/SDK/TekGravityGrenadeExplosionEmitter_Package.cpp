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
	 * 		Name   -> Function TekGravityGrenadeExplosionEmitter.TekGravityGrenadeExplosionEmitter_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATekGravityGrenadeExplosionEmitter_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekGravityGrenadeExplosionEmitter.TekGravityGrenadeExplosionEmitter_C.UserConstructionScript");
		
		ATekGravityGrenadeExplosionEmitter_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TekGravityGrenadeExplosionEmitter.TekGravityGrenadeExplosionEmitter_C.BubbleTimeline__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ATekGravityGrenadeExplosionEmitter_C::BubbleTimeline__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekGravityGrenadeExplosionEmitter.TekGravityGrenadeExplosionEmitter_C.BubbleTimeline__FinishedFunc");
		
		ATekGravityGrenadeExplosionEmitter_C_BubbleTimeline__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TekGravityGrenadeExplosionEmitter.TekGravityGrenadeExplosionEmitter_C.BubbleTimeline__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ATekGravityGrenadeExplosionEmitter_C::BubbleTimeline__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekGravityGrenadeExplosionEmitter.TekGravityGrenadeExplosionEmitter_C.BubbleTimeline__UpdateFunc");
		
		ATekGravityGrenadeExplosionEmitter_C_BubbleTimeline__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TekGravityGrenadeExplosionEmitter.TekGravityGrenadeExplosionEmitter_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATekGravityGrenadeExplosionEmitter_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekGravityGrenadeExplosionEmitter.TekGravityGrenadeExplosionEmitter_C.ReceiveBeginPlay");
		
		ATekGravityGrenadeExplosionEmitter_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TekGravityGrenadeExplosionEmitter.TekGravityGrenadeExplosionEmitter_C.ExecuteUbergraph_TekGravityGrenadeExplosionEmitter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekGravityGrenadeExplosionEmitter_C::ExecuteUbergraph_TekGravityGrenadeExplosionEmitter(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekGravityGrenadeExplosionEmitter.TekGravityGrenadeExplosionEmitter_C.ExecuteUbergraph_TekGravityGrenadeExplosionEmitter");
		
		ATekGravityGrenadeExplosionEmitter_C_ExecuteUbergraph_TekGravityGrenadeExplosionEmitter_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ATekGravityGrenadeExplosionEmitter_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATekGravityGrenadeExplosionEmitter_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass TekGravityGrenadeExplosionEmitter.TekGravityGrenadeExplosionEmitter_C");
		return ptr;
	}

}


