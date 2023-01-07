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
	 * AnimBlueprintGeneratedClass VH_BuggyAnimBP.VH_BuggyAnimBP_C
	 * Size -> 0x0370 (FullSize[0x06B0] - InheritedSize[0x0340])
	 */
	class UVH_BuggyAnimBP_C : public UVehicleAnimInstance
	{
	public:
		struct FAnimNode_Root                                      AnimGraphNode_Root_C01126D8474A5BE121BCD29AF108A0CA;     // 0x0340(0x0048)
		struct FAnimNode_MeshSpaceRefPose                          AnimGraphNode_MeshRefPose_0FB801AA48D033754E3698A9B7E973AB; // 0x0388(0x0030)
		struct FAnimNode_WheelHandler                              AnimGraphNode_WheelHandler_515B81E349D041A9355883A4E0A1E30C; // 0x03B8(0x0070)
		struct FAnimNode_LookAt                                    AnimGraphNode_LookAt_F2DFE2CA43DCCCFF2D41249576494667;   // 0x0428(0x0090)
		struct FAnimNode_LookAt                                    AnimGraphNode_LookAt_B8B52CBA4B44B1694D9600945E681FA4;   // 0x04B8(0x0090)
		struct FAnimNode_LookAt                                    AnimGraphNode_LookAt_2037EE7441A4FEB3A06DF0B8B9416C90;   // 0x0548(0x0090)
		struct FAnimNode_LookAt                                    AnimGraphNode_LookAt_8669744A4F49587F0BCB0AB61BD6A2CE;   // 0x05D8(0x0090)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_D73C294E4DB1529937A4888A6C3A016A; // 0x0668(0x0048)

	public:
		void ExecuteUbergraph_VH_BuggyAnimBP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
