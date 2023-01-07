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
	 * Enum ShooterGame.EMissionState
	 */
	enum class EMissionState : uint8_t
	{
		ServerSetup = 0,
		Activated   = 1,
		Suspended   = 2,
		Deactivated = 3,
		MAX         = 4
	};

	/**
	 * Enum ShooterGame.EMissionTimerMode
	 */
	enum class EMissionTimerMode : uint8_t
	{
		HideTimer                = 0,
		ShowTimeRemaining        = 1,
		ShowTimeElapsed          = 2,
		UseBPGetMissionTimerText = 3,
		MAX                      = 4
	};

	/**
	 * Enum ShooterGame.ESpawnPattern
	 */
	enum class ESpawnPattern : uint8_t
	{
		Circle = 0,
		Grid   = 1,
		Random = 2,
		MAX    = 3
	};

	/**
	 * Enum ShooterGame.EMissionRelatedPropertyUsage
	 */
	enum class EMissionRelatedPropertyUsage : uint8_t
	{
		Prefix      = 0,
		Suffix      = 1,
		Description = 2,
		MAX         = 3
	};

	/**
	 * Enum ShooterGame.EMissionRelatedPropertyType
	 */
	enum class EMissionRelatedPropertyType : uint8_t
	{
		Name_PropertyType    = 0,
		String_PropertyType  = 1,
		Boolean_PropertyType = 2,
		Integer_PropertyType = 3,
		Float_PropertyType   = 4,
		Double_PropertyType  = 5,
		MAX                  = 6
	};

	/**
	 * Enum ShooterGame.ESTOFNotificationType
	 */
	enum class ESTOFNotificationType : uint8_t
	{
		Death           = 0,
		TribeEliminated = 1,
		MatchVictory    = 2,
		MatchDraw       = 3,
		MAX             = 4,
		MAX01           = 5
	};

	/**
	 * Enum ShooterGame.EPrimalARKTributeDataType
	 */
	enum class EPrimalARKTributeDataType : uint8_t
	{
		Items         = 0,
		TamedDinos    = 1,
		CharacterData = 2,
		MAX           = 3,
		MAX01         = 4
	};

	/**
	 * Enum ShooterGame.EPrimalCharacterStatusValue
	 */
	enum class EPrimalCharacterStatusValue : uint8_t
	{
		Health                  = 0,
		Stamina                 = 1,
		Torpidity               = 2,
		Oxygen                  = 3,
		Food                    = 4,
		Water                   = 5,
		Temperature             = 6,
		Weight                  = 7,
		MeleeDamageMultiplier   = 8,
		SpeedMultiplier         = 9,
		TemperatureFortitude    = 10,
		CraftingSpeedMultiplier = 11,
		MAX                     = 12,
		MAX01                   = 13
	};

	/**
	 * Enum ShooterGame.EBoolExecResult
	 */
	enum class EBoolExecResult : uint8_t
	{
		Success = 0,
		Failed  = 1,
		MAX     = 2
	};

	/**
	 * Enum ShooterGame.ECameraStyle
	 */
	enum class ECameraStyle : uint8_t
	{
		Default     = 0,
		FirstPerson = 1,
		ThirdPerson = 2,
		FreeCam     = 3,
		Orbit       = 4,
		Spectator   = 5,
		MAX         = 6
	};

	/**
	 * Enum ShooterGame.ETargetingTeamBehavior
	 */
	enum class ETargetingTeamBehavior : uint8_t
	{
		ExactMatch              = 0,
		FriendlyWith            = 1,
		PrioritizeButIncludeAny = 2,
		MAX                     = 3
	};

	/**
	 * Enum ShooterGame.EChatMessageType
	 */
	enum class EChatMessageType : uint8_t
	{
		MyMessage            = 0,
		SameTeamMessage      = 1,
		DifferentTeamMessage = 2,
		SystemWideMessage    = 3,
		SameAllianceMessage  = 4,
		MAX                  = 5,
		MAX01                = 6
	};

	/**
	 * Enum ShooterGame.EChatType
	 */
	enum class EChatType : uint8_t
	{
		GlobalChat      = 0,
		ProximityChat   = 1,
		RadioChat       = 2,
		GlobalTribeChat = 3,
		AllianceChat    = 4,
		MAX             = 5,
		MAX01           = 6
	};

	/**
	 * Enum ShooterGame.EChatSendMode
	 */
	enum class EChatSendMode : uint8_t
	{
		GlobalChat      = 0,
		GlobalTribeChat = 1,
		LocalChat       = 2,
		AllianceChat    = 3,
		MAX             = 4,
		MAX01           = 5
	};

	/**
	 * Enum ShooterGame.EShooterPhysMaterialType
	 */
	enum class EShooterPhysMaterialType : uint8_t
	{
		Unknown    = 0,
		Concrete   = 1,
		Dirt       = 2,
		Water      = 3,
		Metal      = 4,
		Wood       = 5,
		Grass      = 6,
		Glass      = 7,
		Flesh      = 8,
		Leaves     = 9,
		Rock       = 10,
		Sand       = 11,
		Snow       = 12,
		Corruption = 13,
		Lava       = 14,
		Acid       = 15,
		MAX        = 16,
		MAX01      = 17
	};

	/**
	 * Enum ShooterGame.EPlayerActionIndex
	 */
	enum class EPlayerActionIndex : uint8_t
	{
		None                     = 0,
		WhistleFollow            = 1,
		WhistleFollowOne         = 2,
		WhistleStop              = 3,
		WhistleStopOne           = 4,
		WhistleAggressive        = 5,
		WhistleNeutral           = 6,
		WhistlePassive           = 7,
		WhistleAttackTarget      = 8,
		WhistleLandFlyerOne      = 9,
		ShowInventory            = 10,
		ShowCraftables           = 11,
		ShowTribeManager         = 12,
		Poop                     = 13,
		UnHideCompanion          = 14,
		ShowEmoteSelection       = 15,
		Emote_HatSwitch          = 16,
		Emote_Salute             = 17,
		Emote_Sorry              = 18,
		Emote_Thank              = 19,
		Emote_Wave               = 20,
		Emote_Laugh              = 21,
		Emote_Yes                = 22,
		Emote_No                 = 23,
		Emote_Taunt              = 24,
		Emote_Cheer              = 25,
		Emote_FriendlyLowerHands = 26,
		Emote_MAX                = 27,
		MAX                      = 28
	};

	/**
	 * Enum ShooterGame.EMissionAlertType
	 */
	enum class EMissionAlertType : uint8_t
	{
		Positive = 0,
		Neutral  = 1,
		Negative = 2,
		MAX      = 3
	};

	/**
	 * Enum ShooterGame.EPhaseRequirementWidgetVisualState
	 */
	enum class EPhaseRequirementWidgetVisualState : uint8_t
	{
		Neutral  = 0,
		Positive = 1,
		Negative = 2,
		Custom   = 3,
		MAX      = 4
	};

	/**
	 * Enum ShooterGame.ELootItemType
	 */
	enum class ELootItemType : uint8_t
	{
		None             = 0,
		Element          = 1,
		Hexagons         = 2,
		ResourceCommon   = 3,
		ResourceUncommon = 4,
		ResourceRare     = 5,
		ArmorTier1       = 6,
		ArmorTier2       = 7,
		ArmorTier3       = 8,
		ArmorTek         = 9,
		WeaponTier1      = 10,
		WeaponTier2      = 11,
		WeaponTier3      = 12,
		WeaponTek        = 13,
		AmmoTier1        = 14,
		AmmoTier2        = 15,
		AmmoTier3        = 16,
		Saddle           = 17,
		MAX              = 18
	};

	/**
	 * Enum ShooterGame.ESimpleCurve
	 */
	enum class ESimpleCurve : uint8_t
	{
		Linear       = 0,
		Pow0         = 1,
		Pow1         = 2,
		Pow101       = 3,
		Pow2         = 4,
		Pow201       = 5,
		Pow3         = 6,
		Pow301       = 7,
		PowCos0      = 8,
		PowCos1      = 9,
		PowCos101    = 10,
		PowCos2      = 11,
		PowCos201    = 12,
		PowCos3      = 13,
		PowCos301    = 14,
		PowSin0      = 15,
		PowSin1      = 16,
		PowSin101    = 17,
		PowSin2      = 18,
		PowSin201    = 19,
		PowSin3      = 20,
		PowSin301    = 21,
		PowMinCos0   = 22,
		PowMinCos1   = 23,
		PowMinCos101 = 24,
		PowMinCos2   = 25,
		PowMinCos201 = 26,
		PowMinCos3   = 27,
		PowMinCos301 = 28,
		PowMax0      = 29,
		PowMax1      = 30,
		PowMax101    = 31,
		PowMax2      = 32,
		PowMax201    = 33,
		PowMax3      = 34,
		PowMax301    = 35,
		MAX          = 36
	};

	/**
	 * Enum ShooterGame.EHUDElementType
	 */
	enum class EHUDElementType : uint8_t
	{
		Text        = 0,
		ProgressBar = 1,
		Image       = 2,
		MAX         = 3
	};

	/**
	 * Enum ShooterGame.EHUDElementAnchorMode
	 */
	enum class EHUDElementAnchorMode : uint8_t
	{
		Specified     = 0,
		QuickbarLeft  = 1,
		QuickbarRight = 2,
		QuickbarTop   = 3,
		MAX           = 4
	};

	/**
	 * Enum ShooterGame.EStencilAlliance
	 */
	enum class EStencilAlliance : uint8_t
	{
		None       = 0,
		Friendly   = 1,
		NPC        = 2,
		NPCFleeing = 3,
		Hostile    = 4,
		Ally       = 5,
		Element    = 6,
		MAX        = 7
	};

	/**
	 * Enum ShooterGame.EHUDElementHorizontalAlignment
	 */
	enum class EHUDElementHorizontalAlignment : uint8_t
	{
		Center = 0,
		Left   = 1,
		Right  = 2,
		MAX    = 3
	};

	/**
	 * Enum ShooterGame.EHUDElementVerticalAlignment
	 */
	enum class EHUDElementVerticalAlignment : uint8_t
	{
		Center = 0,
		Top    = 1,
		Bottom = 2,
		MAX    = 3
	};

	/**
	 * Enum ShooterGame.ELeaderboardColumnName
	 */
	enum class ELeaderboardColumnName : uint8_t
	{
		MissionTag   = 0,
		PlayerNetId  = 1,
		TribeId      = 2,
		TimestampUtc = 3,
		FloatValue   = 4,
		IntValue     = 5,
		NameValue    = 6,
		StringValue  = 7,
		MAX          = 8
	};

	/**
	 * Enum ShooterGame.ELeaderboardGroupByMode
	 */
	enum class ELeaderboardGroupByMode : uint8_t
	{
		None    = 0,
		First   = 1,
		Min     = 2,
		Max     = 3,
		Sum     = 4,
		Count   = 5,
		Average = 6,
		MAX     = 7
	};

	/**
	 * Enum ShooterGame.ELeaderboardOrdering
	 */
	enum class ELeaderboardOrdering : uint8_t
	{
		Ascending  = 0,
		Descending = 1,
		MAX        = 2
	};

	/**
	 * Enum ShooterGame.EMassTeleportState
	 */
	enum class EMassTeleportState : uint8_t
	{
		INITIATED         = 0,
		TRIGGERED_SUCCESS = 1,
		TRIGGERED_FAILED  = 2,
		COMPLETED         = 3,
		CANCELLED         = 4,
		MAX               = 5
	};

	/**
	 * Enum ShooterGame.PrimalGameData.EPrimalCharacterStatusState
	 */
	enum class EPrimalCharacterStatusState : uint8_t
	{
		Dead         = 0,
		Winded       = 1,
		Starvation   = 2,
		Dehydration  = 3,
		Suffocation  = 4,
		Encumbered   = 5,
		Hypothermia  = 6,
		Hyperthermia = 7,
		Injured      = 8,
		KnockedOut   = 9,
		Sleeping     = 10,
		Cold         = 11,
		Hot          = 12,
		Crafting     = 13,
		MAX          = 14,
		MAX01        = 15
	};

	/**
	 * Enum ShooterGame.PrimalGameData.EPrimalConsumableType
	 */
	enum class EPrimalConsumableType : uint8_t
	{
		Food     = 0,
		Water    = 1,
		Medicine = 2,
		Other    = 3,
		MAX      = 4,
		MAX01    = 5
	};

	/**
	 * Enum ShooterGame.PrimalGameData.ELevelExperienceRampType
	 */
	enum class ELevelExperienceRampType : uint8_t
	{
		Player     = 0,
		DinoEasy   = 1,
		DinoMedium = 2,
		DinoHard   = 3,
		MAX        = 4,
		MAX01      = 5
	};

	/**
	 * Enum ShooterGame.PrimalGameData.EPrimalItemType
	 */
	enum class EPrimalItemType : uint8_t
	{
		MiscConsumable   = 0,
		Equipment        = 1,
		Weapon           = 2,
		Ammo             = 3,
		Structure        = 4,
		Resource         = 5,
		Skin             = 6,
		WeaponAttachment = 7,
		Artifact         = 8,
		MAX              = 9,
		MAX01            = 10
	};

	/**
	 * Enum ShooterGame.PrimalGameData.EPrimalCharacterInputType
	 */
	enum class EPrimalCharacterInputType : uint8_t
	{
		PrimaryFire       = 0,
		Targeting         = 1,
		AltFire           = 2,
		SwitchWeapon      = 3,
		Reload            = 4,
		Crouch            = 5,
		Prone             = 6,
		CrouchProneToggle = 7,
		SwitchMap         = 8,
		DinoAttack        = 9,
		MAX               = 10
	};

	/**
	 * Enum ShooterGame.PrimalGameData.EPrimalItemStat
	 */
	enum class EPrimalItemStat : uint8_t
	{
		GenericQuality         = 0,
		Armor                  = 1,
		MaxDurability          = 2,
		WeaponDamagePercent    = 3,
		WeaponClipAmmo         = 4,
		HypothermalInsulation  = 5,
		Weight                 = 6,
		HyperthermalInsulation = 7,
		MAX                    = 8,
		MAX01                  = 9
	};

	/**
	 * Enum ShooterGame.PrimalGameData.EDinoTamedOrder
	 */
	enum class EDinoTamedOrder : uint8_t
	{
		SetAggressionPassive      = 0,
		SetAggressionNeutral      = 1,
		SetAggressionAggressive   = 2,
		SetAggressionAttackTarget = 3,
		ToggleFollowMe            = 4,
		FollowMe                  = 5,
		StopFollowing             = 6,
		CycleFollowDistance       = 7,
		SetAggressionPassiveFlee  = 8,
		LandingToMe               = 9,
		MAX                       = 10,
		MAX01                     = 11
	};

	/**
	 * Enum ShooterGame.PrimalGameData.EXPType
	 */
	enum class EXPType : uint8_t
	{
		XP_GENERIC   = 0,
		XP_KILL      = 1,
		XP_HARVEST   = 2,
		XP_CRAFT     = 3,
		XP_SPECIAL   = 4,
		XP_ALPHAKILL = 5,
		MAX          = 6,
		MAX01        = 7
	};

	/**
	 * Enum ShooterGame.PrimalGameData.ETribeGroupPermission
	 */
	enum class ETribeGroupPermission : uint8_t
	{
		STRUCTUREACTIVATE             = 0,
		INVENTORYACCESS               = 1,
		PET_ORDER                     = 2,
		PET_RIDE                      = 3,
		GENERAL_STRUCTUREDEMOLISH     = 4,
		GENERAL_STRUCTUREATTACHMENT   = 5,
		GENERAL_BUILDSTRUCTUREINRANGE = 6,
		INVITEMEMBER                  = 7,
		PROMOTEMEMBER                 = 8,
		DEMOTEMEMBER                  = 9,
		BANISHMEMBER                  = 10,
		PET_UNCLAIM                   = 11,
		TELEPORT_MEMBERS              = 12,
		TELEPORT_DINOS                = 13,
		MAX                           = 14
	};

	/**
	 * Enum ShooterGame.PrimalGameData.EBoneModifierType
	 */
	enum class EBoneModifierType : uint8_t
	{
		HEAD          = 0,
		NECK          = 1,
		NECKLENGTH    = 2,
		CHEST         = 3,
		SHOULDERS     = 4,
		ARMLENGTH     = 5,
		UPPERARM      = 6,
		LOWERARM      = 7,
		HAND          = 8,
		LEGLENGTH     = 9,
		UPPERLEG      = 10,
		LOWERLEG      = 11,
		FOOT          = 12,
		HIP           = 13,
		TORSO         = 14,
		UPPERFACESIZE = 15,
		LOWERFACESIZE = 16,
		TORSODEPTH    = 17,
		HEADHEIGHT    = 18,
		HEADWIDTH     = 19,
		HEADDEPTH     = 20,
		TORSOHEIGHT   = 21,
		MAX           = 22,
		MAX01         = 23
	};

	/**
	 * Enum ShooterGame.PrimalGameData.EEngramGroup
	 */
	enum class EEngramGroup : uint8_t
	{
		UnusedSpacer      = 0,
		UnusedSpacer01    = 1,
		ARK_PRIME         = 2,
		UnusedSpacer02    = 3,
		ARK_SCORCHEDEARTH = 4,
		UnusedSpacer03    = 5,
		UnusedSpacer04    = 6,
		UnusedSpacer05    = 7,
		ARK_TEK           = 8,
		UnusedSpacer06    = 9,
		UnusedSpacer07    = 10,
		UnusedSpacer08    = 11,
		UnusedSpacer09    = 12,
		UnusedSpacer10    = 13,
		UnusedSpacer11    = 14,
		UnusedSpacer12    = 15,
		ARK_UNLEARNED     = 16,
		UnusedSpacer13    = 17,
		UnusedSpacer14    = 18,
		UnusedSpacer15    = 19,
		UnusedSpacer16    = 20,
		UnusedSpacer17    = 21,
		UnusedSpacer18    = 22,
		UnusedSpacer19    = 23,
		UnusedSpacer20    = 24,
		UnusedSpacer21    = 25,
		UnusedSpacer22    = 26,
		UnusedSpacer23    = 27,
		UnusedSpacer24    = 28,
		UnusedSpacer25    = 29,
		UnusedSpacer26    = 30,
		UnusedSpacer27    = 31,
		ARK_ABERRATION    = 32,
		UnusedSpacer28    = 33,
		UnusedSpacer29    = 34,
		UnusedSpacer30    = 35,
		UnusedSpacer31    = 36,
		UnusedSpacer32    = 37,
		UnusedSpacer33    = 38,
		UnusedSpacer34    = 39,
		UnusedSpacer35    = 40,
		UnusedSpacer36    = 41,
		UnusedSpacer37    = 42,
		UnusedSpacer38    = 43,
		UnusedSpacer39    = 44,
		UnusedSpacer40    = 45,
		UnusedSpacer41    = 46,
		UnusedSpacer42    = 47,
		UnusedSpacer43    = 48,
		UnusedSpacer44    = 49,
		UnusedSpacer45    = 50,
		UnusedSpacer46    = 51,
		UnusedSpacer47    = 52,
		UnusedSpacer48    = 53,
		UnusedSpacer49    = 54,
		UnusedSpacer50    = 55,
		UnusedSpacer51    = 56,
		UnusedSpacer52    = 57,
		UnusedSpacer53    = 58,
		UnusedSpacer54    = 59,
		UnusedSpacer55    = 60,
		UnusedSpacer56    = 61,
		UnusedSpacer57    = 62,
		UnusedSpacer58    = 63,
		ARK_EXTINCTION    = 64,
		UnusedSpacer59    = 65,
		UnusedSpacer60    = 66,
		UnusedSpacer61    = 67,
		UnusedSpacer62    = 68,
		UnusedSpacer63    = 69,
		UnusedSpacer64    = 70,
		UnusedSpacer65    = 71,
		UnusedSpacer66    = 72,
		UnusedSpacer67    = 73,
		UnusedSpacer68    = 74,
		UnusedSpacer69    = 75,
		UnusedSpacer70    = 76,
		UnusedSpacer71    = 77,
		UnusedSpacer72    = 78,
		UnusedSpacer73    = 79,
		UnusedSpacer74    = 80,
		UnusedSpacer75    = 81,
		UnusedSpacer76    = 82,
		UnusedSpacer77    = 83,
		UnusedSpacer78    = 84,
		UnusedSpacer79    = 85,
		UnusedSpacer80    = 86,
		UnusedSpacer81    = 87,
		UnusedSpacer82    = 88,
		UnusedSpacer83    = 89,
		UnusedSpacer84    = 90,
		UnusedSpacer85    = 91,
		UnusedSpacer86    = 92,
		UnusedSpacer87    = 93,
		UnusedSpacer88    = 94,
		UnusedSpacer89    = 95,
		UnusedSpacer90    = 96,
		UnusedSpacer91    = 97,
		UnusedSpacer92    = 98,
		UnusedSpacer93    = 99,
		UnusedSpacer94    = 100,
		UnusedSpacer95    = 101,
		UnusedSpacer96    = 102,
		UnusedSpacer97    = 103,
		UnusedSpacer98    = 104,
		UnusedSpacer99    = 105,
		UnusedSpacer100   = 106,
		UnusedSpacer101   = 107,
		UnusedSpacer102   = 108,
		UnusedSpacer103   = 109,
		UnusedSpacer104   = 110,
		UnusedSpacer105   = 111,
		UnusedSpacer106   = 112,
		UnusedSpacer107   = 113,
		UnusedSpacer108   = 114,
		UnusedSpacer109   = 115,
		UnusedSpacer110   = 116,
		UnusedSpacer111   = 117,
		UnusedSpacer112   = 118,
		UnusedSpacer113   = 119,
		UnusedSpacer114   = 120,
		UnusedSpacer115   = 121,
		UnusedSpacer116   = 122,
		UnusedSpacer117   = 123,
		UnusedSpacer118   = 124,
		UnusedSpacer119   = 125,
		UnusedSpacer120   = 126,
		UnusedSpacer121   = 127,
		ARK_GENESIS       = 128,
		ARK_GEN2          = 129,
		MAX               = 130,
		MAX01             = 131
	};

	/**
	 * Enum ShooterGame.PrimalInventoryComponent.EPrimalItemMessage
	 */
	enum class EPrimalItemMessage : uint8_t
	{
		Broken   = 0,
		Repaired = 1,
		MAX      = 2,
		MAX01    = 3
	};

	/**
	 * Enum ShooterGame.ShooterPlayerController.EPrimalStatsValueTypes
	 */
	enum class EPrimalStatsValueTypes : uint8_t
	{
		TotalShots         = 0,
		Misses             = 1,
		HitsStructure      = 2,
		HitsDinoBody       = 3,
		HitsDinoCritical   = 4,
		HitsPlayerBody     = 5,
		HitsPlayerCritical = 6,
		MAX                = 7,
		MAX01              = 8
	};

	/**
	 * Enum ShooterGame.BiomeZoneVolume.EBiomeZone
	 */
	enum class EBiomeZone : uint8_t
	{
		None                  = 0,
		Beach                 = 1,
		Canyon                = 2,
		River                 = 3,
		Grassland             = 4,
		Swamp                 = 5,
		Jungle                = 6,
		RedwoodForest         = 7,
		Mountain              = 8,
		Snow                  = 9,
		Ocean                 = 10,
		Lava                  = 11,
		Surface               = 12,
		FertileChamber        = 13,
		BioluminescentChamber = 14,
		ElementChamber        = 15,
		Wasteland             = 16,
		MAX                   = 17
	};

	/**
	 * Enum ShooterGame.TerrainGenerator.EVoronoiBlendType
	 */
	enum class EVoronoiBlendType : uint8_t
	{
		Flat          = 0,
		Closest       = 1,
		SecondClosest = 2,
		Cellular      = 3,
		Organic       = 4,
		MAX           = 5
	};

	/**
	 * Enum ShooterGame.DataListEntryButton_PrimalFolder.FolderWidgetType
	 */
	enum class EFolderWidgetType : uint8_t
	{
		FolderWidgetTypeFWT_Back         = 0,
		FolderWidgetTypeFWT_Folder       = 1,
		FolderWidgetTypeFWT_CustomFolder = 2,
		FolderWidgetTypeFWT_MAX          = 3
	};

	/**
	 * Enum ShooterGame.FlockingBehavior.EBoidType
	 */
	enum class EBoidType : uint8_t
	{
		Follower  = 0,
		Leader    = 1,
		FreeAgent = 2,
		MAX       = 3
	};

	/**
	 * Enum ShooterGame.MissionMetaTagInfo.ENativeMissionMetaTag
	 */
	enum class ENativeMissionMetaTag : uint8_t
	{
		INVALID                = 0,
		GENESIS_VR_BOSS_UNLOCK = 1,
		ARCTIC_MISSION         = 2,
		BOG_MISSION            = 3,
		LUNAR_MISSION          = 4,
		OCEAN_MISSION          = 5,
		VOLCANIC_MISSION       = 6,
		NORMAL_DIFFICULTY      = 7,
		ALPHA_DIFFICULTY       = 8,
		BETA_DIFFICULTY        = 9,
		GAMMA_DIFFICULTY       = 10,
		MAX                    = 11,
		MAX01                  = 12
	};

	/**
	 * Enum ShooterGame.MissionDispatcher.EMissionDispatcherTriggerMode
	 */
	enum class EMissionDispatcherTriggerMode : uint8_t
	{
		AutoStartMission    = 0,
		Ignore              = 1,
		ActivateViaMultiUse = 2,
		MAX                 = 3
	};

	/**
	 * Enum ShooterGame.MissionType.EMissionDispatchMode
	 */
	enum class EMissionDispatchMode : uint8_t
	{
		StartAnywhere                  = 0,
		RequireNearbyMissionDispatcher = 1,
		RequireInsideMissionDispatcher = 2,
		UseBPStaticCanStartMission     = 3,
		RequireInsideDispatcherNoCheck = 4,
		MAX                            = 5
	};

	/**
	 * Enum ShooterGame.PrimalBuff_Companion.ECompanionState
	 */
	enum class ECompanionState : uint8_t
	{
		IDLE      = 0,
		FOCUSED   = 1,
		EVENT     = 2,
		MONOLOGUE = 3,
		ASLEEP    = 4,
		CUSTOM    = 5,
		MAX       = 6
	};

	/**
	 * Enum ShooterGame.PrimalDinoCharacter.EBabyCuddleType
	 */
	enum class EBabyCuddleType : uint8_t
	{
		PET   = 0,
		FOOD  = 1,
		WALK  = 2,
		MAX   = 3,
		MAX01 = 4
	};

	/**
	 * Enum ShooterGame.PrimalUI.ControlDirection
	 */
	enum class EControlDirection : uint8_t
	{
		None                 = 0,
		Up                   = 1,
		Down                 = 2,
		Left                 = 3,
		Right                = 4,
		ControlDirection_MAX = 5
	};

	/**
	 * Enum ShooterGame.PrimalUI.HighlightStartingPoint
	 */
	enum class EHighlightStartingPoint : uint8_t
	{
		TopLeft                    = 0,
		Center                     = 1,
		HighlightStartingPoint_MAX = 2
	};

	/**
	 * Enum ShooterGame.PrimalClimbingSettings.EClimbingAnimationType
	 */
	enum class EClimbingAnimationType : uint8_t
	{
		Up                   = 0,
		Down                 = 1,
		Right                = 2,
		Left                 = 3,
		MeleeUp              = 4,
		MeleeRight           = 5,
		MeleeLeft            = 6,
		FinishUp             = 7,
		FinishDown           = 8,
		HangingFwd           = 9,
		HangingMelee         = 10,
		HangingFinishUp      = 11,
		HangingFinishDown    = 12,
		JumpUp               = 13,
		JumpUpRight          = 14,
		JumpUpLeft           = 15,
		SlideDown            = 16,
		AttachUp             = 17,
		AttachDown           = 18,
		AttachHangingUp      = 19,
		AttachHangingDown    = 20,
		FlipLeft             = 21,
		FlipRight            = 22,
		FlipUp               = 23,
		FlipDown             = 24,
		TurnUp               = 25,
		TurnDown             = 26,
		TurnRight            = 27,
		TurnLeft             = 28,
		OpenInventory        = 29,
		OpenInventoryHanging = 30,
		QuakeFall            = 31,
		MAX                  = 32,
		MAX01                = 33
	};

	/**
	 * Enum ShooterGame.PrimalClimbingSettings.EClimbingType
	 */
	enum class EClimbingType : uint8_t
	{
		None       = 0,
		ClimbLook  = 1,
		ClimbInput = 2,
		Slide      = 3,
		MAX        = 4,
		MAX01      = 5
	};

	/**
	 * Enum ShooterGame.PrimalClimbingSettings.EClimbingMode
	 */
	enum class EClimbingMode : uint8_t
	{
		None       = 0,
		Attached   = 1,
		Finalizing = 2,
		MAX        = 3,
		MAX01      = 4
	};

	/**
	 * Enum ShooterGame.PrimalBuff_Grappled.EGrappleState
	 */
	enum class EGrappleState : uint8_t
	{
		GRAPPLE_Idle      = 0,
		GRAPPLE_Pulling   = 1,
		GRAPPLE_Releasing = 2,
		GRAPPLE_Custom    = 3,
		GRAPPLE_Max       = 4
	};

	/**
	 * Enum ShooterGame.PrimalStructureElevatorPlatform.EPrimalStructureElevatorState
	 */
	enum class EPrimalStructureElevatorState : uint8_t
	{
		PSLS_Down = 0,
		PSLS_Up   = 1,
		PSLS_MAX  = 2
	};

	/**
	 * Enum ShooterGame.PrimalWorldBuffData.EWorldBuffDifficultyType
	 */
	enum class EWorldBuffDifficultyType : uint8_t
	{
		GAMMA = 0,
		BETA  = 1,
		ALPHA = 2,
		OTHER = 3,
		MAX   = 4
	};

	/**
	 * Enum ShooterGame.PrimalWorldBuffData.EWorldBuffPropertyLocation
	 */
	enum class EWorldBuffPropertyLocation : uint8_t
	{
		GameMode  = 0,
		GameState = 1,
		MAX       = 2
	};

	/**
	 * Enum ShooterGame.VictoryCore.EEditorMessageLogLevel
	 */
	enum class EEditorMessageLogLevel : uint8_t
	{
		Error   = 0,
		Warning = 1,
		Info    = 2,
		Success = 3,
		MAX     = 4
	};

	/**
	 * Enum ShooterGame.VictoryCore.EServerOctreeGroup
	 */
	enum class EServerOctreeGroup : uint8_t
	{
		STASISCOMPONENTS                  = 0,
		PLAYERPAWNS                       = 1,
		DINOPAWNS                         = 2,
		PAWNS                             = 3,
		STRUCTURES                        = 4,
		TARGETABLEACTORS                  = 5,
		PLAYERS_CONNECTED                 = 6,
		SPATIALNETWORKEDACTORS            = 7,
		SPATIALNETWORKEDACTORS_DORMANT    = 8,
		ALL_SPATIAL                       = 9,
		THERMALSTRUCTURES                 = 10,
		STRUCTURES_CORE                   = 11,
		DINOPAWNS_TAMED                   = 12,
		PLAYERS_AND_TAMED_DINOS           = 13,
		PLAYERS_CONNECTED_AND_TAMED_DINOS = 14,
		DINOFOODCONTAINER                 = 15,
		GRENADES                          = 16,
		TREESAPTAPS                       = 17,
		LARGEUNSTASISRANGE                = 18,
		TRAPS                             = 19,
		MAX                               = 20,
		MAX01                             = 21
	};

	/**
	 * Enum ShooterGame.PrimalProjectileNetGun.ETraceType
	 */
	enum class ETraceType : uint8_t
	{
		TT_LineTrace = 0,
		TT_ArcTrace  = 1,
		TT_Max       = 2
	};

	/**
	 * Enum ShooterGame.StructuresPlus.EGlassTransparencyType
	 */
	enum class EGlassTransparencyType : uint8_t
	{
		TwoWay  = 0,
		OneWayA = 1,
		OneWayB = 2,
		Opaque  = 3,
		MAX     = 4
	};

	/**
	 * Enum ShooterGame.StructuresPlus.ESPMessageType
	 */
	enum class ESPMessageType : uint8_t
	{
		Default = 0,
		Error   = 1,
		Warning = 2,
		Helpful = 3,
		MAX     = 4
	};

	/**
	 * Enum ShooterGame.WaterVolumeWithFlow.EColorChannelTarget
	 */
	enum class EColorChannelTarget : uint8_t
	{
		Red   = 0,
		Green = 1,
		Blue  = 2,
		Alpha = 3,
		All   = 4,
		MAX   = 5
	};

	/**
	 * Enum ShooterGame.ContextMenuItem.UContextMenuItemSwitchMode
	 */
	enum class EUContextMenuItemSwitchMode : uint8_t
	{
		UContextMenuItemSwitchModeNone                           = 0,
		UContextMenuItemSwitchModeRadio                          = 1,
		UContextMenuItemSwitchModeCheckbox                       = 2,
		UContextMenuItemSwitchModeUContextMenuItemSwitchMode_MAX = 3
	};

	/**
	 * Enum ShooterGame.PrimalStructurePlacer.EPrimalStructurePlacerState
	 */
	enum class EPrimalStructurePlacerState : uint8_t
	{
		Default          = 0,
		FadeAway         = 1,
		PlacingStructure = 2,
		MAX              = 3
	};

	/**
	 * Enum ShooterGame.PrimalStructureItemContainer_CropPlot.ESeedCropPhase
	 */
	enum class ESeedCropPhase : uint8_t
	{
		Seedling   = 0,
		Midling    = 1,
		Growthling = 2,
		Fruiting   = 3,
		MAX        = 4,
		MAX01      = 5
	};

	/**
	 * Enum ShooterGame.UI_Inventory.EDropItemIconAction
	 */
	enum class EDropItemIconAction : uint8_t
	{
		DA_NoAction                = 0,
		DA_Equip                   = 1,
		DA_UnEquip                 = 2,
		DA_AddToSlot               = 3,
		DA_RemoveFromSlot          = 4,
		DA_ToRemoteInv             = 5,
		DA_FromRemoteInv           = 6,
		DA_RemoteEquip             = 7,
		DA_MergeItemStack          = 8,
		DA_SplitItemStack          = 9,
		DA_SwapItems               = 10,
		DA_UseWithItem             = 11,
		DA_UnEquipTransferToLocal  = 12,
		DA_RemoveItemSkin          = 13,
		DA_SplitItemStackOne       = 14,
		DA_RemoveWeaponAmmo        = 15,
		DA_FromRemoteInvToSlot     = 16,
		DA_ToRemoteInvFromSlot     = 17,
		DA_EquipLocalFromRemote    = 18,
		DA_EquipRemoteFromLocal    = 19,
		DA_UnequipRemote           = 20,
		DA_UnequipTransferToRemote = 21,
		DA_ToArkInv                = 22,
		DA_FromArkInv              = 23,
		MAX                        = 24,
		MAX01                      = 25
	};

	/**
	 * Enum ShooterGame.UI_MissionList.EDataDisplay
	 */
	enum class EDataDisplay : uint8_t
	{
		MISSION_INFO = 0,
		LEADERBOARDS = 1,
		MAX          = 2
	};

	/**
	 * Enum ShooterGame.UI_MissionList.EListDisplay
	 */
	enum class EListDisplay : uint8_t
	{
		MISSIONS = 0,
		EFFECTS  = 1,
		MAX      = 2
	};

	/**
	 * Enum ShooterGame.UI_Hub.EHubSubMenu
	 */
	enum class EHubSubMenu : uint8_t
	{
		Inventory       = 0,
		Engrams         = 1,
		TribeManager    = 2,
		TameGroups      = 3,
		TamingList      = 4,
		SurvivalProfile = 5,
		MissionList     = 6,
		MAX             = 7,
		MAX01           = 8
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct ShooterGame.PrimalGameData.PrimalCharacterStatusValueDefinition
	 * Size -> 0x0020
	 */
	struct FPrimalCharacterStatusValueDefinition
	{
	public:
		class UTexture2D*                                          StatusValueIcon;                                         // 0x0000(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class FString                                              StatusValueName;                                         // 0x0008(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		bool                                                       bLevelUpSetToMaxValue;                                   // 0x0018(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bDisplayHideCurrentValue;                                // 0x0019(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bDisplayAsPercent;                                       // 0x001A(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_TN8E[0x5];                                   // 0x001B(0x0005) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ShooterGame.PrimalGameData.PrimalCharacterStatusStateDefinition
	 * Size -> 0x0050
	 */
	struct FPrimalCharacterStatusStateDefinition
	{
	public:
		EPrimalCharacterStatusValue                                StatusValueType;                                         // 0x0000(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_4TR8[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    StatusValueThresholdIndex;                               // 0x0004(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UTexture2D*                                          StatusStateIcon;                                         // 0x0008(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class FString                                              StatusStateName;                                         // 0x0010(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		class FString                                              StatusStateDescription;                                  // 0x0020(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		struct FColor                                              StatusStateNameColor;                                    // 0x0030(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bUsed;                                                   // 0x0034(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bDisplayHUDMessage;                                      // 0x0035(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_NIZG[0x2];                                   // 0x0036(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              HUDMessage;                                              // 0x0038(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		struct FColor                                              HUDMessageColor;                                         // 0x0048(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    BuffType;                                                // 0x004C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct ShooterGame.PrimalGameData.PrimalItemStatDefinition
	 * Size -> 0x0018
	 */
	struct FPrimalItemStatDefinition
	{
	public:
		class UTexture2D*                                          ItemStatIcon;                                            // 0x0000(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class FString                                              ItemStatName;                                            // 0x0008(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
	};

	/**
	 * ScriptStruct ShooterGame.PrimalGameData.PrimalItemDefinition
	 * Size -> 0x0018
	 */
	struct FPrimalItemDefinition
	{
	public:
		class UTexture2D*                                          ItemTypeIcon;                                            // 0x0000(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class FString                                              ItemTypeName;                                            // 0x0008(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
	};

	/**
	 * ScriptStruct ShooterGame.PrimalGameData.PrimalEquipmentDefinition
	 * Size -> 0x0018
	 */
	struct FPrimalEquipmentDefinition
	{
	public:
		class UTexture2D*                                          EquipmentTypeIcon;                                       // 0x0000(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class FString                                              EquipmentTypeName;                                       // 0x0008(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
	};

	/**
	 * ScriptStruct ShooterGame.PrimalGameData.PrimalItemQuality
	 * Size -> 0x0030
	 */
	struct FPrimalItemQuality
	{
	public:
		struct FLinearColor                                        QualityColor;                                            // 0x0000(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class FString                                              QualityName;                                             // 0x0010(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		float                                                      QualityRandomMultiplierThreshold;                        // 0x0020(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      CraftingXPMultiplier;                                    // 0x0024(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      RepairingXPMultiplier;                                   // 0x0028(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      CraftingResourceRequirementsMultiplier;                  // 0x002C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct ShooterGame.PrimalGameData.StatusValueModifierDescription
	 * Size -> 0x0050
	 */
	struct FStatusValueModifierDescription
	{
	public:
		class UTexture2D*                                          ModifierIcon;                                            // 0x0000(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class FString                                              ModifierName;                                            // 0x0008(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		class FString                                              ModifierDescription;                                     // 0x0018(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		struct FColor                                              ModifierColor;                                           // 0x0028(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bDisplayHUDMessage;                                      // 0x002C(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_NIQ2[0x3];                                   // 0x002D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              HUDMessage;                                              // 0x0030(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		struct FColor                                              HUDMessageColor;                                         // 0x0040(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bPreventDrawingBuffDescription;                          // 0x0044(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_QHWV[0x3];                                   // 0x0045(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    BuffType;                                                // 0x0048(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_9KT4[0x4];                                   // 0x004C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ShooterGame.PrimalGameData.AppIDItem
	 * Size -> 0x0060
	 */
	struct FAppIDItem
	{
	public:
		class FString                                              AchievementID;                                           // 0x0000(0x0010) Edit, ZeroConstructor
		TArray<class FString>                                      AchievementIDs;                                          // 0x0010(0x0010) Edit, ZeroConstructor
		class FName                                                GiveItemIfEmoteNameUnlocked;                             // 0x0020(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		int32_t                                                    AppID;                                                   // 0x0028(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		int32_t                                                    PlayerBadgeGroup;                                        // 0x002C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bForceNewDefaultCosmetic;                                // 0x0030(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_GLPX[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FString>                                      PlayerIDStrings;                                         // 0x0038(0x0010) Edit, ZeroConstructor
		class UClass*                                              ItemClass;                                               // 0x0048(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		TArray<class UClass*>                                      ItemClasses;                                             // 0x0050(0x0010) Edit, ZeroConstructor
	};

	/**
	 * ScriptStruct ShooterGame.RangedValues
	 * Size -> 0x0008
	 */
	struct FRangedValues
	{
	public:
		int32_t                                                    Range;                                                   // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		int32_t                                                    Value;                                                   // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct ShooterGame.PrimalGameData.ColorDefinition
	 * Size -> 0x001C
	 */
	struct FColorDefinition
	{
	public:
		class FName                                                ColorName;                                               // 0x0000(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FLinearColor                                        ColorValue;                                              // 0x0008(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bHasOverridePriority;                                    // 0x0018(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_ZTIS[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ShooterGame.PrimalGameData.BoneModifierRange
	 * Size -> 0x003C
	 */
	struct FBoneModifierRange
	{
	public:
		class FName                                                BoneName;                                                // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector                                             MinScale;                                                // 0x0008(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector                                             MaxScale;                                                // 0x0014(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector                                             MinTranslation;                                          // 0x0020(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector                                             MaxTranslation;                                          // 0x002C(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       Recursive;                                               // 0x0038(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_M3N7[0x3];                                   // 0x0039(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ShooterGame.PrimalGameData.BoneModifierRangeArray
	 * Size -> 0x0020
	 */
	struct FBoneModifierRangeArray
	{
	public:
		bool                                                       bAffectsLegLength : 1;                                   // 0x0000(0x0001) BIT_FIELD Edit, NoDestructor
		bool                                                       bUseExtraMax : 1;                                        // 0x0000(0x0001) BIT_FIELD Edit, NoDestructor
		unsigned char                                              UnknownData_N01C[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MinLegLengthMultiplier;                                  // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      MaxLegLengthMultiplier;                                  // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_J4YO[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FBoneModifierRange>                          BoneArray;                                               // 0x0010(0x0010) Edit, ZeroConstructor
	};

	/**
	 * ScriptStruct ShooterGame.PrimalGameData.PlayerCharacterGenderDefinition
	 * Size -> 0x05F0
	 */
	struct FPlayerCharacterGenderDefinition
	{
	public:
		class FString                                              GenderString;                                            // 0x0000(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		class UClass*                                              CharacterBlueprint;                                      // 0x0010(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		TArray<struct FLinearColor>                                ColorSetBody;                                            // 0x0018(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		TArray<struct FLinearColor>                                ColorSetHair;                                            // 0x0028(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		TArray<struct FLinearColor>                                ColorSetEyes;                                            // 0x0038(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		class UMaterialInterface*                                  CharacterPreviewMaterial;                                // 0x0048(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		TArray<class FString>                                      DefaultCharacterNames;                                   // 0x0050(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		TArray<float>                                              DefaultCharacterNameWeights;                             // 0x0060(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		struct FBoneModifierRangeArray                             CharacterBoneModifierRanges[0x16];                       // 0x0070(0x02C0) Edit, DisableEditOnInstance
		struct FBoneModifierRangeArray                             ExtraCharacterBoneModifierMax[0x16];                     // 0x0330(0x02C0) Edit, DisableEditOnInstance
	};

	/**
	 * ScriptStruct ShooterGame.PrimalGameData.LevelExperienceRamp
	 * Size -> 0x0010
	 */
	struct FLevelExperienceRamp
	{
	public:
		TArray<float>                                              ExperiencePointsForLevel;                                // 0x0000(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
	};

	/**
	 * ScriptStruct ShooterGame.PrimalGameData.NamedTeamDefinition
	 * Size -> 0x0080
	 */
	struct FNamedTeamDefinition
	{
	public:
		class FName                                                TeamName;                                                // 0x0000(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bTargetingTeamExclusionList : 1;                         // 0x0008(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor
		bool                                                       bTargetingTeamInclusionList : 1;                         // 0x0008(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor
		bool                                                       bAllowTargetsOnOwnTeam : 1;                              // 0x0008(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor
		bool                                                       bIsCarnivore : 1;                                        // 0x0008(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor
		bool                                                       bTargetPlayersAndTamedOnly : 1;                          // 0x0008(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor
		bool                                                       bForceTargetPlayersAndTamed : 1;                         // 0x0008(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor
		bool                                                       bIgnoredByAllTeams : 1;                                  // 0x0008(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor
		unsigned char                                              UnknownData_UWWI[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FName>                                        TeamNameList;                                            // 0x0010(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		TArray<class FName>                                        TargetingMultiplierTeamNames;                            // 0x0020(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		TArray<class FName>                                        DontGiveDamageTeamList;                                  // 0x0030(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		TArray<class FName>                                        DontReceiveDamageTeamList;                               // 0x0040(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		TArray<class FName>                                        MaximumTargetableDistanceTeams;                          // 0x0050(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		TArray<float>                                              MaximumTargetableDistances;                              // 0x0060(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		TArray<float>                                              TargetingMultiplierTeamWeights;                          // 0x0070(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
	};

	/**
	 * ScriptStruct ShooterGame.PrimalGameData.ExplorerNoteAchievement
	 * Size -> 0x0020
	 */
	struct FExplorerNoteAchievement
	{
	public:
		class FString                                              AchievementName;                                         // 0x0000(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		TArray<int32_t>                                            ExplorerNoteIndices;                                     // 0x0010(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
	};

	/**
	 * ScriptStruct ShooterGame.PrimalGameData.ClassRemapping
	 * Size -> 0x0010
	 */
	struct FClassRemapping
	{
	public:
		class UClass*                                              FromClass;                                               // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		class UClass*                                              ToClass;                                                 // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct ShooterGame.PrimalGameData.ActiveEventSupplyCrateWeight
	 * Size -> 0x0028
	 */
	struct FActiveEventSupplyCrateWeight
	{
	public:
		TArray<class UClass*>                                      ReplacementCrateClasses;                                 // 0x0000(0x0010) Edit, ZeroConstructor
		TArray<float>                                              Weights;                                                 // 0x0010(0x0010) Edit, ZeroConstructor
		class FName                                                ActiveEvent;                                             // 0x0020(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct ShooterGame.PrimalGameData.ClassAddition
	 * Size -> 0x0018
	 */
	struct FClassAddition
	{
	public:
		class UClass*                                              ForClass;                                                // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		TArray<class UClass*>                                      ClassAdditions;                                          // 0x0008(0x0010) Edit, ZeroConstructor
	};

	/**
	 * ScriptStruct ShooterGame.PrimalGameData.BuffAddition
	 * Size -> 0x0018
	 */
	struct FBuffAddition
	{
	public:
		class UClass*                                              ForClass;                                                // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		TArray<class UClass*>                                      BuffAdditions;                                           // 0x0008(0x0010) Edit, ZeroConstructor
	};

	/**
	 * ScriptStruct ShooterGame.AvailableMission
	 * Size -> 0x0018
	 */
	struct FAvailableMission
	{
	public:
		class UClass*                                              MissionClass;                                            // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_YUFN[0x10];                                  // 0x0008(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ShooterGame.PrimalGameData.RandValueRange
	 * Size -> 0x000C
	 */
	struct FRandValueRange
	{
	public:
		float                                                      MinVal;                                                  // 0x0000(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      MaxVal;                                                  // 0x0004(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      RandPower;                                               // 0x0008(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct ShooterGame.PrimalGameData.DinoBabySetup
	 * Size -> 0x0038
	 */
	struct FDinoBabySetup
	{
	public:
		class FName                                                DinoNameTag;                                             // 0x0000(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		TArray<struct FBoneModifierRangeArray>                     BabyBoneModifierRanges;                                  // 0x0008(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		TArray<float>                                              WildRandomScaleRangeWeights;                             // 0x0018(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		TArray<struct FRandValueRange>                             WildRandomScaleRanges;                                   // 0x0028(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
	};

	/**
	 * ScriptStruct ShooterGame.PrimalGameData.MultiAchievement
	 * Size -> 0x0020
	 */
	struct FMultiAchievement
	{
	public:
		class FString                                              UnlockAchievement;                                       // 0x0000(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		TArray<class FString>                                      RequiredAchievements;                                    // 0x0010(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
	};

	/**
	 * ScriptStruct ShooterGame.PrimalGameData.ClassRemappingWeight
	 * Size -> 0x0038
	 */
	struct FClassRemappingWeight
	{
	public:
		class UClass*                                              FromClass;                                               // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		TArray<class UClass*>                                      ToClasses;                                               // 0x0008(0x0010) Edit, ZeroConstructor
		TArray<float>                                              Weights;                                                 // 0x0018(0x0010) Edit, ZeroConstructor
		class FName                                                ActiveEvent;                                             // 0x0028(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bExactMatch : 1;                                         // 0x0030(0x0001) BIT_FIELD Edit, NoDestructor
		unsigned char                                              UnknownData_P6F0[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ShooterGame.PrimalGameData.NPCDifficultyLevelRange
	 * Size -> 0x0030
	 */
	struct FNPCDifficultyLevelRange
	{
	public:
		TArray<float>                                              EnemyLevelsMin;                                          // 0x0000(0x0010) Edit, ZeroConstructor, DisableEditOnTemplate
		TArray<float>                                              EnemyLevelsMax;                                          // 0x0010(0x0010) Edit, ZeroConstructor, DisableEditOnTemplate
		TArray<float>                                              GameDifficulties;                                        // 0x0020(0x0010) Edit, ZeroConstructor, DisableEditOnTemplate
	};

	/**
	 * ScriptStruct ShooterGame.PrimalGameData.NPCSpawnEntry
	 * Size -> 0x0110
	 */
	struct FNPCSpawnEntry
	{
	public:
		class FString                                              AnEntryName;                                             // 0x0000(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		TArray<class UClass*>                                      NPCsToSpawn;                                             // 0x0010(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		TArray<class FString>                                      NPCsToSpawnStrings;                                      // 0x0020(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		TArray<struct FClassRemappingWeight>                       NPCRandomSpawnClassWeights;                              // 0x0030(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		TArray<struct FVector>                                     NPCsSpawnOffsets;                                        // 0x0040(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		TArray<float>                                              NPCsToSpawnPercentageChance;                             // 0x0050(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		TArray<float>                                              NPCMinLevelOffset;                                       // 0x0060(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		TArray<float>                                              NPCMaxLevelOffset;                                       // 0x0070(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		TArray<float>                                              NPCMinLevelMultiplier;                                   // 0x0080(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		TArray<float>                                              NPCMaxLevelMultiplier;                                   // 0x0090(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		bool                                                       bAddLevelOffsetBeforeMultiplier : 1;                     // 0x00A0(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor
		unsigned char                                              UnknownData_LEJ2[0x7];                                   // 0x00A1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<unsigned char>                                      NPCOverrideLevel;                                        // 0x00A8(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		struct FVector                                             ExtentCheck;                                             // 0x00B8(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FVector                                             GroupSpawnOffset;                                        // 0x00C4(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      EntryWeight;                                             // 0x00D0(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      ManualSpawnPointSpreadRadius;                            // 0x00D4(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      WaterOnlySpawnMinimumWaterHeight;                        // 0x00D8(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      MaximumWaterHeight;                                      // 0x00DC(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UClass*                                              ColorSets;                                               // 0x00E0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		TArray<struct FNPCDifficultyLevelRange>                    NPCDifficultyLevelRanges;                                // 0x00E8(0x0010) Edit, ZeroConstructor
		float                                                      LevelDifficultyTestOverride;                             // 0x00F8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      SpawnMinDistanceFromStructuresMultiplier;                // 0x00FC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      SpawnMinDistanceFromPlayersMultiplier;                   // 0x0100(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      SpawnMinDistanceFromTamedDinosMultiplier;                // 0x0104(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      RandGroupSpawnOffsetZMin;                                // 0x0108(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      RandGroupSpawnOffsetZMax;                                // 0x010C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct ShooterGame.PrimalGameData.NPCSpawnLimit
	 * Size -> 0x0020
	 */
	struct FNPCSpawnLimit
	{
	public:
		class UClass*                                              NPCClass;                                                // 0x0000(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class FString                                              NPCClassString;                                          // 0x0008(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		float                                                      MaxPercentageOfDesiredNumToAllow;                        // 0x0018(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_KNT4[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ShooterGame.PrimalGameData.NPCSpawnEntriesContainerAdditions
	 * Size -> 0x0038
	 */
	struct FNPCSpawnEntriesContainerAdditions
	{
	public:
		class UClass*                                              SpawnEntriesContainerClass;                              // 0x0000(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class FString                                              SpawnEntriesContainerClassString;                        // 0x0008(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		TArray<struct FNPCSpawnEntry>                              AdditionalNPCSpawnEntries;                               // 0x0018(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		TArray<struct FNPCSpawnLimit>                              AdditionalNPCSpawnLimits;                                // 0x0028(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
	};

	/**
	 * ScriptStruct ShooterGame.PrimalGameData.LocalizedSoundCueEntry
	 * Size -> 0x0020
	 */
	struct FLocalizedSoundCueEntry
	{
	public:
		class FString                                              TwoLetterISOLanguageName;                                // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor
		struct FStringAssetReference                               LocalizedSoundCue;                                       // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor
	};

	/**
	 * ScriptStruct ShooterGame.PrimalGameData.ExplorerNoteEntry
	 * Size -> 0x00A8
	 */
	struct FExplorerNoteEntry
	{
	public:
		unsigned char                                              UnknownData_NWQR[0x4];                                   // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    ExplorerNoteType;                                        // 0x0004(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bIsIsland : 1;                                           // 0x0008(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor
		bool                                                       bIsScorchedEarth : 1;                                    // 0x0008(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor
		bool                                                       bIsAberration : 1;                                       // 0x0008(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor
		bool                                                       bIsExtinction : 1;                                       // 0x0008(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor
		bool                                                       bIsGenesis1 : 1;                                         // 0x0008(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor
		bool                                                       bIsGenesis2 : 1;                                         // 0x0008(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor
		bool                                                       bIsDossier : 1;                                          // 0x0008(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor
		bool                                                       bDontRequireProximityToChest : 1;                        // 0x0008(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor
		bool                                                       bUnlockIgnorePopup : 1;                                  // 0x0009(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor
		bool                                                       bUnlockIgnoreSound : 1;                                  // 0x0009(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor
		bool                                                       bPreventXPBuff : 1;                                      // 0x0009(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor
		unsigned char                                              UnknownData_ZDV8[0x6];                                   // 0x000A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              ExplorerNoteDescription;                                 // 0x0010(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		class FName                                                DossierTameableDinoNameTag;                              // 0x0020(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class USkeletalMesh*                                       ExplorerNoteMesh;                                        // 0x0028(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UClass*                                              ExplorerNoteAnimBP;                                      // 0x0030(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FStringAssetReference                               ExplorerNoteTexture;                                     // 0x0038(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		class UTexture2D*                                          ExplorerNoteIcon;                                        // 0x0048(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UMaterialInterface*                                  ExplorerNoteIconMaterial;                                // 0x0050(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class USoundBase*                                          UnlockedSoundOverride;                                   // 0x0058(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      ShowExplorerNoteTitleDelayTime;                          // 0x0060(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_37AQ[0x4];                                   // 0x0064(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USoundCue*                                           ExplorerNoteOpenSound;                                   // 0x0068(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class USoundCue*                                           ExplorerNoteCloseSound;                                  // 0x0070(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class FString                                              MoviePath;                                               // 0x0078(0x0010) Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance
		class FString                                              LocalizedSubtitle;                                       // 0x0088(0x0010) Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance
		TArray<struct FLocalizedSoundCueEntry>                     LocalizedAudio;                                          // 0x0098(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
	};

	/**
	 * ScriptStruct ShooterGame.PrimalGameData.UnlockableEmoteEntry
	 * Size -> 0x0048
	 */
	struct FUnlockableEmoteEntry
	{
	public:
		class FName                                                EmoteName;                                               // 0x0000(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class FString                                              EmoteDescription;                                        // 0x0008(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		class FName                                                EmoteGroup;                                              // 0x0018(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class FString                                              UseEmoteMessage;                                         // 0x0020(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		class UAnimMontage*                                        MaleAnim;                                                // 0x0030(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UAnimMontage*                                        FemaleAnim;                                              // 0x0038(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      EmotePlayMinimumInterval;                                // 0x0040(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bGiveDefault;                                            // 0x0044(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_KE8G[0x3];                                   // 0x0045(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ShooterGame.PrimalGameData.EmoteGroup
	 * Size -> 0x0018
	 */
	struct FEmoteGroup
	{
	public:
		class FName                                                GroupName;                                               // 0x0000(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FLinearColor                                        GroupColor;                                              // 0x0008(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct ShooterGame.PrimalGameData.ObjectCorrelation
	 * Size -> 0x0010
	 */
	struct FObjectCorrelation
	{
	public:
		class UObject*                                             FromObject;                                              // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		class UObject*                                             ToObject;                                                // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct ShooterGame.PrimalGameData.OverrideAnimBlueprintEntry
	 * Size -> 0x0010
	 */
	struct FOverrideAnimBlueprintEntry
	{
	public:
		class UClass*                                              FromBPClass;                                             // 0x0000(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UClass*                                              ToBPClass;                                               // 0x0008(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct ShooterGame.PrimalGameData.HairStyleDefinition
	 * Size -> 0x0040
	 */
	struct FHairStyleDefinition
	{
	public:
		bool                                                       bIsHairStyleLocked;                                      // 0x0000(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_CLX3[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                UnlockHairStyleName;                                     // 0x0004(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_VVD4[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              HairStyleName;                                           // 0x0010(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		class USkeletalMesh*                                       HairMeshMale;                                            // 0x0020(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      MaleBeginHairMorphTargetRange;                           // 0x0028(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_P7Q1[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USkeletalMesh*                                       HairMeshFemale;                                          // 0x0030(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      FemaleBeginHairMorphTargetRange;                         // 0x0038(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_DUF1[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ShooterGame.PrimalGameData.GrinderItemReplacer
	 * Size -> 0x0010
	 */
	struct FGrinderItemReplacer
	{
	public:
		class UClass*                                              current;                                                 // 0x0000(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UClass*                                              replacement;                                             // 0x0008(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct ShooterGame.PrimalGameData.InvalidReferenceRedirector
	 * Size -> 0x0038
	 */
	struct FInvalidReferenceRedirector
	{
	public:
		class FString                                              InvalidReferenceKey;                                     // 0x0000(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		class UClass*                                              RedirectedClass;                                         // 0x0010(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FStringAssetReference                               RedirectedClassSoftReference;                            // 0x0018(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		TArray<class FString>                                      LimitedToMaps;                                           // 0x0028(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
	};

	/**
	 * ScriptStruct ShooterGame.PrimalGameData.WorldDefaultItemSet
	 * Size -> 0x0030
	 */
	struct FWorldDefaultItemSet
	{
	public:
		class FName                                                ItemSetName;                                             // 0x0000(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		TArray<class FName>                                        MapName;                                                 // 0x0008(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		bool                                                       bFirstTimeEquip;                                         // 0x0018(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bOnlyGiveItemSetOnce;                                    // 0x0019(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bEquipOnNewPawn;                                         // 0x001A(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_64YK[0x1];                                   // 0x001B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    ForceEquipIfAppID;                                       // 0x001C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		TArray<class UClass*>                                      ItemsToGive;                                             // 0x0020(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
	};

	/**
	 * ScriptStruct ShooterGame.PrimalGameData.ExtraEggItem
	 * Size -> 0x0028
	 */
	struct FExtraEggItem
	{
	public:
		class FString                                              DropItem;                                                // 0x0000(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		class FName                                                ActiveEventFilter;                                       // 0x0010(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UClass*                                              ForDinoCharacter;                                        // 0x0018(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      DropChance;                                              // 0x0020(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_AG9Z[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ShooterGame.PrimalGameData.CryopodPersistantBuffs
	 * Size -> 0x0018
	 */
	struct FCryopodPersistantBuffs
	{
	public:
		class FString                                              BuffClassString;                                         // 0x0000(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		int32_t                                                    IDBitMask;                                               // 0x0010(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_FTL9[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ShooterGame.PrimalGameData.SupplyCrateItemEntry
	 * Size -> 0x0090
	 */
	struct FSupplyCrateItemEntry
	{
	public:
		class FString                                              ItemEntryName;                                           // 0x0000(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		float                                                      EntryWeight;                                             // 0x0010(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_4T13[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UClass*>                                      Items;                                                   // 0x0018(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		TArray<class FString>                                      ItemClassStrings;                                        // 0x0028(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		TArray<float>                                              ItemsWeights;                                            // 0x0038(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		TArray<int32_t>                                            ItemQuantityOverrides;                                   // 0x0048(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		float                                                      MinQuantity;                                             // 0x0058(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      MaxQuantity;                                             // 0x005C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bApplyQuantityToSingleItem;                              // 0x0060(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_5YMG[0x3];                                   // 0x0061(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      QuantityPower;                                           // 0x0064(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      MinRandomQuality;                                        // 0x0068(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      MinQuality;                                              // 0x006C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      MaxQuality;                                              // 0x0070(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      QualityPower;                                            // 0x0074(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bForceBlueprint : 1;                                     // 0x0078(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor
		bool                                                       bForcePreventGrinding : 1;                               // 0x0078(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor
		unsigned char                                              UnknownData_NYU7[0x3];                                   // 0x0079(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ChanceToBeBlueprintOverride;                             // 0x007C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      ItemStatClampsMultiplier;                                // 0x0080(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      ChanceToActuallyGiveItem;                                // 0x0084(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      RequiresMinQuality;                                      // 0x0088(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_6XR0[0x4];                                   // 0x008C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ShooterGame.PrimalGameData.SupplyCrateItemSet
	 * Size -> 0x0040
	 */
	struct FSupplyCrateItemSet
	{
	public:
		class FString                                              SetName;                                                 // 0x0000(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		TArray<struct FSupplyCrateItemEntry>                       ItemEntries;                                             // 0x0010(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		float                                                      MinNumItems;                                             // 0x0020(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      MaxNumItems;                                             // 0x0024(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      NumItemsPower;                                           // 0x0028(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      SetWeight;                                               // 0x002C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bItemsRandomWithoutReplacement;                          // 0x0030(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_ZK3U[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              ItemSetOverride;                                         // 0x0038(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct ShooterGame.PrimalGameData.ConfigSupplyCrateItemsOverride
	 * Size -> 0x0038
	 */
	struct FConfigSupplyCrateItemsOverride
	{
	public:
		class FString                                              SupplyCrateClassString;                                  // 0x0000(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		int32_t                                                    MinItemSets;                                             // 0x0010(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    MaxItemSets;                                             // 0x0014(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    NumItemSetsPower;                                        // 0x0018(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bSetsRandomWithoutReplacement;                           // 0x001C(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_JH7T[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FSupplyCrateItemSet>                         ItemSets;                                                // 0x0020(0x0010) Edit, ZeroConstructor
		bool                                                       bAppendItemSets;                                         // 0x0030(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bAppendPreventIncreasingMinMaxItemSets;                  // 0x0031(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_OWDN[0x6];                                   // 0x0032(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ShooterGame.PrimalGameData.SubtitleStringEntry
	 * Size -> 0x0018
	 */
	struct FSubtitleStringEntry
	{
	public:
		class FString                                              BaseText;                                                // 0x0000(0x0010) Edit, BlueprintReadOnly, ZeroConstructor
		float                                                      StartTime;                                               // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      EndTime;                                                 // 0x0014(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct ShooterGame.PrimalGameData.SubtitleStringMap
	 * Size -> 0x0020
	 */
	struct FSubtitleStringMap
	{
	public:
		class FString                                              MediaName;                                               // 0x0000(0x0010) Edit, ZeroConstructor
		TArray<struct FSubtitleStringEntry>                        Subtitles;                                               // 0x0010(0x0010) Edit, ZeroConstructor
	};

	/**
	 * ScriptStruct ShooterGame.PrimalGameData.ExtraItemAttachmentInfo
	 * Size -> 0x0010
	 */
	struct FExtraItemAttachmentInfo
	{
	public:
		class UActorComponent*                                     ExtraComponentsToAttach;                                 // 0x0000(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor
		class FName                                                SocketToAttachTo;                                        // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct ShooterGame.PrimalGameData.ItemAttachmentInfo
	 * Size -> 0x0048
	 */
	struct FItemAttachmentInfo
	{
	public:
		class UActorComponent*                                     ComponentToAttach;                                       // 0x0000(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor
		TArray<struct FExtraItemAttachmentInfo>                    ExtraItemAttachmentInfos;                                // 0x0008(0x0010) ZeroConstructor, ContainsInstancedReference
		class FName                                                SocketToAttachTo;                                        // 0x0018(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bCanBuildStructuresOn : 1;                               // 0x0020(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor
		bool                                                       bUseParentAnims : 1;                                     // 0x0020(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor
		bool                                                       bAttachToFirstPersonHands : 1;                           // 0x0020(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor
		bool                                                       bAttachToThirdPersonWeaponMesh : 1;                      // 0x0020(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor
		bool                                                       bDisabled : 1;                                           // 0x0020(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor
		bool                                                       bUseItemColors : 1;                                      // 0x0020(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor
		bool                                                       bUseIgnoreAttachmentWhenEquipmentOfType : 1;             // 0x0020(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor
		bool                                                       bHideCharacterMesh : 1;                                  // 0x0020(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor
		bool                                                       bAttachmentRequireWeaponSupportShield : 1;               // 0x0021(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor
		bool                                                       bForceDediAttachment : 1;                                // 0x0021(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor
		bool                                                       bForceVisibleInFirstPerson : 1;                          // 0x0021(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor
		bool                                                       bIgnoreEquipmentForceHideFirstPerson : 1;                // 0x0021(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor
		bool                                                       bAttachToFirstPersonCamera : 1;                          // 0x0021(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor
		bool                                                       bAttachToFirstPersonCameraCapsule : 1;                   // 0x0021(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor
		bool                                                       bPersistShieldRefreshOnWeaponEquip : 1;                  // 0x0021(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor
		bool                                                       bDisableForTaxidermy : 1;                                // 0x0021(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor
		unsigned char                                              UnknownData_QFJ6[0x6];                                   // 0x0022(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              OnlyUseAttachmentForActorClass;                          // 0x0028(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		EPrimalEquipmentType                                       IgnoreAttachmentWhenEquipmentOfType;                     // 0x0030(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_83QB[0x3];                                   // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                AttachedCompName;                                        // 0x0034(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor
		TWeakObjectPtr<class UActorComponent>                      AttachedCompReference;                                   // 0x003C(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_H8QE[0x4];                                   // 0x0044(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ShooterGame.PrimalItem.ActorClassAttachmentInfo
	 * Size -> 0x0050
	 */
	struct FActorClassAttachmentInfo
	{
	public:
		class UClass*                                              OwnerActorClassParent;                                   // 0x0000(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		TArray<struct FItemAttachmentInfo>                         ItemAttachmentInfos;                                     // 0x0008(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference
		class FName                                                PlayerMeshTextureMaskParamName;                          // 0x0018(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UTexture2D*                                          PlayerMeshTextureMask;                                   // 0x0020(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UTexture2D*                                          PlayerMeshNoItemDefaultTextureMask;                      // 0x0028(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    PlayerMeshTextureMaskMaterialIndex;                      // 0x0030(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    PlayerMeshTextureMaskMaterialIndexAlt;                   // 0x0034(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class FName                                                FPVHandsMeshTextureMaskParamName;                        // 0x0038(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UTexture2D*                                          FPVHandsMeshTextureMask;                                 // 0x0040(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    FPVHandsMeshTextureMaskMaterialIndex;                    // 0x0048(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    FPVHandsMeshTextureMaskMaterialIndex2;                   // 0x004C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct ShooterGame.ItemNetID
	 * Size -> 0x0008
	 */
	struct FItemNetID
	{
	public:
		uint32_t                                                   ItemID1;                                                 // 0x0000(0x0004) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		uint32_t                                                   ItemID2;                                                 // 0x0004(0x0004) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.PrimalGameData.CraftingResourceRequirement
	 * Size -> 0x0018
	 */
	struct FCraftingResourceRequirement
	{
	public:
		float                                                      BaseResourceRequirement;                                 // 0x0000(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_DPPJ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              ResourceItemType;                                        // 0x0008(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bCraftingRequireExactResourceType;                       // 0x0010(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_B8MN[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ShooterGame.PrimalItem.UseItemAddCharacterStatusValue
	 * Size -> 0x0030
	 */
	struct FUseItemAddCharacterStatusValue
	{
	public:
		float                                                      BaseAmountToAdd;                                         // 0x0000(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bPercentOfMaxStatusValue : 1;                            // 0x0004(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor
		bool                                                       bPercentOfCurrentStatusValue : 1;                        // 0x0004(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor
		bool                                                       bUseItemQuality : 1;                                     // 0x0004(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor
		bool                                                       bDontRequireLessThanMaxToUse : 1;                        // 0x0004(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor
		bool                                                       bAddOverTime : 1;                                        // 0x0004(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor
		bool                                                       bAddOverTimeSpeedInSeconds : 1;                          // 0x0004(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor
		bool                                                       bContinueOnUnchangedValue : 1;                           // 0x0004(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor
		bool                                                       bSetValue : 1;                                           // 0x0004(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor
		bool                                                       bSetAdditionalValue : 1;                                 // 0x0005(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor
		bool                                                       bResetExistingModifierDescriptionIndex : 1;              // 0x0005(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor
		bool                                                       bForceUseStatOnDinos : 1;                                // 0x0005(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor
		unsigned char                                              UnknownData_JL4O[0x2];                                   // 0x0006(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      LimitExistingModifierDescriptionToMaxAmount;             // 0x0008(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      AddOverTimeSpeed;                                        // 0x000C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      PercentAbsoluteMaxValue;                                 // 0x0010(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      PercentAbsoluteMinValue;                                 // 0x0014(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    StatusValueModifierDescriptionIndex;                     // 0x0018(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      ItemQualityAddValueMultiplier;                           // 0x001C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		EPrimalCharacterStatusValue                                StatusValueType;                                         // 0x0020(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		EPrimalCharacterStatusValue                                StopAtValueNearMax;                                      // 0x0021(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_N6SO[0x6];                                   // 0x0022(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              ScaleValueByCharacterDamageType;                         // 0x0028(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct ShooterGame.PrimalItem.ItemStatInfo
	 * Size -> 0x0024
	 */
	struct FItemStatInfo
	{
	public:
		bool                                                       bUsed : 1;                                               // 0x0000(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor
		bool                                                       bCalculateAsPercent : 1;                                 // 0x0000(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor
		bool                                                       bDisplayAsPercent : 1;                                   // 0x0000(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor
		bool                                                       bRequiresSubmerged : 1;                                  // 0x0000(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor
		bool                                                       bPreventIfSubmerged : 1;                                 // 0x0000(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor
		bool                                                       bHideStatFromTooltip : 1;                                // 0x0000(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor
		unsigned char                                              UnknownData_SFJ8[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    DefaultModifierValue;                                    // 0x0004(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    RandomizerRangeOverride;                                 // 0x0008(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      RandomizerRangeMultiplier;                               // 0x000C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      TheRandomizerPower;                                      // 0x0010(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData, NoDestructor
		float                                                      StateModifierScale;                                      // 0x0014(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      InitialValueConstant;                                    // 0x0018(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      RatingValueMultiplier;                                   // 0x001C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      AbsoluteMaxValue;                                        // 0x0020(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct ShooterGame.PrimalItem.CropItemPhaseData
	 * Size -> 0x00D0
	 */
	struct FCropItemPhaseData
	{
	public:
		float                                                      NextStageFertilizerCacheThreshold;                       // 0x0000(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_KE2Y[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UStaticMesh*                                         StageStaticMesh;                                         // 0x0008(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		TArray<class UStaticMesh*>                                 StageStaticMeshes;                                       // 0x0010(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		class UStaticMesh*                                         HasFruitStageStaticMesh;                                 // 0x0020(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		TArray<class UStaticMesh*>                                 HasFruitStageStaticMeshes;                               // 0x0028(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		struct FVector                                             StageStaticMeshScale3D;                                  // 0x0038(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FVector                                             StageStaticMeshTranslationOffset;                        // 0x0044(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FRotator                                            StageStaticMeshRotationOffset;                           // 0x0050(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_ZBK7[0x4];                                   // 0x005C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FVector>                                     StageStaticMeshScales3D;                                 // 0x0060(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		TArray<struct FVector>                                     StageStaticMeshTranslationOffsets;                       // 0x0070(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		TArray<struct FRotator>                                    StageStaticMeshRotationOffsets;                          // 0x0080(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		TArray<class UClass*>                                      StageReachedItemsToGive;                                 // 0x0090(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		TArray<float>                                              StageReachedItemsToGiveWeights;                          // 0x00A0(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		unsigned char                                              StageBlockCollisions;                                    // 0x00B0(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bUseStageStructure;                                      // 0x00B1(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_P4MM[0x6];                                   // 0x00B2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              StageStructure;                                          // 0x00B8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FVector                                             StageStructureOffset;                                    // 0x00C0(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_WNB6[0x4];                                   // 0x00CC(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ShooterGame.PrimalItem.SaddlePassengerSeatDefinition
	 * Size -> 0x00A8
	 */
	struct FSaddlePassengerSeatDefinition
	{
	public:
		class FName                                                AttachBoneName;                                          // 0x0000(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class FName                                                AttachBoneNameEnemyDino;                                 // 0x0008(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class FName                                                AttachBoneNameDino;                                      // 0x0010(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class FString                                              BoardActionText;                                         // 0x0018(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		struct FVector                                             UnboardLocationOffset;                                   // 0x0028(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_L2BN[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              BoardingRequiresEngram;                                  // 0x0038(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FVector                                             FPVCameraLocationOffset;                                 // 0x0040(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FVector                                             AttachRelativeLocation;                                  // 0x004C(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FRotator                                            AttachRelativeRotation;                                  // 0x0058(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FRotator                                            DinoOverrideAttachRelativeRotation;                      // 0x0064(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UAnimSequence*                                       CharacterAdditiveAnim;                                   // 0x0070(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bHideCharacterLowerBody : 1;                             // 0x0078(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor
		bool                                                       bUseCharacterPitch : 1;                                  // 0x0078(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor
		bool                                                       bLimitCameraYaw : 1;                                     // 0x0078(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor
		bool                                                       bUseDinoRotationToLimitCameraYaw : 1;                    // 0x0078(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor
		bool                                                       bWeaponIgnoreDino : 1;                                   // 0x0078(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor
		bool                                                       bHideDinoForLocalPassenger : 1;                          // 0x0078(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor
		bool                                                       CharacterAdditiveAnimIsNonAdditive : 1;                  // 0x0078(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor
		bool                                                       bAllowDinoPassenger : 1;                                 // 0x0078(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor
		bool                                                       bPreventManualPassenger : 1;                             // 0x0079(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor
		bool                                                       bDinoOverrideAttachRelativeRotation : 1;                 // 0x0079(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor
		bool                                                       bUseBoneNameDinoOverride : 1;                            // 0x0079(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor
		bool                                                       bSavePassenger : 1;                                      // 0x0079(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor
		bool                                                       bPreventDamageToSeatedDino : 1;                          // 0x0079(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor
		unsigned char                                              UnknownData_58LK[0x2];                                   // 0x007A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CameraYawRange;                                          // 0x007C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      AimOffsetYawFactor;                                      // 0x0080(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      AimOffsetPitchFactor;                                    // 0x0084(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      AimOffsetYawBias;                                        // 0x0088(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      AimOffsetPitchBias;                                      // 0x008C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      ExtraHypoThermalInsulation;                              // 0x0090(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      ExtraHyperThermalInsulation;                             // 0x0094(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bIsSaddleTurret : 1;                                     // 0x0098(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor
		bool                                                       bLimitTurretPitch : 1;                                   // 0x0098(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor
		unsigned char                                              UnknownData_WSFD[0x3];                                   // 0x0099(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      TurretPitchMin;                                          // 0x009C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      TurretPitchMax;                                          // 0x00A0(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bAllowOrbitCam : 1;                                      // 0x00A4(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor
		bool                                                       bAllowTPV : 1;                                           // 0x00A4(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor
		bool                                                       bPreventPassengerWeapons : 1;                            // 0x00A4(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor
		bool                                                       bAllowAccessDinoInventory : 1;                           // 0x00A4(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor
		bool                                                       bUnboardUseLastRotation : 1;                             // 0x00A4(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor
		unsigned char                                              UnknownData_K9G5[0x3];                                   // 0x00A5(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ShooterGame.PrimalGameData.DinoAncestorsEntry
	 * Size -> 0x0030
	 */
	struct FDinoAncestorsEntry
	{
	public:
		class FString                                              MaleName;                                                // 0x0000(0x0010) ZeroConstructor
		uint32_t                                                   MaleDinoID1;                                             // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		uint32_t                                                   MaleDinoID2;                                             // 0x0014(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		class FString                                              FemaleName;                                              // 0x0018(0x0010) ZeroConstructor
		uint32_t                                                   FemaleDinoID1;                                           // 0x0028(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		uint32_t                                                   FemaleDinoID2;                                           // 0x002C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct ShooterGame.PrimalItem.CustomItemByteArray
	 * Size -> 0x0010
	 */
	struct FCustomItemByteArray
	{
	public:
		TArray<unsigned char>                                      Bytes;                                                   // 0x0000(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
	};

	/**
	 * ScriptStruct ShooterGame.PrimalItem.CustomItemByteArrays
	 * Size -> 0x0010
	 */
	struct FCustomItemByteArrays
	{
	public:
		TArray<struct FCustomItemByteArray>                        ByteArrays;                                              // 0x0000(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
	};

	/**
	 * ScriptStruct ShooterGame.PrimalItem.CustomItemDoubles
	 * Size -> 0x0010
	 */
	struct FCustomItemDoubles
	{
	public:
		TArray<double>                                             Doubles;                                                 // 0x0000(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
	};

	/**
	 * ScriptStruct ShooterGame.PrimalItem.CustomItemData
	 * Size -> 0x0078
	 */
	struct FCustomItemData
	{
	public:
		class FName                                                CustomDataName;                                          // 0x0000(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		TArray<class FString>                                      CustomDataStrings;                                       // 0x0008(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		TArray<float>                                              CustomDataFloats;                                        // 0x0018(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		TArray<class UObject*>                                     CustomDataObjects;                                       // 0x0028(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		TArray<class UClass*>                                      CustomDataClasses;                                       // 0x0038(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		TArray<class FName>                                        CustomDataNames;                                         // 0x0048(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		struct FCustomItemByteArrays                               CustomDataBytes;                                         // 0x0058(0x0010) Edit, DisableEditOnInstance, RepSkip
		struct FCustomItemDoubles                                  CustomDataDoubles;                                       // 0x0068(0x0010) Edit, DisableEditOnInstance
	};

	/**
	 * ScriptStruct ShooterGame.PrimalItem.CustomContextSubmenu
	 * Size -> 0x0018
	 */
	struct FCustomContextSubmenu
	{
	public:
		class FName                                                SubmenuName;                                             // 0x0000(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		TArray<class FName>                                        SubmenuOptions;                                          // 0x0008(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
	};

	/**
	 * ScriptStruct ShooterGame.PrimalItem.CustomContextMenuData
	 * Size -> 0x0020
	 */
	struct FCustomContextMenuData
	{
	public:
		class FName                                                ContextItemName;                                         // 0x0000(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class FString                                              DisplayString;                                           // 0x0008(0x0010) Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance
		class FName                                                OptionalKeybindName;                                     // 0x0018(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct ShooterGame.PrimalGameData.DinoAncestorsEntryBlueprint
	 * Size -> 0x0030
	 */
	struct FDinoAncestorsEntryBlueprint
	{
	public:
		class FString                                              MaleName;                                                // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor
		int32_t                                                    MaleDinoID1;                                             // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		int32_t                                                    MaleDinoID2;                                             // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class FString                                              FemaleName;                                              // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor
		int32_t                                                    FemaleDinoID1;                                           // 0x0028(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		int32_t                                                    FemaleDinoID2;                                           // 0x002C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct ShooterGame.PrimalItem.UnreplicatedEggData
	 * Size -> 0x0058
	 */
	struct FUnreplicatedEggData
	{
	public:
		TArray<int32_t>                                            EggNumberOfLevelUpPointsApplied;                         // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor
		float                                                      EggTamedIneffectivenessModifier;                         // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_8WR3[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<int32_t>                                            EggColorSetIndices;                                      // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor
		TArray<struct FDinoAncestorsEntryBlueprint>                EggDinoAncestors;                                        // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor
		TArray<struct FDinoAncestorsEntryBlueprint>                EggDinoAncestorsMale;                                    // 0x0038(0x0010) Edit, BlueprintVisible, ZeroConstructor
		int32_t                                                    EggRandomMutationsFemale;                                // 0x0048(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		int32_t                                                    EggRandomMutationsMale;                                  // 0x004C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		int32_t                                                    EggGenderOverride;                                       // 0x0050(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_6SEK[0x4];                                   // 0x0054(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ShooterGame.PrimalItem.ItemNetInfo
	 * Size -> 0x01B0
	 */
	struct FItemNetInfo
	{
	public:
		class UClass*                                              ItemArchetype;                                           // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor
		struct FItemNetID                                          ItemId;                                                  // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor
		uint32_t                                                   ItemQuantity;                                            // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		int32_t                                                    CustomItemID;                                            // 0x0014(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		int32_t                                                    SlotIndex;                                               // 0x0018(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_81PP[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     CreationTime;                                            // 0x0020(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor
		class FString                                              CustomItemName;                                          // 0x0028(0x0010) ZeroConstructor
		class FString                                              CustomItemDescription;                                   // 0x0038(0x0010) ZeroConstructor
		double                                                     UploadEarliestValidTime;                                 // 0x0048(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor
		TArray<uint64_t>                                           SteamUserItemID;                                         // 0x0050(0x0010) ZeroConstructor
		bool                                                       bIsBlueprint : 1;                                        // 0x0060(0x0001) BIT_FIELD NoDestructor
		bool                                                       bIsEngram : 1;                                           // 0x0060(0x0001) BIT_FIELD NoDestructor
		bool                                                       bIsCustomRecipe : 1;                                     // 0x0060(0x0001) BIT_FIELD NoDestructor
		bool                                                       bIsFoodRecipe : 1;                                       // 0x0060(0x0001) BIT_FIELD NoDestructor
		bool                                                       bIsRepairing : 1;                                        // 0x0060(0x0001) BIT_FIELD NoDestructor
		bool                                                       bAllowRemovalFromInventory : 1;                          // 0x0060(0x0001) BIT_FIELD NoDestructor
		bool                                                       bHideFromInventoryDisplay : 1;                           // 0x0060(0x0001) BIT_FIELD NoDestructor
		bool                                                       bAllowRemovalFromSteamInventory : 1;                     // 0x0060(0x0001) BIT_FIELD NoDestructor
		bool                                                       bFromSteamInventory : 1;                                 // 0x0061(0x0001) BIT_FIELD NoDestructor
		bool                                                       bIsFromAllClustersInventory : 1;                         // 0x0061(0x0001) BIT_FIELD NoDestructor
		bool                                                       bForcePreventGrinding : 1;                               // 0x0061(0x0001) BIT_FIELD NoDestructor
		bool                                                       bIsEquipped : 1;                                         // 0x0061(0x0001) BIT_FIELD RepSkip, NoDestructor
		bool                                                       bIsSlot : 1;                                             // 0x0061(0x0001) BIT_FIELD RepSkip, NoDestructor
		bool                                                       bIsInitialItem : 1;                                      // 0x0061(0x0001) BIT_FIELD RepSkip, NoDestructor
		unsigned char                                              UnknownData_WPI3[0x2];                                   // 0x0062(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		uint16_t                                                   CraftQueue;                                              // 0x0064(0x0002) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_WL4F[0x2];                                   // 0x0066(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     NextCraftCompletionTime;                                 // 0x0068(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      CraftingSkill;                                           // 0x0070(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      CraftedSkillBonus;                                       // 0x0074(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		class FString                                              CrafterCharacterName;                                    // 0x0078(0x0010) ZeroConstructor
		class FString                                              CrafterTribeName;                                        // 0x0088(0x0010) ZeroConstructor
		uint32_t                                                   WeaponClipAmmo;                                          // 0x0098(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      ItemDurability;                                          // 0x009C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      ItemRating;                                              // 0x00A0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		uint32_t                                                   ExpirationTimeUTC;                                       // 0x00A4(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              ItemQualityIndex;                                        // 0x00A8(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_Z5X2[0x7];                                   // 0x00A9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              ItemCustomClass;                                         // 0x00B0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor
		uint16_t                                                   ItemStatValues[0x8];                                     // 0x00B8(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor
		int16_t                                                    ItemColorID[0x6];                                        // 0x00C8(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_20HV[0x4];                                   // 0x00D4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              ItemSkinTemplate;                                        // 0x00D8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor
		TArray<struct FCustomItemData>                             CustomItemDatas;                                         // 0x00E0(0x0010) ZeroConstructor
		TArray<struct FColor>                                      CustomItemColors;                                        // 0x00F0(0x0010) ZeroConstructor
		TArray<struct FCraftingResourceRequirement>                CustomResourceRequirements;                              // 0x0100(0x0010) ZeroConstructor
		double                                                     NextSpoilingTime;                                        // 0x0110(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor
		double                                                     LastSpoilingTime;                                        // 0x0118(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor
		uint64_t                                                   OwnerPlayerDataID;                                       // 0x0120(0x0008) ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor
		TWeakObjectPtr<class AShooterCharacter>                    LastOwnerPlayer;                                         // 0x0128(0x0008) ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor
		double                                                     LastAutoDurabilityDecreaseTime;                          // 0x0130(0x0008) ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor
		float                                                      ItemStatClampsMultiplier;                                // 0x0138(0x0004) ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor
		struct FVector                                             OriginalItemDropLocation;                                // 0x013C(0x000C) ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor
		int16_t                                                    PreSkinItemColorID[0x6];                                 // 0x0148(0x000C) ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor
		unsigned char                                              EggNumberOfLevelUpPointsApplied[0xC];                    // 0x0154(0x000C) ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor
		float                                                      EggTamedIneffectivenessModifier;                         // 0x0160(0x0004) ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor
		unsigned char                                              EggColorSetIndices[0x6];                                 // 0x0164(0x0006) ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor
		unsigned char                                              UnknownData_25O8[0x2];                                   // 0x016A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    EggGenderOverride;                                       // 0x016C(0x0004) ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor
		unsigned char                                              ItemVersion;                                             // 0x0170(0x0001) ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor
		unsigned char                                              UnknownData_UU97[0x7];                                   // 0x0171(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     ClusterSpoilingTimeUTC;                                  // 0x0178(0x0008) ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor
		TArray<struct FDinoAncestorsEntry>                         EggDinoAncestors;                                        // 0x0180(0x0010) ZeroConstructor, RepSkip
		TArray<struct FDinoAncestorsEntry>                         EggDinoAncestorsMale;                                    // 0x0190(0x0010) ZeroConstructor, RepSkip
		int32_t                                                    EggRandomMutationsFemale;                                // 0x01A0(0x0004) ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor
		int32_t                                                    EggRandomMutationsMale;                                  // 0x01A4(0x0004) ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor
		unsigned char                                              ItemProfileVersion;                                      // 0x01A8(0x0001) ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor
		bool                                                       bNetInfoFromClient;                                      // 0x01A9(0x0001) ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor
		unsigned char                                              UnknownData_CSEE[0x6];                                   // 0x01AA(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ShooterGame.PrimalLocalProfile.EngramCustomFolder
	 * Size -> 0x0020
	 */
	struct FEngramCustomFolder
	{
	public:
		class FString                                              FolderName;                                              // 0x0000(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPublic
		TArray<class UClass*>                                      EngramCustomFolderItemClasses;                           // 0x0010(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.PrimalLocalProfile.PrimalMapMarkerEntryData
	 * Size -> 0x0028
	 */
	struct FPrimalMapMarkerEntryData
	{
	public:
		int32_t                                                    coord1;                                                  // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		int32_t                                                    coord2;                                                  // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		class FString                                              Name;                                                    // 0x0008(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       bOverrideMarkerTextColor;                                // 0x0018(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_U50P[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FColor                                              OverrideMarkerTextColor;                                 // 0x001C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      coord1f;                                                 // 0x0020(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      coord2f;                                                 // 0x0024(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.PrimalLocalProfile.ArkTributeEntity
	 * Size -> 0x0004
	 */
	struct FArkTributeEntity
	{
	public:
		int32_t                                                    UploadTime;                                              // 0x0000(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.PrimalLocalProfile.ArkTributeInventoryItem
	 * Size -> 0x01BC (FullSize[0x01C0] - InheritedSize[0x0004])
	 */
	struct FArkTributeInventoryItem : public FArkTributeEntity
	{
	public:
		unsigned char                                              UnknownData_QAUM[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FItemNetInfo                                        ArkTributeItem;                                          // 0x0008(0x01B0) Transient, NativeAccessSpecifierPublic
		float                                                      Version;                                                 // 0x01B8(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LYPF[0x4];                                   // 0x01BC(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ShooterGame.PrimalLocalProfile.ARKTributeDino
	 * Size -> 0x011C (FullSize[0x0120] - InheritedSize[0x0004])
	 */
	struct FARKTributeDino : public FArkTributeEntity
	{
	public:
		unsigned char                                              UnknownData_8UUF[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              DinoClassName;                                           // 0x0008(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPublic
		class UClass*                                              DinoClass;                                               // 0x0018(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor
		TArray<unsigned char>                                      DinoData;                                                // 0x0020(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPublic
		class FString                                              DinoName;                                                // 0x0030(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPublic
		class FString                                              DinoNameInMap;                                           // 0x0040(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPublic
		class FString                                              DinoStats[0xC];                                          // 0x0050(0x00C0) ZeroConstructor, Transient, NativeAccessSpecifierPublic
		float                                                      DinoExperiencePoints;                                    // 0x0110(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      Version;                                                 // 0x0114(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		uint32_t                                                   DinoID1;                                                 // 0x0118(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor
		uint32_t                                                   DinoID2;                                                 // 0x011C(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct ShooterGame.PrimalLocalProfile.ArkTributePlayerData
	 * Size -> 0x011C (FullSize[0x0120] - InheritedSize[0x0004])
	 */
	struct FArkTributePlayerData : public FArkTributeEntity
	{
	public:
		unsigned char                                              UnknownData_MD98[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		uint64_t                                                   PlayerDataID;                                            // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor
		TArray<unsigned char>                                      PlayerDataBytes;                                         // 0x0010(0x0010) ZeroConstructor
		class FString                                              PlayerName;                                              // 0x0020(0x0010) ZeroConstructor
		class FString                                              PlayerStats[0xC];                                        // 0x0030(0x00C0) ZeroConstructor, Transient, NativeAccessSpecifierPublic
		class FString                                              UploadingServerMapName;                                  // 0x00F0(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPublic
		class FString                                              UploadingServerName;                                     // 0x0100(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPublic
		bool                                                       bWasAllowDPCUpload;                                      // 0x0110(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bWithItems;                                              // 0x0111(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SW1K[0x2];                                   // 0x0112(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		uint32_t                                                   ItemCount;                                               // 0x0114(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bForServerTransfer;                                      // 0x0118(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8XH0[0x3];                                   // 0x0119(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Version;                                                 // 0x011C(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.PrimalLocalProfile.ArkInventoryData
	 * Size -> 0x0030
	 */
	struct FArkInventoryData
	{
	public:
		TArray<struct FArkTributeInventoryItem>                    ArkItems;                                                // 0x0000(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPublic
		TArray<struct FARKTributeDino>                             ArkTamedDinosData;                                       // 0x0010(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPublic
		TArray<struct FArkTributePlayerData>                       ArkPlayerData;                                           // 0x0020(0x0010) ZeroConstructor, Transient
	};

	/**
	 * ScriptStruct ShooterGame.FogOfWar.FogOfWarInfoStruct
	 * Size -> 0x0038
	 */
	struct FFogOfWarInfoStruct
	{
	public:
		class FString                                              MapName;                                                 // 0x0000(0x0010) ZeroConstructor
		TArray<unsigned char>                                      CompressedVisibilityBuffer;                              // 0x0010(0x0010) ZeroConstructor
		uint32_t                                                   UnCompressedVisibilityBufferSize;                        // 0x0020(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_RKFA[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<bool>                                               UnlockMask;                                              // 0x0028(0x0010) ZeroConstructor
	};

	/**
	 * ScriptStruct ShooterGame.PrimalLocalProfile.MapMarkerPerMapInfo
	 * Size -> 0x0020
	 */
	struct FMapMarkerPerMapInfo
	{
	public:
		class FString                                              MapName;                                                 // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FPrimalMapMarkerEntryData>                   MapMarkers;                                              // 0x0010(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.HazardTrigger.FloorSlopeData
	 * Size -> 0x0018
	 */
	struct FFloorSlopeData
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector                                             SlopeDir;                                                // 0x000C(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct ShooterGame.HazardTrigger_Slide.SlideData
	 * Size -> 0x0050
	 */
	struct FSlideData
	{
	public:
		TWeakObjectPtr<class USplineComponent>                     SplineComponent;                                         // 0x0000(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor
		class UParticleSystemComponent*                            Emitter;                                                 // 0x0008(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor
		float                                                      CurTime;                                                 // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      Duration;                                                // 0x0014(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		TArray<struct FVector>                                     Points;                                                  // 0x0018(0x0010) ZeroConstructor
		TArray<struct FVector>                                     Tangents;                                                // 0x0028(0x0010) ZeroConstructor
		struct FVector                                             Location;                                                // 0x0038(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector                                             Tangent;                                                 // 0x0044(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct ShooterGame.PointOfInterestData
	 * Size -> 0x0140
	 */
	struct FPointOfInterestData
	{
	public:
		unsigned char                                              PointType;                                               // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_36UT[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                PointTag;                                                // 0x0004(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_A1CD[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              PointTitle;                                              // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate
		class FString                                              PointDescription;                                        // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate
		struct FVector                                             PointLocation;                                           // 0x0030(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor
		struct FRotator                                            PointRotation;                                           // 0x003C(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor
		class AActor*                                              PointActor;                                              // 0x0048(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor
		float                                                      PointVisibleDistance;                                    // 0x0050(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor
		float                                                      PointVisibleDotProductRange;                             // 0x0054(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor
		class UTexture2D*                                          PointIcon;                                               // 0x0058(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor
		class UParticleSystem*                                     ViewedPointVFX;                                          // 0x0060(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor
		class USoundCue*                                           ViewedPointSFX;                                          // 0x0068(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor
		class UClass*                                              PointCosmeticActorClass;                                 // 0x0070(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_D68I[0x8];                                   // 0x0078(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          PointCosmeticActorOffsetTransform;                       // 0x0080(0x0030) Edit, BlueprintVisible, DisableEditOnTemplate, IsPlainOldData, NoDestructor
		bool                                                       bHidePointOfInterestTitleBar : 1;                        // 0x00B0(0x0001) BIT_FIELD Edit, BlueprintVisible, DisableEditOnTemplate, NoDestructor
		bool                                                       bPointTagValidated : 1;                                  // 0x00B0(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor
		bool                                                       bPointTagRequiresValidation : 1;                         // 0x00B0(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor
		bool                                                       bOnlyVisibleOffScreen : 1;                               // 0x00B0(0x0001) BIT_FIELD Edit, BlueprintVisible, DisableEditOnTemplate, NoDestructor
		bool                                                       bOnlyVisibleOnScreen : 1;                                // 0x00B0(0x0001) BIT_FIELD Edit, BlueprintVisible, DisableEditOnTemplate, NoDestructor
		bool                                                       bAlwaysVisible : 1;                                      // 0x00B0(0x0001) BIT_FIELD Edit, BlueprintVisible, DisableEditOnTemplate, NoDestructor
		unsigned char                                              UnknownData_LWIG[0x7];                                   // 0x00B1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USoundBase*                                          LocationAddedSound;                                      // 0x00B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor
		class USoundBase*                                          LocationReachedSound;                                    // 0x00C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor
		struct FVector                                             WidgetLocationOffset;                                    // 0x00C8(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor
		float                                                      WidgetHiddenDistance;                                    // 0x00D4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor
		struct FLinearColor                                        IndicatorColor;                                          // 0x00D8(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FLinearColor                                        IconColor;                                               // 0x00E8(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bUsePulseAnimation : 1;                                  // 0x00F8(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor
		bool                                                       bShowProgress : 1;                                       // 0x00F8(0x0001) BIT_FIELD Edit, BlueprintVisible, DisableEditOnTemplate, NoDestructor
		unsigned char                                              UnknownData_6VOP[0x3];                                   // 0x00F9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ProgressValue;                                           // 0x00FC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor
		class FString                                              ProgressLabelText;                                       // 0x0100(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate
		struct FLinearColor                                        ProgressBarColor;                                        // 0x0110(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor
		struct FLinearColor                                        ProgressLabelColor;                                      // 0x0120(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor
		bool                                                       bShowProgressLabelWhenOffScreen : 1;                     // 0x0130(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor
		unsigned char                                              UnknownData_NV6Q[0xF];                                   // 0x0131(0x000F) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ShooterGame.SoundWaveAnimTexturePairs
	 * Size -> 0x0020
	 */
	struct FSoundWaveAnimTexturePairs
	{
	public:
		struct FStringAssetReference                               LocalizedSoundWave;                                      // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor
		struct FStringAssetReference                               MatchingAnimTexture;                                     // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor
	};

	/**
	 * ScriptStruct ShooterGame.LocalizedSoundWaveAnimTexturePairArrays
	 * Size -> 0x0020
	 */
	struct FLocalizedSoundWaveAnimTexturePairArrays
	{
	public:
		class FString                                              TwoLetterISOLanguageName;                                // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor
		TArray<struct FSoundWaveAnimTexturePairs>                  SoundWaveAnimTexturePairs;                               // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor
	};

	/**
	 * ScriptStruct ShooterGame.CompanionReactionData
	 * Size -> 0x00A0
	 */
	struct FCompanionReactionData
	{
	public:
		int32_t                                                    ReactionPriority;                                        // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              ReactionType;                                            // 0x0004(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_2YV6[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ReactionTimePadding_Start;                               // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      ReactionTimePadding_End;                                 // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      ForceReactionDuration;                                   // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_T0K7[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAnimMontage*                                        ReactionAnim;                                            // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      ReactionStartDelay_Anim;                                 // 0x0020(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      ReactionForceDuration_Anim;                              // 0x0024(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UParticleSystem*                                     ReactionVFX;                                             // 0x0028(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      ReactionStartDelay_VFX;                                  // 0x0030(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      ReactionForceDuration_VFX;                               // 0x0034(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		TArray<struct FStringAssetReference>                       ReactionSFXArray;                                        // 0x0038(0x0010) Edit, BlueprintVisible, ZeroConstructor
		float                                                      ReactionStartDelay_SFX;                                  // 0x0048(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      ReactionForceDuration_SFX;                               // 0x004C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bReactionIsMonologue : 1;                                // 0x0050(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor
		bool                                                       bIsReactionPlaying : 1;                                  // 0x0050(0x0001) BIT_FIELD BlueprintVisible, BlueprintReadOnly, NoDestructor
		bool                                                       bIsReactionPlaying_Anim : 1;                             // 0x0050(0x0001) BIT_FIELD BlueprintVisible, BlueprintReadOnly, NoDestructor
		bool                                                       bIsReactionPlaying_VFX : 1;                              // 0x0050(0x0001) BIT_FIELD BlueprintVisible, BlueprintReadOnly, NoDestructor
		bool                                                       bIsReactionPlaying_SFX : 1;                              // 0x0050(0x0001) BIT_FIELD BlueprintVisible, BlueprintReadOnly, NoDestructor
		unsigned char                                              UnknownData_ZIAE[0x7];                                   // 0x0051(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     ReactionStartTime;                                       // 0x0058(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor
		double                                                     ReactionEndTime;                                         // 0x0060(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor
		float                                                      RequiredSecondsSincePreviousReactionInOrderToBePlayed;   // 0x0068(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bDontCancelWhenGreaterOrEqualPriorityPlays : 1;          // 0x006C(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor
		unsigned char                                              UnknownData_VTOG[0x3];                                   // 0x006D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ChanceToOccur;                                           // 0x0070(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_UU2P[0x4];                                   // 0x0074(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FStringAssetReference                               FallbackSharedAnimTexture;                               // 0x0078(0x0010) Edit, BlueprintVisible, ZeroConstructor
		TArray<struct FLocalizedSoundWaveAnimTexturePairArrays>    LocalizedSoundWaves;                                     // 0x0088(0x0010) Edit, BlueprintVisible, ZeroConstructor
		int32_t                                                    ExplorerNoteIndexToUnlock;                               // 0x0098(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_2SP1[0x4];                                   // 0x009C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ShooterGame.PointOfInterestCompanionBehavior
	 * Size -> 0x02B0
	 */
	struct FPointOfInterestCompanionBehavior
	{
	public:
		float                                                      CompanionFocusRange;                                     // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor
		float                                                      CompanionOrbitWithinRange;                               // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor
		float                                                      CompanionOrbitRadius;                                    // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor
		struct FVector                                             OrbitOriginOffset;                                       // 0x000C(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor
		float                                                      CompanionReachedOrbitWithinDistOverride;                 // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor
		float                                                      InterpToOrbitSpeedOverride;                              // 0x001C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor
		float                                                      InterpAroundOrbitSpeedOverride;                          // 0x0020(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_V2IQ[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FCompanionReactionData                              CompanionReaction_WithinRange;                           // 0x0028(0x00A0) Edit, BlueprintVisible, DisableEditOnTemplate
		struct FCompanionReactionData                              CompanionReaction_StartOrbit;                            // 0x00C8(0x00A0) Edit, BlueprintVisible, DisableEditOnTemplate
		struct FCompanionReactionData                              CompanionReaction_ReachedOrbit;                          // 0x0168(0x00A0) Edit, BlueprintVisible, DisableEditOnTemplate
		struct FCompanionReactionData                              CompanionReaction_PointViewed;                           // 0x0208(0x00A0) Edit, BlueprintVisible, DisableEditOnTemplate
		bool                                                       bForceCompanionFocus : 1;                                // 0x02A8(0x0001) BIT_FIELD Edit, BlueprintVisible, DisableEditOnTemplate, NoDestructor
		bool                                                       bOrbitingCompanionLooksAtPoint : 1;                      // 0x02A8(0x0001) BIT_FIELD Edit, BlueprintVisible, DisableEditOnTemplate, NoDestructor
		bool                                                       bForceCompanionLookAtPointActor : 1;                     // 0x02A8(0x0001) BIT_FIELD Edit, BlueprintVisible, DisableEditOnTemplate, NoDestructor
		bool                                                       bRandomlyOrbitAroundAndScan : 1;                         // 0x02A8(0x0001) BIT_FIELD Edit, BlueprintVisible, DisableEditOnTemplate, NoDestructor
		unsigned char                                              UnknownData_H0AD[0x7];                                   // 0x02A9(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ShooterGame.ShooterHUD.HintReplacementKeysForKeyboardControls
	 * Size -> 0x0020
	 */
	struct FHintReplacementKeysForKeyboardControls
	{
	public:
		class FString                                              KeyboardControl;                                         // 0x0000(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		TArray<class FString>                                      ReplacementGamepadControls;                              // 0x0010(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
	};

	/**
	 * ScriptStruct ShooterGame.RadialSelectorHUD_Custom.CustomWheelSettings
	 * Size -> 0x0040
	 */
	struct FCustomWheelSettings
	{
	public:
		class FString                                              CenterText;                                              // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor
		struct FLinearColor                                        CenterTextColorOverride;                                 // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector2D                                           CenterImageSize;                                         // 0x0020(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UTexture2D*                                          CenterImage;                                             // 0x0028(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		int32_t                                                    MinNumDivisions;                                         // 0x0030(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      InnerDistance;                                           // 0x0034(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      OuterDistance;                                           // 0x0038(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bUseCenterTextColorOverride : 1;                         // 0x003C(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor
		unsigned char                                              UnknownData_DKLW[0x3];                                   // 0x003D(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ShooterGame.RadialSelectorHUD_Custom.CustomWheelEntry
	 * Size -> 0x0068
	 */
	struct FCustomWheelEntry
	{
	public:
		TWeakObjectPtr<class UObject>                              Target;                                                  // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class FString                                              TargetFunctionName;                                      // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor
		class FString                                              Label;                                                   // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor
		int32_t                                                    Priority;                                                // 0x0028(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      ActivationTime;                                          // 0x002C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class USoundBase*                                          ActivationSound;                                         // 0x0030(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		int32_t                                                    CustomDataInt;                                           // 0x0038(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class FName                                                CustomDataName;                                          // 0x003C(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FLinearColor                                        TextColorOverride;                                       // 0x0044(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FLinearColor                                        BackgroundColorOverride;                                 // 0x0054(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bUseTextColorOverride : 1;                               // 0x0064(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor
		bool                                                       bUseBackgroundColorOverride : 1;                         // 0x0064(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor
		bool                                                       bPersistWheelOnActivation : 1;                           // 0x0064(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor
		bool                                                       bIsEnabled : 1;                                          // 0x0064(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor
		unsigned char                                              UnknownData_WIHH[0x3];                                   // 0x0065(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ShooterGame.MissionAlertEntry
	 * Size -> 0x0030
	 */
	struct FMissionAlertEntry
	{
	public:
		class UTexture2D*                                          Icon;                                                    // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		int32_t                                                    Count;                                                   // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_AJC1[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Label;                                                   // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor
		class UClass*                                              ItemType;                                                // 0x0020(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bShowCount : 1;                                          // 0x0028(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor
		unsigned char                                              UnknownData_UKWD[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ShooterGame.PrimalGameData.NameScalarPair
	 * Size -> 0x000C
	 */
	struct FNameScalarPair
	{
	public:
		class FName                                                MaterialParamName;                                       // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      Value;                                                   // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct ShooterGame.PrimalGameData.NameColorPair
	 * Size -> 0x0018
	 */
	struct FNameColorPair
	{
	public:
		class FName                                                MaterialParamName;                                       // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FLinearColor                                        Color;                                                   // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct ShooterGame.ShooterHUD.HUDRichTextOverlayData
	 * Size -> 0x0060
	 */
	struct FHUDRichTextOverlayData
	{
	public:
		class FString                                              DisplayText;                                             // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor
		struct FLinearColor                                        DefaultTextColor;                                        // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bIgnoreDefaultTextColor : 1;                             // 0x0020(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor
		unsigned char                                              UnknownData_SVO7[0x3];                                   // 0x0021(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector2D                                           Position;                                                // 0x0024(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		ETextJustify                                               TextAlignment;                                           // 0x002C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		EHorizontalAlignment                                       HorizontalScreenAnchor;                                  // 0x002D(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		EVerticalAlignment                                         VerticalScreenAnchor;                                    // 0x002E(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		EHorizontalAlignment                                       HorizontalWidgetAlignment;                               // 0x002F(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		EVerticalAlignment                                         VerticalWidgetAlignment;                                 // 0x0030(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_GLIK[0x3];                                   // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Scale;                                                   // 0x0034(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bUseAutoWrap : 1;                                        // 0x0038(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor
		unsigned char                                              UnknownData_4IM9[0x3];                                   // 0x0039(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector2D                                           AutoSizeOverride;                                        // 0x003C(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_B10U[0x4];                                   // 0x0044(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              Instigator;                                              // 0x0048(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_IWZ3[0x10];                                  // 0x0050(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ShooterGame.PrimalItem.ItemCraftQueueEntry
	 * Size -> 0x0018
	 */
	struct FItemCraftQueueEntry
	{
	public:
		struct FItemNetID                                          ItemId;                                                  // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor
		int32_t                                                    Quantity;                                                // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bIsRepair;                                               // 0x000C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bIgnoreInventoryRequirement;                             // 0x000D(0x0001) ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor
		unsigned char                                              UnknownData_N7LH[0x2];                                   // 0x000E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      RepairPercentage;                                        // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor
		float                                                      RepairSpeedMultiplier;                                   // 0x0014(0x0004) ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor
	};

	/**
	 * ScriptStruct ShooterGame.ItemMultiplier
	 * Size -> 0x0010
	 */
	struct FItemMultiplier
	{
	public:
		class UClass*                                              ItemClass;                                               // 0x0000(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      ItemMultiplier;                                          // 0x0008(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_SAWM[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ShooterGame.PrimalInventoryComponent.EventItem
	 * Size -> 0x0020
	 */
	struct FEventItem
	{
	public:
		class FName                                                EventName;                                               // 0x0000(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class FString                                              Item;                                                    // 0x0008(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		bool                                                       bIsEngram;                                               // 0x0018(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_GU3O[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ShooterGame.PrimalInventoryComponent.ItemSpawnActorClassOverride
	 * Size -> 0x0010
	 */
	struct FItemSpawnActorClassOverride
	{
	public:
		class UClass*                                              ItemClass;                                               // 0x0000(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UClass*                                              ActorClassOverride;                                      // 0x0008(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct ShooterGame.PrimalInventoryComponent.ItemCraftingConsumptionReplenishment
	 * Size -> 0x0018
	 */
	struct FItemCraftingConsumptionReplenishment
	{
	public:
		TArray<class UClass*>                                      ItemResourceClasses;                                     // 0x0000(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		class UClass*                                              ToReplaceWithClass;                                      // 0x0010(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct ShooterGame.PrimalInventoryComponent.ServerCustomFolder
	 * Size -> 0x0028
	 */
	struct FServerCustomFolder
	{
	public:
		int32_t                                                    InventoryCompType;                                       // 0x0000(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DRLU[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              FolderName;                                              // 0x0008(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPublic
		TArray<struct FItemNetID>                                  CustomFolderItemIds;                                     // 0x0018(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.CustomButtonWidgetStyle
	 * Size -> 0x0040 (FullSize[0x0048] - InheritedSize[0x0008])
	 */
	struct FCustomButtonWidgetStyle : public FSlateWidgetStyle
	{
	public:
		struct FLinearColor                                        NormalChildTintColor;                                    // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FLinearColor                                        HoveredChildTintColor;                                   // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FLinearColor                                        PressedChildTintColor;                                   // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FLinearColor                                        DisabledChildTintColor;                                  // 0x0038(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct ShooterGame.PrimalInventoryComponent.OverrideMultiuseButtonStyle
	 * Size -> 0x0290
	 */
	struct FOverrideMultiuseButtonStyle
	{
	public:
		struct FButtonStyle                                        Style;                                                   // 0x0000(0x0248) Edit, DisableEditOnInstance
		struct FCustomButtonWidgetStyle                            ExtendedStyle;                                           // 0x0248(0x0048) Edit, DisableEditOnInstance
	};

	/**
	 * ScriptStruct ShooterGame.PrimalPlayerCharacterConfigStruct
	 * Size -> 0x00D8
	 */
	struct FPrimalPlayerCharacterConfigStruct
	{
	public:
		bool                                                       bIsFemale : 1;                                           // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor
		unsigned char                                              UnknownData_TSX5[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLinearColor                                        BodyColors[0x4];                                         // 0x0004(0x0040) ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor
		struct FLinearColor                                        OverrideHeadHairColor;                                   // 0x0044(0x0010) ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor
		struct FLinearColor                                        OverrideFacialHairColor;                                 // 0x0054(0x0010) ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor
		unsigned char                                              FacialHairIndex;                                         // 0x0064(0x0001) ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor
		unsigned char                                              HeadHairIndex;                                           // 0x0065(0x0001) ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor
		unsigned char                                              UnknownData_N2OA[0x2];                                   // 0x0066(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              PlayerCharacterName;                                     // 0x0068(0x0010) Edit, BlueprintVisible, ZeroConstructor
		float                                                      RawBoneModifiers[0x16];                                  // 0x0078(0x0058) ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor
		int32_t                                                    PlayerSpawnRegionIndex;                                  // 0x00D0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_8MY3[0x4];                                   // 0x00D4(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ShooterGame.PrimalPlayerData.DinoOrderID
	 * Size -> 0x0018
	 */
	struct FDinoOrderID
	{
	public:
		int32_t                                                    DinoID1;                                                 // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		int32_t                                                    DinoID2;                                                 // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		class FString                                              DinoName;                                                // 0x0008(0x0010) ZeroConstructor
	};

	/**
	 * ScriptStruct ShooterGame.PrimalPlayerData.DinoOrderGroup
	 * Size -> 0x0030
	 */
	struct FDinoOrderGroup
	{
	public:
		class FString                                              DinoOrderGroupName;                                      // 0x0000(0x0010) ZeroConstructor
		TArray<class UClass*>                                      DinoOrderClasses;                                        // 0x0010(0x0010) ZeroConstructor
		TArray<struct FDinoOrderID>                                DinoOrderIDs;                                            // 0x0020(0x0010) ZeroConstructor
	};

	/**
	 * ScriptStruct ShooterGame.PrimalPlayerData.PrimalPersistentCharacterStatsStruct
	 * Size -> 0x02C8
	 */
	struct FPrimalPersistentCharacterStatsStruct
	{
	public:
		uint16_t                                                   CharacterStatusComponent_ExtraCharacterLevel;            // 0x0000(0x0002) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_0992[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CharacterStatusComponent_ExperiencePoints;               // 0x0004(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		int32_t                                                    PlayerState_TotalEngramPoints;                           // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		int32_t                                                    PlayerState_PurchasedEngramPoints;                       // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		int32_t                                                    CharacterStatusComponent_HighestExtraCharacterLevel;     // 0x0010(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor
		int32_t                                                    CharacterStatusComponent_LastRespecAtExtraCharacterLevel; // 0x0014(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor
		double                                                     CharacterStatusComponent_LastRespecUtcTimeSeconds;       // 0x0018(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor
		TArray<uint32_t>                                           PerMapExplorerNoteUnlocks;                               // 0x0020(0x0010) ZeroConstructor
		TArray<class FName>                                        EmoteUnlocks;                                            // 0x0030(0x0010) ZeroConstructor
		TArray<class UClass*>                                      PlayerState_EngramBlueprints;                            // 0x0040(0x0010) ZeroConstructor, RepSkip
		unsigned char                                              CharacterStatusComponent_NumberOfLevelUpPointsApplied[0xC]; // 0x0050(0x000C) ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor
		unsigned char                                              UnknownData_D5IB[0x4];                                   // 0x005C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              PlayerState_DefaultItemSlotClasses[0xA];                 // 0x0060(0x0050) ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor
		unsigned char                                              PlayerState_DefaultItemSlotEngrams[0xA];                 // 0x00B0(0x000A) ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor
		unsigned char                                              UnknownData_B842[0x6];                                   // 0x00BA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDinoOrderGroup                                     DinoOrderGroups[0xA];                                    // 0x00C0(0x01E0) RepSkip
		int32_t                                                    CurrentlySelectedDinoOrderGroup;                         // 0x02A0(0x0004) ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor
		float                                                      PercentageOfHeadHairGrowth;                              // 0x02A4(0x0004) ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor
		bool                                                       bHasUnlockedAllExplorerNotes;                            // 0x02A8(0x0001) ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor
		unsigned char                                              UnknownData_2DMJ[0x3];                                   // 0x02A9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      PercentageOfFacialHairGrowth;                            // 0x02AC(0x0004) ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor
		unsigned char                                              FacialHairIndex;                                         // 0x02B0(0x0001) ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor
		unsigned char                                              HeadHairIndex;                                           // 0x02B1(0x0001) ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor
		unsigned char                                              UnknownData_XZUG[0x6];                                   // 0x02B2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UClass*>                                      ForcedUnlockDefaultCosmetics;                            // 0x02B8(0x0010) ZeroConstructor, RepSkip
	};

	/**
	 * ScriptStruct ShooterGame.LeaderboardRow
	 * Size -> 0x0048
	 */
	struct FLeaderboardRow
	{
	public:
		class FName                                                MissionTag;                                              // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class FString                                              PlayerNetId;                                             // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor
		int32_t                                                    TribeId;                                                 // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_3RD4[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     TimestampUtc;                                            // 0x0020(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      FloatValue;                                              // 0x0028(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		int32_t                                                    IntValue;                                                // 0x002C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class FName                                                NameValue;                                               // 0x0030(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class FString                                              StringValue;                                             // 0x0038(0x0010) Edit, BlueprintVisible, ZeroConstructor
	};

	/**
	 * ScriptStruct ShooterGame.PrimalPlayerData.LatestMissionScore
	 * Size -> 0x00A0
	 */
	struct FLatestMissionScore
	{
	public:
		class FName                                                MissionTag;                                              // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor
		struct FLeaderboardRow                                     LatestScore;                                             // 0x0008(0x0048)
		struct FLeaderboardRow                                     BestScore;                                               // 0x0050(0x0048)
		bool                                                       bHasValidScore;                                          // 0x0098(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_YJRQ[0x7];                                   // 0x0099(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ShooterGame.PrimalPlayerData.PrimalPlayerDataStruct
	 * Size -> 0x0450
	 */
	struct FPrimalPlayerDataStruct
	{
	public:
		uint64_t                                                   PlayerDataID;                                            // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor
		struct FUniqueNetIdRepl                                    UniqueID;                                                // 0x0008(0x0010)
		class FString                                              SavedNetworkAddress;                                     // 0x0018(0x0010) ZeroConstructor
		class FString                                              PlayerName;                                              // 0x0028(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor
		uint32_t                                                   LocalPlayerIndex;                                        // 0x0038(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bFirstSpawned : 1;                                       // 0x003C(0x0001) BIT_FIELD NoDestructor
		bool                                                       bUseSpectator : 1;                                       // 0x003C(0x0001) BIT_FIELD NoDestructor
		unsigned char                                              UnknownData_OORN[0x3];                                   // 0x003D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPrimalPlayerCharacterConfigStruct                  MyPlayerCharacterConfig;                                 // 0x0040(0x00D8)
		int32_t                                                    LastPinCodeUsed;                                         // 0x0118(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_UBV5[0x4];                                   // 0x011C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPrimalPersistentCharacterStatsStruct               MyPersistentCharacterStats;                              // 0x0120(0x02C8)
		int32_t                                                    NumPersonalDinos;                                        // 0x03E8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		int32_t                                                    TribeId;                                                 // 0x03EC(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor
		TArray<int32_t>                                            AppIDSet;                                                // 0x03F0(0x0010) ZeroConstructor
		int32_t                                                    PlayerDataVersion;                                       // 0x0400(0x0004) ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor
		unsigned char                                              UnknownData_ERI7[0x4];                                   // 0x0404(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     NextAllowedRespawnTime;                                  // 0x0408(0x0008) ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor
		double                                                     LastTimeDiedToEnemyTeam;                                 // 0x0410(0x0008) ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor
		double                                                     LoginTime;                                               // 0x0418(0x0008) ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor
		double                                                     LastLoginTime;                                           // 0x0420(0x0008) ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor
		float                                                      AllowedRespawnInterval;                                  // 0x0428(0x0004) ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor
		float                                                      NumOfDeaths;                                             // 0x042C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		int32_t                                                    SpawnDayNumber;                                          // 0x0430(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      SpawnDayTime;                                            // 0x0434(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		double                                                     LastInventoryRetrievalUTCTime;                           // 0x0438(0x0008) ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor
		TArray<struct FLatestMissionScore>                         LatestMissionScores;                                     // 0x0440(0x0010) ZeroConstructor, RepSkip
	};

	/**
	 * ScriptStruct ShooterGame.PrimalPlayerData.EngramsSetSoftReferenceMapping
	 * Size -> 0x0010
	 */
	struct FEngramsSetSoftReferenceMapping
	{
	public:
		TArray<class FString>                                      EngramSetToUnlock;                                       // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
	};

	/**
	 * ScriptStruct ShooterGame.PrimalPlayerData.BossEngramsSoftReferenceMapping
	 * Size -> 0x0010
	 */
	struct FBossEngramsSoftReferenceMapping
	{
	public:
		TArray<struct FEngramsSetSoftReferenceMapping>             EngramSets;                                              // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
	};

	/**
	 * ScriptStruct ShooterGame.PrimalGameData.TribeAlliance
	 * Size -> 0x0048
	 */
	struct FTribeAlliance
	{
	public:
		class FString                                              AllianceName;                                            // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		uint32_t                                                   AllianceID;                                              // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_240S[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FString>                                      MembersTribeName;                                        // 0x0018(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<uint32_t>                                           MembersTribeID;                                          // 0x0028(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<uint32_t>                                           AdminsTribeID;                                           // 0x0038(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.PrimalGameData.TribeGovernment
	 * Size -> 0x0014
	 */
	struct FTribeGovernment
	{
	public:
		int32_t                                                    TribeGovern_PINCode;                                     // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		int32_t                                                    TribeGovern_DinoOwnership;                               // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		int32_t                                                    TribeGovern_StructureOwnership;                          // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		int32_t                                                    TribeGovern_DinoTaming;                                  // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		int32_t                                                    TribeGovern_DinoUnclaimAdminOnly;                        // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.PrimalGameData.TribeWar
	 * Size -> 0x0030
	 */
	struct FTribeWar
	{
	public:
		int32_t                                                    EnemyTribeID;                                            // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		int32_t                                                    StartDayNumber;                                          // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		int32_t                                                    EndDayNumber;                                            // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      StartDayTime;                                            // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      EndDayTime;                                              // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bIsApproved;                                             // 0x0014(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UD7D[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    InitiatingTribeID;                                       // 0x0018(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XB8I[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              EnemyTribeName;                                          // 0x0020(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.PrimalGameData.TribeRankGroup
	 * Size -> 0x0028
	 */
	struct FTribeRankGroup
	{
	public:
		class FString                                              RankGroupName;                                           // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              RankGroupRank;                                           // 0x0010(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              InventoryRank;                                           // 0x0011(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              StructureActivationRank;                                 // 0x0012(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              NewStructureActivationRank;                              // 0x0013(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              NewStructureInventoryRank;                               // 0x0014(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              PetOrderRank;                                            // 0x0015(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              PetRidingRank;                                           // 0x0016(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              InviteToGroupRank;                                       // 0x0017(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              MaxPromotionGroupRank;                                   // 0x0018(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              MaxDemotionGroupRank;                                    // 0x0019(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              MaxBanishmentGroupRank;                                  // 0x001A(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              NumInvitesRemaining;                                     // 0x001B(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bPreventStructureDemolish : 1;                           // 0x001C(0x0001) BIT_FIELD NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bPreventStructureAttachment : 1;                         // 0x001C(0x0001) BIT_FIELD NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bPreventStructureBuildInRange : 1;                       // 0x001C(0x0001) BIT_FIELD NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bPreventUnclaiming : 1;                                  // 0x001C(0x0001) BIT_FIELD NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bAllowInvites : 1;                                       // 0x001C(0x0001) BIT_FIELD NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bLimitInvites : 1;                                       // 0x001C(0x0001) BIT_FIELD NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bAllowDemotions : 1;                                     // 0x001C(0x0001) BIT_FIELD NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bAllowPromotions : 1;                                    // 0x001C(0x0001) BIT_FIELD NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bAllowBanishments : 1;                                   // 0x001D(0x0001) BIT_FIELD NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4S7Z[0x2];                                   // 0x001E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              TeleportMembersRank;                                     // 0x0020(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              TeleportDinosRank;                                       // 0x0021(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_APDB[0x2];                                   // 0x0022(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bDefaultRank : 1;                                        // 0x0024(0x0001) BIT_FIELD NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CE5R[0x3];                                   // 0x0025(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ShooterGame.PrimalGameData.TribeData
	 * Size -> 0x0138
	 */
	struct FTribeData
	{
	public:
		class FString                                              TribeName;                                               // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		double                                                     LastNameChangeTime;                                      // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		uint32_t                                                   OwnerPlayerDataID;                                       // 0x0018(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		int32_t                                                    TribeId;                                                 // 0x001C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		TArray<class FString>                                      MembersPlayerName;                                       // 0x0020(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<uint32_t>                                           MembersPlayerDataID;                                     // 0x0030(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<unsigned char>                                      MembersRankGroups;                                       // 0x0040(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<double>                                             SlotFreedTime;                                           // 0x0050(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<uint32_t>                                           TribeAdmins;                                             // 0x0060(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FTribeAlliance>                              TribeAlliances;                                          // 0x0070(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       bSetGovernment;                                          // 0x0080(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NDWA[0x3];                                   // 0x0081(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTribeGovernment                                    TribeGovernment;                                         // 0x0084(0x0014) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		TArray<struct FPrimalPlayerCharacterConfigStruct>          MembersConfigs;                                          // 0x0098(0x0010) ZeroConstructor, RepSkip, NativeAccessSpecifierPublic
		TArray<struct FTribeWar>                                   TribeWars;                                               // 0x00A8(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class FString>                                      TribeLog;                                                // 0x00B8(0x0010) ZeroConstructor, RepSkip, NativeAccessSpecifierPublic
		int32_t                                                    LogIndex;                                                // 0x00C8(0x0004) ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_N0KO[0x4];                                   // 0x00CC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FTribeRankGroup>                             TribeRankGroups;                                         // 0x00D0(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		int32_t                                                    NumTribeDinos;                                           // 0x00E0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_DTJP[0x54];                                  // 0x00E4(0x0054) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ShooterGame.PrimalPlayerData.PrimalPlayerCharacterConfigStructReplicated
	 * Size -> 0x00B8
	 */
	struct FPrimalPlayerCharacterConfigStructReplicated
	{
	public:
		bool                                                       bIsFemale : 1;                                           // 0x0000(0x0001) BIT_FIELD NoDestructor
		unsigned char                                              UnknownData_B8TJ[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLinearColor                                        BodyColors[0x4];                                         // 0x0004(0x0040) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_D72C[0x4];                                   // 0x0044(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              PlayerCharacterName;                                     // 0x0048(0x0010) ZeroConstructor
		float                                                      RawBoneModifiers[0x16];                                  // 0x0058(0x0058) ZeroConstructor, IsPlainOldData, NoDestructor
		int32_t                                                    PlayerSpawnRegionIndex;                                  // 0x00B0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_A4DO[0x4];                                   // 0x00B4(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ShooterGame.ShooterPlayerState.SpawnPointInfo
	 * Size -> 0x0048
	 */
	struct FSpawnPointInfo
	{
	public:
		int32_t                                                    SpawnPointID;                                            // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_KA2Y[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              BedName;                                                 // 0x0008(0x0010) ZeroConstructor
		class ABiomeZoneVolume*                                    SpawnPointVolume;                                        // 0x0018(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor
		class UClass*                                              SpawnPointActorClass;                                    // 0x0020(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector                                             AtLocation;                                              // 0x0028(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_JY7P[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     NextAllowedUseTime;                                      // 0x0038(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bAllowedUse;                                             // 0x0040(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_NRC3[0x7];                                   // 0x0041(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ShooterGame.ShooterPlayerState.ServerOptions
	 * Size -> 0x02A0
	 */
	struct FServerOptions
	{
	public:
		class FString                                              MaxStructuresInRange;                                    // 0x0000(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		class FString                                              DifficultyOffset;                                        // 0x0010(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		class FString                                              GlobalVoiceChat;                                         // 0x0020(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		class FString                                              ProximityChat;                                           // 0x0030(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		class FString                                              NoTributeDownloads;                                      // 0x0040(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		class FString                                              AllowThirdPersonPlayer;                                  // 0x0050(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		class FString                                              AlwaysNotifyPlayerLeft;                                  // 0x0060(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		class FString                                              DontAlwaysNotifyPlayerJoined;                            // 0x0070(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		class FString                                              ServerHardcore;                                          // 0x0080(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		class FString                                              ServerPVE;                                               // 0x0090(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		class FString                                              ServerCrosshair;                                         // 0x00A0(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		class FString                                              ServerForceNoHUD;                                        // 0x00B0(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		class FString                                              ShowMapPlayerLocation;                                   // 0x00C0(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		class FString                                              ServerPassword;                                          // 0x00D0(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		class FString                                              ServerAdminPassword;                                     // 0x00E0(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		class FString                                              SpectatorPassword;                                       // 0x00F0(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		class FString                                              DayCycleSpeedScale;                                      // 0x0100(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		class FString                                              DayTimeSpeedScale;                                       // 0x0110(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		class FString                                              NightTimeSpeedScale;                                     // 0x0120(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		class FString                                              DinoDamageMultiplier;                                    // 0x0130(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		class FString                                              PlayerDamageMultiplier;                                  // 0x0140(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		class FString                                              StructureDamageMultiplier;                               // 0x0150(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		class FString                                              PlayerResistanceMultiplier;                              // 0x0160(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		class FString                                              DinoResistanceMultiplier;                                // 0x0170(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		class FString                                              StructureResistanceMultiplier;                           // 0x0180(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		class FString                                              XPMultiplier;                                            // 0x0190(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		class FString                                              TamingSpeedMultiplier;                                   // 0x01A0(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		class FString                                              HarvestAmountMultiplier;                                 // 0x01B0(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		class FString                                              PlayerCharacterWaterDrainMultiplier;                     // 0x01C0(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		class FString                                              PlayerCharacterFoodDrainMultiplier;                      // 0x01D0(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		class FString                                              DinoCharacterFoodDrainMultiplier;                        // 0x01E0(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		class FString                                              PlayerCharacterStaminaDrainMultiplier;                   // 0x01F0(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		class FString                                              DinoCharacterStaminaDrainMultiplier;                     // 0x0200(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		class FString                                              PlayerCharacterHealthRecoveryMultiplier;                 // 0x0210(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		class FString                                              DinoCharacterHealthRecoveryMultiplier;                   // 0x0220(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		class FString                                              DinoCountMultiplier;                                     // 0x0230(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		class FString                                              HarvestHealthMultiplier;                                 // 0x0240(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		class FString                                              PvEStructureDecayPeriodMultiplier;                       // 0x0250(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		class FString                                              ResourcesRespawnPeriodMultiplier;                        // 0x0260(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		class FString                                              EnablePvPGamma;                                          // 0x0270(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		class FString                                              DisableStructureDecayPvE;                                // 0x0280(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		class FString                                              AllowFlyerCarryPvE;                                      // 0x0290(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
	};

	/**
	 * ScriptStruct ShooterGame.ShooterPlayerState.AdminPlayerDataInfo
	 * Size -> 0x0040
	 */
	struct FAdminPlayerDataInfo
	{
	public:
		class FString                                              PlayerName;                                              // 0x0000(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		class FString                                              PlayerSteamName;                                         // 0x0010(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		class FString                                              SteamID;                                                 // 0x0020(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		int64_t                                                    LinkedPlayerID;                                          // 0x0030(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsHost;                                                  // 0x0038(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_5BDV[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ShooterGame.ShooterPlayerState.AliveNameAndLocation
	 * Size -> 0x0040
	 */
	struct FAliveNameAndLocation
	{
	public:
		class FString                                              PlayerName;                                              // 0x0000(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		class FString                                              TribeName;                                               // 0x0010(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		uint32_t                                                   TargetingTeam;                                           // 0x0020(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_LAZR[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		uint64_t                                                   PlayerId;                                                // 0x0028(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FVector                                             Location;                                                // 0x0030(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_NE5D[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ShooterGame.ShooterPlayerState.AlivePlayerDataInfo
	 * Size -> 0x0040
	 */
	struct FAlivePlayerDataInfo
	{
	public:
		class FString                                              PlayerName;                                              // 0x0000(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		class FString                                              PlayerSteamName;                                         // 0x0010(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		uint64_t                                                   PlayerId;                                                // 0x0020(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class FString                                              TribeName;                                               // 0x0028(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		uint64_t                                                   TargetingTeamID;                                         // 0x0038(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct ShooterGame.ShooterPlayerController.DinoMapMarkerInfo
	 * Size -> 0x0028
	 */
	struct FDinoMapMarkerInfo
	{
	public:
		class APrimalDinoCharacter*                                Dino;                                                    // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor
		class UStaticMeshComponent*                                MarkerComponent;                                         // 0x0008(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor
		struct FVector                                             DinoLocation;                                            // 0x0010(0x000C) ZeroConstructor, Transient, IsPlainOldData, NoDestructor
		int32_t                                                    PreviousLatitudeNumber;                                  // 0x001C(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor
		int32_t                                                    PreviousLongitudeNumber;                                 // 0x0020(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor
		struct FColor                                              MarkerColor;                                             // 0x0024(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct ShooterGame.ServerChatMessage
	 * Size -> 0x0050
	 */
	struct FServerChatMessage
	{
	public:
		unsigned char                                              UnknownData_1NX5[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              MessageText;                                             // 0x0008(0x0010) ZeroConstructor
		struct FLinearColor                                        MessageColor;                                            // 0x0018(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bIsBold;                                                 // 0x0028(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_TJT5[0x3];                                   // 0x0029(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      DisplayScale;                                            // 0x002C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      DisplayTime;                                             // 0x0030(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_LUUB[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTexture2D*                                          MessageIcon;                                             // 0x0038(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor
		class USoundBase*                                          SoundToPlay;                                             // 0x0040(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor
		int32_t                                                    MessageTypeID;                                           // 0x0048(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_QDEK[0x4];                                   // 0x004C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ShooterGame.ShooterPlayerController.PingData
	 * Size -> 0x0050
	 */
	struct FPingData
	{
	public:
		unsigned char                                              PingID;                                                  // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_ZOJI[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             PingedLocation;                                          // 0x0004(0x000C) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor
		class UPrimitiveComponent*                                 PingedComponent;                                         // 0x0010(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor
		class UTexture2D*                                          PingIcon;                                                // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor
		uint32_t                                                   CreatedByPlayerID;                                       // 0x0020(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_KM8C[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AShooterCharacter*                                   CreatedByPlayerChar;                                     // 0x0028(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor
		TArray<class AShooterCharacter*>                           RespondedPlayerChars;                                    // 0x0030(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst
		double                                                     PingCreationTime;                                        // 0x0040(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor
		bool                                                       bHasBeenViewed : 1;                                      // 0x0048(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor
		bool                                                       bIsDying : 1;                                            // 0x0048(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor
		bool                                                       bIsDead : 1;                                             // 0x0048(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor
		unsigned char                                              UnknownData_10IY[0x7];                                   // 0x0049(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ShooterGame.PointOfInterestData_ForCompanion
	 * Size -> 0x03F0
	 */
	struct FPointOfInterestData_ForCompanion
	{
	public:
		struct FPointOfInterestData                                PointData;                                               // 0x0000(0x0140) Edit, BlueprintVisible, DisableEditOnTemplate
		struct FPointOfInterestCompanionBehavior                   PointCompanionBehavior;                                  // 0x0140(0x02B0) Edit, BlueprintVisible, DisableEditOnTemplate
	};

	/**
	 * ScriptStruct ShooterGame.MissionWaypointInfo
	 * Size -> 0x0028
	 */
	struct FMissionWaypointInfo
	{
	public:
		bool                                                       bWaypointActive;                                         // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_48ZM[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             WaypointDestination;                                     // 0x0004(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor
		class FString                                              WaypointTitle;                                           // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate
		class FName                                                WaypointID;                                              // 0x0020(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct ShooterGame.TamingDinoInfo
	 * Size -> 0x0058
	 */
	struct FTamingDinoInfo
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010) ZeroConstructor
		float                                                      TameAffinityPercent;                                     // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      HealthPercent;                                           // 0x0014(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      HealthCurrent;                                           // 0x0018(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      HealthMax;                                               // 0x001C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      HungerPercent;                                           // 0x0020(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      HungerCurrent;                                           // 0x0024(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      HungerMax;                                               // 0x0028(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      TorpidityPercent;                                        // 0x002C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      TameEffectivenessPercent;                                // 0x0030(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		int32_t                                                    TameEffectivenessLvlModifier;                            // 0x0034(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector                                             Location;                                                // 0x0038(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bIsConcious;                                             // 0x0044(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bUseGender;                                              // 0x0045(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bIsFemale;                                               // 0x0046(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bIsTamed;                                                // 0x0047(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		uint32_t                                                   DataID1;                                                 // 0x0048(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		uint32_t                                                   DataID2;                                                 // 0x004C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		class UClass*                                              DinoEntry;                                               // 0x0050(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct ShooterGame.TamingWaypointInfo
	 * Size -> 0x0090
	 */
	struct FTamingWaypointInfo
	{
	public:
		bool                                                       bWaypointActive;                                         // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_YE6S[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             WaypointDestination;                                     // 0x0004(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor
		class FString                                              WaypointTitle;                                           // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate
		int32_t                                                    WaypointID;                                              // 0x0020(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_II0W[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTexture2D*                                          Icon;                                                    // 0x0028(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor
		struct FTamingDinoInfo                                     DinoInfo;                                                // 0x0030(0x0058) Edit, BlueprintVisible, DisableEditOnTemplate
		float                                                      ProgressBarPercent;                                      // 0x0088(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor
		bool                                                       bIsTamed;                                                // 0x008C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_3O68[0x3];                                   // 0x008D(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ShooterGame.ShooterPlayerController.StructHighlightInfo
	 * Size -> 0x0018
	 */
	struct FStructHighlightInfo
	{
	public:
		TWeakObjectPtr<class APrimalStructure>                     Structure;                                               // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor
		struct FLinearColor                                        HighlightColor;                                          // 0x0008(0x0010) ZeroConstructor, Transient, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct ShooterGame.PaintItem
	 * Size -> 0x0020
	 */
	struct FPaintItem
	{
	public:
		class UPrimalInventoryComponent*                           InventoryComp;                                           // 0x0000(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor
		struct FItemNetID                                          ItemId;                                                  // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              ColorCode;                                               // 0x0010(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_KR6F[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      X;                                                       // 0x0014(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      Y;                                                       // 0x0018(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_Z37Y[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ShooterGame.DataSet
	 * Size -> 0x0078
	 */
	struct FDataSet
	{
	public:
		class FName                                                DataSetName;                                             // 0x0000(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		TArray<class FName>                                        ListNames;                                               // 0x0008(0x0010) BlueprintVisible, ZeroConstructor
		TArray<class FString>                                      ListStrings;                                             // 0x0018(0x0010) BlueprintVisible, ZeroConstructor
		TArray<int32_t>                                            ListInts;                                                // 0x0028(0x0010) BlueprintVisible, ZeroConstructor
		TArray<float>                                              ListFloats;                                              // 0x0038(0x0010) BlueprintVisible, ZeroConstructor
		TArray<class UObject*>                                     ListObjects;                                             // 0x0048(0x0010) BlueprintVisible, ZeroConstructor
		TArray<class AActor*>                                      ListActors;                                              // 0x0058(0x0010) BlueprintVisible, ZeroConstructor
		unsigned char                                              UnknownData_UKJI[0x10];                                  // 0x0068(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ShooterGame.ShooterPlayerController.ReplicatePingData
	 * Size -> 0x0028
	 */
	struct FReplicatePingData
	{
	public:
		unsigned char                                              Rep_PingID;                                              // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_LTM2[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             Rep_PingedLocation;                                      // 0x0004(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor
		class UPrimitiveComponent*                                 Rep_PingedComponent;                                     // 0x0010(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor
		uint32_t                                                   Rep_PingedByPlayerID;                                    // 0x0018(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_EQUQ[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AShooterCharacter*                                   Rep_PingedByPlayerChar;                                  // 0x0020(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct ShooterGame.HitMarkerSettings
	 * Size -> 0x0028
	 */
	struct FHitMarkerSettings
	{
	public:
		bool                                                       bIsVisible : 1;                                          // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor
		bool                                                       bPlayHitSound : 1;                                       // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor
		unsigned char                                              UnknownData_IVUY[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLinearColor                                        Color;                                                   // 0x0004(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      DrawDuration;                                            // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector2D                                           Scale;                                                   // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class USoundBase*                                          HitSound;                                                // 0x0020(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct ShooterGame.PrimalLocalProfile.ARKTributeDinoListing
	 * Size -> 0x00F0
	 */
	struct FARKTributeDinoListing
	{
	public:
		class FString                                              DinoName;                                                // 0x0000(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPublic
		class FString                                              DinoStats[0xC];                                          // 0x0010(0x00C0) ZeroConstructor, Transient, NativeAccessSpecifierPublic
		float                                                      DinoExperiencePoints;                                    // 0x00D0(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_O6OR[0x4];                                   // 0x00D4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              DinoClass;                                               // 0x00D8(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor
		uint32_t                                                   DinoID1;                                                 // 0x00E0(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor
		uint32_t                                                   DinoID2;                                                 // 0x00E4(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor
		uint32_t                                                   ExpirationTimeUTC;                                       // 0x00E8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_8PIM[0x4];                                   // 0x00EC(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ShooterGame.PrimalLocalProfile.ArkTributePlayerDataListing
	 * Size -> 0x0110
	 */
	struct FArkTributePlayerDataListing
	{
	public:
		uint64_t                                                   PlayerDataID;                                            // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor
		class FString                                              PlayerName;                                              // 0x0008(0x0010) ZeroConstructor
		class FString                                              PlayerStats[0xC];                                        // 0x0018(0x00C0) ZeroConstructor, Transient, NativeAccessSpecifierPublic
		bool                                                       bWasAllowDPCUpload;                                      // 0x00D8(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BG2J[0x7];                                   // 0x00D9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              UploadingServerMapName;                                  // 0x00E0(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPublic
		class FString                                              UploadingServerName;                                     // 0x00F0(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPublic
		bool                                                       bWithItems;                                              // 0x0100(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9VG4[0x3];                                   // 0x0101(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		uint32_t                                                   ItemCount;                                               // 0x0104(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      Version;                                                 // 0x0108(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		uint32_t                                                   ExpirationTimeUTC;                                       // 0x010C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct ShooterGame.ShooterPlayerController.StructuresOnFloor
	 * Size -> 0x0018
	 */
	struct FStructuresOnFloor
	{
	public:
		class APrimalStructure*                                    FloorStructure;                                          // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		TArray<class APrimalStructure*>                            StructuresOnFloor;                                       // 0x0008(0x0010) Edit, ZeroConstructor
	};

	/**
	 * ScriptStruct ShooterGame.ChatMessage
	 * Size -> 0x0090
	 */
	struct FChatMessage
	{
	public:
		class FString                                              SenderName;                                              // 0x0000(0x0010) ZeroConstructor
		class FString                                              SenderSteamName;                                         // 0x0010(0x0010) ZeroConstructor
		class FString                                              SenderTribeName;                                         // 0x0020(0x0010) ZeroConstructor
		uint32_t                                                   SenderId;                                                // 0x0030(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_2SEN[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Message;                                                 // 0x0038(0x0010) ZeroConstructor
		class FString                                              Receiver;                                                // 0x0048(0x0010) ZeroConstructor
		int32_t                                                    SenderTeamIndex;                                         // 0x0058(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_CWPC[0x4];                                   // 0x005C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     ReceivedTime;                                            // 0x0060(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor
		EChatSendMode                                              SendMode;                                                // 0x0068(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_IU8L[0x3];                                   // 0x0069(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		uint32_t                                                   RadioFrequency;                                          // 0x006C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		EChatType                                                  ChatType;                                                // 0x0070(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_A4HL[0x7];                                   // 0x0071(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTexture2D*                                          SenderIcon;                                              // 0x0078(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor
		class FString                                              UserId;                                                  // 0x0080(0x0010) ZeroConstructor
	};

	/**
	 * ScriptStruct ShooterGame.DecalData
	 * Size -> 0x0020
	 */
	struct FDecalData
	{
	public:
		class UMaterialInterface*                                  DecalMaterial;                                           // 0x0000(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      DecalSize;                                               // 0x0008(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      DecalDepth;                                              // 0x000C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      DecalImpactNormalOffset;                                 // 0x0010(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      LifeSpan;                                                // 0x0014(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      RandomAngleRange;                                        // 0x0018(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_1H3I[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ShooterGame.BiomeZoneVolumeEffectUtility.BiomeZoneVolumeEffect
	 * Size -> 0x0048
	 */
	struct FBiomeZoneVolumeEffect
	{
	public:
		EBiomeZone                                                 BiomeZone;                                               // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_G1E9[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UParticleSystem*                                     ParticleSystem;                                          // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FDecalData                                          DecalData;                                               // 0x0010(0x0020) Edit
		bool                                                       bIsImpactEffect : 1;                                     // 0x0030(0x0001) BIT_FIELD Edit, NoDestructor
		bool                                                       bIsNonImpactEffect : 1;                                  // 0x0030(0x0001) BIT_FIELD Edit, NoDestructor
		bool                                                       bIsUnderwaterEffect : 1;                                 // 0x0030(0x0001) BIT_FIELD Edit, NoDestructor
		bool                                                       bDecalUniformSize : 1;                                   // 0x0030(0x0001) BIT_FIELD Edit, NoDestructor
		unsigned char                                              UnknownData_BT8Y[0x3];                                   // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Weight;                                                  // 0x0034(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      MinSpawnDistance;                                        // 0x0038(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      MaxSpawnDistance;                                        // 0x003C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      ScaleAtMinDistance;                                      // 0x0040(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      ScaleAtMaxDistance;                                      // 0x0044(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct ShooterGame.BiomeZoneVolumeEffectUtility.BiomeZoneImpactEffect
	 * Size -> 0x0080
	 */
	struct FBiomeZoneImpactEffect
	{
	public:
		class UClass*                                              SpawnActors[0x10];                                       // 0x0000(0x0080) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct ShooterGame.ObjectInfo
	 * Size -> 0x0030
	 */
	struct FObjectInfo
	{
	public:
		class UObject*                                             Asset;                                                   // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		class UClass*                                              ActorToSpawn;                                            // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      HeightOffset;                                            // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      Radius;                                                  // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      MinimumProbability;                                      // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      MinimumScale;                                            // 0x001C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      MaximumScale;                                            // 0x0020(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bAlignToGroundNormal : 1;                                // 0x0024(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bRandomYaw : 1;                                          // 0x0024(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bScaleByFoliageSettings : 1;                             // 0x0024(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JH96[0xB];                                   // 0x0025(0x000B) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ShooterGame.ObjectListItem
	 * Size -> 0x0038
	 */
	struct FObjectListItem
	{
	public:
		struct FObjectInfo                                         ObjectInfo;                                              // 0x0000(0x0030) Edit, BlueprintVisible
		float                                                      Probability;                                             // 0x0030(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_7DLB[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ShooterGame.TerrainGenerator.BiomeMiniMapColor
	 * Size -> 0x0014
	 */
	struct FBiomeMiniMapColor
	{
	public:
		float                                                      Height;                                                  // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		struct FLinearColor                                        Color;                                                   // 0x0004(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct ShooterGame.TerrainGenerator.BiomeMiniMap
	 * Size -> 0x0018
	 */
	struct FBiomeMiniMap
	{
	public:
		class UFloatMap*                                           Map;                                                     // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor
		TArray<struct FBiomeMiniMapColor>                          HeightsColors;                                           // 0x0008(0x0010) ZeroConstructor
	};

	/**
	 * ScriptStruct ShooterGame.DataListEntryButton_PrimalFolder.PrimalFolderIcons
	 * Size -> 0x0020
	 */
	struct FPrimalFolderIcons
	{
	public:
		class UTexture2D*                                          NormalFolder;                                            // 0x0000(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UTexture2D*                                          CustomFolder;                                            // 0x0008(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UTexture2D*                                          Back;                                                    // 0x0010(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FColor                                              TextColor;                                               // 0x0018(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_3ZZX[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ShooterGame.DataListEntryButton.DataListEntryButtonBorderColors
	 * Size -> 0x0010
	 */
	struct FDataListEntryButtonBorderColors
	{
	public:
		struct FColor                                              Normal;                                                  // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FColor                                              Hovered;                                                 // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FColor                                              Pressed;                                                 // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FColor                                              Disabled;                                                // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct ShooterGame.DamageVolumeBase.DamageNegatingItem
	 * Size -> 0x0010
	 */
	struct FDamageNegatingItem
	{
	public:
		class UClass*                                              ItemSubclass;                                            // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      NegationFactor;                                          // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_IFUA[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ShooterGame.PrimalGameData.ItemSetup
	 * Size -> 0x0028
	 */
	struct FItemSetup
	{
	public:
		class UClass*                                              ItemType;                                                // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class FString                                              ItemBlueprintPath;                                       // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor
		float                                                      MinQuality;                                              // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      MaxQuality;                                              // 0x001C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		int32_t                                                    Quantity;                                                // 0x0020(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bAutoEquip : 1;                                          // 0x0024(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor
		bool                                                       bDontStack : 1;                                          // 0x0024(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor
		bool                                                       bForceBlueprint : 1;                                     // 0x0024(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor
		unsigned char                                              UnknownData_4MTZ[0x3];                                   // 0x0025(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ShooterGame.PrimalGameData.DinoSetup
	 * Size -> 0x00F0
	 */
	struct FDinoSetup
	{
	public:
		class UClass*                                              DinoType;                                                // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		TAssetPtr<class UClass>                                    DinoSoftReference;                                       // 0x0008(0x001C) ELEMENT_SIZE_MISMATCH Edit, BlueprintVisible
		unsigned char                                              UnknownData_OXNZ[0x4];                                   // 0x0024(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		class FString                                              DinoBlueprintPath;                                       // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor
		class FString                                              DinoName;                                                // 0x0038(0x0010) Edit, BlueprintVisible, ZeroConstructor
		int32_t                                                    DinoLevel;                                               // 0x0048(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              BasePointsPerStat[0xC];                                  // 0x004C(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              PlayerAddedPointsPerStat[0xC];                           // 0x0058(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FVector                                             SpawnOffset;                                             // 0x0064(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		EDinoTamedOrder                                            DinoState;                                               // 0x0070(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_OSGG[0x7];                                   // 0x0071(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<EPrimalCharacterStatusValue>                        PrioritizeStats;                                         // 0x0078(0x0010) Edit, BlueprintVisible, ZeroConstructor
		TArray<struct FItemSetup>                                  TamedDinoInventory;                                      // 0x0088(0x0010) Edit, BlueprintVisible, ZeroConstructor
		class UClass*                                              SaddleType;                                              // 0x0098(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		TAssetPtr<class UClass>                                    SaddleSoftReference;                                     // 0x00A0(0x001C) ELEMENT_SIZE_MISMATCH Edit, BlueprintVisible
		unsigned char                                              UnknownData_GWZN[0x4];                                   // 0x00BC(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		class FString                                              SaddleBlueprintPath;                                     // 0x00C0(0x0010) Edit, BlueprintVisible, ZeroConstructor
		float                                                      SaddleQuality;                                           // 0x00D0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      SaddleMinRandomQuality;                                  // 0x00D4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      RandomWeight;                                            // 0x00D8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bIsTamed : 1;                                            // 0x00DC(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor
		bool                                                       bIgnoreMaxTameLimit : 1;                                 // 0x00DC(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor
		bool                                                       bPreventSpawningAtTameLimit : 1;                         // 0x00DC(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor
		bool                                                       bBlockTamedDialog : 1;                                   // 0x00DC(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor
		bool                                                       bAutoEquipSaddle : 1;                                    // 0x00DC(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor
		bool                                                       bUseFixedSpawnLevel : 1;                                 // 0x00DC(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor
		unsigned char                                              UnknownData_TBN7[0x3];                                   // 0x00DD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      WildRandomScaleOverride;                                 // 0x00E0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      DinoImprintingQuality;                                   // 0x00E4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bNetInfoFromClient;                                      // 0x00E8(0x0001) ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor
		unsigned char                                              UnknownData_Y07I[0x7];                                   // 0x00E9(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ShooterGame.FlockingBehavior.Boid
	 * Size -> 0x0054
	 */
	struct FBoid
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FRotator                                            Rotation;                                                // 0x000C(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector                                             Velocity;                                                // 0x0018(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector                                             Acceleration;                                            // 0x0024(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      MaxSpeed;                                                // 0x0030(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      MaxForce;                                                // 0x0034(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      TurnRate;                                                // 0x0038(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bUseTargeting : 1;                                       // 0x003C(0x0001) BIT_FIELD Edit, NoDestructor
		bool                                                       bHasReachedTarget : 1;                                   // 0x003C(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor
		bool                                                       bIsAlive : 1;                                            // 0x003C(0x0001) BIT_FIELD Edit, NoDestructor
		unsigned char                                              UnknownData_YN4D[0x3];                                   // 0x003D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      SpiralTime;                                              // 0x0040(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor
		struct FVector                                             TargetLocation;                                          // 0x0044(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		EBoidType                                                  Type;                                                    // 0x0050(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_TLPD[0x3];                                   // 0x0051(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ShooterGame.FlockingBehavior.AvoidanceArea
	 * Size -> 0x0070
	 */
	struct FAvoidanceArea
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FRotator                                            Rotation;                                                // 0x000C(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_DYPM[0x8];                                   // 0x0018(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Transform;                                               // 0x0020(0x0030) Edit, IsPlainOldData, NoDestructor
		struct FVector                                             BoxExtents;                                              // 0x0050(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      SphereRadius;                                            // 0x005C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		double                                                     CreationTime;                                            // 0x0060(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor
		bool                                                       bBlockBox : 1;                                           // 0x0068(0x0001) BIT_FIELD Edit, NoDestructor
		bool                                                       bBlockSphere : 1;                                        // 0x0068(0x0001) BIT_FIELD Edit, NoDestructor
		bool                                                       bIsDynamic : 1;                                          // 0x0068(0x0001) BIT_FIELD Edit, EditConst, NoDestructor
		unsigned char                                              UnknownData_2LKW[0x7];                                   // 0x0069(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ShooterGame.FlockingBehavior.FlockPersistentData
	 * Size -> 0x0038
	 */
	struct FFlockPersistentData
	{
	public:
		float                                                      AvoidanceAreaDecayRate;                                  // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      AvoidanceTraceInterval;                                  // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      AvoidanceTraceInferredBoxSize;                           // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      AvoidanceTraceInferredSphereRadius;                      // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      AvoidanceTraceForwardDistance;                           // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      AvoidanceTraceDownDistance;                              // 0x0014(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		double                                                     LastAvoidanceTraceTime;                                  // 0x0018(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		int32_t                                                    MaxNumAvoidanceAreas;                                    // 0x0020(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_0MWB[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FAvoidanceArea>                              DynamicAvoidanceAreas;                                   // 0x0028(0x0010) Edit, ZeroConstructor, EditConst
	};

	/**
	 * ScriptStruct ShooterGame.FlockingBehavior.BoidBehavior
	 * Size -> 0x0040
	 */
	struct FBoidBehavior
	{
	public:
		TArray<struct FAvoidanceArea>                              AvoidanceAreas;                                          // 0x0000(0x0010) Edit, ZeroConstructor
		float                                                      DesiredSeparation;                                       // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      NeighborDist;                                            // 0x0014(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      SeparationMultiplier;                                    // 0x0018(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      AlignmentMultiplier;                                     // 0x001C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      CohesionMultiplier;                                      // 0x0020(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      AvoidanceMultiplier;                                     // 0x0024(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      TargetingMultiplier;                                     // 0x0028(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      MaxDistanceToLeaders;                                    // 0x002C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      MaxSpeedMultiplier;                                      // 0x0030(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      MaxForceMultiplier;                                      // 0x0034(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bUseBoundsCulling;                                       // 0x0038(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_LKK3[0x3];                                   // 0x0039(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      BoundsCullingMultiplier;                                 // 0x003C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct ShooterGame.HordeCrateManager.HordeCrateNPCGroup
	 * Size -> 0x0050
	 */
	struct FHordeCrateNPCGroup
	{
	public:
		TArray<class UClass*>                                      NPCClasses;                                              // 0x0000(0x0010) Edit, ZeroConstructor
		TArray<TAssetPtr<class UClass>>                            NPCAssets;                                               // 0x0010(0x0010) Edit, ZeroConstructor
		TArray<float>                                              NPCWeights;                                              // 0x0020(0x0010) Edit, ZeroConstructor
		TArray<int32_t>                                            MinLevels;                                               // 0x0030(0x0010) Edit, ZeroConstructor
		TArray<int32_t>                                            MaxLevels;                                               // 0x0040(0x0010) Edit, ZeroConstructor
	};

	/**
	 * ScriptStruct ShooterGame.HordeCrateManager.HordeCrateWave
	 * Size -> 0x0060
	 */
	struct FHordeCrateWave
	{
	public:
		int32_t                                                    MinNumOfNPCs;                                            // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		int32_t                                                    MaxNumOfNPCs;                                            // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      TimeToPrepareForWave;                                    // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_FJJN[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FHordeCrateNPCGroup                                 NPCsToSpawn;                                             // 0x0010(0x0050) Edit
	};

	/**
	 * ScriptStruct ShooterGame.HordeCrateManager.HordeCrateDifficultyLevel
	 * Size -> 0x00B0
	 */
	struct FHordeCrateDifficultyLevel
	{
	public:
		bool                                                       bEnabled;                                                // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_842E[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    MaxNumOfEventsForDifficulty;                             // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		int32_t                                                    DifficultyLevel;                                         // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		int32_t                                                    MinNPCsToStart;                                          // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		int32_t                                                    MaxNPCsToStart;                                          // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_B329[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FHordeCrateNPCGroup                                 StartingNPCs;                                            // 0x0018(0x0050) Edit
		TArray<struct FHordeCrateWave>                             NPCWavesToComplete;                                      // 0x0068(0x0010) Edit, ZeroConstructor
		float                                                      MinTimeBeforeSelfDestruct;                               // 0x0078(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      MaxTimeBeforeSelfDestruct;                               // 0x007C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		class UClass*                                              ActorTemplate;                                           // 0x0080(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      MinQualityMultiplier;                                    // 0x0088(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      MaxQualityMultiplier;                                    // 0x008C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		int32_t                                                    MinAmtRewardItems;                                       // 0x0090(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		int32_t                                                    MaxAmtRewardItems;                                       // 0x0094(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FLinearColor                                        DifficultyColor;                                         // 0x0098(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      MainNodeElementPct;                                      // 0x00A8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_Y4OO[0x4];                                   // 0x00AC(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ShooterGame.HordeCrateManager.HordeCrateEvent
	 * Size -> 0x0020
	 */
	struct FHordeCrateEvent
	{
	public:
		double                                                     EventStartTime;                                          // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		TWeakObjectPtr<class AActor>                               HordeSpawnNetwork;                                       // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		TWeakObjectPtr<class AActor>                               HordeModeCrate;                                          // 0x0010(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bHasBeenInitiated;                                       // 0x0018(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              EventType;                                               // 0x0019(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_8DJE[0x6];                                   // 0x001A(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ShooterGame.LeaderboardDisplayRow
	 * Size -> 0x0020
	 */
	struct FLeaderboardDisplayRow
	{
	public:
		class UTexture2D*                                          RowIcon;                                                 // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		TArray<class FString>                                      Columns;                                                 // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor
		unsigned char                                              UnknownData_1SIU[0x8];                                   // 0x0018(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ShooterGame.MissionMetaTagInfo.MetaTagIDInfo
	 * Size -> 0x000C
	 */
	struct FMetaTagIDInfo
	{
	public:
		int32_t                                                    MetaTagEnumIndex;                                        // 0x0000(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class FName                                                MetaTagDisplayName;                                      // 0x0004(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct ShooterGame.PrimalGameData.DamageTypeAdjuster
	 * Size -> 0x0010
	 */
	struct FDamageTypeAdjuster
	{
	public:
		class UClass*                                              DamageTypeClass;                                         // 0x0000(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      DamageMultiplier;                                        // 0x0008(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bIgnoreMultiplierIfWildDinoAttacker : 1;                 // 0x000C(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor
		bool                                                       bIgnoreMultiplierIfTamedDinoAttacker : 1;                // 0x000C(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor
		bool                                                       bOnlyUseMultiplierIfWildDinoAttacker : 1;                // 0x000C(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor
		bool                                                       bOnlyUseMultiplierIfTamedDinoAttacker : 1;               // 0x000C(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor
		bool                                                       bOnlyUseMultiplierIfTamed : 1;                           // 0x000C(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor
		unsigned char                                              UnknownData_WE8M[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ShooterGame.BoneDamageAdjuster
	 * Size -> 0x000C
	 */
	struct FBoneDamageAdjuster
	{
	public:
		class FName                                                BoneName;                                                // 0x0000(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      DamageMultiplier;                                        // 0x0008(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct ShooterGame.PrimalStructure.StructureVariant
	 * Size -> 0x0070
	 */
	struct FStructureVariant
	{
	public:
		class FString                                              VariantName;                                             // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor
		bool                                                       bUseBPAllowSwitchToVariant;                              // 0x0010(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_J3JJ[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UStaticMesh*                                         Mesh;                                                    // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bUseMeshTransform;                                       // 0x0020(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_AC43[0xF];                                   // 0x0021(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          MeshTransform;                                           // 0x0030(0x0030) Edit, BlueprintVisible, IsPlainOldData, NoDestructor
		class UDestructibleMesh*                                   DestroyedMeshOverride;                                   // 0x0060(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_MZLX[0x8];                                   // 0x0068(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ShooterGame.PrimalStructure.PrimalStructureSnapTagSettings
	 * Size -> 0x0040
	 */
	struct FPrimalStructureSnapTagSettings
	{
	public:
		TArray<class FName>                                        SnapToStructureTagsToExclude;                            // 0x0000(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		TArray<class FName>                                        SnapFromStructureTagsToExclude;                          // 0x0010(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		TArray<class FName>                                        SnapToStructureTagsToInclude;                            // 0x0020(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		TArray<class FName>                                        SnapFromStructureTagsToInclude;                          // 0x0030(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
	};

	/**
	 * ScriptStruct ShooterGame.PrimalStructure.PrimalStructureSnapPoint
	 * Size -> 0x00C8
	 */
	struct FPrimalStructureSnapPoint
	{
	public:
		class FName                                                SnapPointDescription;                                    // 0x0000(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FVector                                             PointLocOffset;                                          // 0x0008(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FRotator                                            PointRotOffset;                                          // 0x0014(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FRotator                                            PointComparisonExtraRotOffset;                           // 0x0020(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bAttachToPoint : 1;                                      // 0x002C(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor
		bool                                                       bAttachFromPoint : 1;                                    // 0x002C(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor
		bool                                                       bHighPriorityAttachToPoint : 1;                          // 0x002C(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor
		bool                                                       bSnapToUseAlternatePlacemenTraceScale : 1;               // 0x002C(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor
		bool                                                       bAttachToDisableEncroachmentCheck : 1;                   // 0x002C(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor
		bool                                                       bInvalidForStructureLinking : 1;                         // 0x002C(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor
		bool                                                       bSnapForceNoGroundRequirement : 1;                       // 0x002C(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor
		bool                                                       bSnapToOnlyAllowSingleAttachment : 1;                    // 0x002C(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor
		bool                                                       bPorthole : 1;                                           // 0x002D(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor
		unsigned char                                              UnknownData_39QZ[0x2];                                   // 0x002E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    ToPointSnapTypeFlags;                                    // 0x0030(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    ToPointSnapTypeExcludeFlags;                             // 0x0034(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    SnapPointMatchGroup;                                     // 0x0038(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class FName                                                StaticMeshSnapSocketName;                                // 0x003C(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_ADWT[0x4];                                   // 0x0044(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UClass*>                                      SnapToStructureTypesToExclude;                           // 0x0048(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		TArray<class UClass*>                                      SnapFromStructureTypesToExclude;                         // 0x0058(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		TArray<class UClass*>                                      SnapToStructureTypesToInclude;                           // 0x0068(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		TArray<class UClass*>                                      SnapFromStructureTypesToInclude;                         // 0x0078(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		struct FPrimalStructureSnapTagSettings                     SnapTags;                                                // 0x0088(0x0040) Edit, DisableEditOnInstance
	};

	/**
	 * ScriptStruct ShooterGame.PrimalStructure.PlacementData
	 * Size -> 0x0060
	 */
	struct FPlacementData
	{
	public:
		struct FVector                                             AdjustedLocation;                                        // 0x0000(0x000C) ZeroConstructor, Transient, IsPlainOldData, NoDestructor
		struct FRotator                                            AdjustedRotation;                                        // 0x000C(0x000C) ZeroConstructor, Transient, IsPlainOldData, NoDestructor
		bool                                                       bSnapped;                                                // 0x0018(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor
		bool                                                       bDisableEncroachmentCheck;                               // 0x0019(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_AW4A[0x2];                                   // 0x001A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    MySnapToIndex;                                           // 0x001C(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor
		int32_t                                                    TheirSnapToIndex;                                        // 0x0020(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_LS2M[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              FloorHitActor;                                           // 0x0028(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor
		class APrimalStructure*                                    ParentStructure;                                         // 0x0030(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor
		class APrimalStructure*                                    ForcePlacedOnFloorParentStructure;                       // 0x0038(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor
		class APrimalStructure*                                    ReplacesStructure;                                       // 0x0040(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor
		class APawn*                                               AttachToPawn;                                            // 0x0048(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor
		class FName                                                AttachToBone;                                            // 0x0050(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor
		class APrimalDinoCharacter*                                DinoCharacter;                                           // 0x0058(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct ShooterGame.PrimalStructureItemContainer.ItemToDisplayInStructureTooltip
	 * Size -> 0x0020
	 */
	struct FItemToDisplayInStructureTooltip
	{
	public:
		class UClass*                                              PrimalItem;                                              // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor
		int32_t                                                    Quantity;                                                // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_QVGU[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              ModuleGroupHeader;                                       // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, Transient
	};

	/**
	 * ScriptStruct ShooterGame.LootTableEntry
	 * Size -> 0x0038
	 */
	struct FLootTableEntry
	{
	public:
		ELootItemType                                              LootItemType;                                            // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_P5RG[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UClass*>                                      LootItemClasses;                                         // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor
		float                                                      Weight;                                                  // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		ESimpleCurve                                               QuantityCurve;                                           // 0x001C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_UKPP[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    MinQuantity;                                             // 0x0020(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		int32_t                                                    MaxQuantity;                                             // 0x0024(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		ESimpleCurve                                               QualityCurve;                                            // 0x0028(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_TC16[0x3];                                   // 0x0029(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector2D                                           QualityRange;                                            // 0x002C(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_ZW2X[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ShooterGame.TimeRange
	 * Size -> 0x0008
	 */
	struct FTimeRange
	{
	public:
		float                                                      Min;                                                     // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      Max;                                                     // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct ShooterGame.MissionType.MissionPhase
	 * Size -> 0x0048
	 */
	struct FMissionPhase
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class FString                                              DisplayText;                                             // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor
		bool                                                       bShowInUI : 1;                                           // 0x0018(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor
		bool                                                       bUseBPGetPhaseDisplayText : 1;                           // 0x0018(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor
		bool                                                       bUseGeneratePhaseRequirements : 1;                       // 0x0018(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor
		bool                                                       bAutoSwitchToNextPhase : 1;                              // 0x0018(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor
		bool                                                       bIsLastPhase : 1;                                        // 0x0018(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor
		unsigned char                                              UnknownData_GUCN[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      WaitTimeAfterPhaseCompletes;                             // 0x001C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class FName                                                NextPhaseName;                                           // 0x0020(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FTimeRange                                          AutoSwitchPhaseAttemptInterval;                          // 0x0028(0x0008) Edit, DisableEditOnInstance
		class USoundBase*                                          PhaseStartSound;                                         // 0x0030(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class USoundBase*                                          PhaseEndSound;                                           // 0x0038(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class USoundBase*                                          PhaseMusicLoop;                                          // 0x0040(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct ShooterGame.MissionType.MissionPhaseData
	 * Size -> 0x0004
	 */
	struct FMissionPhaseData
	{
	public:
		bool                                                       bPhaseCompleted : 1;                                     // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor
		unsigned char                                              UnknownData_L2I8[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ShooterGame.MissionType.MissionWorldBuffData
	 * Size -> 0x000C
	 */
	struct FMissionWorldBuffData
	{
	public:
		class FName                                                WorldBuffIdentifier;                                     // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		int32_t                                                    StacksToGive;                                            // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct ShooterGame.MissionType.TaggedString
	 * Size -> 0x0018
	 */
	struct FTaggedString
	{
	public:
		class FName                                                Tag;                                                     // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class FString                                              String;                                                  // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor
	};

	/**
	 * ScriptStruct ShooterGame.MissionType.CharacterAndControllerPair
	 * Size -> 0x0010
	 */
	struct FCharacterAndControllerPair
	{
	public:
		class AShooterCharacter*                                   Character;                                               // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class AShooterPlayerController*                            Controller;                                              // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct ShooterGame.MissionType.TeleportedCharacter
	 * Size -> 0x0028
	 */
	struct FTeleportedCharacter
	{
	public:
		class APrimalCharacter*                                    Character;                                               // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class AController*                                         Controller;                                              // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector                                             OriginalLocation;                                        // 0x0010(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FRotator                                            OriginalRotation;                                        // 0x001C(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct ShooterGame.MissionType.PlayerItems
	 * Size -> 0x0018
	 */
	struct FPlayerItems
	{
	public:
		class AShooterCharacter*                                   Character;                                               // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor
		TArray<struct FItemNetID>                                  ItemIDs;                                                 // 0x0008(0x0010) ZeroConstructor
	};

	/**
	 * ScriptStruct ShooterGame.MissionType.MissionWorldIndicator
	 * Size -> 0x00A8
	 */
	struct FMissionWorldIndicator
	{
	public:
		class FName                                                DescriptionTagString;                                    // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UTexture2D*                                          Icon;                                                    // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UClass*                                              ItemType;                                                // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector                                             WorldPosition;                                           // 0x0018(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_A9O9[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              TargetActor;                                             // 0x0028(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		int32_t                                                    Priority;                                                // 0x0030(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_LCMR[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              CustomData;                                              // 0x0038(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bUseTargetActorName : 1;                                 // 0x0040(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor
		bool                                                       bUseTargetActorIcon : 1;                                 // 0x0040(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor
		bool                                                       bUseItemName : 1;                                        // 0x0040(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor
		bool                                                       bUseItemIcon : 1;                                        // 0x0040(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor
		bool                                                       bOnlyVisibleOffScreen : 1;                               // 0x0040(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor
		bool                                                       bOnlyVisibleOnScreen : 1;                                // 0x0040(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor
		bool                                                       bAlwaysVisible : 1;                                      // 0x0040(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor
		bool                                                       bCompanionIndicator : 1;                                 // 0x0040(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor
		bool                                                       bShowDistance : 1;                                       // 0x0041(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor
		unsigned char                                              UnknownData_4RXJ[0x2];                                   // 0x0042(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLinearColor                                        IndicatorColor;                                          // 0x0044(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FLinearColor                                        IconColor;                                               // 0x0054(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bUsePulseAnimation : 1;                                  // 0x0064(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor
		bool                                                       bShowProgress : 1;                                       // 0x0064(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor
		unsigned char                                              UnknownData_TM4Z[0x3];                                   // 0x0065(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ProgressValue;                                           // 0x0068(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_2AD1[0x4];                                   // 0x006C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              ProgressLabelText;                                       // 0x0070(0x0010) Edit, BlueprintVisible, ZeroConstructor
		struct FLinearColor                                        ProgressBarColor;                                        // 0x0080(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FLinearColor                                        ProgressLabelColor;                                      // 0x0090(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bShowProgressLabelWhenOffScreen : 1;                     // 0x00A0(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor
		unsigned char                                              UnknownData_3RST[0x7];                                   // 0x00A1(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ShooterGame.MissionType.RacePlayerData
	 * Size -> 0x0038
	 */
	struct FRacePlayerData
	{
	public:
		class AShooterPlayerController*                            Controller;                                              // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class AShooterCharacter*                                   Character;                                               // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		int32_t                                                    TargetCheckpoint;                                        // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_HPIY[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<bool>                                               CheckpointsHit;                                          // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor
		TArray<float>                                              CheckpointTimes;                                         // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor
	};

	/**
	 * ScriptStruct ShooterGame.MissionType.MissionRelatedActorData
	 * Size -> 0x0040
	 */
	struct FMissionRelatedActorData
	{
	public:
		class AActor*                                              RelatedActor;                                            // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class FName                                                RelatedActorPropertyName;                                // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		EMissionRelatedPropertyType                                RelatedActorPropertyType;                                // 0x0010(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		EMissionRelatedPropertyUsage                               RelatedActorPropertyUsage;                               // 0x0011(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_OMA4[0x2];                                   // 0x0012(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLinearColor                                        RelatedActorPropertyTextColor;                           // 0x0014(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FLinearColor                                        LocalIndexMatchColorModifier;                            // 0x0024(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bUseLocalIndexMatchColorModifier;                        // 0x0034(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_FCMB[0x3];                                   // 0x0035(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    IndexMatchRangeOffset;                                   // 0x0038(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_WOOF[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ShooterGame.MissionType.MissionPhaseRequirement
	 * Size -> 0x0090
	 */
	struct FMissionPhaseRequirement
	{
	public:
		class FName                                                DescriptionStringTag;                                    // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UClass*                                              RelatedType;                                             // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bUseRelatedTypeName : 1;                                 // 0x0010(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor
		unsigned char                                              UnknownData_X9JF[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FMissionRelatedActorData                            OptionalRelatedActorData;                                // 0x0018(0x0040) Edit, BlueprintVisible
		bool                                                       bIsComplete : 1;                                         // 0x0058(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor
		bool                                                       bUseCount : 1;                                           // 0x0058(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor
		bool                                                       bUseProgress : 1;                                        // 0x0058(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor
		bool                                                       bAutoCalculateProgressFromCount : 1;                     // 0x0058(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor
		unsigned char                                              UnknownData_SGAM[0x3];                                   // 0x0059(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    CurrentCount;                                            // 0x005C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		int32_t                                                    MaxCount;                                                // 0x0060(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      Progress;                                                // 0x0064(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		EPhaseRequirementWidgetVisualState                         PhaseRequirementWidgetVisualState;                       // 0x0068(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_HWBH[0x3];                                   // 0x0069(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLinearColor                                        CustomPhaseRequirementTextColor;                         // 0x006C(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FLinearColor                                        CustomPhaseRequirementProgressBarColor;                  // 0x007C(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_YPWK[0x4];                                   // 0x008C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ShooterGame.NewMissionModuleBase.Struct_MissionModule_Travel
	 * Size -> 0x0038
	 */
	struct FStruct_MissionModule_Travel
	{
	public:
		class FString                                              RequirementsTitle;                                       // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		class FName                                                RequirementsMessage;                                     // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      DelayAfterModule;                                        // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      DelayBeforeModule;                                       // 0x001C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class FName                                                TriggerKeyOfPointToGoTo;                                 // 0x0020(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      DistanceFromPointToHideIcon;                             // 0x0028(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class FName                                                NavPointLabel;                                           // 0x002C(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_QS39[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ShooterGame.HUDElement
	 * Size -> 0x0150
	 */
	struct FHUDElement
	{
	public:
		EHUDElementType                                            Type;                                                    // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_OHN7[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bIsVisible : 1;                                          // 0x0004(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor
		bool                                                       bIsEditorOnly : 1;                                       // 0x0004(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor
		bool                                                       bRespectPlayerUIScaleSetting : 1;                        // 0x0004(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor
		bool                                                       bTitleIsExtendedInfo : 1;                                // 0x0004(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor
		bool                                                       bLabelIsExtendedInfo : 1;                                // 0x0004(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor
		unsigned char                                              UnknownData_9XES[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Title;                                                   // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor
		ETextJustify                                               TextAlignment_Title;                                     // 0x0018(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_U6E5[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Label;                                                   // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor
		ETextJustify                                               TextAlignment_Label;                                     // 0x0030(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		EHUDElementHorizontalAlignment                             TextContainerHorizontalAlignment;                        // 0x0031(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		EHUDElementVerticalAlignment                               TextContainerVerticalAlignment;                          // 0x0032(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_4IWM[0x1];                                   // 0x0033(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    ZOrder;                                                  // 0x0034(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      Progress;                                                // 0x0038(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FLinearColor                                        TextColor;                                               // 0x003C(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      TextScale;                                               // 0x004C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FMargin                                             TextPadding;                                             // 0x0050(0x0010) Edit, BlueprintVisible
		struct FLinearColor                                        BackgroundImageColor;                                    // 0x0060(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FLinearColor                                        ProgressColor;                                           // 0x0070(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		EProgressBarFillType                                       ProgressBarFillType;                                     // 0x0080(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		EHUDElementAnchorMode                                      AnchorMode;                                              // 0x0081(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_7TYS[0x2];                                   // 0x0082(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAnchors                                            Anchor;                                                  // 0x0084(0x0010) Edit, BlueprintVisible
		struct FVector2D                                           Location;                                                // 0x0094(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bOverrideLocationForUIScaling : 1;                       // 0x009C(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor
		unsigned char                                              UnknownData_VZJ5[0x3];                                   // 0x009D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector2D                                           LocationAtMinScale;                                      // 0x00A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector2D                                           LocationAtDefaultScale;                                  // 0x00A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector2D                                           LocationAtMaxScale;                                      // 0x00B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector2D                                           Size;                                                    // 0x00B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector2D                                           Scale;                                                   // 0x00C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UTexture2D*                                          BackgroundImage;                                         // 0x00C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UTexture2D*                                          ProgressBarFillImage;                                    // 0x00D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FMargin                                             ProgressBarPadding;                                      // 0x00D8(0x0010) Edit, BlueprintVisible
		struct FVector2D                                           ProgressBarScale;                                        // 0x00E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UTexture2D*                                          Icon;                                                    // 0x00F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector2D                                           IconSize;                                                // 0x00F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector2D                                           IconScale;                                               // 0x0100(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FLinearColor                                        IconColor;                                               // 0x0108(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FMargin                                             IconPadding;                                             // 0x0118(0x0010) Edit, BlueprintVisible
		float                                                      IconRotation;                                            // 0x0128(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FMargin                                             ProgressBarFillImageMargin;                              // 0x012C(0x0010) Edit, BlueprintVisible
		struct FMargin                                             ProgressBarBackgroundImageMargin;                        // 0x013C(0x0010) Edit, BlueprintVisible
		unsigned char                                              UnknownData_XFF1[0x4];                                   // 0x014C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ShooterGame.NPCZoneManager.LinkedZoneSpawnVolumeEntry
	 * Size -> 0x0030
	 */
	struct FLinkedZoneSpawnVolumeEntry
	{
	public:
		class ANPCZoneSpawnVolume*                                 LinkedZoneSpawnVolume;                                   // 0x0000(0x0008) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor
		TArray<class AActor*>                                      ZoneSpawnVolumeFloors;                                   // 0x0008(0x0010) Edit, ZeroConstructor, DisableEditOnTemplate
		TArray<class FName>                                        ZoneSpawnVolumeFloorTags;                                // 0x0018(0x0010) Edit, ZeroConstructor, DisableEditOnTemplate
		float                                                      EntryWeight;                                             // 0x0028(0x0004) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_8OOA[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ShooterGame.NPCZoneVolume.HibernationCountInfo
	 * Size -> 0x0010
	 */
	struct FHibernationCountInfo
	{
	public:
		class UClass*                                              ClassType;                                               // 0x0000(0x0008) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor
		int32_t                                                    Count;                                                   // 0x0008(0x0004) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_59S9[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ShooterGame.OceanDinoManager.OceanDinoSpawnEntry
	 * Size -> 0x0038
	 */
	struct FOceanDinoSpawnEntry
	{
	public:
		class FString                                              EntryFriendlyName;                                       // 0x0000(0x0010) Edit, ZeroConstructor
		class UClass*                                              SpawnDinoClass;                                          // 0x0010(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      SpawnDinoWeight;                                         // 0x0018(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      EntrySpawnDistanceMultiplier;                            // 0x001C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      SpawnZOffset;                                            // 0x0020(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      MinimumDepthFromWaterSurface;                            // 0x0024(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      MaxSpawnZ;                                               // 0x0028(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      NetworkAndStasisRangeMultiplier;                         // 0x002C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      MinimumAllowedFreeDepthForSpawn;                         // 0x0030(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		int32_t                                                    OverrideMaxValidSpawnPointAttempts;                      // 0x0034(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct ShooterGame.OceanDinoManager.OceanDinoDepthEntry
	 * Size -> 0x0038
	 */
	struct FOceanDinoDepthEntry
	{
	public:
		TArray<struct FOceanDinoSpawnEntry>                        OceanDinoSpawnEntries;                                   // 0x0000(0x0010) Edit, ZeroConstructor
		class FString                                              SectionFriendlyName;                                     // 0x0010(0x0010) Edit, ZeroConstructor
		float                                                      StartAtDepthZ;                                           // 0x0020(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_QYR8[0x14];                                  // 0x0024(0x0014) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ShooterGame.DamagePrimalCharacterStatusValueModifier
	 * Size -> 0x0030
	 */
	struct FDamagePrimalCharacterStatusValueModifier
	{
	public:
		EPrimalCharacterStatusValue                                ValueType;                                               // 0x0000(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_RNGS[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bSpeedToAddInSeconds : 1;                                // 0x0004(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor
		bool                                                       bContinueOnUnchangedValue : 1;                           // 0x0004(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor
		bool                                                       bIgnorePawnDamageAdjusters : 1;                          // 0x0004(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor
		bool                                                       bResetExistingModifierDescriptionIndex : 1;              // 0x0004(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor
		bool                                                       bSetValue : 1;                                           // 0x0004(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor
		bool                                                       bSetAdditionalValue : 1;                                 // 0x0004(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor
		unsigned char                                              UnknownData_GFT5[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      LimitExistingModifierDescriptionToMaxAmount;             // 0x0008(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    UseAbsoluteDamageAmount;                                 // 0x000C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      DamageMultiplierAmountToAdd;                             // 0x0010(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      SpeedToAdd;                                              // 0x0014(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    StatusValueModifierDescriptionIndex;                     // 0x0018(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bUsePercentualDamage : 1;                                // 0x001C(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor
		bool                                                       bMakeUntameable : 1;                                     // 0x001C(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor
		unsigned char                                              UnknownData_IMFF[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      PercentualDamage;                                        // 0x0020(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_4JNZ[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              ScaleValueByCharacterDamageType;                         // 0x0028(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct ShooterGame.PrimalBuff.MaxStatScaler
	 * Size -> 0x000C
	 */
	struct FMaxStatScaler
	{
	public:
		EPrimalCharacterStatusValue                                LevelUpValueType;                                        // 0x0000(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_YXZE[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      TargetValue;                                             // 0x0004(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       TargetValueIsPercent;                                    // 0x0008(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_HLKM[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ShooterGame.PrimalBuff.PostProcessMaterialAdjuster
	 * Size -> 0x0048
	 */
	struct FPostProcessMaterialAdjuster
	{
	public:
		class UMaterialInterface*                                  PostProcessParentMaterial;                               // 0x0000(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		TArray<class FName>                                        ScalarParameterNames;                                    // 0x0008(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		TArray<float>                                              ScalarParameterValues;                                   // 0x0018(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		TArray<class FName>                                        VectorParameterNames;                                    // 0x0028(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		TArray<struct FVector>                                     VectorParameterValues;                                   // 0x0038(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
	};

	/**
	 * ScriptStruct ShooterGame.PrimalBuff_Companion.CompanionEventSegmentData
	 * Size -> 0x00D8
	 */
	struct FCompanionEventSegmentData
	{
	public:
		float                                                      SegmentDuration;                                         // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_3UZH[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FCompanionReactionData                              SegmentCompanionReaction;                                // 0x0008(0x00A0) Edit, BlueprintVisible, DisableEditOnTemplate
		bool                                                       bMoveCompanionToLocation : 1;                            // 0x00A8(0x0001) BIT_FIELD Edit, BlueprintVisible, DisableEditOnTemplate, NoDestructor
		bool                                                       bMakeCompanionLookAtSomething : 1;                       // 0x00A8(0x0001) BIT_FIELD Edit, BlueprintVisible, DisableEditOnTemplate, NoDestructor
		unsigned char                                              UnknownData_PPLJ[0x3];                                   // 0x00A9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             MoveCompanionToLocationOffset;                           // 0x00AC(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor
		class AActor*                                              MakeCompanionLookAtActor;                                // 0x00B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor
		struct FVector                                             MakeCompanionLookAtLocation;                             // 0x00C0(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor
		float                                                      CompanionLocationInterpSpeed;                            // 0x00CC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor
		float                                                      CompanionRotationInterpSpeed;                            // 0x00D0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_LPPK[0x4];                                   // 0x00D4(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ShooterGame.PrimalBuff_Companion.CompanionEventData
	 * Size -> 0x0050
	 */
	struct FCompanionEventData
	{
	public:
		unsigned char                                              EventType;                                               // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_G5DP[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              EventTitle;                                              // 0x0008(0x0010) Edit, ZeroConstructor, DisableEditOnTemplate
		TArray<struct FCompanionEventSegmentData>                  EventSegmentArray;                                       // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate
		float                                                      EventTotalDuration;                                      // 0x0028(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_82E4[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     EventStartTime;                                          // 0x0030(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor
		int32_t                                                    CurrentSegmentIndex;                                     // 0x0038(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_9D3H[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     LastSegmentStartTime;                                    // 0x0040(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor
		double                                                     EventEndTime;                                            // 0x0048(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct ShooterGame.PrimalBuffPersistentData_MissionData.SerializedMissionData
	 * Size -> 0x0018
	 */
	struct FSerializedMissionData
	{
	public:
		class FName                                                MissionTag;                                              // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class FString                                              SerializedData;                                          // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor
	};

	/**
	 * ScriptStruct ShooterGame.PrimalCableComponent.CableParticle
	 * Size -> 0x001C
	 */
	struct FCableParticle
	{
	public:
		bool                                                       bFree;                                                   // 0x0000(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_MGXA[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             Position;                                                // 0x0004(0x000C) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector                                             OldPosition;                                             // 0x0010(0x000C) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct ShooterGame.PrimalCharacter.PrimalSnapshotPose
	 * Size -> 0x0040
	 */
	struct FPrimalSnapshotPose
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010) Edit, ZeroConstructor
		class UAnimSequence*                                       Sequence;                                                // 0x0010(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      Time;                                                    // 0x0018(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       Pedestal;                                                // 0x001C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_7TXZ[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              PedestalBone;                                            // 0x0020(0x0010) Edit, ZeroConstructor
		struct FVector                                             RootOffset;                                              // 0x0030(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_ZDF1[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ShooterGame.PrimalCharacter.DefaultTextureParamOverride
	 * Size -> 0x0010
	 */
	struct FDefaultTextureParamOverride
	{
	public:
		class FName                                                TextureParamName;                                        // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		class UTexture2D*                                          TextureValue;                                            // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct ShooterGame.BlueprintVisualLogEntry
	 * Size -> 0x0030
	 */
	struct FBlueprintVisualLogEntry
	{
	public:
		class FString                                              Category;                                                // 0x0000(0x0010) Edit, ZeroConstructor
		class FString                                              Key;                                                     // 0x0010(0x0010) Edit, ZeroConstructor
		class FString                                              Value;                                                   // 0x0020(0x0010) Edit, ZeroConstructor
	};

	/**
	 * ScriptStruct ShooterGame.PrimalDinoCharacter.DinoAttackInfo
	 * Size -> 0x0130
	 */
	struct FDinoAttackInfo
	{
	public:
		class FName                                                AttackName;                                              // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      AttackWeight;                                            // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      AttackRange;                                             // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      MinAttackRange;                                          // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      ActivateAttackRange;                                     // 0x0014(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      AttackInterval;                                          // 0x0018(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bHighQualityAttack : 1;                                  // 0x001C(0x0001) BIT_FIELD Edit, NoDestructor
		bool                                                       bSkipUntamed : 1;                                        // 0x001C(0x0001) BIT_FIELD Edit, NoDestructor
		bool                                                       bSkipTamed : 1;                                          // 0x001C(0x0001) BIT_FIELD Edit, NoDestructor
		bool                                                       bOnlyOnWildDinos : 1;                                    // 0x001C(0x0001) BIT_FIELD Edit, NoDestructor
		bool                                                       bPreventWhenEncumbered : 1;                              // 0x001C(0x0001) BIT_FIELD Edit, NoDestructor
		bool                                                       bRidingOnlyAllowOnGround : 1;                            // 0x001C(0x0001) BIT_FIELD Edit, NoDestructor
		bool                                                       bRidingOnlyAllowWhileFlying : 1;                         // 0x001C(0x0001) BIT_FIELD Edit, NoDestructor
		bool                                                       bOnlyUseWithPlayersOrRiders : 1;                         // 0x001C(0x0001) BIT_FIELD Edit, NoDestructor
		bool                                                       bOnlyUseWithPlayers : 1;                                 // 0x001D(0x0001) BIT_FIELD Edit, NoDestructor
		bool                                                       bPreventWhenSwimming : 1;                                // 0x001D(0x0001) BIT_FIELD Edit, NoDestructor
		bool                                                       bPreventWhenInsufficientStamina : 1;                     // 0x001D(0x0001) BIT_FIELD Edit, NoDestructor
		bool                                                       bSkipOnFlyers : 1;                                       // 0x001D(0x0001) BIT_FIELD Edit, NoDestructor
		bool                                                       bSkipAI : 1;                                             // 0x001D(0x0001) BIT_FIELD Edit, NoDestructor
		bool                                                       bPreventOnFemale : 1;                                    // 0x001D(0x0001) BIT_FIELD Edit, NoDestructor
		bool                                                       bPreventOnMale : 1;                                      // 0x001D(0x0001) BIT_FIELD Edit, NoDestructor
		bool                                                       bPreventWhenDinoCarrying : 1;                            // 0x001D(0x0001) BIT_FIELD Edit, NoDestructor
		bool                                                       bUseBlueprintCanRiderAttack : 1;                         // 0x001E(0x0001) BIT_FIELD Edit, NoDestructor
		bool                                                       bRequiresWalking : 1;                                    // 0x001E(0x0001) BIT_FIELD Edit, NoDestructor
		bool                                                       bRequiresSwimming : 1;                                   // 0x001E(0x0001) BIT_FIELD Edit, NoDestructor
		bool                                                       AttackStatusStarted : 1;                                 // 0x001E(0x0001) BIT_FIELD Transient, NoDestructor
		bool                                                       bAttackStopsMovement : 1;                                // 0x001E(0x0001) BIT_FIELD Edit, NoDestructor
		bool                                                       bAttackStopsMovementAllowFalling : 1;                    // 0x001E(0x0001) BIT_FIELD Edit, NoDestructor
		bool                                                       bAttackWithJump : 1;                                     // 0x001E(0x0001) BIT_FIELD Edit, NoDestructor
		bool                                                       bLocationBasedAttack : 1;                                // 0x001E(0x0001) BIT_FIELD Edit, NoDestructor
		bool                                                       bDropCarriedCharacter : 1;                               // 0x001F(0x0001) BIT_FIELD Edit, NoDestructor
		bool                                                       bCancelAndDropIfCarriedCharacter : 1;                    // 0x001F(0x0001) BIT_FIELD Edit, NoDestructor
		bool                                                       bPreventAttackWhileRunning : 1;                          // 0x001F(0x0001) BIT_FIELD Edit, NoDestructor
		bool                                                       ForceUpdateInRange : 1;                                  // 0x001F(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor
		bool                                                       ForceUpdateMeshSelf : 1;                                 // 0x001F(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor
		bool                                                       bUseSecondaryAnimationInAir : 1;                         // 0x001F(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor
		bool                                                       bUseBlueprintCanAttack : 1;                              // 0x001F(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor
		bool                                                       bUseBlueprintAdjustOutputDamage : 1;                     // 0x001F(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor
		bool                                                       bDisableRunningWhenAttacking : 1;                        // 0x0020(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor
		bool                                                       bKeepExecutingWhenAcquiringTarget : 1;                   // 0x0020(0x0001) BIT_FIELD Edit, NoDestructor
		bool                                                       bPreventWithRider : 1;                                   // 0x0020(0x0001) BIT_FIELD Edit, NoDestructor
		bool                                                       bAIForceAttackDotProductCheck : 1;                       // 0x0020(0x0001) BIT_FIELD Edit, NoDestructor
		bool                                                       bInstantlyHarvestCorpse : 1;                             // 0x0020(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor
		bool                                                       bAddPawnVelocityToProjectile : 1;                        // 0x0020(0x0001) BIT_FIELD Edit, NoDestructor
		bool                                                       bAttackStopsRotation : 1;                                // 0x0020(0x0001) BIT_FIELD Edit, NoDestructor
		bool                                                       bTamedAISpecialAttack : 1;                               // 0x0020(0x0001) BIT_FIELD Edit, NoDestructor
		bool                                                       bPreventWhenCarryingExplosive : 1;                       // 0x0021(0x0001) BIT_FIELD Edit, NoDestructor
		bool                                                       bAllowWhenAnimationPreventsInput : 1;                    // 0x0021(0x0001) BIT_FIELD Edit, NoDestructor
		bool                                                       bRequireLineOfSight : 1;                                 // 0x0021(0x0001) BIT_FIELD Edit, NoDestructor
		bool                                                       bUseBPOverrideGetAttackAnimationIndex : 1;               // 0x0021(0x0001) BIT_FIELD Edit, NoDestructor
		bool                                                       bUseSecondaryAnimationWhenSwimming : 1;                  // 0x0021(0x0001) BIT_FIELD Edit, NoDestructor
		bool                                                       bUseTertiaryAnimationWhenSwimming : 1;                   // 0x0021(0x0001) BIT_FIELD Edit, NoDestructor
		bool                                                       bHighQualityAttackOnlyPlayerOrTamed : 1;                 // 0x0021(0x0001) BIT_FIELD Edit, NoDestructor
		bool                                                       bMeleeTraceForHitBlockers : 1;                           // 0x0021(0x0001) BIT_FIELD Edit, NoDestructor
		bool                                                       bMeleeTraceForHitBlockersAddHeadsocket : 1;              // 0x0022(0x0001) BIT_FIELD Edit, NoDestructor
		unsigned char                                              UnknownData_MHNO[0x5];                                   // 0x0023(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<int32_t>                                            ChildStateIndexes;                                       // 0x0028(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		float                                                      AttackWithJumpChance;                                    // 0x0038(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_85N9[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     LastAttackTime;                                          // 0x0040(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor
		double                                                     RiderLastAttackTime;                                     // 0x0048(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor
		float                                                      AttackSelectionExpirationTime;                           // 0x0050(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_2IRP[0x4];                                   // 0x0054(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     AttackSelectionTime;                                     // 0x0058(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor
		float                                                      AttackRotationRangeDegrees;                              // 0x0060(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      AttackRotationGroundSpeedMultiplier;                     // 0x0064(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FRotator                                            AttackRotationRate;                                      // 0x0068(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_0RNV[0x4];                                   // 0x0074(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FName>                                        MeleeSwingSockets;                                       // 0x0078(0x0010) Edit, ZeroConstructor
		class FName                                                RangedSocket;                                            // 0x0088(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		int32_t                                                    MeleeDamageAmount;                                       // 0x0090(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      MeleeDamageImpulse;                                      // 0x0094(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      MeleeSwingRadius;                                        // 0x0098(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_ERFT[0x4];                                   // 0x009C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              MeleeDamageType;                                         // 0x00A0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      AttackOffset;                                            // 0x00A8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      StaminaCost;                                             // 0x00AC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      RiderAttackInterval;                                     // 0x00B0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      DotProductCheckMin;                                      // 0x00B4(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      DotProductCheckMax;                                      // 0x00B8(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_12TA[0x4];                                   // 0x00BC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UAnimMontage*>                                AttackAnimations;                                        // 0x00C0(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		TArray<float>                                              AttackAnimationWeights;                                  // 0x00D0(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		TArray<float>                                              AttackAnimationsTimeFromEndToConsiderFinished;           // 0x00E0(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		class UClass*                                              ProjectileClass;                                         // 0x00F0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UClass*                                              AttackStateTypeClass;                                    // 0x00F8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      AttackRunningSpeedModifier;                              // 0x0100(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      SwimmingAttackRunningSpeedModifier;                      // 0x0104(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      SetAttackTargetTime;                                     // 0x0108(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_1ATS[0x4];                                   // 0x010C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPrimalAIState*                                      AttackStateType;                                         // 0x0110(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor
		TArray<struct FVector>                                     LastSocketPositions;                                     // 0x0118(0x0010) ZeroConstructor, Transient
		double                                                     LastProjectileSpawnTime;                                 // 0x0128(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct ShooterGame.PrimalDinoCharacter.HibernationZoneInfo
	 * Size -> 0x0010
	 */
	struct FHibernationZoneInfo
	{
	public:
		class ANPCZoneVolume*                                      Volume;                                                  // 0x0000(0x0008) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor
		float                                                      Weight;                                                  // 0x0008(0x0004) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_H5SF[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ShooterGame.PrimalDinoCharacter.DinoBaseLevelWeightEntry
	 * Size -> 0x000C
	 */
	struct FDinoBaseLevelWeightEntry
	{
	public:
		float                                                      EntryWeight;                                             // 0x0000(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      BaseLevelMinRange;                                       // 0x0004(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      BaseLevelMaxRange;                                       // 0x0008(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct ShooterGame.WeightedObjectList
	 * Size -> 0x0020
	 */
	struct FWeightedObjectList
	{
	public:
		TArray<float>                                              Weights;                                                 // 0x0000(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		TArray<class UObject*>                                     AssociatedObjects;                                       // 0x0010(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
	};

	/**
	 * ScriptStruct ShooterGame.PrimalDinoCharacter.PrimalSaddleStructure
	 * Size -> 0x0028
	 */
	struct FPrimalSaddleStructure
	{
	public:
		struct FVector                                             DinoRelativeLocation;                                    // 0x0000(0x000C) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor
		struct FRotator                                            DinoRelativeRotation;                                    // 0x000C(0x000C) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor
		class FName                                                BoneName;                                                // 0x0018(0x0008) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor
		class APrimalStructure*                                    MyStructure;                                             // 0x0020(0x0008) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct ShooterGame.StatValuePair
	 * Size -> 0x0008
	 */
	struct FStatValuePair
	{
	public:
		EPrimalCharacterStatusValue                                Stat;                                                    // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_X05D[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    Value;                                                   // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct ShooterGame.PrimalDinoCharacter.DinoSaddleStruct
	 * Size -> 0x0020
	 */
	struct FDinoSaddleStruct
	{
	public:
		class USkeletalMeshComponent*                              Saddle;                                                  // 0x0000(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor
		class USkeletalMesh*                                       SkeletalMesh;                                            // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor
		struct FItemNetID                                          ItemId;                                                  // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bJustRemoved;                                            // 0x0018(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_74IC[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ShooterGame.PrimalDinoCharacter.DinoExtraDefaultItemList
	 * Size -> 0x0018
	 */
	struct FDinoExtraDefaultItemList
	{
	public:
		int32_t                                                    MinimumDinoLevel;                                        // 0x0000(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      ChanceToGive;                                            // 0x0004(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		TArray<class UClass*>                                      DefaultItemsToGive;                                      // 0x0008(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
	};

	/**
	 * ScriptStruct ShooterGame.PrimalDinoCharacter.ARKDinoData
	 * Size -> 0x0040
	 */
	struct FARKDinoData
	{
	public:
		class UClass*                                              DinoClass;                                               // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor
		TArray<unsigned char>                                      DinoData;                                                // 0x0008(0x0010) ZeroConstructor
		class FString                                              DinoNameInMap;                                           // 0x0018(0x0010) ZeroConstructor
		class FString                                              DinoName;                                                // 0x0028(0x0010) ZeroConstructor
		bool                                                       bNetInfoFromClient;                                      // 0x0038(0x0001) ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor
		unsigned char                                              UnknownData_G0BC[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ShooterGame.ShooterCharacter.PlayerStatusStateCharacterSound
	 * Size -> 0x0010
	 */
	struct FPlayerStatusStateCharacterSound
	{
	public:
		EPrimalCharacterStatusState                                StateType;                                               // 0x0000(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_1NMR[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USoundCue*                                           SoundToPlay;                                             // 0x0008(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct ShooterGame.ShooterCharacter.ShooterCharacterPostUpdateTickFunction
	 * Size -> 0x0008 (FullSize[0x0050] - InheritedSize[0x0048])
	 */
	struct FShooterCharacterPostUpdateTickFunction : public FTickFunction
	{
	public:
		unsigned char                                              UnknownData_9QJJ[0x8];                                   // 0x0048(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ShooterGame.ShooterPlayerController.TransponderInfo
	 * Size -> 0x0028
	 */
	struct FTransponderInfo
	{
	public:
		class FString                                              TransName;                                               // 0x0000(0x0010) ZeroConstructor
		struct FVector                                             TransLocation;                                           // 0x0010(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      Frequency;                                               // 0x001C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		struct FColor                                              DrawingColor;                                            // 0x0020(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_FCV3[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ShooterGame.UI_Spawn.BoneModifierSlider
	 * Size -> 0x0028
	 */
	struct FBoneModifierSlider
	{
	public:
		class FName                                                SliderWidgetName;                                        // 0x0000(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		TArray<struct FBoneModifierRange>                          BoneModifierRanges;                                      // 0x0008(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		EBoneModifierType                                          BoneModifierType;                                        // 0x0018(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_Y4YZ[0xF];                                   // 0x0019(0x000F) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ShooterGame.UI_Spawn.CharacterPreset
	 * Size -> 0x0020
	 */
	struct FCharacterPreset
	{
	public:
		float                                                      BodyColorSliderValue;                                    // 0x0000(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      HairColorSliderValue;                                    // 0x0004(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      EyeColorSliderValue;                                     // 0x0008(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_VSIZ[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<float>                                              BoneModifierSliderValues;                                // 0x0010(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
	};

	/**
	 * ScriptStruct ShooterGame.PrimalCharacterStatusComponent.PrimalCharacterStatusStateThresholds
	 * Size -> 0x0048
	 */
	struct FPrimalCharacterStatusStateThresholds
	{
	public:
		TArray<float>                                              HighThresholdStatusStateValues;                          // 0x0000(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		TArray<EPrimalCharacterStatusState>                        HighThresholdStatusStateType;                            // 0x0010(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		TArray<float>                                              LowThresholdStatusStateValues;                           // 0x0020(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		TArray<EPrimalCharacterStatusState>                        LowThresholdStatusStateType;                             // 0x0030(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		bool                                                       StatusStateThresholdValuesAbsolute;                      // 0x0040(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_2VTL[0x7];                                   // 0x0041(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ShooterGame.PrimalClimbingSettings.ClimbingTypeSettings
	 * Size -> 0x001C
	 */
	struct FClimbingTypeSettings
	{
	public:
		bool                                                       bIsOneShot : 1;                                          // 0x0000(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor
		unsigned char                                              UnknownData_8YRR[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      WaitTime;                                                // 0x0004(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      StaminaConsumption;                                      // 0x0008(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      ConsumeDurabilityMultiplier;                             // 0x000C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      AttachMoveTraceDistance;                                 // 0x0010(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      AttachBackTraceDistance;                                 // 0x0014(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      AttachForwardTraceDistance;                              // 0x0018(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct ShooterGame.PrimalClimbingSettings.ClimbingTransitionParams
	 * Size -> 0x0054
	 */
	struct FClimbingTransitionParams
	{
	public:
		float                                                      LocationInterpSpeed;                                     // 0x0000(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      RotationInterpSpeed;                                     // 0x0004(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      OvershootDuration;                                       // 0x0008(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      OvershootCurveExp;                                       // 0x000C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      OvershootCurveStartOffset;                               // 0x0010(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      OvershootCurveDirectionBias;                             // 0x0014(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      OvershootCurveStartBias;                                 // 0x0018(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      OvershootCurveEndOffset;                                 // 0x001C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      OvershootCurveEndBias;                                   // 0x0020(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      CameraLocationInterpSpeed;                               // 0x0024(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      CameraRotationInterpSpeed;                               // 0x0028(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bCameraSwitch;                                           // 0x002C(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_XSCN[0x3];                                   // 0x002D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CameraTransitionDuration;                                // 0x0030(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FVector                                             CameraSwitchStrength;                                    // 0x0034(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      CameraSwitchLocationInterpSpeed;                         // 0x0040(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      CameraSwitchRotationInterpSpeed;                         // 0x0044(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FRotator                                            CameraSwitchOffset;                                      // 0x0048(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct ShooterGame.PrimalColorSet.ColorSetDefinition
	 * Size -> 0x0060
	 */
	struct FColorSetDefinition
	{
	public:
		class FString                                              RegionName;                                              // 0x0000(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		TArray<class FName>                                        ColorEntryNames;                                         // 0x0010(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		TArray<float>                                              RandomWeights;                                           // 0x0020(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		TArray<float>                                              MinLevel;                                                // 0x0030(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		TArray<float>                                              MaxLevel;                                                // 0x0040(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		unsigned char                                              UnknownData_HPA1[0x10];                                  // 0x0050(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ShooterGame.PrimalDinoCharacter.DinoFoodEffectivenessMultipliers
	 * Size -> 0x0030
	 */
	struct FDinoFoodEffectivenessMultipliers
	{
	public:
		float                                                      FoodEffectivenessMultiplier;                             // 0x0000(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      HealthEffectivenessMultiplier;                           // 0x0004(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      TorpidityEffectivenessMultiplier;                        // 0x0008(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      AffinityEffectivenessMultiplier;                         // 0x000C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      AffinityOverride;                                        // 0x0010(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      StaminaEffectivenessMultiplier;                          // 0x0014(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    FoodItemCategory;                                        // 0x0018(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_ZJAB[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              FoodItemParent;                                          // 0x0020(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      UntamedFoodConsumptionPriority;                          // 0x0028(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_R005[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ShooterGame.PrimalBuff_Grappled.GrappleAnchor
	 * Size -> 0x0040
	 */
	struct FGrappleAnchor
	{
	public:
		struct FVector                                             AnchorWorldLocation;                                     // 0x0000(0x000C) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_9DHM[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USceneComponent*                                     AnchoredComponent;                                       // 0x0010(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor
		int32_t                                                    AnchoredItemIndex;                                       // 0x0018(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_HQZB[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              AnchoredBoneName;                                        // 0x0020(0x0010) BlueprintVisible, ZeroConstructor
		struct FVector                                             AnchorRelativeOffset;                                    // 0x0030(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_VH85[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ShooterGame.PrimalBuff_Grappled.GrappleTether
	 * Size -> 0x0168
	 */
	struct FGrappleTether
	{
	public:
		class FString                                              TetherTag;                                               // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, EditConst
		struct FGrappleAnchor                                      TetherAnchor_Start;                                      // 0x0010(0x0040) Edit, BlueprintVisible, EditConst, ContainsInstancedReference
		struct FGrappleAnchor                                      TetherAnchor_End;                                        // 0x0050(0x0040) Edit, BlueprintVisible, EditConst, ContainsInstancedReference
		struct FGrappleAnchor                                      TetherAnchor_Visual_Start;                               // 0x0090(0x0040) Edit, BlueprintVisible, EditConst, ContainsInstancedReference
		struct FGrappleAnchor                                      TetherAnchor_Visual_End;                                 // 0x00D0(0x0040) Edit, BlueprintVisible, EditConst, ContainsInstancedReference
		class APrimalCharacter*                                    GrappledParentPrimalChar;                                // 0x0110(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor
		class APrimalCharacter*                                    GrappleOwner;                                            // 0x0118(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor
		class APrimalBuff_Grappled*                                MasterGrappleBuff;                                       // 0x0120(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor
		float                                                      TetherLifetime;                                          // 0x0128(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_PGJG[0x4];                                   // 0x012C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     TetherCreationTime;                                      // 0x0130(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_5MJX[0x8];                                   // 0x0138(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bAnyoneCanControl : 1;                                   // 0x0140(0x0001) BIT_FIELD Edit, BlueprintVisible, EditConst, NoDestructor
		bool                                                       bUseVisualAnchor_Start : 1;                              // 0x0140(0x0001) BIT_FIELD Edit, BlueprintVisible, EditConst, NoDestructor
		bool                                                       bUseVisualAnchor_End : 1;                                // 0x0140(0x0001) BIT_FIELD Edit, BlueprintVisible, EditConst, NoDestructor
		bool                                                       bTetherBroken : 1;                                       // 0x0140(0x0001) BIT_FIELD BlueprintVisible, BlueprintReadOnly, Transient, NoDestructor
		unsigned char                                              UnknownData_BSJQ[0x7];                                   // 0x0141(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     LastAboveBreakDistPastTetherLengthTime;                  // 0x0148(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor
		float                                                      TetherLength_Current;                                    // 0x0150(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor
		struct FVector                                             DirFromOwner_Current;                                    // 0x0154(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor
		float                                                      DistToOwner_Current;                                     // 0x0160(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor
		float                                                      OwnerDistFromTetherLimit_Current;                        // 0x0164(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct ShooterGame.PrimalBuff_Grappled.ReplicatedGrappleTetherData
	 * Size -> 0x0138
	 */
	struct FReplicatedGrappleTetherData
	{
	public:
		class FString                                              Rep_TetherTag;                                           // 0x0000(0x0010) ZeroConstructor
		struct FGrappleAnchor                                      Rep_TetherAnchor_Start;                                  // 0x0010(0x0040) ContainsInstancedReference
		struct FGrappleAnchor                                      Rep_TetherAnchor_End;                                    // 0x0050(0x0040) ContainsInstancedReference
		struct FGrappleAnchor                                      Rep_TetherAnchor_Visual_Start;                           // 0x0090(0x0040) ContainsInstancedReference
		struct FGrappleAnchor                                      Rep_TetherAnchor_Visual_End;                             // 0x00D0(0x0040) ContainsInstancedReference
		class APrimalBuff_Grappled*                                Rep_MasterGrappledBuff;                                  // 0x0110(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      Rep_TetherLifetime;                                      // 0x0118(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_IMQS[0x4];                                   // 0x011C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     Rep_TetherCreationTime;                                  // 0x0120(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       Rep_bUseVisualAnchor_Start : 1;                          // 0x0128(0x0001) BIT_FIELD NoDestructor
		bool                                                       Rep_bUseVisualAnchor_End : 1;                            // 0x0128(0x0001) BIT_FIELD NoDestructor
		unsigned char                                              UnknownData_TMEG[0x3];                                   // 0x0129(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Rep_TetherLength;                                        // 0x012C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       Rep_bAnyoneCanControl : 1;                               // 0x0130(0x0001) BIT_FIELD NoDestructor
		bool                                                       Rep_bTetherBroken : 1;                                   // 0x0130(0x0001) BIT_FIELD NoDestructor
		unsigned char                                              UnknownData_KRPC[0x7];                                   // 0x0131(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ShooterGame.PrimalBuff_Grappled.CreateGrappleTetherData
	 * Size -> 0x0120
	 */
	struct FCreateGrappleTetherData
	{
	public:
		class FString                                              WithTag;                                                 // 0x0000(0x0010) BlueprintVisible, ZeroConstructor
		struct FGrappleAnchor                                      WithTetherStartAnchor;                                   // 0x0010(0x0040) BlueprintVisible, ContainsInstancedReference
		struct FGrappleAnchor                                      WithTetherEndAnchor;                                     // 0x0050(0x0040) BlueprintVisible, ContainsInstancedReference
		struct FGrappleAnchor                                      WithTetherVisualStartAnchor;                             // 0x0090(0x0040) BlueprintVisible, ContainsInstancedReference
		struct FGrappleAnchor                                      WithTetherVisualEndAnchor;                               // 0x00D0(0x0040) BlueprintVisible, ContainsInstancedReference
		class APrimalBuff_Grappled*                                WithMasterGrappleBuff;                                   // 0x0110(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      WithTetherLifetime;                                      // 0x0118(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bUseVisualAnchor_Start : 1;                              // 0x011C(0x0001) BIT_FIELD Edit, BlueprintVisible, EditConst, NoDestructor
		bool                                                       bUseVisualAnchor_End : 1;                                // 0x011C(0x0001) BIT_FIELD Edit, BlueprintVisible, EditConst, NoDestructor
		bool                                                       bAnyoneCanControl : 1;                                   // 0x011C(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		unsigned char                                              UnknownData_SEYZ[0x3];                                   // 0x011D(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ShooterGame.PrimalBuff_MissionData.ClientMissionData
	 * Size -> 0x0058
	 */
	struct FClientMissionData
	{
	public:
		class AMissionType*                                        Mission;                                                 // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		TArray<struct FMissionPhaseRequirement>                    Requirements;                                            // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor
		TArray<struct FMissionPhaseRequirement>                    LocalRequirements;                                       // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor
		TArray<struct FMissionWorldIndicator>                      MissionWorldIndicators;                                  // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor
		TArray<struct FMissionWorldIndicator>                      LocalWorldIndicators;                                    // 0x0038(0x0010) Edit, BlueprintVisible, ZeroConstructor
		TArray<struct FItemNetInfo>                                Items;                                                   // 0x0048(0x0010) Edit, BlueprintVisible, ZeroConstructor
	};

	/**
	 * ScriptStruct ShooterGame.PrimalBuff_MissionData.ClientMissionSubscriptionData
	 * Size -> 0x0030
	 */
	struct FClientMissionSubscriptionData
	{
	public:
		TAssetPtr<class UClass>                                    MissionType;                                             // 0x0000(0x001C) ELEMENT_SIZE_MISMATCH Edit, BlueprintVisible
		unsigned char                                              UnknownData_JYXD[0x4];                                   // 0x001C(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		TArray<class FName>                                        Keys;                                                    // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor
	};

	/**
	 * ScriptStruct ShooterGame.PrimalBuff_MissionData.ClientMissionEligibility
	 * Size -> 0x0038
	 */
	struct FClientMissionEligibility
	{
	public:
		bool                                                       bIsEligible : 1;                                         // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor
		bool                                                       bCompleted : 1;                                          // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor
		bool                                                       bOnGlobalCooldown : 1;                                   // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor
		bool                                                       bOnPerPlayerCooldown : 1;                                // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor
		bool                                                       bMinLevelRequirement : 1;                                // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor
		unsigned char                                              UnknownData_ACGE[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     LastUpdateNetworkTime;                                   // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		double                                                     LastCompletedUtcTime;                                    // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      MissionMaxDurationSeconds;                               // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_PDFV[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     MissionStartNetworkTime;                                 // 0x0020(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class FString                                              Reason;                                                  // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor
	};

	/**
	 * ScriptStruct ShooterGame.PrimalBuff_MissionData.MissionEligibilityData
	 * Size -> 0x0028
	 */
	struct FMissionEligibilityData
	{
	public:
		class UClass*                                              MissionType;                                             // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class FName                                                IneligibleReasonType;                                    // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		double                                                     LastCompletedUtcTime;                                    // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bIsEligible : 1;                                         // 0x0018(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor
		bool                                                       bCompleted : 1;                                          // 0x0018(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor
		bool                                                       bOnGlobalCooldown : 1;                                   // 0x0018(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor
		bool                                                       bOnPerPlayerCooldown : 1;                                // 0x0018(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor
		unsigned char                                              UnknownData_QKL8[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MissionMaxDurationSeconds;                               // 0x001C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		double                                                     MissionStartNetworkTime;                                 // 0x0020(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct ShooterGame.PrimalEngramEntry.EngramEntries
	 * Size -> 0x0010
	 */
	struct FEngramEntries
	{
	public:
		TArray<class UClass*>                                      EngramEntries;                                           // 0x0000(0x0010) Edit, ZeroConstructor
	};

	/**
	 * ScriptStruct ShooterGame.PrimalHarvestingComponent.HarvestResourceEntry
	 * Size -> 0x0078
	 */
	struct FHarvestResourceEntry
	{
	public:
		int32_t                                                    OverrideQuantityMax;                                     // 0x0000(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    OverrideQuantityMin;                                     // 0x0004(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      OverrideQuantityRandomPower;                             // 0x0008(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      EntryWeight;                                             // 0x000C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      EffectivenessQuantityMultiplier;                         // 0x0010(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      EffectivenessQualityMultiplier;                          // 0x0014(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UClass*                                              ResourceItem;                                            // 0x0018(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      QualityMin;                                              // 0x0020(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      QualityMax;                                              // 0x0024(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      XPGainMax;                                               // 0x0028(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      XPGainMin;                                               // 0x002C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		TArray<class UClass*>                                      DamageTypeEntryValuesOverrides;                          // 0x0030(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		TArray<float>                                              DamageTypeEntryWeightOverrides;                          // 0x0040(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		TArray<float>                                              DamageTypeEntryMinQuantityOverrides;                     // 0x0050(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		TArray<float>                                              DamageTypeEntryMaxQuantityOverrides;                     // 0x0060(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		bool                                                       bScaleWithDinoBabyAge : 1;                               // 0x0070(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor
		unsigned char                                              UnknownData_W7KT[0x7];                                   // 0x0071(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ShooterGame.PrimalHarvestingComponent.DamageHarvestingEntry
	 * Size -> 0x0028
	 */
	struct FDamageHarvestingEntry
	{
	public:
		float                                                      DamageMultiplier;                                        // 0x0000(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      HarvestQuantityMultiplier;                               // 0x0004(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      DamageHarvestAdditionalEffectiveness;                    // 0x0008(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      DamageDurabilityConsumptionMultiplier;                   // 0x000C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bAllowUnderwaterHarvesting : 1;                          // 0x0010(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor
		unsigned char                                              UnknownData_CDK0[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              DamageTypeParent;                                        // 0x0018(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UClass*                                              HarvestDamageFXOverride;                                 // 0x0020(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct ShooterGame.PrimalHarvestingComponent.ComponentAttachmentEntry
	 * Size -> 0x0020
	 */
	struct FComponentAttachmentEntry
	{
	public:
		class UClass*                                              ActorComponentClass;                                     // 0x0000(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FVector                                             ComponentLocationOffset;                                 // 0x0008(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FRotator                                            ComponentRotationOffset;                                 // 0x0014(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct ShooterGame.PrimalTextStyle
	 * Size -> 0x0120
	 */
	struct FPrimalTextStyle
	{
	public:
		class FName                                                StyleName;                                               // 0x0000(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FTextBlockStyle                                     TextStyle;                                               // 0x0008(0x0118) Edit, DisableEditOnInstance
	};

	/**
	 * ScriptStruct ShooterGame.PrimalImageStyle
	 * Size -> 0x0090
	 */
	struct FPrimalImageStyle
	{
	public:
		class FName                                                StyleName;                                               // 0x0000(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FInlineTextImageStyle                               ImageStyle;                                              // 0x0008(0x0088) Edit, DisableEditOnInstance
	};

	/**
	 * ScriptStruct ShooterGame.PrimalStructureSeating.SeatingSpot
	 * Size -> 0x001C
	 */
	struct FSeatingSpot
	{
	public:
		int32_t                                                    SeatNumber;                                              // 0x0000(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FVector                                             LocationOffset;                                          // 0x0004(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FRotator                                            RotationOffset;                                          // 0x0010(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct ShooterGame.LeaderboardRowWidget.LeaderboardColumnDefinition
	 * Size -> 0x0038
	 */
	struct FLeaderboardColumnDefinition
	{
	public:
		float                                                      WidthPercent;                                            // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FMargin                                             ColumnPadding;                                           // 0x0004(0x0010) Edit, BlueprintVisible
		unsigned char                                              UnknownData_E89O[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSlateFontInfo                                      Font;                                                    // 0x0018(0x0020) Edit, BlueprintVisible
	};

	/**
	 * ScriptStruct ShooterGame.UI_OptionsMenu.KeyBindingItem
	 * Size -> 0x0030
	 */
	struct FKeyBindingItem
	{
	public:
		bool                                                       bIsAxisMapping : 1;                                      // 0x0000(0x0001) BIT_FIELD Edit, NoDestructor
		unsigned char                                              UnknownData_IJS3[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                WidgetName;                                              // 0x0004(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_ILDB[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              ActionName;                                              // 0x0010(0x0010) Edit, ZeroConstructor
		float                                                      Scale;                                                   // 0x0020(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_GPVI[0xC];                                   // 0x0024(0x000C) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ShooterGame.UI_HostSession.MapDescription
	 * Size -> 0x0020
	 */
	struct FMapDescription
	{
	public:
		class UTexture2D*                                          MapImage;                                                // 0x0000(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class FString                                              MapDescription;                                          // 0x0008(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		int32_t                                                    MinAscensionLevelRequired;                               // 0x0018(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_LKXI[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ShooterGame.PrimalWorldBuffData.PropertyModifierDefinition
	 * Size -> 0x0010
	 */
	struct FPropertyModifierDefinition
	{
	public:
		class FName                                                PropertyName;                                            // 0x0000(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bNeedsManualReplication;                                 // 0x0008(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		EWorldBuffPropertyLocation                                 BuffPropertyLocation;                                    // 0x0009(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_1WXA[0x2];                                   // 0x000A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ModifierValue;                                           // 0x000C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct ShooterGame.PrimalWorldBuffData.WorldBuffDefinition
	 * Size -> 0x00D8
	 */
	struct FWorldBuffDefinition
	{
	public:
		class FName                                                WorldBuffIdentifier;                                     // 0x0000(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class FString                                              WorldBuffDisplayTitle;                                   // 0x0008(0x0010) Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance
		struct FLinearColor                                        WorldBuffDisplayTitleColor;                              // 0x0018(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class FString                                              WorldBuffDisplayText;                                    // 0x0028(0x0010) Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance
		class UTexture2D*                                          WorldBuffDisplayIcon;                                    // 0x0038(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class FString                                              WorldBuffServerNotificationText;                         // 0x0040(0x0010) Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance
		struct FLinearColor                                        WorldBuffServerNotificationTextColor;                    // 0x0050(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UTexture2D*                                          WorldBuffServerNotificationIcon;                         // 0x0060(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class USoundBase*                                          WorldBuffServerNotificationSound;                        // 0x0068(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    StackLimit;                                              // 0x0070(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      WorldBuffDuration;                                       // 0x0074(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		TArray<class FName>                                        WorldBuffsToRemoveOnStart;                               // 0x0078(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		TArray<class FName>                                        WorldBuffsToPreventWhileActive;                          // 0x0088(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		float                                                      TimeFromEndToAllowReplacement;                           // 0x0098(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class FName                                                WorldBuffSetName;                                        // 0x009C(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		EWorldBuffDifficultyType                                   BuffDifficulty;                                          // 0x00A4(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_IJ05[0x3];                                   // 0x00A5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              DifficultyDisplayText;                                   // 0x00A8(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		bool                                                       bRefreshTimerAtFullStacks : 1;                           // 0x00B8(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor
		bool                                                       bStacksExtendDuration : 1;                               // 0x00B8(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor
		bool                                                       bStacksIncreaseEffect : 1;                               // 0x00B8(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor
		bool                                                       bRemoveAllOtherWorldBuffsOnStart : 1;                    // 0x00B8(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor
		bool                                                       bPreventAddingAnyOtherWorldBuffs : 1;                    // 0x00B8(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor
		bool                                                       bForceDisableServerNotifications : 1;                    // 0x00B8(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor
		unsigned char                                              UnknownData_N1QT[0x7];                                   // 0x00B9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              WorldBuffCustomImplementation;                           // 0x00C0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		TArray<struct FPropertyModifierDefinition>                 PropertyModifiers;                                       // 0x00C8(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
	};

	/**
	 * ScriptStruct ShooterGame.PrimalWorldModifier.FoliageReskinDefinition
	 * Size -> 0x0030
	 */
	struct FFoliageReskinDefinition
	{
	public:
		class FString                                              ForFoliage;                                              // 0x0000(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		TArray<class UMaterialInterface*>                          NewFoliageMaterials;                                     // 0x0010(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		TArray<class UMaterialInterface*>                          OverrideDestructionMaterials;                            // 0x0020(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
	};

	/**
	 * ScriptStruct ShooterGame.PrimalWorldModifier.SublevelOverrideDefinition
	 * Size -> 0x0010
	 */
	struct FSublevelOverrideDefinition
	{
	public:
		class FName                                                SublevelPackageToReplace;                                // 0x0000(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class FName                                                SublevelPackageToActivate;                               // 0x0008(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct ShooterGame.PrimalWorldModifier.LevelStaticMeshReskinDefinition
	 * Size -> 0x0018
	 */
	struct FLevelStaticMeshReskinDefinition
	{
	public:
		class FString                                              MaterialNameToReplace;                                   // 0x0000(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		class UMaterialInterface*                                  NewMaterial;                                             // 0x0010(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct ShooterGame.PrimalWorldModifier.SublevelOverrideGroup
	 * Size -> 0x0038
	 */
	struct FSublevelOverrideGroup
	{
	public:
		class FString                                              ForMapName;                                              // 0x0000(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		bool                                                       bUseSublevelOverrides;                                   // 0x0010(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_9I3I[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FSublevelOverrideDefinition>                 SublevelOverrides;                                       // 0x0018(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		TArray<struct FLevelStaticMeshReskinDefinition>            StaticMeshReskins;                                       // 0x0028(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
	};

	/**
	 * ScriptStruct ShooterGame.PrimalGameData.InventoryComponentDefaultItemsAppend
	 * Size -> 0x0038
	 */
	struct FInventoryComponentDefaultItemsAppend
	{
	public:
		TArray<class UClass*>                                      InventoryComponentClasses;                               // 0x0000(0x0010) Edit, ZeroConstructor
		TArray<class UClass*>                                      AddItems;                                                // 0x0010(0x0010) Edit, ZeroConstructor
		TArray<class UClass*>                                      RemoveItems;                                             // 0x0020(0x0010) Edit, ZeroConstructor
		bool                                                       bAddToForceAllowCrafting;                                // 0x0030(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_5H82[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ShooterGame.MissionMetaData
	 * Size -> 0x0010
	 */
	struct FMissionMetaData
	{
	public:
		class FName                                                MissionTag;                                              // 0x0000(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UClass*                                              MissionMetaDataClass;                                    // 0x0008(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct ShooterGame.PrimalWorldSettingsEventOverrides.ActiveEventUndeprecatedStructures
	 * Size -> 0x0018
	 */
	struct FActiveEventUndeprecatedStructures
	{
	public:
		class FName                                                ActiveEvent;                                             // 0x0000(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		TArray<class UClass*>                                      UndeprecatedStructuresDuringEvent;                       // 0x0008(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
	};

	/**
	 * ScriptStruct ShooterGame.PrimalWorldSettingsEventOverrides.ActiveEventUndeprecatedItems
	 * Size -> 0x0018
	 */
	struct FActiveEventUndeprecatedItems
	{
	public:
		class FName                                                ActiveEvent;                                             // 0x0000(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		TArray<class UClass*>                                      UndeprecatedItemsDuringEvent;                            // 0x0008(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
	};

	/**
	 * ScriptStruct ShooterGame.PrimalWorldSettingsEventOverrides.ActiveEventUndeprecatedDinos
	 * Size -> 0x0018
	 */
	struct FActiveEventUndeprecatedDinos
	{
	public:
		class FName                                                ActiveEvent;                                             // 0x0000(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		TArray<class UClass*>                                      UndeprecatedDinosDuringEvent;                            // 0x0008(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
	};

	/**
	 * ScriptStruct ShooterGame.PrimalWorldSettingsEventOverrides.ActiveEventGlobalStatusAdjustments
	 * Size -> 0x0068
	 */
	struct FActiveEventGlobalStatusAdjustments
	{
	public:
		class FName                                                ActiveEvent;                                             // 0x0000(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      GlobalStatusAdjustmentRateMultipliersPositive[0xC];      // 0x0008(0x0030) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      GlobalStatusAdjustmentRateMultipliersNegative[0xC];      // 0x0038(0x0030) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct ShooterGame.ShooterDamageType.OverrideDamageHarvestingEntry
	 * Size -> 0x0048
	 */
	struct FOverrideDamageHarvestingEntry
	{
	public:
		TArray<class UClass*>                                      ForHarvestingComponents;                                 // 0x0000(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		struct FDamageHarvestingEntry                              HarvestEntryOverride;                                    // 0x0010(0x0028) Edit, DisableEditOnInstance
		TArray<struct FHarvestResourceEntry>                       HarvestResourceEntriesOverride;                          // 0x0038(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
	};

	/**
	 * ScriptStruct ShooterGame.ShooterDamageType.TargetClassDamageScaler
	 * Size -> 0x0010
	 */
	struct FTargetClassDamageScaler
	{
	public:
		class UClass*                                              TargetClass;                                             // 0x0000(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      DamageScale;                                             // 0x0008(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_11CD[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ShooterGame.ShooterGame_Menu.ActiveEventMainMenuOverride
	 * Size -> 0x0020
	 */
	struct FActiveEventMainMenuOverride
	{
	public:
		class FName                                                ActiveEvent;                                             // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UTexture2D*                                          MainMenuBG;                                              // 0x0008(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class FString                                              MusicFilename;                                           // 0x0010(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance
	};

	/**
	 * ScriptStruct ShooterGame.ShooterGameInstance.AssetPathObjectPair
	 * Size -> 0x0018
	 */
	struct FAssetPathObjectPair
	{
	public:
		struct FStringAssetReference                               AssetPath;                                               // 0x0000(0x0010) ZeroConstructor
		class UObject*                                             AssetObject;                                             // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct ShooterGame.TerrainComponent.InstancedFoligeData
	 * Size -> 0x0010
	 */
	struct FInstancedFoligeData
	{
	public:
		class UStaticMeshComponent*                                Component;                                               // 0x0000(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor
		class UObject*                                             FoliageType;                                             // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct ShooterGame.TerrainComponent.TerrainInfo
	 * Size -> 0x0058
	 */
	struct FTerrainInfo
	{
	public:
		class AInstancedFoliageActor*                              FoliageActor;                                            // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor
		TArray<struct FInstancedFoligeData>                        InstancedFoligeData;                                     // 0x0008(0x0010) ZeroConstructor, ContainsInstancedReference
		uint16_t                                                   PGPropertiesBufferSize;                                  // 0x0018(0x0002) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_TXYZ[0x6];                                   // 0x001A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<unsigned char>                                      PGPropertiesBuffer;                                      // 0x0020(0x0010) ZeroConstructor
		int32_t                                                    Version;                                                 // 0x0030(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_KB9L[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<float>                                              FromFloatCacheInputs;                                    // 0x0038(0x0010) ZeroConstructor
		TArray<int32_t>                                            FromFloatCacheRawOutputs;                                // 0x0048(0x0010) ZeroConstructor
	};

	/**
	 * ScriptStruct ShooterGame.ShooterGameMode.PlayerDeathReason
	 * Size -> 0x0020
	 */
	struct FPlayerDeathReason
	{
	public:
		int32_t                                                    PlayerId;                                                // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_4HSC[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              DeathReason;                                             // 0x0008(0x0010) ZeroConstructor
		double                                                     DiedAtTime;                                              // 0x0018(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct ShooterGame.ShooterGameMode.EngramEntryOverride
	 * Size -> 0x0028
	 */
	struct FEngramEntryOverride
	{
	public:
		class FString                                              EngramClassName;                                         // 0x0000(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		int32_t                                                    EngramIndex;                                             // 0x0010(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       EngramHidden;                                            // 0x0014(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_7OOT[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    EngramPointsCost;                                        // 0x0018(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    EngramLevelRequirement;                                  // 0x001C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       RemoveEngramPreReq;                                      // 0x0020(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_W6N4[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ShooterGame.ShooterGameMode.EngramEntryAutoUnlock
	 * Size -> 0x0018
	 */
	struct FEngramEntryAutoUnlock
	{
	public:
		class FString                                              EngramClassName;                                         // 0x0000(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		int32_t                                                    LevelToAutoUnlock;                                       // 0x0010(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_YLTT[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ShooterGame.ShooterGameMode.DinoSpawnWeightMultiplier
	 * Size -> 0x0014
	 */
	struct FDinoSpawnWeightMultiplier
	{
	public:
		class FName                                                DinoNameTag;                                             // 0x0000(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      SpawnWeightMultiplier;                                   // 0x0008(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       OverrideSpawnLimitPercentage;                            // 0x000C(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_08TD[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      SpawnLimitPercentage;                                    // 0x0010(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct ShooterGame.ShooterGameMode.ClassMultiplier
	 * Size -> 0x0018
	 */
	struct FClassMultiplier
	{
	public:
		class FString                                              ClassName;                                               // 0x0000(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		float                                                      Multiplier;                                              // 0x0010(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_N4EH[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ShooterGame.ClassNameReplacement
	 * Size -> 0x0020
	 */
	struct FClassNameReplacement
	{
	public:
		class FString                                              FromClassName;                                           // 0x0000(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		class FString                                              ToClassName;                                             // 0x0010(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
	};

	/**
	 * ScriptStruct ShooterGame.PrimalGameData.ItemCraftingCostOverride
	 * Size -> 0x0018
	 */
	struct FItemCraftingCostOverride
	{
	public:
		class UClass*                                              ItemClass;                                               // 0x0000(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		TArray<struct FCraftingResourceRequirement>                BaseCraftingResourceRequirements;                        // 0x0008(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
	};

	/**
	 * ScriptStruct ShooterGame.PrimalGameData.ConfigCraftingResourceRequirement
	 * Size -> 0x0020
	 */
	struct FConfigCraftingResourceRequirement
	{
	public:
		float                                                      BaseResourceRequirement;                                 // 0x0000(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_QWDI[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              ResourceItemTypeString;                                  // 0x0008(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		bool                                                       bCraftingRequireExactResourceType;                       // 0x0018(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_CG2I[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ShooterGame.PrimalGameData.ConfigItemCraftingCostOverride
	 * Size -> 0x0020
	 */
	struct FConfigItemCraftingCostOverride
	{
	public:
		class FString                                              ItemClassString;                                         // 0x0000(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		TArray<struct FConfigCraftingResourceRequirement>          BaseCraftingResourceRequirements;                        // 0x0010(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
	};

	/**
	 * ScriptStruct ShooterGame.PrimalGameData.MaxItemQuantityOverride
	 * Size -> 0x0008
	 */
	struct FMaxItemQuantityOverride
	{
	public:
		int32_t                                                    MaxItemQuantity;                                         // 0x0000(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bIgnoreMultiplier;                                       // 0x0004(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_7KPT[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ShooterGame.PrimalGameData.ConfigMaxItemQuantityOverride
	 * Size -> 0x0018
	 */
	struct FConfigMaxItemQuantityOverride
	{
	public:
		class FString                                              ItemClassString;                                         // 0x0000(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		struct FMaxItemQuantityOverride                            Quantity;                                                // 0x0010(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct ShooterGame.ShooterGameMode.ConfigNPCSpawnEntriesContainer
	 * Size -> 0x0030
	 */
	struct FConfigNPCSpawnEntriesContainer
	{
	public:
		class FString                                              NPCSpawnEntriesContainerClassString;                     // 0x0000(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		TArray<struct FNPCSpawnEntry>                              NPCSpawnEntries;                                         // 0x0010(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		TArray<struct FNPCSpawnLimit>                              NPCSpawnLimits;                                          // 0x0020(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
	};

	/**
	 * ScriptStruct ShooterGame.Leaderboard.LeaderboardEntry
	 * Size -> 0x0018
	 */
	struct FLeaderboardEntry
	{
	public:
		class FName                                                MissionTag;                                              // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor
		TArray<struct FLeaderboardRow>                             Rows;                                                    // 0x0008(0x0010) ZeroConstructor
	};

	/**
	 * ScriptStruct ShooterGame.Leaderboard.LeaderboardsContainer
	 * Size -> 0x0010
	 */
	struct FLeaderboardsContainer
	{
	public:
		TArray<struct FLeaderboardEntry>                           Leaderboards;                                            // 0x0000(0x0010) ZeroConstructor, RepSkip
	};

	/**
	 * ScriptStruct ShooterGame.CrateTemporaryQualityModifiers
	 * Size -> 0x0020
	 */
	struct FCrateTemporaryQualityModifiers
	{
	public:
		class FName                                                CustomTag;                                               // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class FString                                              ClassString;                                             // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor
		float                                                      QualityMultiplierModifier;                               // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_Q0PU[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ShooterGame.CrateTemporaryQualityModifierSet
	 * Size -> 0x0018
	 */
	struct FCrateTemporaryQualityModifierSet
	{
	public:
		class FName                                                SetTag;                                                  // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		TArray<struct FCrateTemporaryQualityModifiers>             Modifiers;                                               // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor
	};

	/**
	 * ScriptStruct ShooterGame.ResourceTemporaryAmountModifiers
	 * Size -> 0x0020
	 */
	struct FResourceTemporaryAmountModifiers
	{
	public:
		class FName                                                CustomTag;                                               // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class FString                                              HarvestComponentClassString;                             // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor
		float                                                      ResourceAmountMultiplierModifier;                        // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_A663[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ShooterGame.ResourceTemporaryAmountModifierSet
	 * Size -> 0x0018
	 */
	struct FResourceTemporaryAmountModifierSet
	{
	public:
		class FName                                                SetTag;                                                  // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		TArray<struct FResourceTemporaryAmountModifiers>           Modifiers;                                               // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor
	};

	/**
	 * ScriptStruct ShooterGame.PrimalGameData.ItemMaxItemQuantityOverride
	 * Size -> 0x0010
	 */
	struct FItemMaxItemQuantityOverride
	{
	public:
		class UClass*                                              ItemClass;                                               // 0x0000(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FMaxItemQuantityOverride                            Quantity;                                                // 0x0008(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct ShooterGame.ShooterGameState.DinoDownloadData
	 * Size -> 0x0010
	 */
	struct FDinoDownloadData
	{
	public:
		uint32_t                                                   AllowDownloadTimeUTC;                                    // 0x0000(0x0004) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_B8XD[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              UniqueDino;                                              // 0x0008(0x0008) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct ShooterGame.TeleportDestination
	 * Size -> 0x0028
	 */
	struct FTeleportDestination
	{
	public:
		class FString                                              DestinationTitle;                                        // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor
		struct FVector                                             DestinationLocation;                                     // 0x0010(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FRotator                                            DestinationRotation;                                     // 0x001C(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct ShooterGame.MassTeleportData
	 * Size -> 0x00D0
	 */
	struct FMassTeleportData
	{
	public:
		struct FTeleportDestination                                MyTeleportDestination;                                   // 0x0000(0x0028) Edit, BlueprintVisible
		double                                                     MyTeleportStartTime;                                     // 0x0028(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      MyTeleportDuration;                                      // 0x0030(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      MyTeleportRadius;                                        // 0x0034(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class AActor*                                              InitiatedByActor;                                        // 0x0038(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FTransform                                          InitiatedAtTransform;                                    // 0x0040(0x0030) Edit, BlueprintVisible, IsPlainOldData, NoDestructor
		class UClass*                                              BuffToApply;                                             // 0x0070(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		TArray<class AActor*>                                      MyTeleportingActors;                                     // 0x0078(0x0010) Edit, BlueprintVisible, ZeroConstructor
		bool                                                       bTeleportSnapsToGround : 1;                              // 0x0088(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor
		unsigned char                                              UnknownData_PTBU[0x7];                                   // 0x0089(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FTransform>                                  MyTeleportingActorTransformOffsets;                      // 0x0090(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor
		TArray<float>                                              MyTeleportingDelays;                                     // 0x00A0(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor
		TArray<int32_t>                                            MyTeleportationAttemptMap;                               // 0x00B0(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor
		bool                                                       bMaintainRotation : 1;                                   // 0x00C0(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor
		unsigned char                                              UnknownData_IC41[0xF];                                   // 0x00C1(0x000F) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ShooterGame.ShooterGameState.WorldBuffPersistantData
	 * Size -> 0x0018
	 */
	struct FWorldBuffPersistantData
	{
	public:
		class FName                                                WorldBuffIdentifier;                                     // 0x0000(0x0008) BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor
		int32_t                                                    StackCount;                                              // 0x0008(0x0004) BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_GVOH[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     WorldBuffStartTime;                                      // 0x0010(0x0008) BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct ShooterGame.ShooterGameState.GameIniData
	 * Size -> 0x0020
	 */
	struct FGameIniData
	{
	public:
		class FString                                              PropertyName;                                            // 0x0000(0x0010) ZeroConstructor, Transient
		class FString                                              PropertyValue;                                           // 0x0010(0x0010) ZeroConstructor, Transient
	};

	/**
	 * ScriptStruct ShooterGame.ActionReportItem
	 * Size -> 0x0050
	 */
	struct FActionReportItem
	{
	public:
		class FString                                              PlayerName;                                              // 0x0000(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor
		class FString                                              TribeName;                                               // 0x0010(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor
		class FString                                              TimeOfDeath;                                             // 0x0020(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor
		class FString                                              LevelOfDeath;                                            // 0x0030(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor
		class FString                                              DeathMessage;                                            // 0x0040(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor
	};

	/**
	 * ScriptStruct ShooterGame.BattleGameState.PlayerDeathNotification
	 * Size -> 0x0088
	 */
	struct FPlayerDeathNotification
	{
	public:
		class FString                                              PlayerDeathStringEnemy;                                  // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor
		class FString                                              PlayerDeathStringAlly;                                   // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor
		class FString                                              PlayerDeathStringYou;                                    // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor
		class FString                                              DeathReason;                                             // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor
		TArray<class FString>                                      DeadPlayerNames;                                         // 0x0040(0x0010) Edit, BlueprintVisible, ZeroConstructor
		bool                                                       bIsTribeDeath;                                           // 0x0050(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_ENNQ[0x7];                                   // 0x0051(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              DeathTribeName;                                          // 0x0058(0x0010) Edit, BlueprintVisible, ZeroConstructor
		int32_t                                                    TargetingTeam;                                           // 0x0068(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_41D3[0x4];                                   // 0x006C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int64_t                                                    LinkedPlayerID;                                          // 0x0070(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		TArray<struct FPrimalPlayerCharacterConfigStructReplicated> PlayersData;                                             // 0x0078(0x0010) Edit, BlueprintVisible, ZeroConstructor
	};

	/**
	 * ScriptStruct ShooterGame.BattleGameState.BattleTribeData
	 * Size -> 0x0018
	 */
	struct FBattleTribeData
	{
	public:
		class FString                                              TribeName;                                               // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor
		int32_t                                                    TribeId;                                                 // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_A124[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ShooterGame.BattleGameState.BattlePlayerData
	 * Size -> 0x0020
	 */
	struct FBattlePlayerData
	{
	public:
		class FString                                              PlayerName;                                              // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor
		bool                                                       bConnected;                                              // 0x0010(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bAlive;                                                  // 0x0011(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_WMGM[0x2];                                   // 0x0012(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    TribeId;                                                 // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		int32_t                                                    PlayerId;                                                // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_IUYJ[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ShooterGame.ShooterGameUserSettings.DepthOfFieldSetting
	 * Size -> 0x0020
	 */
	struct FDepthOfFieldSetting
	{
	public:
		float                                                      FocalDistance;                                           // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      FocalRegion;                                             // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      NearTransitionRegion;                                    // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      FarTransitionRegion;                                     // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      Scale;                                                   // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      MaxBokehSize;                                            // 0x0014(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      Occlusion;                                               // 0x0018(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       UseGaussianBlur;                                         // 0x001C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_V24I[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ShooterGame.ShooterWeapon.WeaponData
	 * Size -> 0x002C
	 */
	struct FWeaponData
	{
	public:
		bool                                                       bInfiniteAmmo;                                           // 0x0000(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bNeverReload;                                            // 0x0001(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bUsesAmmo;                                               // 0x0002(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bDontTakeAmmoOnReload;                                   // 0x0003(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bFullReloadFromSingleItem;                               // 0x0004(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bShowAmmoInClipAsPercent;                                // 0x0005(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bDontReloadEmptyClipOnEquip;                             // 0x0006(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_ELCA[0x1];                                   // 0x0007(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    AmmoPerClip;                                             // 0x0008(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    AmmoPerShot;                                             // 0x000C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bSilentOverflowReload;                                   // 0x0010(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_UKS9[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      TimeBetweenShots;                                        // 0x0014(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      NoAnimReloadDuration;                                    // 0x0018(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bForceReloadDuration;                                    // 0x001C(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bLoopedReloadAnim;                                       // 0x001D(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_3F32[0x2];                                   // 0x001E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ReloadDurationPerAmmoCount;                              // 0x0020(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      ItemDurabilityToConsumePerShot;                          // 0x0024(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      HarvestResourceMultiplier;                               // 0x0028(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct ShooterGame.ShooterWeapon.WeaponAnim
	 * Size -> 0x0010
	 */
	struct FWeaponAnim
	{
	public:
		class UAnimMontage*                                        Pawn1P;                                                  // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UAnimMontage*                                        Pawn3P;                                                  // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct ShooterGame.ShooterWeapon.InstantWeaponData
	 * Size -> 0x0030
	 */
	struct FInstantWeaponData
	{
	public:
		float                                                      WeaponSpread;                                            // 0x0000(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      TargetingSpreadMod;                                      // 0x0004(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      FinalWeaponSpreadMultiplier;                             // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      FiringSpreadIncrement;                                   // 0x000C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      FiringSpreadMax;                                         // 0x0010(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      WeaponRange;                                             // 0x0014(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    HitDamage;                                               // 0x0018(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      DamageImpulse;                                           // 0x001C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UClass*                                              DamageType;                                              // 0x0020(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      ClientSideHitLeeway;                                     // 0x0028(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      AllowedViewDotHitDir;                                    // 0x002C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct ShooterGame.ShooterProjectile.ProjectileWeaponData
	 * Size -> 0x0028
	 */
	struct FProjectileWeaponData
	{
	public:
		float                                                      ProjectileLife;                                          // 0x0000(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    ExplosionDamage;                                         // 0x0004(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      ExplosionImpulse;                                        // 0x0008(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    DirectDamage;                                            // 0x000C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      DirectImpulse;                                           // 0x0010(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      ExplosionRadius;                                         // 0x0014(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UClass*                                              DamageType;                                              // 0x0018(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UClass*                                              DirectDamageType;                                        // 0x0020(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct ShooterGame.VictoryCore.ProjectileArc
	 * Size -> 0x0030
	 */
	struct FProjectileArc
	{
	public:
		struct FVector                                             StartLocation;                                           // 0x0000(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector                                             StartDirection;                                          // 0x000C(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      LaunchSpeed;                                             // 0x0018(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FRotator                                            WorldRotation;                                           // 0x001C(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bApplyRotationToGravityDirection;                        // 0x0028(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_JMO4[0x3];                                   // 0x0029(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      OverrideGravityZ;                                        // 0x002C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct ShooterGame.VictoryCore.OverlappedFoliageElement
	 * Size -> 0x0038
	 */
	struct FOverlappedFoliageElement
	{
	public:
		class AActor*                                              HarvestActor;                                            // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UInstancedStaticMeshComponent*                       InstancedStaticMeshComponent;                            // 0x0008(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor
		class UPrimalHarvestingComponent*                          HarvestingComponent;                                     // 0x0010(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor
		struct FVector                                             HarvestLocation;                                         // 0x0018(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		int32_t                                                    HitBodyIndex;                                            // 0x0024(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      MaxHarvestHealth;                                        // 0x0028(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      CurrentHarvestHealth;                                    // 0x002C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bIsUnharvestable : 1;                                    // 0x0030(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor
		bool                                                       bIsVisibleAndActive : 1;                                 // 0x0030(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor
		unsigned char                                              UnknownData_Q8KA[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ShooterGame.VictoryCore.PenetrationTraceHit
	 * Size -> 0x0090
	 */
	struct FPenetrationTraceHit
	{
	public:
		struct FHitResult                                          Hit;                                                     // 0x0000(0x0088) Edit
		float                                                      DistanceFromLastHit;                                     // 0x0088(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      TotalDistance;                                           // 0x008C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct ShooterGame.PrimalGameData.DinoSetupGroup
	 * Size -> 0x0030
	 */
	struct FDinoSetupGroup
	{
	public:
		class FName                                                GroupName;                                               // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      RandomWeight;                                            // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_L15D[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FDinoSetup>                                  Entries;                                                 // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor
		TArray<int32_t>                                            EntriesSpawnNumberLimits;                                // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor
	};

	/**
	 * ScriptStruct ShooterGame.PrimalProjectileNetGun.ManagedBoneSetup
	 * Size -> 0x001C
	 */
	struct FManagedBoneSetup
	{
	public:
		class FName                                                BoneName;                                                // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		ETraceType                                                 TraceType;                                               // 0x0008(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bNoHitDefaultToCenter : 1;                               // 0x0009(0x0001) BIT_FIELD Edit, NoDestructor
		unsigned char                                              UnknownData_KIC5[0x2];                                   // 0x000A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      StartOffset;                                             // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      LineTraceLength;                                         // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      LaunchSpeed;                                             // 0x0014(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      GravityOverride;                                         // 0x0018(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct ShooterGame.ShooterWeapon_Climb.ClimbingAnims
	 * Size -> 0x0400
	 */
	struct FClimbingAnims
	{
	public:
		struct FWeaponAnim                                         LeftHandAnchored[0x20];                                  // 0x0000(0x0200) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FWeaponAnim                                         RightHandAnchored[0x20];                                 // 0x0200(0x0200) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct ShooterGame.SkyBoxLoader.SkyBoxLoadedStatus
	 * Size -> 0x0020
	 */
	struct FSkyBoxLoadedStatus
	{
	public:
		unsigned char                                              UnknownData_E5JF[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTexture2D*                                          LoadedTextureResources[0x3];                             // 0x0008(0x0018) ZeroConstructor, Transient, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct ShooterGame.SOTFNotification.SOTFNotificationInfo
	 * Size -> 0x0070
	 */
	struct FSOTFNotificationInfo
	{
	public:
		bool                                                       bIsActive;                                               // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_E19O[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FString>                                      PlayerNames;                                             // 0x0008(0x0010) ZeroConstructor
		class FString                                              PlayerDeathReason;                                       // 0x0018(0x0010) ZeroConstructor
		class FString                                              TribeName;                                               // 0x0028(0x0010) ZeroConstructor
		class FString                                              CustomDrawString;                                        // 0x0038(0x0010) ZeroConstructor
		double                                                     StartDisplayTime;                                        // 0x0048(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      DisplayInterval;                                         // 0x0050(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_LUNJ[0x4];                                   // 0x0054(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FPrimalPlayerCharacterConfigStructReplicated> DisplayData;                                             // 0x0058(0x0010) ZeroConstructor
		bool                                                       bLastPlayer;                                             // 0x0068(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		ESTOFNotificationType                                      Type;                                                    // 0x0069(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_0XHC[0x6];                                   // 0x006A(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ShooterGame.SOTFNotificationDisplay.ScrollingTextInfo
	 * Size -> 0x0010
	 */
	struct FScrollingTextInfo
	{
	public:
		class UTextRenderComponent*                                TextComponent;                                           // 0x0000(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor
		float                                                      Time;                                                    // 0x0008(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor
		bool                                                       bActive;                                                 // 0x000C(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_1QFS[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ShooterGame.SOTFNotificationDisplay.PlayerPreviewImage
	 * Size -> 0x0030
	 */
	struct FPlayerPreviewImage
	{
	public:
		unsigned char                                              UnknownData_PLFZ[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UStaticMeshComponent*                                PreviewMesh;                                             // 0x0010(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor
		class UTextRenderComponent*                                PlayerNameText;                                          // 0x0018(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor
		class UTextRenderComponent*                                TribeComponent;                                          // 0x0020(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor
		class UTextRenderComponent*                                DeathInfo;                                               // 0x0028(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct ShooterGame.SOTFNotificationDisplay.BannerTextInfo
	 * Size -> 0x0018
	 */
	struct FBannerTextInfo
	{
	public:
		class UTextRenderComponent*                                TextComponent;                                           // 0x0000(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor
		class UStaticMeshComponent*                                BackgroundComponent;                                     // 0x0008(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor
		bool                                                       bActive;                                                 // 0x0010(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_SSLM[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ShooterGame.SoundNodeVehicleEngine.VehicleEngineDatum
	 * Size -> 0x0014
	 */
	struct FVehicleEngineDatum
	{
	public:
		float                                                      FadeInRPMStart;                                          // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      FadeInRPMEnd;                                            // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      FadeOutRPMStart;                                         // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      FadeOutRPMEnd;                                           // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      MaxPitchMultiplier;                                      // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct ShooterGame.SupplyCrateSpawningVolume.SupplyCrateSpawnEntry
	 * Size -> 0x0018
	 */
	struct FSupplyCrateSpawnEntry
	{
	public:
		float                                                      EntryWeight;                                             // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_Q5LN[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              CrateTemplate;                                           // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		class UClass*                                              CrateEnemySpawnEntries;                                  // 0x0010(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct ShooterGame.SupplyCrateSpawningVolume.SupplyCrateSpawnPointEntry
	 * Size -> 0x0050
	 */
	struct FSupplyCrateSpawnPointEntry
	{
	public:
		class AActor*                                              LinkedSpawnPoint;                                        // 0x0000(0x0008) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor
		class ANPCZoneManager*                                     LinkedEnemySpawnZoneManager;                             // 0x0008(0x0008) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor
		class FName                                                LinkedEnemySpawnZoneManagerTag;                          // 0x0010(0x0008) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor
		bool                                                       bTraceGroundPoint : 1;                                   // 0x0018(0x0001) BIT_FIELD Edit, DisableEditOnTemplate, NoDestructor
		unsigned char                                              UnknownData_TEHS[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             TraceGroundPointDownOffset;                              // 0x001C(0x000C) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor
		struct FVector                                             TraceGroundPointUpOffset;                                // 0x0028(0x000C) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor
		float                                                      SpawnPointWeight;                                        // 0x0034(0x0004) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor
		TArray<struct FSupplyCrateSpawnEntry>                      OverrideSupplyCrateEntries;                              // 0x0038(0x0010) Edit, ZeroConstructor, DisableEditOnTemplate
		unsigned char                                              UnknownData_ICX9[0x8];                                   // 0x0048(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ShooterGame.VRBattleGroupDataAsset.VRBattleWaveUnit
	 * Size -> 0x0038
	 */
	struct FVRBattleWaveUnit
	{
	public:
		class UClass*                                              DinoType;                                                // 0x0000(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class FString                                              DinoBlueprintPath;                                       // 0x0008(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		int32_t                                                    DinoLevel;                                               // 0x0018(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FVector                                             SpawnOffset;                                             // 0x001C(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		TArray<EPrimalCharacterStatusValue>                        PrioritizeStats;                                         // 0x0028(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
	};

	/**
	 * ScriptStruct ShooterGame.WaterVolumeWithFlow.GridIndex
	 * Size -> 0x0008
	 */
	struct FGridIndex
	{
	public:
		int32_t                                                    X;                                                       // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		int32_t                                                    Y;                                                       // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct ShooterGame.WorldModifiersContainer.PrimalWorldModifierList
	 * Size -> 0x0040
	 */
	struct FPrimalWorldModifierList
	{
	public:
		bool                                                       bUseActiveEvent;                                         // 0x0000(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_WEF9[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FName>                                        ActiveEventNames;                                        // 0x0008(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		bool                                                       bUseINIStringOptionValue;                                // 0x0018(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_94AM[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FString>                                      INIStringOptionValues;                                   // 0x0020(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		bool                                                       bHasOverridePriority;                                    // 0x0030(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_XM95[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              WorldModifierClass;                                      // 0x0038(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct ShooterGame.ARKTributeData
	 * Size -> 0x0078
	 */
	struct FARKTributeData
	{
	public:
		struct FGuid                                               ID;                                                      // 0x0000(0x0010) ZeroConstructor
		EPrimalARKTributeDataType                                  DataType;                                                // 0x0010(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_WSRR[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<unsigned char>                                      DataBytes;                                               // 0x0018(0x0010) ZeroConstructor
		class FString                                              DataClassName;                                           // 0x0028(0x0010) ZeroConstructor
		class FString                                              DataTagName;                                             // 0x0038(0x0010) ZeroConstructor
		class FString                                              Name;                                                    // 0x0048(0x0010) ZeroConstructor
		TArray<class FString>                                      DataStats;                                               // 0x0058(0x0010) ZeroConstructor
		double                                                     LastReceiveDataTime;                                     // 0x0068(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor
		uint32_t                                                   DataID1;                                                 // 0x0070(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		uint32_t                                                   DataID2;                                                 // 0x0074(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct ShooterGame.SaveLoadDyePaintingItem
	 * Size -> 0x0038
	 */
	struct FSaveLoadDyePaintingItem
	{
	public:
		struct FItemNetID                                          ItemId;                                                  // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor
		class FString                                              ColorName;                                               // 0x0008(0x0010) ZeroConstructor
		struct FColor                                              DyeColor;                                                // 0x0018(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      MissingPercentage;                                       // 0x001C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      NeededPercentage;                                        // 0x0020(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		int16_t                                                    ArchIndex;                                               // 0x0024(0x0002) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_HE75[0x2];                                   // 0x0026(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<int32_t>                                            ColorPixels;                                             // 0x0028(0x0010) ZeroConstructor
	};

	/**
	 * ScriptStruct ShooterGame.FishSnareData
	 * Size -> 0x000C
	 */
	struct FFishSnareData
	{
	public:
		TWeakObjectPtr<class APrimalDinoCharacter>                 DinoCharacter;                                           // 0x0000(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      SnareTime;                                               // 0x0008(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct ShooterGame.GamePadKeyName
	 * Size -> 0x0030
	 */
	struct FGamePadKeyName
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018) Edit, DisableEditOnInstance
		class FString                                              Name;                                                    // 0x0018(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		class UTexture2D*                                          KeyIcon;                                                 // 0x0028(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct ShooterGame.TekGrenadeLauncherSlot
	 * Size -> 0x0018
	 */
	struct FTekGrenadeLauncherSlot
	{
	public:
		class UClass*                                              AmmoType;                                                // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		double                                                     LastFireTime;                                            // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bIsLoaded;                                               // 0x0010(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_SQNC[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ShooterGame.MekBackpackData
	 * Size -> 0x0058
	 */
	struct FMekBackpackData
	{
	public:
		class FName                                                BackpackType;                                            // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		TArray<bool>                                               BoolData;                                                // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor
		TArray<float>                                              FloatData;                                               // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor
		TArray<double>                                             TimeData;                                                // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor
		TArray<struct FVector>                                     VectorData;                                              // 0x0038(0x0010) Edit, BlueprintVisible, ZeroConstructor
		TArray<class FString>                                      StringData;                                              // 0x0048(0x0010) Edit, BlueprintVisible, ZeroConstructor
	};

	/**
	 * ScriptStruct ShooterGame.PrimalGameData.EscapeRoom_RoomItemSetup
	 * Size -> 0x0030
	 */
	struct FEscapeRoom_RoomItemSetup
	{
	public:
		class UClass*                                              ItemClass;                                               // 0x0000(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    NumItems;                                                // 0x0008(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_XGOF[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UStaticMesh*                                         MeshOverride;                                            // 0x0010(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FVector                                             ScaleOverride;                                           // 0x0018(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_S6CL[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterialInterface*                                  MaterialOverride;                                        // 0x0028(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct ShooterGame.PrimalGameData.EscapeRoom_RoomSetup
	 * Size -> 0x00B8
	 */
	struct FEscapeRoom_RoomSetup
	{
	public:
		TArray<bool>                                               RoomUnlockRequirements;                                  // 0x0000(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		TArray<bool>                                               UnlockHintTypes;                                         // 0x0010(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		float                                                      CorrectHintWeight;                                       // 0x0020(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_Q3CQ[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<float>                                              MultiplierPerReset;                                      // 0x0028(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		int32_t                                                    NumDinosToKill;                                          // 0x0038(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_8KB4[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FDinoSetupGroup>                             RoomGroupDinoSetups;                                     // 0x0040(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		struct FEscapeRoom_RoomItemSetup                           ItemSetup;                                               // 0x0050(0x0030) Edit, DisableEditOnInstance
		int32_t                                                    NumHintFloors;                                           // 0x0080(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    NumHintRoomPulses;                                       // 0x0084(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      TimeToComplete;                                          // 0x0088(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       TeleportToNextRoomOnUnlock;                              // 0x008C(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       TeleportToNextRoomOnCorrectOverlap;                      // 0x008D(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       SpawnEnemiesWithoutUnlockReq;                            // 0x008E(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_S5I0[0x1];                                   // 0x008F(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    NumDinosPerWave;                                         // 0x0090(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      WaveInterval;                                            // 0x0094(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		TArray<bool>                                               ShowIndicatorsForUnlockReqs;                             // 0x0098(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		int32_t                                                    MaxActiveDinos;                                          // 0x00A8(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       UseClosestDinosSpawnToPlayers;                           // 0x00AC(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       UseForcedTargeting;                                      // 0x00AD(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_Q9ZA[0x2];                                   // 0x00AE(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MaxAggroDistance;                                        // 0x00B0(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       ChooseSingleUniqueUnlockReqForRoom;                      // 0x00B4(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_0WJD[0x3];                                   // 0x00B5(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ShooterGame.PrimalGameData.TutorialDefinition
	 * Size -> 0x0030
	 */
	struct FTutorialDefinition
	{
	public:
		class FString                                              TutorialTitle;                                           // 0x0000(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		class FString                                              TutorialText;                                            // 0x0010(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		class UTexture2D*                                          TutorialImage;                                           // 0x0020(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      TutorialDuration;                                        // 0x0028(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    NextTutorialIndex;                                       // 0x002C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct ShooterGame.PrimalGameData.ItemToDinoStatParams
	 * Size -> 0x0018
	 */
	struct FItemToDinoStatParams
	{
	public:
		EPrimalItemStat                                            ItemStat;                                                // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		EPrimalCharacterStatusValue                                DinoStat;                                                // 0x0001(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_94SC[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    MinItemStatValue;                                        // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		int32_t                                                    MaxItemStatValue;                                        // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		int32_t                                                    MinDinoStatValue;                                        // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		int32_t                                                    MaxDinoStatValue;                                        // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		ESimpleCurve                                               ConversionCurve;                                         // 0x0014(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_6K1N[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ShooterGame.PrimalItem.RequiresInventorySubclassMapping
	 * Size -> 0x0018
	 */
	struct FRequiresInventorySubclassMapping
	{
	public:
		class UClass*                                              InventoryComponentClassParent;                           // 0x0000(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		TArray<class UClass*>                                      RequiresInventoryComponentClassChildren;                 // 0x0008(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
	};

	/**
	 * ScriptStruct ShooterGame.AllClustersInventory.PlayerAllClustersInventory
	 * Size -> 0x0038
	 */
	struct FPlayerAllClustersInventory
	{
	public:
		unsigned char                                              UnknownData_KZHU[0x38];                                  // 0x0000(0x0038) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ShooterGame.ShooterPlayerController.PrimalStats
	 * Size -> 0x0030
	 */
	struct FPrimalStats
	{
	public:
		bool                                                       bUsed;                                                   // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_JIIN[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     StartStatsTime;                                          // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor
		int32_t                                                    PrimalStatsValues[0x7];                                  // 0x0010(0x001C) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_Z5YY[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ShooterGame.ShooterPlayerController.NonClusterCharacterUploadData
	 * Size -> 0x0138
	 */
	struct FNonClusterCharacterUploadData
	{
	public:
		struct FArkTributePlayerData                               PlayerData;                                              // 0x0000(0x0120)
		uint64_t                                                   TribeId;                                                 // 0x0120(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor
		TArray<struct FItemNetInfo>                                Items;                                                   // 0x0128(0x0010) ZeroConstructor
	};

	/**
	 * ScriptStruct ShooterGame.HibernationManager.HibernationEntity
	 * Size -> 0x0060
	 */
	struct FHibernationEntity
	{
	public:
		unsigned char                                              UnknownData_QUX6[0x60];                                  // 0x0000(0x0060) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ShooterGame.MissionDispatcher.Int32Array
	 * Size -> 0x0010
	 */
	struct FInt32Array
	{
	public:
		TArray<int32_t>                                            Array;                                                   // 0x0000(0x0010) BlueprintVisible, ZeroConstructor
	};

	/**
	 * ScriptStruct ShooterGame.MissionType.MissionDinoPath
	 * Size -> 0x0040
	 */
	struct FMissionDinoPath
	{
	public:
		TWeakObjectPtr<class AActor>                               TargetActor;                                             // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector                                             CurrentTarget;                                           // 0x0008(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector                                             LastTarget;                                              // 0x0014(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      CurrentSplineKeyTarget;                                  // 0x0020(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      LastSplineKeyTarget;                                     // 0x0024(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		double                                                     LastUpdateTime;                                          // 0x0028(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      UpdateInterval;                                          // 0x0030(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		TWeakObjectPtr<class USplineComponent>                     ForcePathSpline;                                         // 0x0034(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor
		bool                                                       bReverseAtEnd : 1;                                       // 0x003C(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor
		unsigned char                                              UnknownData_G6P7[0x3];                                   // 0x003D(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ShooterGame.PaintingCache.PaintingStreamingJob
	 * Size -> 0x0040
	 */
	struct FPaintingStreamingJob
	{
	public:
		unsigned char                                              UnknownData_XJQY[0x40];                                  // 0x0000(0x0040) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ShooterGame.PrimalChatFontData
	 * Size -> 0x0038
	 */
	struct FPrimalChatFontData
	{
	public:
		class FName                                                FontName;                                                // 0x0000(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    FontSize;                                                // 0x0008(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_JDUX[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSlateColor                                         FontColor;                                               // 0x0010(0x0028) Edit, DisableEditOnInstance
	};

	/**
	 * ScriptStruct ShooterGame.PrimalStructureElevatorPlatform.PrimalDroppedItemOnPlatform
	 * Size -> 0x0028
	 */
	struct FPrimalDroppedItemOnPlatform
	{
	public:
		struct FVector                                             ItemRelativeLocation;                                    // 0x0000(0x000C) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor
		struct FRotator                                            ItemRelativeRotation;                                    // 0x000C(0x000C) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor
		class FName                                                BoneName;                                                // 0x0018(0x0008) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor
		class APrimalStructureItemContainer*                       MyItem;                                                  // 0x0020(0x0008) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct ShooterGame.UI_MainMenu.UI_MainMenuLink
	 * Size -> 0x0018
	 */
	struct FUI_MainMenuLink
	{
	public:
		class FString                                              MapName;                                                 // 0x0000(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance
		class UClass*                                              Class;                                                   // 0x0010(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct ShooterGame.ShooterCheatManager.DinoClassCountStruct
	 * Size -> 0x0010
	 */
	struct FDinoClassCountStruct
	{
	public:
		class UClass*                                              DinoClass;                                               // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		int32_t                                                    NumberofTamedClass;                                      // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		int32_t                                                    NumberofWildClass;                                       // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct ShooterGame.ShooterGameMode.DynamicUndermeshVolumes_Data
	 * Size -> 0x0010
	 */
	struct FDynamicUndermeshVolumes_Data
	{
	public:
		int32_t                                                    X;                                                       // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		int32_t                                                    Y;                                                       // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		int32_t                                                    Z;                                                       // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		int32_t                                                    R;                                                       // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct ShooterGame.ShooterGameMode.DynamicUndermeshVolumes_MapSet
	 * Size -> 0x0020
	 */
	struct FDynamicUndermeshVolumes_MapSet
	{
	public:
		class FString                                              Map;                                                     // 0x0000(0x0010) ZeroConstructor
		TArray<struct FDynamicUndermeshVolumes_Data>               volumes;                                                 // 0x0010(0x0010) ZeroConstructor
	};

	/**
	 * ScriptStruct ShooterGame.ShooterGameMode.DynamicUndermeshVolumes_Root
	 * Size -> 0x0010
	 */
	struct FDynamicUndermeshVolumes_Root
	{
	public:
		TArray<struct FDynamicUndermeshVolumes_MapSet>             Root;                                                    // 0x0000(0x0010) ZeroConstructor
	};

	/**
	 * ScriptStruct ShooterGame.ShooterGameMode.AtlasAdminCommandTrackingEntry
	 * Size -> 0x0060
	 */
	struct FAtlasAdminCommandTrackingEntry
	{
	public:
		uint32_t                                                   ServerUTCTime;                                           // 0x0000(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_MHU0[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int64_t                                                    PlayerId;                                                // 0x0008(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor
		class FString                                              SteamID;                                                 // 0x0010(0x0010) ZeroConstructor, Transient
		class FString                                              IP;                                                      // 0x0020(0x0010) ZeroConstructor, Transient
		struct FVector                                             Location;                                                // 0x0030(0x000C) ZeroConstructor, Transient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_GDZM[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              CommandType;                                             // 0x0040(0x0010) ZeroConstructor, Transient
		class FString                                              Command;                                                 // 0x0050(0x0010) ZeroConstructor, Transient
	};

	/**
	 * ScriptStruct ShooterGame.ShooterGameMode.TributePlayerTribeInfo
	 * Size -> 0x0020
	 */
	struct FTributePlayerTribeInfo
	{
	public:
		TArray<uint64_t>                                           PlayerDataIDs;                                           // 0x0000(0x0010) ZeroConstructor, Transient
		TArray<uint64_t>                                           TribeIDs;                                                // 0x0010(0x0010) ZeroConstructor, Transient
	};

	/**
	 * ScriptStruct ShooterGame.ShooterGameMode.MissionGlobalData
	 * Size -> 0x0008
	 */
	struct FMissionGlobalData
	{
	public:
		double                                                     LastMissionDeactivatedUtcTime;                           // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct ShooterGame.VictoryCore.JoyAnim
	 * Size -> 0x0010
	 */
	struct FJoyAnim
	{
	public:
		class UAnimMontage*                                        Anim;                                                    // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      Chance;                                                  // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_KXSP[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ShooterGame.StructuresPlus.GlassSettings
	 * Size -> 0x0008
	 */
	struct FGlassSettings
	{
	public:
		EGlassTransparencyType                                     TransparencyType;                                        // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_UKYO[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Opacity;                                                 // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
