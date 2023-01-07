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
	 * 		Name   -> Function Task_DesertKaijuIntro.Task_DesertKaijuIntro_C.ReceiveExecute
	 * 		Flags  -> (Event, Protected, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      OwnerActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UTask_DesertKaijuIntro_C::ReceiveExecute(class AActor* OwnerActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Task_DesertKaijuIntro.Task_DesertKaijuIntro_C.ReceiveExecute");
		
		UTask_DesertKaijuIntro_C_ReceiveExecute_Params params {};
		params.OwnerActor = OwnerActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Task_DesertKaijuIntro.Task_DesertKaijuIntro_C.ExecuteUbergraph_Task_DesertKaijuIntro
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UTask_DesertKaijuIntro_C::ExecuteUbergraph_Task_DesertKaijuIntro(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Task_DesertKaijuIntro.Task_DesertKaijuIntro_C.ExecuteUbergraph_Task_DesertKaijuIntro");
		
		UTask_DesertKaijuIntro_C_ExecuteUbergraph_Task_DesertKaijuIntro_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTask_DesertKaijuIntro_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTask_DesertKaijuIntro_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Task_DesertKaijuIntro.Task_DesertKaijuIntro_C");
		return ptr;
	}

}


