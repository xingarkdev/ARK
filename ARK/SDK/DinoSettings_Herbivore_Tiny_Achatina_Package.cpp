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
	 * 		Name   -> Function DinoSettings_Herbivore_Tiny_Achatina.DinoSettings_Herbivore_Tiny_Achatina_C.ExecuteUbergraph_DinoSettings_Herbivore_Tiny_Achatina
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDinoSettings_Herbivore_Tiny_Achatina_C::ExecuteUbergraph_DinoSettings_Herbivore_Tiny_Achatina(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoSettings_Herbivore_Tiny_Achatina.DinoSettings_Herbivore_Tiny_Achatina_C.ExecuteUbergraph_DinoSettings_Herbivore_Tiny_Achatina");
		
		UDinoSettings_Herbivore_Tiny_Achatina_C_ExecuteUbergraph_DinoSettings_Herbivore_Tiny_Achatina_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDinoSettings_Herbivore_Tiny_Achatina_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDinoSettings_Herbivore_Tiny_Achatina_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DinoSettings_Herbivore_Tiny_Achatina.DinoSettings_Herbivore_Tiny_Achatina_C");
		return ptr;
	}

}


