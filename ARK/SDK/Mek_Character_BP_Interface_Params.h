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
	// # Structs
	// --------------------------------------------------
	/**
	 * Function Mek_Character_BP_Interface.Mek_Character_BP_Interface_C.GetMekHeat
	 */
	struct UMek_Character_BP_Interface_C_GetMekHeat_Params
	{
	public:
		float                                                      CurrentHeat;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      MaxHeat;                                                 // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Mek_Character_BP_Interface.Mek_Character_BP_Interface_C.GetMekFuel
	 */
	struct UMek_Character_BP_Interface_C_GetMekFuel_Params
	{
	public:
		float                                                      CurrentFuel;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      MaxFuel;                                                 // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Mek_Character_BP_Interface.Mek_Character_BP_Interface_C.ModifyMekHeat
	 */
	struct UMek_Character_BP_Interface_C_ModifyMekHeat_Params
	{
	public:
		float                                                      Delta;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Subtract;                                                // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_ZXE1[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      NewHeatLevel;                                            // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Mek_Character_BP_Interface.Mek_Character_BP_Interface_C.ModifyMekFuel
	 */
	struct UMek_Character_BP_Interface_C_ModifyMekFuel_Params
	{
	public:
		float                                                      Delta;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Subtract;                                                // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_L1PM[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      NewFuelLevel;                                            // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Success;                                                 // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Mek_Character_BP_Interface.Mek_Character_BP_Interface_C.SetBackpackMalfunction
	 */
	struct UMek_Character_BP_Interface_C_SetBackpackMalfunction_Params
	{
	public:
		bool                                                       DisableBackpack;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
