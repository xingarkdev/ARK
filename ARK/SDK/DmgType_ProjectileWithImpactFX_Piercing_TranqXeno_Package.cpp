﻿/**
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
	 * 		Name   -> PredefinedFunction UDmgType_ProjectileWithImpactFX_Piercing_TranqXeno_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDmgType_ProjectileWithImpactFX_Piercing_TranqXeno_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DmgType_ProjectileWithImpactFX_Piercing_TranqXeno.DmgType_ProjectileWithImpactFX_Piercing_TranqXeno_C");
		return ptr;
	}

}


