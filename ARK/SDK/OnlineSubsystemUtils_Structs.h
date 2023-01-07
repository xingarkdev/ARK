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
	// # Enums
	// --------------------------------------------------
	/**
	 * Enum OnlineSubsystemUtils.PartyBeaconState.EPartyReservationResult
	 */
	enum class EPartyReservationResult : uint8_t
	{
		RequestPending             = 0,
		GeneralError               = 1,
		PartyLimitReached          = 2,
		IncorrectPlayerCount       = 3,
		RequestTimedOut            = 4,
		ReservationDuplicate       = 5,
		ReservationNotFound        = 6,
		ReservationAccepted        = 7,
		ReservationDenied          = 8,
		ReservationDenied_Banned   = 9,
		ReservationRequestCanceled = 10,
		MAX                        = 11
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct OnlineSubsystemUtils.PartyBeaconState.PlayerReservation
	 * Size -> 0x0028
	 */
	struct FPlayerReservation
	{
	public:
		struct FUniqueNetIdRepl                                    UniqueID;                                                // 0x0000(0x0010) Transient
		class FString                                              ValidationStr;                                           // 0x0010(0x0010) ZeroConstructor, Transient
		float                                                      ElapsedTime;                                             // 0x0020(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_8P6R[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OnlineSubsystemUtils.PartyBeaconState.PartyReservation
	 * Size -> 0x0028
	 */
	struct FPartyReservation
	{
	public:
		int32_t                                                    TeamNum;                                                 // 0x0000(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_J4MO[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FUniqueNetIdRepl                                    PartyLeader;                                             // 0x0008(0x0010) Transient
		TArray<struct FPlayerReservation>                          PartyMembers;                                            // 0x0018(0x0010) ZeroConstructor, Transient
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
