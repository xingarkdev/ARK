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
	 * Function Structure_PlantSpeciesZ_Base.Structure_PlantSpeciesZ_Base_C.Get Charge Variable Interface
	 */
	struct AStructure_PlantSpeciesZ_Base_C_GetChargeVariableInterface_Params
	{
	public:
		E_ChargeVariableNames                                      variableType;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_0G6V[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      fValue;                                                  // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		double                                                     dValue;                                                  // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bBValue;                                                 // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_G5TI[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ivalue;                                                  // 0x0014(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Structure_PlantSpeciesZ_Base.Structure_PlantSpeciesZ_Base_C.GetNumBatteries
	 */
	struct AStructure_PlantSpeciesZ_Base_C_GetNumBatteries_Params
	{
	public:
		int32_t                                                    numBatteries;                                            // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Structure_PlantSpeciesZ_Base.Structure_PlantSpeciesZ_Base_C.BPTriggerStasisEvent
	 */
	struct AStructure_PlantSpeciesZ_Base_C_BPTriggerStasisEvent_Params
	{	};

	/**
	 * Function Structure_PlantSpeciesZ_Base.Structure_PlantSpeciesZ_Base_C.ReceiveDestroyed
	 */
	struct AStructure_PlantSpeciesZ_Base_C_ReceiveDestroyed_Params
	{	};

	/**
	 * Function Structure_PlantSpeciesZ_Base.Structure_PlantSpeciesZ_Base_C.InitializeState
	 */
	struct AStructure_PlantSpeciesZ_Base_C_InitializeState_Params
	{	};

	/**
	 * Function Structure_PlantSpeciesZ_Base.Structure_PlantSpeciesZ_Base_C.DestroyChargeBuff
	 */
	struct AStructure_PlantSpeciesZ_Base_C_DestroyChargeBuff_Params
	{	};

	/**
	 * Function Structure_PlantSpeciesZ_Base.Structure_PlantSpeciesZ_Base_C.CreateChargeManager
	 */
	struct AStructure_PlantSpeciesZ_Base_C_CreateChargeManager_Params
	{	};

	/**
	 * Function Structure_PlantSpeciesZ_Base.Structure_PlantSpeciesZ_Base_C.UserConstructionScript
	 */
	struct AStructure_PlantSpeciesZ_Base_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Structure_PlantSpeciesZ_Base.Structure_PlantSpeciesZ_Base_C.Charge Variable Event Interface
	 */
	struct AStructure_PlantSpeciesZ_Base_C_ChargeVariableEventInterface_Params
	{
	public:
		E_ChargeVariableNames                                      variableType;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bBValue;                                                 // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_O2LX[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      fValue;                                                  // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		double                                                     dValue;                                                  // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    ivalue;                                                  // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Structure_PlantSpeciesZ_Base.Structure_PlantSpeciesZ_Base_C.Charge Variable Event Trigger Multicast Interface
	 */
	struct AStructure_PlantSpeciesZ_Base_C_ChargeVariableEventTriggerMulticastInterface_Params
	{
	public:
		E_ChargeVariableNames                                      variableType;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bBValue;                                                 // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_AV5Y[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      fValue;                                                  // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		double                                                     dValue;                                                  // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    iVariable;                                               // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Structure_PlantSpeciesZ_Base.Structure_PlantSpeciesZ_Base_C.Set Charge Variable Interface
	 */
	struct AStructure_PlantSpeciesZ_Base_C_SetChargeVariableInterface_Params
	{
	public:
		E_ChargeVariableNames                                      variableType;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       multicast;                                               // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_HBN4[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      fValue;                                                  // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		double                                                     dValue;                                                  // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bBValue;                                                 // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       triggerEvent;                                            // 0x0011(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       multicastEvent;                                          // 0x0012(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_405Z[0x1];                                   // 0x0013(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ivalue;                                                  // 0x0014(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Structure_PlantSpeciesZ_Base.Structure_PlantSpeciesZ_Base_C.CheckForBatteriesAndUpdate_Multicast
	 */
	struct AStructure_PlantSpeciesZ_Base_C_CheckForBatteriesAndUpdate_Multicast_Params
	{	};

	/**
	 * Function Structure_PlantSpeciesZ_Base.Structure_PlantSpeciesZ_Base_C.Interface Check for Batteries and Update Multicast
	 */
	struct AStructure_PlantSpeciesZ_Base_C_InterfaceCheckforBatteriesandUpdateMulticast_Params
	{	};

	/**
	 * Function Structure_PlantSpeciesZ_Base.Structure_PlantSpeciesZ_Base_C.ChargeVariableEvent_Boolean
	 */
	struct AStructure_PlantSpeciesZ_Base_C_ChargeVariableEvent_Boolean_Params
	{
	public:
		E_ChargeVariableNames                                      variableType;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bBValue;                                                 // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Structure_PlantSpeciesZ_Base.Structure_PlantSpeciesZ_Base_C.ChargeVariableEvent_Float
	 */
	struct AStructure_PlantSpeciesZ_Base_C_ChargeVariableEvent_Float_Params
	{
	public:
		E_ChargeVariableNames                                      variableType;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_FQ12[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      fValue;                                                  // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Structure_PlantSpeciesZ_Base.Structure_PlantSpeciesZ_Base_C.ChargeVariableEvent_Float_Multicast
	 */
	struct AStructure_PlantSpeciesZ_Base_C_ChargeVariableEvent_Float_Multicast_Params
	{
	public:
		E_ChargeVariableNames                                      variableType;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_T8KO[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      fValue;                                                  // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Structure_PlantSpeciesZ_Base.Structure_PlantSpeciesZ_Base_C.Charge Variable Event Boolean Interface
	 */
	struct AStructure_PlantSpeciesZ_Base_C_ChargeVariableEventBooleanInterface_Params
	{
	public:
		E_ChargeVariableNames                                      variableType;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bBValue;                                                 // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Structure_PlantSpeciesZ_Base.Structure_PlantSpeciesZ_Base_C.ChargeVariableEventFloatInterface
	 */
	struct AStructure_PlantSpeciesZ_Base_C_ChargeVariableEventFloatInterface_Params
	{
	public:
		E_ChargeVariableNames                                      variableType;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_ANMW[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      fValue;                                                  // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Structure_PlantSpeciesZ_Base.Structure_PlantSpeciesZ_Base_C.ChargeVariableEvent_Boolean_Multicast
	 */
	struct AStructure_PlantSpeciesZ_Base_C_ChargeVariableEvent_Boolean_Multicast_Params
	{
	public:
		E_ChargeVariableNames                                      variableType;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bBValue;                                                 // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Structure_PlantSpeciesZ_Base.Structure_PlantSpeciesZ_Base_C.Charge Variable Event Boolean MulticastInterface
	 */
	struct AStructure_PlantSpeciesZ_Base_C_ChargeVariableEventBooleanMulticastInterface_Params
	{
	public:
		E_ChargeVariableNames                                      variableType;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bBValue;                                                 // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Structure_PlantSpeciesZ_Base.Structure_PlantSpeciesZ_Base_C.Charge Variable Event Float Multicast Interface
	 */
	struct AStructure_PlantSpeciesZ_Base_C_ChargeVariableEventFloatMulticastInterface_Params
	{
	public:
		E_ChargeVariableNames                                      variableType;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_FKMJ[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      fValue;                                                  // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Structure_PlantSpeciesZ_Base.Structure_PlantSpeciesZ_Base_C.ChargeVariableEvent_Double
	 */
	struct AStructure_PlantSpeciesZ_Base_C_ChargeVariableEvent_Double_Params
	{
	public:
		E_ChargeVariableNames                                      variableType;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_4JUN[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		double                                                     dValue;                                                  // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Structure_PlantSpeciesZ_Base.Structure_PlantSpeciesZ_Base_C.ChargeVariableEvent_Double_Multicast
	 */
	struct AStructure_PlantSpeciesZ_Base_C_ChargeVariableEvent_Double_Multicast_Params
	{
	public:
		E_ChargeVariableNames                                      variableType;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_KZC9[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		double                                                     dValue;                                                  // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Structure_PlantSpeciesZ_Base.Structure_PlantSpeciesZ_Base_C.ChargeVariableEventDoubleInterface
	 */
	struct AStructure_PlantSpeciesZ_Base_C_ChargeVariableEventDoubleInterface_Params
	{
	public:
		E_ChargeVariableNames                                      variableType;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_LUAI[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		double                                                     dValue;                                                  // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Structure_PlantSpeciesZ_Base.Structure_PlantSpeciesZ_Base_C.Charge Variable Event Double MulticastInterface
	 */
	struct AStructure_PlantSpeciesZ_Base_C_ChargeVariableEventDoubleMulticastInterface_Params
	{
	public:
		E_ChargeVariableNames                                      variableType;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_NX0H[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		double                                                     dValue;                                                  // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Structure_PlantSpeciesZ_Base.Structure_PlantSpeciesZ_Base_C.ChargeVariableEventIntInterface
	 */
	struct AStructure_PlantSpeciesZ_Base_C_ChargeVariableEventIntInterface_Params
	{
	public:
		E_ChargeVariableNames                                      variableType;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_WC1H[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ivalue;                                                  // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Structure_PlantSpeciesZ_Base.Structure_PlantSpeciesZ_Base_C.ChargeVariableEventIntMulticastInterface
	 */
	struct AStructure_PlantSpeciesZ_Base_C_ChargeVariableEventIntMulticastInterface_Params
	{
	public:
		E_ChargeVariableNames                                      variableType;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_998D[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ivalue;                                                  // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Structure_PlantSpeciesZ_Base.Structure_PlantSpeciesZ_Base_C.ChargeVariableEvent_Int
	 */
	struct AStructure_PlantSpeciesZ_Base_C_ChargeVariableEvent_Int_Params
	{
	public:
		E_ChargeVariableNames                                      variableType;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_J2FD[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ivalue;                                                  // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Structure_PlantSpeciesZ_Base.Structure_PlantSpeciesZ_Base_C.ChargeVariableEvent_Int_Multicast
	 */
	struct AStructure_PlantSpeciesZ_Base_C_ChargeVariableEvent_Int_Multicast_Params
	{
	public:
		E_ChargeVariableNames                                      variableType;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_47QK[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ivalue;                                                  // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Structure_PlantSpeciesZ_Base.Structure_PlantSpeciesZ_Base_C.ReceiveBeginPlay
	 */
	struct AStructure_PlantSpeciesZ_Base_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Structure_PlantSpeciesZ_Base.Structure_PlantSpeciesZ_Base_C.BPUnstasis
	 */
	struct AStructure_PlantSpeciesZ_Base_C_BPUnstasis_Params
	{	};

	/**
	 * Function Structure_PlantSpeciesZ_Base.Structure_PlantSpeciesZ_Base_C.CreateChargeManager_Multicast
	 */
	struct AStructure_PlantSpeciesZ_Base_C_CreateChargeManager_Multicast_Params
	{	};

	/**
	 * Function Structure_PlantSpeciesZ_Base.Structure_PlantSpeciesZ_Base_C.InitializeState_Multicast
	 */
	struct AStructure_PlantSpeciesZ_Base_C_InitializeState_Multicast_Params
	{	};

	/**
	 * Function Structure_PlantSpeciesZ_Base.Structure_PlantSpeciesZ_Base_C.DestroyChargeBuff_Multicast
	 */
	struct AStructure_PlantSpeciesZ_Base_C_DestroyChargeBuff_Multicast_Params
	{	};

	/**
	 * Function Structure_PlantSpeciesZ_Base.Structure_PlantSpeciesZ_Base_C.ExecuteUbergraph_Structure_PlantSpeciesZ_Base
	 */
	struct AStructure_PlantSpeciesZ_Base_C_ExecuteUbergraph_Structure_PlantSpeciesZ_Base_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
