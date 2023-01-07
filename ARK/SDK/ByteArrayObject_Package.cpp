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
	 * 		Name   -> Function ByteArrayObject.ByteArrayObject_C.ExecuteUbergraph_ByteArrayObject
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UByteArrayObject_C::ExecuteUbergraph_ByteArrayObject(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ByteArrayObject.ByteArrayObject_C.ExecuteUbergraph_ByteArrayObject");
		
		UByteArrayObject_C_ExecuteUbergraph_ByteArrayObject_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UByteArrayObject_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UByteArrayObject_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ByteArrayObject.ByteArrayObject_C");
		return ptr;
	}

}


