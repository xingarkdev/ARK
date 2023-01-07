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
	 * BlueprintGeneratedClass MetalRoof_SM.MetalRoof_SM_C
	 * Size -> 0x0000 (FullSize[0x0AF0] - InheritedSize[0x0AF0])
	 */
	class AMetalRoof_SM_C : public ABaseRoof_SM_C
	{
	public:
		void UserConstructionScript();
		void ExecuteUbergraph_MetalRoof_SM(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
