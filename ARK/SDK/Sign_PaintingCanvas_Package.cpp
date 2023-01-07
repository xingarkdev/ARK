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
	 * 		Name   -> Function Sign_PaintingCanvas.Sign_PaintingCanvas_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ASign_PaintingCanvas_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Sign_PaintingCanvas.Sign_PaintingCanvas_C.UserConstructionScript");
		
		ASign_PaintingCanvas_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Sign_PaintingCanvas.Sign_PaintingCanvas_C.ExecuteUbergraph_Sign_PaintingCanvas
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASign_PaintingCanvas_C::ExecuteUbergraph_Sign_PaintingCanvas(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Sign_PaintingCanvas.Sign_PaintingCanvas_C.ExecuteUbergraph_Sign_PaintingCanvas");
		
		ASign_PaintingCanvas_C_ExecuteUbergraph_Sign_PaintingCanvas_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ASign_PaintingCanvas_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASign_PaintingCanvas_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Sign_PaintingCanvas.Sign_PaintingCanvas_C");
		return ptr;
	}

}


