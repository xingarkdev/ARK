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
	 * 		Name   -> Function ProjClusterGrenadeFragment.ProjClusterGrenadeFragment_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AProjClusterGrenadeFragment_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjClusterGrenadeFragment.ProjClusterGrenadeFragment_C.UserConstructionScript");
		
		AProjClusterGrenadeFragment_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function ProjClusterGrenadeFragment.ProjClusterGrenadeFragment_C.BPSpawnedFragments
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<class AShooterProjectile*>                  FragmentArray                                              (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	void AProjClusterGrenadeFragment_C::BPSpawnedFragments(TArray<class AShooterProjectile*>* FragmentArray)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjClusterGrenadeFragment.ProjClusterGrenadeFragment_C.BPSpawnedFragments");
		
		AProjClusterGrenadeFragment_C_BPSpawnedFragments_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FragmentArray != nullptr)
			*FragmentArray = params.FragmentArray;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function ProjClusterGrenadeFragment.ProjClusterGrenadeFragment_C.ReceiveAnyDamage
	 * 		Flags  -> (BlueprintAuthorityOnly, Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Damage                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UDamageType*                                 DamageType                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AController*                                 InstigatedBy                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      DamageCauser                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AProjClusterGrenadeFragment_C::ReceiveAnyDamage(float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjClusterGrenadeFragment.ProjClusterGrenadeFragment_C.ReceiveAnyDamage");
		
		AProjClusterGrenadeFragment_C_ReceiveAnyDamage_Params params {};
		params.Damage = Damage;
		params.DamageType = DamageType;
		params.InstigatedBy = InstigatedBy;
		params.DamageCauser = DamageCauser;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function ProjClusterGrenadeFragment.ProjClusterGrenadeFragment_C.ExecuteUbergraph_ProjClusterGrenadeFragment
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AProjClusterGrenadeFragment_C::ExecuteUbergraph_ProjClusterGrenadeFragment(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjClusterGrenadeFragment.ProjClusterGrenadeFragment_C.ExecuteUbergraph_ProjClusterGrenadeFragment");
		
		AProjClusterGrenadeFragment_C_ExecuteUbergraph_ProjClusterGrenadeFragment_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AProjClusterGrenadeFragment_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AProjClusterGrenadeFragment_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ProjClusterGrenadeFragment.ProjClusterGrenadeFragment_C");
		return ptr;
	}

}


