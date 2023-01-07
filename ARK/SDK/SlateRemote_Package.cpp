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
	 * 		Name   -> PredefinedFunction USlateRemoteSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USlateRemoteSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SlateRemote.SlateRemoteSettings");
		return ptr;
	}

}


