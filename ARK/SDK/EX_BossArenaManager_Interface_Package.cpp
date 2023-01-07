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
	 * 		Name   -> Function EX_BossArenaManager_Interface.EX_BossArenaManager_Interface_C.CallEvent_PlayKaijuSecondPhaseMusic
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalDinoCharacter*                        Kaiju                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UEX_BossArenaManager_Interface_C::CallEvent_PlayKaijuSecondPhaseMusic(class APrimalDinoCharacter* Kaiju)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EX_BossArenaManager_Interface.EX_BossArenaManager_Interface_C.CallEvent_PlayKaijuSecondPhaseMusic");
		
		UEX_BossArenaManager_Interface_C_CallEvent_PlayKaijuSecondPhaseMusic_Params params {};
		params.Kaiju = Kaiju;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function EX_BossArenaManager_Interface.EX_BossArenaManager_Interface_C.Call Event Kaiju Despawned
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalDinoCharacter*                        Kaiju                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UEX_BossArenaManager_Interface_C::CallEventKaijuDespawned(class APrimalDinoCharacter* Kaiju)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EX_BossArenaManager_Interface.EX_BossArenaManager_Interface_C.Call Event Kaiju Despawned");
		
		UEX_BossArenaManager_Interface_C_CallEventKaijuDespawned_Params params {};
		params.Kaiju = Kaiju;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEX_BossArenaManager_Interface_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEX_BossArenaManager_Interface_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass EX_BossArenaManager_Interface.EX_BossArenaManager_Interface_C");
		return ptr;
	}

}


