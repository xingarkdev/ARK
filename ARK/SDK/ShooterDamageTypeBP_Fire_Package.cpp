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
	 * 		Name   -> PredefinedFunction UShooterDamageTypeBP_Fire_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UShooterDamageTypeBP_Fire_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ShooterDamageTypeBP_Fire.ShooterDamageTypeBP_Fire_C");
		return ptr;
	}

}


