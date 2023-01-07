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
	 * Class OnlineSubsystemUtils.OnlineSessionClient
	 * Size -> 0x00C0 (FullSize[0x00E8] - InheritedSize[0x0028])
	 */
	class UOnlineSessionClient : public UOnlineSession
	{
	public:
		unsigned char                                              UnknownData_F70T[0xB8];                                  // 0x0028(0x00B8) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bIsFromInvite;                                           // 0x00E0(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected
		bool                                                       bHandlingDisconnect;                                     // 0x00E1(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected
		unsigned char                                              UnknownData_67MZ[0x6];                                   // 0x00E2(0x0006) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineSubsystemUtils.AchievementBlueprintLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UAchievementBlueprintLibrary : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_GetCachedAchievementProgress(class APlayerController* PlayerController, const class FName& AchievementID, bool* bFoundID, float* Progress);
		void STATIC_GetCachedAchievementDescription(class APlayerController* PlayerController, const class FName& AchievementID, bool* bFoundID, class FText* Title, class FText* LockedDescription, class FText* UnlockedDescription, bool* bHidden);
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineSubsystemUtils.InAppPurchaseCallbackProxy
	 * Size -> 0x0088 (FullSize[0x00B0] - InheritedSize[0x0028])
	 */
	class UInAppPurchaseCallbackProxy : public UObject
	{
	public:
		class FScriptMulticastDelegate                             OnSuccess;                                               // 0x0028(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable
		class FScriptMulticastDelegate                             OnFailure;                                               // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable
		unsigned char                                              UnknownData_UED6[0x68];                                  // 0x0048(0x0068) MISSED OFFSET (PADDING)

	public:
		void InAppPurchaseResult__DelegateSignature(EInAppPurchaseState CompletionStatus, const struct FInAppPurchaseProductInfo& InAppPurchaseInformation);
		class UInAppPurchaseCallbackProxy* STATIC_CreateProxyObjectForInAppPurchase(class APlayerController* PlayerController, const class FString& ProductIdentifier);
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineSubsystemUtils.InAppPurchaseQueryCallbackProxy
	 * Size -> 0x0058 (FullSize[0x0080] - InheritedSize[0x0028])
	 */
	class UInAppPurchaseQueryCallbackProxy : public UObject
	{
	public:
		class FScriptMulticastDelegate                             OnSuccess;                                               // 0x0028(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable
		class FScriptMulticastDelegate                             OnFailure;                                               // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable
		unsigned char                                              UnknownData_T8RT[0x38];                                  // 0x0048(0x0038) MISSED OFFSET (PADDING)

	public:
		void InAppPurchaseQueryResult__DelegateSignature(TArray<struct FInAppPurchaseProductInfo> InAppPurchaseInformation);
		class UInAppPurchaseQueryCallbackProxy* STATIC_CreateProxyObjectForInAppPurchaseQuery(class APlayerController* PlayerController, TArray<class FString> ProductIdentifiers);
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineSubsystemUtils.IpConnection
	 * Size -> 0x0020 (FullSize[0x34368] - InheritedSize[0x34348])
	 */
	class UIpConnection : public UNetConnection
	{
	public:
		unsigned char                                              UnknownData_BYPO[0x20];                                  // 0x34348(0x0020) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineSubsystemUtils.IpNetDriver
	 * Size -> 0x0020 (FullSize[0x03C0] - InheritedSize[0x03A0])
	 */
	class UIpNetDriver : public UNetDriver
	{
	public:
		bool                                                       LogPortUnreach : 1;                                      // 0x03A0(0x0001) BIT_FIELD Config, NoDestructor
		bool                                                       AllowPlayerPortUnreach : 1;                              // 0x03A0(0x0001) BIT_FIELD Config, NoDestructor
		unsigned char                                              UnknownData_F2NG[0x3];                                   // 0x03A1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		uint32_t                                                   MaxPortCountToTry;                                       // 0x03A4(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_J7W1[0x18];                                  // 0x03A8(0x0018) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineSubsystemUtils.LeaderboardBlueprintLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class ULeaderboardBlueprintLibrary : public UBlueprintFunctionLibrary
	{
	public:
		bool STATIC_WriteLeaderboardInteger(class APlayerController* PlayerController, const class FName& StatName, int32_t StatValue);
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineSubsystemUtils.LeaderboardFlushCallbackProxy
	 * Size -> 0x0030 (FullSize[0x0058] - InheritedSize[0x0028])
	 */
	class ULeaderboardFlushCallbackProxy : public UObject
	{
	public:
		class FScriptMulticastDelegate                             OnSuccess;                                               // 0x0028(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable
		class FScriptMulticastDelegate                             OnFailure;                                               // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable
		unsigned char                                              UnknownData_9EB4[0x10];                                  // 0x0048(0x0010) MISSED OFFSET (PADDING)

	public:
		void OnLeaderboardFlushed__DelegateSignature(const class FName& SessionName);
		class ULeaderboardFlushCallbackProxy* STATIC_CreateProxyObjectForFlush(class APlayerController* PlayerController, const class FName& SessionName);
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineSubsystemUtils.LeaderboardQueryCallbackProxy
	 * Size -> 0x0058 (FullSize[0x0080] - InheritedSize[0x0028])
	 */
	class ULeaderboardQueryCallbackProxy : public UObject
	{
	public:
		class FScriptMulticastDelegate                             OnSuccess;                                               // 0x0028(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable
		class FScriptMulticastDelegate                             OnFailure;                                               // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable
		unsigned char                                              UnknownData_1Z1G[0x38];                                  // 0x0048(0x0038) MISSED OFFSET (PADDING)

	public:
		void LeaderboardQueryResult__DelegateSignature(int32_t LeaderboardValue);
		class ULeaderboardQueryCallbackProxy* STATIC_CreateProxyObjectForIntQuery(class APlayerController* PlayerController, const class FName& StatName);
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineSubsystemUtils.OnlineBeacon
	 * Size -> 0x0028 (FullSize[0x0498] - InheritedSize[0x0470])
	 */
	class AOnlineBeacon : public AActor
	{
	public:
		unsigned char                                              UnknownData_SDCS[0x8];                                   // 0x0470(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UNetDriver*                                          NetDriver;                                               // 0x0478(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected
		class FName                                                BeaconNetDriverName;                                     // 0x0480(0x0008) ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected
		class UNetConnection*                                      BeaconConnection;                                        // 0x0488(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected
		unsigned char                                              UnknownData_2U0A[0x8];                                   // 0x0490(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineSubsystemUtils.OnlineBeaconClient
	 * Size -> 0x0008 (FullSize[0x04A0] - InheritedSize[0x0498])
	 */
	class AOnlineBeaconClient : public AOnlineBeacon
	{
	public:
		class AOnlineBeaconHostObject*                             BeaconOwner;                                             // 0x0498(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected

	public:
		void ClientOnConnected();
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineSubsystemUtils.OnlineBeaconHostObject
	 * Size -> 0x0010 (FullSize[0x0480] - InheritedSize[0x0470])
	 */
	class AOnlineBeaconHostObject : public AActor
	{
	public:
		class FString                                              BeaconTypeName;                                          // 0x0470(0x0010) ZeroConstructor, Transient

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineSubsystemUtils.OnlineBeaconHost
	 * Size -> 0x00B8 (FullSize[0x0550] - InheritedSize[0x0498])
	 */
	class AOnlineBeaconHost : public AOnlineBeacon
	{
	public:
		int32_t                                                    ListenPort;                                              // 0x0498(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_5D4V[0x4];                                   // 0x049C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class AOnlineBeaconClient*>                         ClientActors;                                            // 0x04A0(0x0010) ZeroConstructor
		unsigned char                                              UnknownData_F7I8[0xA0];                                  // 0x04B0(0x00A0) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineSubsystemUtils.PartyBeaconState
	 * Size -> 0x0040 (FullSize[0x0068] - InheritedSize[0x0028])
	 */
	class UPartyBeaconState : public UObject
	{
	public:
		class FName                                                SessionName;                                             // 0x0028(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected
		int32_t                                                    NumConsumedReservations;                                 // 0x0030(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected
		int32_t                                                    MaxReservations;                                         // 0x0034(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected
		int32_t                                                    NumTeams;                                                // 0x0038(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected
		int32_t                                                    NumPlayersPerTeam;                                       // 0x003C(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected
		int32_t                                                    ReservedHostTeamNum;                                     // 0x0040(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected
		int32_t                                                    ForceTeamNum;                                            // 0x0044(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected
		TArray<struct FPartyReservation>                           Reservations;                                            // 0x0048(0x0010) ZeroConstructor, Transient, Protected
		unsigned char                                              UnknownData_2GG5[0x10];                                  // 0x0058(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineSubsystemUtils.PartyBeaconHost
	 * Size -> 0x0048 (FullSize[0x04C8] - InheritedSize[0x0480])
	 */
	class APartyBeaconHost : public AOnlineBeaconHostObject
	{
	public:
		class UPartyBeaconState*                                   State;                                                   // 0x0480(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected
		TArray<class AOnlineBeaconClient*>                         ClientActors;                                            // 0x0488(0x0010) ZeroConstructor, Protected
		unsigned char                                              UnknownData_QEFV[0x28];                                  // 0x0498(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      SessionTimeoutSecs;                                      // 0x04C0(0x0004) ZeroConstructor, Transient, Config, IsPlainOldData, NoDestructor, Protected
		float                                                      TravelSessionTimeoutSecs;                                // 0x04C4(0x0004) ZeroConstructor, Transient, Config, IsPlainOldData, NoDestructor, Protected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineSubsystemUtils.PartyBeaconClient
	 * Size -> 0x0050 (FullSize[0x04F0] - InheritedSize[0x04A0])
	 */
	class APartyBeaconClient : public AOnlineBeaconClient
	{
	public:
		unsigned char                                              UnknownData_FTS1[0x50];                                  // 0x04A0(0x0050) MISSED OFFSET (PADDING)

	public:
		void ServerReservationRequest(const class FString& SessionId, const struct FPartyReservation& Reservation);
		void ServerCancelReservationRequest(const struct FUniqueNetIdRepl& PartyLeader);
		void ClientReservationResponse(EPartyReservationResult ReservationResponse);
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineSubsystemUtils.TestBeaconClient
	 * Size -> 0x0000 (FullSize[0x04A0] - InheritedSize[0x04A0])
	 */
	class ATestBeaconClient : public AOnlineBeaconClient
	{
	public:
		void ServerPong();
		void ClientPing();
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineSubsystemUtils.TestBeaconHost
	 * Size -> 0x0000 (FullSize[0x0480] - InheritedSize[0x0480])
	 */
	class ATestBeaconHost : public AOnlineBeaconHostObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineSubsystemUtils.OnlineBlueprintCallProxyBase
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UOnlineBlueprintCallProxyBase : public UObject
	{
	public:
		void EmptyOnlineDelegate__DelegateSignature();
		void Activate();
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineSubsystemUtils.AchievementQueryCallbackProxy
	 * Size -> 0x0030 (FullSize[0x0058] - InheritedSize[0x0028])
	 */
	class UAchievementQueryCallbackProxy : public UOnlineBlueprintCallProxyBase
	{
	public:
		class FScriptMulticastDelegate                             OnSuccess;                                               // 0x0028(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable
		class FScriptMulticastDelegate                             OnFailure;                                               // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable
		unsigned char                                              UnknownData_NP5S[0x10];                                  // 0x0048(0x0010) MISSED OFFSET (PADDING)

	public:
		class UAchievementQueryCallbackProxy* STATIC_CacheAchievements(class APlayerController* PlayerController);
		class UAchievementQueryCallbackProxy* STATIC_CacheAchievementDescriptions(class APlayerController* PlayerController);
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineSubsystemUtils.AchievementWriteCallbackProxy
	 * Size -> 0x0048 (FullSize[0x0070] - InheritedSize[0x0028])
	 */
	class UAchievementWriteCallbackProxy : public UOnlineBlueprintCallProxyBase
	{
	public:
		class FScriptMulticastDelegate                             OnSuccess;                                               // 0x0028(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable
		class FScriptMulticastDelegate                             OnFailure;                                               // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable
		unsigned char                                              UnknownData_7IEO[0x28];                                  // 0x0048(0x0028) MISSED OFFSET (PADDING)

	public:
		class UAchievementWriteCallbackProxy* STATIC_WriteAchievementProgress(class APlayerController* PlayerController, const class FName& AchievementName, float Progress, int32_t UserTag);
		void AchievementWriteDelegate__DelegateSignature(const class FName& WrittenAchievementName, float WrittenProgress, int32_t WrittenUserTag);
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineSubsystemUtils.ConnectionCallbackProxy
	 * Size -> 0x0030 (FullSize[0x0058] - InheritedSize[0x0028])
	 */
	class UConnectionCallbackProxy : public UOnlineBlueprintCallProxyBase
	{
	public:
		class FScriptMulticastDelegate                             OnSuccess;                                               // 0x0028(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable
		class FScriptMulticastDelegate                             OnFailure;                                               // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable
		unsigned char                                              UnknownData_8BC7[0x10];                                  // 0x0048(0x0010) MISSED OFFSET (PADDING)

	public:
		void OnlineConnectionResult__DelegateSignature(int32_t ErrorCode);
		class UConnectionCallbackProxy* STATIC_ConnectToService(class APlayerController* PlayerController);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
