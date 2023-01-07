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
	 * 		Name   -> Function DinoSettings_CarrionEater_Medium_Arthro.DinoSettings_CarrionEater_Medium_Arthro_C.ExecuteUbergraph_DinoSettings_CarrionEater_Medium_Arthro
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDinoSettings_CarrionEater_Medium_Arthro_C::ExecuteUbergraph_DinoSettings_CarrionEater_Medium_Arthro(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoSettings_CarrionEater_Medium_Arthro.DinoSettings_CarrionEater_Medium_Arthro_C.ExecuteUbergraph_DinoSettings_CarrionEater_Medium_Arthro");
		
		UDinoSettings_CarrionEater_Medium_Arthro_C_ExecuteUbergraph_DinoSettings_CarrionEater_Medium_Arthro_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDinoSettings_CarrionEater_Medium_Arthro_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDinoSettings_CarrionEater_Medium_Arthro_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DinoSettings_CarrionEater_Medium_Arthro.DinoSettings_CarrionEater_Medium_Arthro_C");
		return ptr;
	}

}


