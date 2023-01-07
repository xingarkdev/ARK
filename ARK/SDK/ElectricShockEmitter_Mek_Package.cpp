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
	 * 		Name   -> Function ElectricShockEmitter_Mek.ElectricShockEmitter_Mek_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AElectricShockEmitter_Mek_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ElectricShockEmitter_Mek.ElectricShockEmitter_Mek_C.UserConstructionScript");
		
		AElectricShockEmitter_Mek_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function ElectricShockEmitter_Mek.ElectricShockEmitter_Mek_C.ExecuteUbergraph_ElectricShockEmitter_Mek
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AElectricShockEmitter_Mek_C::ExecuteUbergraph_ElectricShockEmitter_Mek(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ElectricShockEmitter_Mek.ElectricShockEmitter_Mek_C.ExecuteUbergraph_ElectricShockEmitter_Mek");
		
		AElectricShockEmitter_Mek_C_ExecuteUbergraph_ElectricShockEmitter_Mek_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AElectricShockEmitter_Mek_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AElectricShockEmitter_Mek_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ElectricShockEmitter_Mek.ElectricShockEmitter_Mek_C");
		return ptr;
	}

}


