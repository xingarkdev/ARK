#pragma once

/**
 * Name: ARK
 * Version: 1.0.1
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass PrimalItemArmor_SaddleGeneric_Tek_Interface.PrimalItemArmor_SaddleGeneric_Tek_Interface_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UPrimalItemArmor_SaddleGeneric_Tek_Interface_C : public UInterface
	{
	public:
		void IGetMaxAmmo(int32_t* retVal);
		void ISetElementToMax();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
