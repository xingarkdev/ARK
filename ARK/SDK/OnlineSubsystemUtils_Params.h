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
	 * Function OnlineSubsystemUtils.AchievementBlueprintLibrary.GetCachedAchievementProgress
	 */
	struct UAchievementBlueprintLibrary_GetCachedAchievementProgress_Params
	{
	public:
		class APlayerController*                                   PlayerController;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FName                                                AchievementID;                                           // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bFoundID;                                                // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_SQTJ[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      Progress;                                                // 0x0014(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function OnlineSubsystemUtils.AchievementBlueprintLibrary.GetCachedAchievementDescription
	 */
	struct UAchievementBlueprintLibrary_GetCachedAchievementDescription_Params
	{
	public:
		class APlayerController*                                   PlayerController;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FName                                                AchievementID;                                           // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bFoundID;                                                // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_RBVN[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FText                                                Title;                                                   // 0x0018(0x0018)  (Parm, OutParm)
		class FText                                                LockedDescription;                                       // 0x0040(0x0018)  (Parm, OutParm)
		class FText                                                UnlockedDescription;                                     // 0x0068(0x0018)  (Parm, OutParm)
		bool                                                       bHidden;                                                 // 0x0090(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function OnlineSubsystemUtils.InAppPurchaseCallbackProxy.InAppPurchaseResult__DelegateSignature
	 */
	struct UInAppPurchaseCallbackProxy_InAppPurchaseResult__DelegateSignature_Params
	{
	public:
		EInAppPurchaseState                                        CompletionStatus;                                        // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_0G9G[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FInAppPurchaseProductInfo                           InAppPurchaseInformation;                                // 0x0008(0x0040)  (ConstParm, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function OnlineSubsystemUtils.InAppPurchaseCallbackProxy.CreateProxyObjectForInAppPurchase
	 */
	struct UInAppPurchaseCallbackProxy_CreateProxyObjectForInAppPurchase_Params
	{
	public:
		class APlayerController*                                   PlayerController;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FString                                              ProductIdentifier;                                       // 0x0008(0x0010)  (Parm, ZeroConstructor)
		class UInAppPurchaseCallbackProxy*                         ReturnValue;                                             // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function OnlineSubsystemUtils.InAppPurchaseQueryCallbackProxy.InAppPurchaseQueryResult__DelegateSignature
	 */
	struct UInAppPurchaseQueryCallbackProxy_InAppPurchaseQueryResult__DelegateSignature_Params
	{
	public:
		TArray<struct FInAppPurchaseProductInfo>                   InAppPurchaseInformation;                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	};

	/**
	 * Function OnlineSubsystemUtils.InAppPurchaseQueryCallbackProxy.CreateProxyObjectForInAppPurchaseQuery
	 */
	struct UInAppPurchaseQueryCallbackProxy_CreateProxyObjectForInAppPurchaseQuery_Params
	{
	public:
		class APlayerController*                                   PlayerController;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		TArray<class FString>                                      ProductIdentifiers;                                      // 0x0008(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
		class UInAppPurchaseQueryCallbackProxy*                    ReturnValue;                                             // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function OnlineSubsystemUtils.LeaderboardBlueprintLibrary.WriteLeaderboardInteger
	 */
	struct ULeaderboardBlueprintLibrary_WriteLeaderboardInteger_Params
	{
	public:
		class APlayerController*                                   PlayerController;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FName                                                StatName;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    StatValue;                                               // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0014(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function OnlineSubsystemUtils.LeaderboardFlushCallbackProxy.OnLeaderboardFlushed__DelegateSignature
	 */
	struct ULeaderboardFlushCallbackProxy_OnLeaderboardFlushed__DelegateSignature_Params
	{
	public:
		class FName                                                SessionName;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function OnlineSubsystemUtils.LeaderboardFlushCallbackProxy.CreateProxyObjectForFlush
	 */
	struct ULeaderboardFlushCallbackProxy_CreateProxyObjectForFlush_Params
	{
	public:
		class APlayerController*                                   PlayerController;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FName                                                SessionName;                                             // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class ULeaderboardFlushCallbackProxy*                      ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function OnlineSubsystemUtils.LeaderboardQueryCallbackProxy.LeaderboardQueryResult__DelegateSignature
	 */
	struct ULeaderboardQueryCallbackProxy_LeaderboardQueryResult__DelegateSignature_Params
	{
	public:
		int32_t                                                    LeaderboardValue;                                        // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function OnlineSubsystemUtils.LeaderboardQueryCallbackProxy.CreateProxyObjectForIntQuery
	 */
	struct ULeaderboardQueryCallbackProxy_CreateProxyObjectForIntQuery_Params
	{
	public:
		class APlayerController*                                   PlayerController;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FName                                                StatName;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class ULeaderboardQueryCallbackProxy*                      ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function OnlineSubsystemUtils.OnlineBeaconClient.ClientOnConnected
	 */
	struct AOnlineBeaconClient_ClientOnConnected_Params
	{	};

	/**
	 * Function OnlineSubsystemUtils.PartyBeaconClient.ServerReservationRequest
	 */
	struct APartyBeaconClient_ServerReservationRequest_Params
	{
	public:
		class FString                                              SessionId;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor)
		struct FPartyReservation                                   Reservation;                                             // 0x0010(0x0028)  (Parm)
	};

	/**
	 * Function OnlineSubsystemUtils.PartyBeaconClient.ServerCancelReservationRequest
	 */
	struct APartyBeaconClient_ServerCancelReservationRequest_Params
	{
	public:
		struct FUniqueNetIdRepl                                    PartyLeader;                                             // 0x0000(0x0010)  (Parm)
	};

	/**
	 * Function OnlineSubsystemUtils.PartyBeaconClient.ClientReservationResponse
	 */
	struct APartyBeaconClient_ClientReservationResponse_Params
	{
	public:
		EPartyReservationResult                                    ReservationResponse;                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function OnlineSubsystemUtils.TestBeaconClient.ServerPong
	 */
	struct ATestBeaconClient_ServerPong_Params
	{	};

	/**
	 * Function OnlineSubsystemUtils.TestBeaconClient.ClientPing
	 */
	struct ATestBeaconClient_ClientPing_Params
	{	};

	/**
	 * Function OnlineSubsystemUtils.OnlineBlueprintCallProxyBase.EmptyOnlineDelegate__DelegateSignature
	 */
	struct UOnlineBlueprintCallProxyBase_EmptyOnlineDelegate__DelegateSignature_Params
	{	};

	/**
	 * Function OnlineSubsystemUtils.OnlineBlueprintCallProxyBase.Activate
	 */
	struct UOnlineBlueprintCallProxyBase_Activate_Params
	{	};

	/**
	 * Function OnlineSubsystemUtils.AchievementQueryCallbackProxy.CacheAchievements
	 */
	struct UAchievementQueryCallbackProxy_CacheAchievements_Params
	{
	public:
		class APlayerController*                                   PlayerController;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UAchievementQueryCallbackProxy*                      ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function OnlineSubsystemUtils.AchievementQueryCallbackProxy.CacheAchievementDescriptions
	 */
	struct UAchievementQueryCallbackProxy_CacheAchievementDescriptions_Params
	{
	public:
		class APlayerController*                                   PlayerController;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UAchievementQueryCallbackProxy*                      ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function OnlineSubsystemUtils.AchievementWriteCallbackProxy.WriteAchievementProgress
	 */
	struct UAchievementWriteCallbackProxy_WriteAchievementProgress_Params
	{
	public:
		class APlayerController*                                   PlayerController;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FName                                                AchievementName;                                         // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Progress;                                                // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    UserTag;                                                 // 0x0014(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UAchievementWriteCallbackProxy*                      ReturnValue;                                             // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function OnlineSubsystemUtils.AchievementWriteCallbackProxy.AchievementWriteDelegate__DelegateSignature
	 */
	struct UAchievementWriteCallbackProxy_AchievementWriteDelegate__DelegateSignature_Params
	{
	public:
		class FName                                                WrittenAchievementName;                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      WrittenProgress;                                         // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    WrittenUserTag;                                          // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function OnlineSubsystemUtils.ConnectionCallbackProxy.OnlineConnectionResult__DelegateSignature
	 */
	struct UConnectionCallbackProxy_OnlineConnectionResult__DelegateSignature_Params
	{
	public:
		int32_t                                                    ErrorCode;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function OnlineSubsystemUtils.ConnectionCallbackProxy.ConnectToService
	 */
	struct UConnectionCallbackProxy_ConnectToService_Params
	{
	public:
		class APlayerController*                                   PlayerController;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UConnectionCallbackProxy*                            ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
