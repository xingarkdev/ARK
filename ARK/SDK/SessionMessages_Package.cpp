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
	 * 		Name   -> PredefinedFunction USessionServiceMessages.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USessionServiceMessages::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SessionMessages.SessionServiceMessages");
		return ptr;
	}

}


