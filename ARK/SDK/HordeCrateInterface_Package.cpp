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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHordeCrateInterface_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHordeCrateInterface_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass HordeCrateInterface.HordeCrateInterface_C");
		return ptr;
	}

}


