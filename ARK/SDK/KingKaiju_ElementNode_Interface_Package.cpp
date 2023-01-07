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
	 * 		Name   -> Function KingKaiju_ElementNode_Interface.KingKaiju_ElementNode_Interface_C.SetVar_KKCharacter
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      KKChar                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UKingKaiju_ElementNode_Interface_C::SetVar_KKCharacter(class AActor* KKChar)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KingKaiju_ElementNode_Interface.KingKaiju_ElementNode_Interface_C.SetVar_KKCharacter");
		
		UKingKaiju_ElementNode_Interface_C_SetVar_KKCharacter_Params params {};
		params.KKChar = KKChar;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UKingKaiju_ElementNode_Interface_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UKingKaiju_ElementNode_Interface_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass KingKaiju_ElementNode_Interface.KingKaiju_ElementNode_Interface_C");
		return ptr;
	}

}


