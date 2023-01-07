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
	 * BlueprintGeneratedClass Diplodocus_Character_BP.Diplodocus_Character_BP_C
	 * Size -> 0x0008 (FullSize[0x22A0] - InheritedSize[0x2298])
	 */
	class ADiplodocus_Character_BP_C : public ADino_Character_BP_C
	{
	public:
		class UDinoCharacterStatusComponent_BP_Diplodocus_C*       DinoCharacterStatus_BP_Diplodocus_C1;                    // 0x2298(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		bool AllowWakingTame(class APlayerController* ForPC);
		void UserConstructionScript();
		void ExecuteUbergraph_Diplodocus_Character_BP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
