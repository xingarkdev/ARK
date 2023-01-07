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
	 * Enum Engine.ECameraProjectionMode
	 */
	enum class ECameraProjectionMode : uint8_t
	{
		Perspective  = 0,
		Orthographic = 1,
		MAX          = 2
	};

	/**
	 * Enum Engine.ECameraAnimPlaySpace
	 */
	enum class ECameraAnimPlaySpace : uint8_t
	{
		CameraLocal = 0,
		World       = 1,
		UserDefined = 2,
		MAX         = 3
	};

	/**
	 * Enum Engine.EPrimalEquipmentType
	 */
	enum class EPrimalEquipmentType : uint8_t
	{
		Hat        = 0,
		Shirt      = 1,
		Pants      = 2,
		Boots      = 3,
		Gloves     = 4,
		DinoSaddle = 5,
		Trophy     = 6,
		Costume    = 7,
		Shield     = 8,
		Weapon     = 9,
		Snapshot   = 10,
		MAX        = 11,
		MAX01      = 12
	};

	/**
	 * Enum Engine.ELockedAxis
	 */
	enum class ELockedAxis : uint8_t
	{
		Default = 0,
		X       = 1,
		Y       = 2,
		Z       = 3,
		Custom  = 4,
		None    = 5,
		MAX     = 6
	};

	/**
	 * Enum Engine.ELinearConstraintMotion
	 */
	enum class ELinearConstraintMotion : uint8_t
	{
		LCM_Free    = 0,
		LCM_Limited = 1,
		LCM_Locked  = 2,
		LCM_MAX     = 3
	};

	/**
	 * Enum Engine.EConstraintFrame
	 */
	enum class EConstraintFrame : uint8_t
	{
		Frame1 = 0,
		Frame2 = 1,
		MAX    = 2
	};

	/**
	 * Enum Engine.EAngularDriveMode
	 */
	enum class EAngularDriveMode : uint8_t
	{
		SLERP         = 0,
		TwistAndSwing = 1,
		MAX           = 2
	};

	/**
	 * Enum Engine.TextureGroup
	 */
	enum class ETextureGroup : uint8_t
	{
		TEXTUREGROUP_World                 = 0,
		TEXTUREGROUP_WorldNormalMap        = 1,
		TEXTUREGROUP_WorldSpecular         = 2,
		TEXTUREGROUP_Character             = 3,
		TEXTUREGROUP_CharacterNormalMap    = 4,
		TEXTUREGROUP_CharacterSpecular     = 5,
		TEXTUREGROUP_Weapon                = 6,
		TEXTUREGROUP_WeaponNormalMap       = 7,
		TEXTUREGROUP_WeaponSpecular        = 8,
		TEXTUREGROUP_Vehicle               = 9,
		TEXTUREGROUP_VehicleNormalMap      = 10,
		TEXTUREGROUP_VehicleSpecular       = 11,
		TEXTUREGROUP_Cinematic             = 12,
		TEXTUREGROUP_Effects               = 13,
		TEXTUREGROUP_EffectsNotFiltered    = 14,
		TEXTUREGROUP_Skybox                = 15,
		TEXTUREGROUP_UI                    = 16,
		TEXTUREGROUP_Lightmap              = 17,
		TEXTUREGROUP_RenderTarget          = 18,
		TEXTUREGROUP_MobileFlattened       = 19,
		TEXTUREGROUP_ProcBuilding_Face     = 20,
		TEXTUREGROUP_ProcBuilding_LightMap = 21,
		TEXTUREGROUP_Shadowmap             = 22,
		TEXTUREGROUP_ColorLookupTable      = 23,
		TEXTUREGROUP_Terrain_Heightmap     = 24,
		TEXTUREGROUP_Terrain_Weightmap     = 25,
		TEXTUREGROUP_Bokeh                 = 26,
		TEXTUREGROUP_IESLightProfile       = 27,
		TEXTUREGROUP_SourceRez             = 28,
		TEXTUREGROUP_MAX                   = 29
	};

	/**
	 * Enum Engine.TextureMipGenSettings
	 */
	enum class ETextureMipGenSettings : uint8_t
	{
		TMGS_FromTextureGroup  = 0,
		TMGS_SimpleAverage     = 1,
		TMGS_Sharpen0          = 2,
		TMGS_Sharpen1          = 3,
		TMGS_Sharpen2          = 4,
		TMGS_Sharpen3          = 5,
		TMGS_Sharpen4          = 6,
		TMGS_Sharpen5          = 7,
		TMGS_Sharpen6          = 8,
		TMGS_Sharpen7          = 9,
		TMGS_Sharpen8          = 10,
		TMGS_Sharpen9          = 11,
		TMGS_Sharpen10         = 12,
		TMGS_NoMipmaps         = 13,
		TMGS_LeaveExistingMips = 14,
		TMGS_Blur1             = 15,
		TMGS_Blur2             = 16,
		TMGS_Blur3             = 17,
		TMGS_Blur4             = 18,
		TMGS_Blur5             = 19,
		TMGS_MAX               = 20
	};

	/**
	 * Enum Engine.EPinHidingMode
	 */
	enum class EPinHidingMode : uint8_t
	{
		NeverAsPin         = 0,
		PinHiddenByDefault = 1,
		PinShownByDefault  = 2,
		AlwaysAsPin        = 3,
		MAX                = 4
	};

	/**
	 * Enum Engine.EPostCopyOperation
	 */
	enum class EPostCopyOperation : uint8_t
	{
		None              = 0,
		LogicalNegateBool = 1,
		MAX               = 2
	};

	/**
	 * Enum Engine.EComponentType
	 */
	enum class EComponentType : uint8_t
	{
		None         = 0,
		TranslationX = 1,
		TranslationY = 2,
		TranslationZ = 3,
		RotationX    = 4,
		RotationY    = 5,
		RotationZ    = 6,
		Scale        = 7,
		MAX          = 8
	};

	/**
	 * Enum Engine.EAxisOption
	 */
	enum class EAxisOption : uint8_t
	{
		X     = 0,
		Y     = 1,
		Z     = 2,
		X_Neg = 3,
		Y_Neg = 4,
		Z_Neg = 5,
		MAX   = 6
	};

	/**
	 * Enum Engine.EBoneModificationMode
	 */
	enum class EBoneModificationMode : uint8_t
	{
		BMM_Ignore   = 0,
		BMM_Replace  = 1,
		BMM_Additive = 2,
		BMM_MAX      = 3
	};

	/**
	 * Enum Engine.ERefPoseType
	 */
	enum class ERefPoseType : uint8_t
	{
		EIT_LocalSpace = 0,
		EIT_Additive   = 1,
		EIT_MAX        = 2
	};

	/**
	 * Enum Engine.EBoneAxis
	 */
	enum class EBoneAxis : uint8_t
	{
		BA_X   = 0,
		BA_Y   = 1,
		BA_Z   = 2,
		BA_MAX = 3
	};

	/**
	 * Enum Engine.EEvaluatorDataSource
	 */
	enum class EEvaluatorDataSource : uint8_t
	{
		EDS_SourcePose      = 0,
		EDS_DestinationPose = 1,
		EDS_MAX             = 2
	};

	/**
	 * Enum Engine.EEvaluatorMode
	 */
	enum class EEvaluatorMode : uint8_t
	{
		EM_Standard      = 0,
		EM_Freeze        = 1,
		EM_DelayedFreeze = 2,
		EM_MAX           = 3
	};

	/**
	 * Enum Engine.ECameraAlphaBlendMode
	 */
	enum class ECameraAlphaBlendMode : uint8_t
	{
		CABM_Linear = 0,
		CABM_Cubic  = 1,
		CABM_MAX    = 2
	};

	/**
	 * Enum Engine.EngineTypes.EAngularConstraintMotion
	 */
	enum class EAngularConstraintMotion : uint8_t
	{
		ACM_Free    = 0,
		ACM_Limited = 1,
		ACM_Locked  = 2,
		ACM_MAX     = 3
	};

	/**
	 * Enum Engine.EngineTypes.EComponentSocketType
	 */
	enum class EComponentSocketType : uint8_t
	{
		Invalid = 0,
		Bone    = 1,
		Socket  = 2,
		MAX     = 3
	};

	/**
	 * Enum Engine.EngineTypes.EComponentMobility
	 */
	enum class EComponentMobility : uint8_t
	{
		Static     = 0,
		Stationary = 1,
		Movable    = 2,
		MAX        = 3
	};

	/**
	 * Enum Engine.EngineTypes.EPhysicalSurface
	 */
	enum class EPhysicalSurface : uint8_t
	{
		SurfaceType_Default = 0,
		SurfaceType1        = 1,
		SurfaceType2        = 2,
		SurfaceType3        = 3,
		SurfaceType4        = 4,
		SurfaceType5        = 5,
		SurfaceType6        = 6,
		SurfaceType7        = 7,
		SurfaceType8        = 8,
		SurfaceType9        = 9,
		SurfaceType10       = 10,
		SurfaceType11       = 11,
		SurfaceType12       = 12,
		SurfaceType13       = 13,
		SurfaceType14       = 14,
		SurfaceType15       = 15,
		SurfaceType16       = 16,
		SurfaceType17       = 17,
		SurfaceType18       = 18,
		SurfaceType19       = 19,
		SurfaceType20       = 20,
		SurfaceType21       = 21,
		SurfaceType22       = 22,
		SurfaceType23       = 23,
		SurfaceType24       = 24,
		SurfaceType25       = 25,
		SurfaceType26       = 26,
		SurfaceType27       = 27,
		SurfaceType28       = 28,
		SurfaceType29       = 29,
		SurfaceType30       = 30,
		SurfaceType31       = 31,
		SurfaceType32       = 32,
		SurfaceType33       = 33,
		SurfaceType34       = 34,
		SurfaceType35       = 35,
		SurfaceType36       = 36,
		SurfaceType37       = 37,
		SurfaceType38       = 38,
		SurfaceType39       = 39,
		SurfaceType40       = 40,
		SurfaceType41       = 41,
		SurfaceType42       = 42,
		SurfaceType43       = 43,
		SurfaceType44       = 44,
		SurfaceType45       = 45,
		SurfaceType46       = 46,
		SurfaceType47       = 47,
		SurfaceType48       = 48,
		SurfaceType49       = 49,
		SurfaceType50       = 50,
		SurfaceType51       = 51,
		SurfaceType52       = 52,
		SurfaceType53       = 53,
		SurfaceType54       = 54,
		SurfaceType55       = 55,
		SurfaceType56       = 56,
		SurfaceType57       = 57,
		SurfaceType58       = 58,
		SurfaceType59       = 59,
		SurfaceType60       = 60,
		SurfaceType61       = 61,
		SurfaceType62       = 62,
		SurfaceType_Max     = 63,
		MAX                 = 64
	};

	/**
	 * Enum Engine.EngineTypes.EWalkableSlopeBehavior
	 */
	enum class EWalkableSlopeBehavior : uint8_t
	{
		WalkableSlope_Default    = 0,
		WalkableSlope_Increase   = 1,
		WalkableSlope_Decrease   = 2,
		WalkableSlope_Unwalkable = 3,
		WalkableSlope_Max        = 4
	};

	/**
	 * Enum Engine.EngineTypes.EEndPlayReason
	 */
	enum class EEndPlayReason : uint8_t
	{
		ActorDestroyed   = 0,
		LevelTransition  = 1,
		EndPlayInEditor  = 2,
		RemovedFromWorld = 3,
		Quit             = 4,
		MAX              = 5
	};

	/**
	 * Enum Engine.EngineTypes.EAutoReceiveInput
	 */
	enum class EAutoReceiveInput : uint8_t
	{
		Disabled = 0,
		Player0  = 1,
		Player1  = 2,
		Player2  = 3,
		Player3  = 4,
		Player4  = 5,
		Player5  = 6,
		Player6  = 7,
		Player7  = 8,
		MAX      = 9
	};

	/**
	 * Enum Engine.EngineTypes.ENetDormancy
	 */
	enum class ENetDormancy : uint8_t
	{
		DORM_Never          = 0,
		DORM_Awake          = 1,
		DORM_DormantAll     = 2,
		DORM_DormantPartial = 3,
		DORM_Initial        = 4,
		DORN_MAX            = 5,
		MAX                 = 6
	};

	/**
	 * Enum Engine.EngineTypes.ENetRole
	 */
	enum class ENetRole : uint8_t
	{
		ROLE_None            = 0,
		ROLE_SimulatedProxy  = 1,
		ROLE_AutonomousProxy = 2,
		ROLE_Authority       = 3,
		ROLE_MAX             = 4
	};

	/**
	 * Enum Engine.EngineTypes.EMeshFeatureImportance
	 */
	enum class EMeshFeatureImportance : uint8_t
	{
		Off     = 0,
		Lowest  = 1,
		Low     = 2,
		Normal  = 3,
		High    = 4,
		Highest = 5,
		MAX     = 6
	};

	/**
	 * Enum Engine.EngineTypes.EShadowMapFlags
	 */
	enum class EShadowMapFlags : uint8_t
	{
		SMF_None     = 0,
		SMF_Streamed = 1,
		SMF_MAX      = 2
	};

	/**
	 * Enum Engine.EngineTypes.ELightMapPaddingType
	 */
	enum class ELightMapPaddingType : uint8_t
	{
		LMPT_NormalPadding = 0,
		LMPT_PrePadding    = 1,
		LMPT_NoPadding     = 2,
		LMPT_MAX           = 3
	};

	/**
	 * Enum Engine.EngineTypes.ELocalizedLanguage
	 */
	enum class ELocalizedLanguage : uint8_t
	{
		ca           = 0,
		cs           = 1,
		da           = 2,
		de           = 3,
		en           = 4,
		es           = 5,
		eu           = 6,
		fi           = 7,
		fr           = 8,
		hu           = 9,
		it           = 10,
		ja           = 11,
		ka           = 12,
		ko           = 13,
		nl           = 14,
		pl           = 15,
		pt_BR        = 16,
		ru           = 17,
		sv           = 18,
		th           = 19,
		tr           = 20,
		uk           = 21,
		zh           = 22,
		zh__Hans__CN = 23,
		zh__TW       = 24,
		Max          = 25,
		MAX          = 26
	};

	/**
	 * Enum Engine.EngineTypes.ECollisionEnabled
	 */
	enum class ECollisionEnabled : uint8_t
	{
		NoCollision     = 0,
		QueryOnly       = 1,
		QueryAndPhysics = 2,
		MAX             = 3
	};

	/**
	 * Enum Engine.EngineTypes.ETimelineSigType
	 */
	enum class ETimelineSigType : uint8_t
	{
		ETS_EventSignature       = 0,
		ETS_FloatSignature       = 1,
		ETS_VectorSignature      = 2,
		ETS_LinearColorSignature = 3,
		ETS_InvalidSignature     = 4,
		ETS_MAX                  = 5
	};

	/**
	 * Enum Engine.EngineTypes.ESleepFamily
	 */
	enum class ESleepFamily : uint8_t
	{
		SF_Normal    = 0,
		SF_Sensitive = 1,
		SF_MAX       = 2
	};

	/**
	 * Enum Engine.EngineTypes.ERadialImpulseFalloff
	 */
	enum class ERadialImpulseFalloff : uint8_t
	{
		RIF_Constant = 0,
		RIF_Linear   = 1,
		RIF_MAX      = 2
	};

	/**
	 * Enum Engine.EngineTypes.EInputConsumeOptions
	 */
	enum class EInputConsumeOptions : uint8_t
	{
		ICO_ConsumeAll       = 0,
		ICO_ConsumeBoundKeys = 1,
		ICO_ConsumeNone      = 2,
		ICO_MAX              = 3
	};

	/**
	 * Enum Engine.EngineTypes.EFilterInterpolationType
	 */
	enum class EFilterInterpolationType : uint8_t
	{
		BSIT_Average = 0,
		BSIT_Linear  = 1,
		BSIT_Cubic   = 2,
		BSIT_MAX     = 3
	};

	/**
	 * Enum Engine.EngineTypes.ECollisionResponse
	 */
	enum class ECollisionResponse : uint8_t
	{
		ECR_Ignore  = 0,
		ECR_Overlap = 1,
		ECR_Block   = 2,
		ECR_MAX     = 3
	};

	/**
	 * Enum Engine.EngineTypes.EPhysicsSceneType
	 */
	enum class EPhysicsSceneType : uint8_t
	{
		PST_Sync  = 0,
		PST_Cloth = 1,
		PST_Async = 2,
		PST_MAX   = 3
	};

	/**
	 * Enum Engine.EngineTypes.ETraceTypeQuery
	 */
	enum class ETraceTypeQuery : uint8_t
	{
		TraceTypeQuery1    = 0,
		TraceTypeQuery2    = 1,
		TraceTypeQuery3    = 2,
		TraceTypeQuery4    = 3,
		TraceTypeQuery5    = 4,
		TraceTypeQuery6    = 5,
		TraceTypeQuery7    = 6,
		TraceTypeQuery8    = 7,
		TraceTypeQuery9    = 8,
		TraceTypeQuery10   = 9,
		TraceTypeQuery11   = 10,
		TraceTypeQuery12   = 11,
		TraceTypeQuery13   = 12,
		TraceTypeQuery14   = 13,
		TraceTypeQuery15   = 14,
		TraceTypeQuery16   = 15,
		TraceTypeQuery17   = 16,
		TraceTypeQuery18   = 17,
		TraceTypeQuery19   = 18,
		TraceTypeQuery20   = 19,
		TraceTypeQuery21   = 20,
		TraceTypeQuery22   = 21,
		TraceTypeQuery23   = 22,
		TraceTypeQuery24   = 23,
		TraceTypeQuery25   = 24,
		TraceTypeQuery26   = 25,
		TraceTypeQuery27   = 26,
		TraceTypeQuery28   = 27,
		TraceTypeQuery29   = 28,
		TraceTypeQuery30   = 29,
		TraceTypeQuery31   = 30,
		TraceTypeQuery32   = 31,
		TraceTypeQuery_MAX = 32,
		MAX                = 33
	};

	/**
	 * Enum Engine.EngineTypes.EObjectTypeQuery
	 */
	enum class EObjectTypeQuery : uint8_t
	{
		ObjectTypeQuery1    = 0,
		ObjectTypeQuery2    = 1,
		ObjectTypeQuery3    = 2,
		ObjectTypeQuery4    = 3,
		ObjectTypeQuery5    = 4,
		ObjectTypeQuery6    = 5,
		ObjectTypeQuery7    = 6,
		ObjectTypeQuery8    = 7,
		ObjectTypeQuery9    = 8,
		ObjectTypeQuery10   = 9,
		ObjectTypeQuery11   = 10,
		ObjectTypeQuery12   = 11,
		ObjectTypeQuery13   = 12,
		ObjectTypeQuery14   = 13,
		ObjectTypeQuery15   = 14,
		ObjectTypeQuery16   = 15,
		ObjectTypeQuery17   = 16,
		ObjectTypeQuery18   = 17,
		ObjectTypeQuery19   = 18,
		ObjectTypeQuery20   = 19,
		ObjectTypeQuery21   = 20,
		ObjectTypeQuery22   = 21,
		ObjectTypeQuery23   = 22,
		ObjectTypeQuery24   = 23,
		ObjectTypeQuery25   = 24,
		ObjectTypeQuery26   = 25,
		ObjectTypeQuery27   = 26,
		ObjectTypeQuery28   = 27,
		ObjectTypeQuery29   = 28,
		ObjectTypeQuery30   = 29,
		ObjectTypeQuery31   = 30,
		ObjectTypeQuery32   = 31,
		ObjectTypeQuery_MAX = 32,
		MAX                 = 33
	};

	/**
	 * Enum Engine.EngineTypes.EOverlapFilterOption
	 */
	enum class EOverlapFilterOption : uint8_t
	{
		OverlapFilter_All         = 0,
		OverlapFilter_DynamicOnly = 1,
		OverlapFilter_StaticOnly  = 2,
		OverlapFilter_MAX         = 3
	};

	/**
	 * Enum Engine.EngineTypes.ECollisionChannel
	 */
	enum class ECollisionChannel : uint8_t
	{
		ECC_WorldStatic                  = 0,
		ECC_WorldDynamic                 = 1,
		ECC_Visibility                   = 2,
		ECC_PhysicsBody                  = 3,
		ECC_Destructible                 = 4,
		ECC_GameTraceChannel1            = 5,
		ECC_GameTraceChannel2            = 6,
		ECC_GameTraceChannel3            = 7,
		ECC_GameTraceChannel4            = 8,
		ECC_GameTraceChannel5            = 9,
		ECC_GameTraceChannel6            = 10,
		ECC_GameTraceChannel7            = 11,
		ECC_GameTraceChannel8            = 12,
		ECC_GameTraceChannel9            = 13,
		ECC_GameTraceChannel10           = 14,
		ECC_GameTraceChannel11           = 15,
		ECC_GameTraceChannel12           = 16,
		ECC_GameTraceChannel13           = 17,
		ECC_GameTraceChannel14           = 18,
		ECC_GameTraceChannel15           = 19,
		ECC_GameTraceChannel16           = 20,
		ECC_GameTraceChannel17           = 21,
		ECC_GameTraceChannel18           = 22,
		ECC_GameTraceChannel19           = 23,
		ECC_GameTraceChannel20           = 24,
		ECC_GameTraceChannel21           = 25,
		ECC_GameTraceChannel22           = 26,
		ECC_GameTraceChannel23           = 27,
		ECC_GameTraceChannel24           = 28,
		ECC_GameTraceChannel25           = 29,
		ECC_GameTraceChannel26           = 30,
		ECC_GameTraceChannel27           = 31,
		ECC_OverlapAll_Deprecated        = 32,
		ECC_OverlapAllDynamic_Deprecated = 33,
		ECC_OverlapAllStatic_Deprecated  = 34,
		ECC_MAX                          = 35
	};

	/**
	 * Enum Engine.EngineTypes.EMovementMode
	 */
	enum class EMovementMode : uint8_t
	{
		MOVE_None     = 0,
		MOVE_Walking  = 1,
		MOVE_Falling  = 2,
		MOVE_Swimming = 3,
		MOVE_Flying   = 4,
		MOVE_Custom   = 5,
		MOVE_MAX      = 6
	};

	/**
	 * Enum Engine.EngineTypes.ETriangleSortAxis
	 */
	enum class ETriangleSortAxis : uint8_t
	{
		TSA_X_Axis = 0,
		TSA_Y_Axis = 1,
		TSA_Z_Axis = 2,
		TSA_MAX    = 3
	};

	/**
	 * Enum Engine.EngineTypes.ETriangleSortOption
	 */
	enum class ETriangleSortOption : uint8_t
	{
		TRISORT_None                 = 0,
		TRISORT_CenterRadialDistance = 1,
		TRISORT_Random               = 2,
		TRISORT_MergeContiguous      = 3,
		TRISORT_Custom               = 4,
		TRISORT_CustomLeftRight      = 5,
		TRISORT_MAX                  = 6
	};

	/**
	 * Enum Engine.EngineTypes.ELightingBuildQuality
	 */
	enum class ELightingBuildQuality : uint8_t
	{
		Quality_Preview    = 0,
		Quality_Medium     = 1,
		Quality_High       = 2,
		Quality_Production = 3,
		Quality_MAX        = 4
	};

	/**
	 * Enum Engine.EngineTypes.EMaterialSamplerType
	 */
	enum class EMaterialSamplerType : uint8_t
	{
		SAMPLERTYPE_Color             = 0,
		SAMPLERTYPE_Grayscale         = 1,
		SAMPLERTYPE_Alpha             = 2,
		SAMPLERTYPE_Normal            = 3,
		SAMPLERTYPE_Masks             = 4,
		SAMPLERTYPE_DistanceFieldFont = 5,
		SAMPLERTYPE_LinearColor       = 6,
		SAMPLERTYPE_LinearGrayscale   = 7,
		SAMPLERTYPE_MAX               = 8
	};

	/**
	 * Enum Engine.EngineTypes.EMaterialTessellationMode
	 */
	enum class EMaterialTessellationMode : uint8_t
	{
		MTM_NoTessellation   = 0,
		MTM_FlatTessellation = 1,
		MTM_PNTriangles      = 2,
		MTM_MAX              = 3
	};

	/**
	 * Enum Engine.EngineTypes.EMaterialShadingModel
	 */
	enum class EMaterialShadingModel : uint8_t
	{
		MSM_Unlit             = 0,
		MSM_DefaultLit        = 1,
		MSM_Subsurface        = 2,
		MSM_PreintegratedSkin = 3,
		MSM_ClearCoat         = 4,
		MSM_SubsurfaceProfile = 5,
		MSM_TwoSidedFoliage   = 6,
		MSM_MAX               = 7
	};

	/**
	 * Enum Engine.EngineTypes.ETrailWidthMode
	 */
	enum class ETrailWidthMode : uint8_t
	{
		FromCentre = 0,
		FromFirst  = 1,
		FromSecond = 2,
		MAX        = 3
	};

	/**
	 * Enum Engine.EngineTypes.ETranslucencyLightingMode
	 */
	enum class ETranslucencyLightingMode : uint8_t
	{
		TLM_VolumetricNonDirectional = 0,
		TLM_VolumetricDirectional    = 1,
		TLM_Surface                  = 2,
		TLM_MAX                      = 3
	};

	/**
	 * Enum Engine.EngineTypes.ESamplerSourceMode
	 */
	enum class ESamplerSourceMode : uint8_t
	{
		SSM_FromTextureAsset         = 0,
		SSM_Wrap_WorldGroupSettings  = 1,
		SSM_Clamp_WorldGroupSettings = 2,
		SSM_MAX                      = 3
	};

	/**
	 * Enum Engine.EngineTypes.EBlendMode
	 */
	enum class EBlendMode : uint8_t
	{
		BLEND_Opaque      = 0,
		BLEND_Masked      = 1,
		BLEND_Translucent = 2,
		BLEND_Additive    = 3,
		BLEND_Modulate    = 4,
		BLEND_MAX         = 5
	};

	/**
	 * Enum Engine.EngineTypes.EIndirectLightingCacheQuality
	 */
	enum class EIndirectLightingCacheQuality : uint8_t
	{
		ILCQ_Off    = 0,
		ILCQ_Point  = 1,
		ILCQ_Volume = 2,
		ILCQ_MAX    = 3
	};

	/**
	 * Enum Engine.EngineTypes.ESceneDepthPriorityGroup
	 */
	enum class ESceneDepthPriorityGroup : uint8_t
	{
		SDPG_World      = 0,
		SDPG_Foreground = 1,
		SDPG_MAX        = 2
	};

	/**
	 * Enum Engine.EngineTypes.EAttachLocation
	 */
	enum class EAttachLocation : uint8_t
	{
		KeepRelativeOffset = 0,
		KeepWorldPosition  = 1,
		SnapToTarget       = 2,
		MAX                = 3
	};

	/**
	 * Enum Engine.EngineTypes.EActorMetricsType
	 */
	enum class EActorMetricsType : uint8_t
	{
		METRICS_VERTS    = 0,
		METRICS_TRIS     = 1,
		METRICS_SECTIONS = 2,
		METRICS_MAX      = 3
	};

	/**
	 * Enum Engine.EngineTypes.EAspectRatioAxisConstraint
	 */
	enum class EAspectRatioAxisConstraint : uint8_t
	{
		AspectRatio_MaintainYFOV = 0,
		AspectRatio_MaintainXFOV = 1,
		AspectRatio_MajorAxisFOV = 2,
		AspectRatio_MAX          = 3
	};

	/**
	 * Enum Engine.Actor.EBPMapCheckSeverity
	 */
	enum class EBPMapCheckSeverity : uint8_t
	{
		Info               = 0,
		Warning            = 1,
		PerformanceWarning = 2,
		Error              = 3,
		MAX                = 4
	};

	/**
	 * Enum Engine.EngineBaseTypes.EViewModeIndex
	 */
	enum class EViewModeIndex : uint16_t
	{
		VMI_BrushWireframe         = 0,
		VMI_Wireframe              = 1,
		VMI_Unlit                  = 2,
		VMI_Lit                    = 3,
		VMI_Lit_DetailLighting     = 4,
		VMI_LightingOnly           = 5,
		VMI_LightComplexity        = 6,
		UnusedSpacer               = 7,
		VMI_ShaderComplexity       = 8,
		VMI_LightmapDensity        = 9,
		VMI_LitLightmapDensity     = 10,
		VMI_ReflectionOverride     = 11,
		VMI_VisualizeBuffer        = 12,
		UnusedSpacer01             = 13,
		VMI_StationaryLightOverlap = 14,
		VMI_CollisionPawn          = 15,
		VMI_CollisionVisibility    = 16,
		VMI_Max                    = 17,
		UnusedSpacer02             = 18,
		UnusedSpacer03             = 19,
		UnusedSpacer04             = 20,
		UnusedSpacer05             = 21,
		UnusedSpacer06             = 22,
		UnusedSpacer07             = 23,
		UnusedSpacer08             = 24,
		UnusedSpacer09             = 25,
		UnusedSpacer10             = 26,
		UnusedSpacer11             = 27,
		UnusedSpacer12             = 28,
		UnusedSpacer13             = 29,
		UnusedSpacer14             = 30,
		UnusedSpacer15             = 31,
		UnusedSpacer16             = 32,
		UnusedSpacer17             = 33,
		UnusedSpacer18             = 34,
		UnusedSpacer19             = 35,
		UnusedSpacer20             = 36,
		UnusedSpacer21             = 37,
		UnusedSpacer22             = 38,
		UnusedSpacer23             = 39,
		UnusedSpacer24             = 40,
		UnusedSpacer25             = 41,
		UnusedSpacer26             = 42,
		UnusedSpacer27             = 43,
		UnusedSpacer28             = 44,
		UnusedSpacer29             = 45,
		UnusedSpacer30             = 46,
		UnusedSpacer31             = 47,
		UnusedSpacer32             = 48,
		UnusedSpacer33             = 49,
		UnusedSpacer34             = 50,
		UnusedSpacer35             = 51,
		UnusedSpacer36             = 52,
		UnusedSpacer37             = 53,
		UnusedSpacer38             = 54,
		UnusedSpacer39             = 55,
		UnusedSpacer40             = 56,
		UnusedSpacer41             = 57,
		UnusedSpacer42             = 58,
		UnusedSpacer43             = 59,
		UnusedSpacer44             = 60,
		UnusedSpacer45             = 61,
		UnusedSpacer46             = 62,
		UnusedSpacer47             = 63,
		UnusedSpacer48             = 64,
		UnusedSpacer49             = 65,
		UnusedSpacer50             = 66,
		UnusedSpacer51             = 67,
		UnusedSpacer52             = 68,
		UnusedSpacer53             = 69,
		UnusedSpacer54             = 70,
		UnusedSpacer55             = 71,
		UnusedSpacer56             = 72,
		UnusedSpacer57             = 73,
		UnusedSpacer58             = 74,
		UnusedSpacer59             = 75,
		UnusedSpacer60             = 76,
		UnusedSpacer61             = 77,
		UnusedSpacer62             = 78,
		UnusedSpacer63             = 79,
		UnusedSpacer64             = 80,
		UnusedSpacer65             = 81,
		UnusedSpacer66             = 82,
		UnusedSpacer67             = 83,
		UnusedSpacer68             = 84,
		UnusedSpacer69             = 85,
		UnusedSpacer70             = 86,
		UnusedSpacer71             = 87,
		UnusedSpacer72             = 88,
		UnusedSpacer73             = 89,
		UnusedSpacer74             = 90,
		UnusedSpacer75             = 91,
		UnusedSpacer76             = 92,
		UnusedSpacer77             = 93,
		UnusedSpacer78             = 94,
		UnusedSpacer79             = 95,
		UnusedSpacer80             = 96,
		UnusedSpacer81             = 97,
		UnusedSpacer82             = 98,
		UnusedSpacer83             = 99,
		UnusedSpacer84             = 100,
		UnusedSpacer85             = 101,
		UnusedSpacer86             = 102,
		UnusedSpacer87             = 103,
		UnusedSpacer88             = 104,
		UnusedSpacer89             = 105,
		UnusedSpacer90             = 106,
		UnusedSpacer91             = 107,
		UnusedSpacer92             = 108,
		UnusedSpacer93             = 109,
		UnusedSpacer94             = 110,
		UnusedSpacer95             = 111,
		UnusedSpacer96             = 112,
		UnusedSpacer97             = 113,
		UnusedSpacer98             = 114,
		UnusedSpacer99             = 115,
		UnusedSpacer100            = 116,
		UnusedSpacer101            = 117,
		UnusedSpacer102            = 118,
		UnusedSpacer103            = 119,
		UnusedSpacer104            = 120,
		UnusedSpacer105            = 121,
		UnusedSpacer106            = 122,
		UnusedSpacer107            = 123,
		UnusedSpacer108            = 124,
		UnusedSpacer109            = 125,
		UnusedSpacer110            = 126,
		UnusedSpacer111            = 127,
		UnusedSpacer112            = 128,
		UnusedSpacer113            = 129,
		UnusedSpacer114            = 130,
		UnusedSpacer115            = 131,
		UnusedSpacer116            = 132,
		UnusedSpacer117            = 133,
		UnusedSpacer118            = 134,
		UnusedSpacer119            = 135,
		UnusedSpacer120            = 136,
		UnusedSpacer121            = 137,
		UnusedSpacer122            = 138,
		UnusedSpacer123            = 139,
		UnusedSpacer124            = 140,
		UnusedSpacer125            = 141,
		UnusedSpacer126            = 142,
		UnusedSpacer127            = 143,
		UnusedSpacer128            = 144,
		UnusedSpacer129            = 145,
		UnusedSpacer130            = 146,
		UnusedSpacer131            = 147,
		UnusedSpacer132            = 148,
		UnusedSpacer133            = 149,
		UnusedSpacer134            = 150,
		UnusedSpacer135            = 151,
		UnusedSpacer136            = 152,
		UnusedSpacer137            = 153,
		UnusedSpacer138            = 154,
		UnusedSpacer139            = 155,
		UnusedSpacer140            = 156,
		UnusedSpacer141            = 157,
		UnusedSpacer142            = 158,
		UnusedSpacer143            = 159,
		UnusedSpacer144            = 160,
		UnusedSpacer145            = 161,
		UnusedSpacer146            = 162,
		UnusedSpacer147            = 163,
		UnusedSpacer148            = 164,
		UnusedSpacer149            = 165,
		UnusedSpacer150            = 166,
		UnusedSpacer151            = 167,
		UnusedSpacer152            = 168,
		UnusedSpacer153            = 169,
		UnusedSpacer154            = 170,
		UnusedSpacer155            = 171,
		UnusedSpacer156            = 172,
		UnusedSpacer157            = 173,
		UnusedSpacer158            = 174,
		UnusedSpacer159            = 175,
		UnusedSpacer160            = 176,
		UnusedSpacer161            = 177,
		UnusedSpacer162            = 178,
		UnusedSpacer163            = 179,
		UnusedSpacer164            = 180,
		UnusedSpacer165            = 181,
		UnusedSpacer166            = 182,
		UnusedSpacer167            = 183,
		UnusedSpacer168            = 184,
		UnusedSpacer169            = 185,
		UnusedSpacer170            = 186,
		UnusedSpacer171            = 187,
		UnusedSpacer172            = 188,
		UnusedSpacer173            = 189,
		UnusedSpacer174            = 190,
		UnusedSpacer175            = 191,
		UnusedSpacer176            = 192,
		UnusedSpacer177            = 193,
		UnusedSpacer178            = 194,
		UnusedSpacer179            = 195,
		UnusedSpacer180            = 196,
		UnusedSpacer181            = 197,
		UnusedSpacer182            = 198,
		UnusedSpacer183            = 199,
		UnusedSpacer184            = 200,
		UnusedSpacer185            = 201,
		UnusedSpacer186            = 202,
		UnusedSpacer187            = 203,
		UnusedSpacer188            = 204,
		UnusedSpacer189            = 205,
		UnusedSpacer190            = 206,
		UnusedSpacer191            = 207,
		UnusedSpacer192            = 208,
		UnusedSpacer193            = 209,
		UnusedSpacer194            = 210,
		UnusedSpacer195            = 211,
		UnusedSpacer196            = 212,
		UnusedSpacer197            = 213,
		UnusedSpacer198            = 214,
		UnusedSpacer199            = 215,
		UnusedSpacer200            = 216,
		UnusedSpacer201            = 217,
		UnusedSpacer202            = 218,
		UnusedSpacer203            = 219,
		UnusedSpacer204            = 220,
		UnusedSpacer205            = 221,
		UnusedSpacer206            = 222,
		UnusedSpacer207            = 223,
		UnusedSpacer208            = 224,
		UnusedSpacer209            = 225,
		UnusedSpacer210            = 226,
		UnusedSpacer211            = 227,
		UnusedSpacer212            = 228,
		UnusedSpacer213            = 229,
		UnusedSpacer214            = 230,
		UnusedSpacer215            = 231,
		UnusedSpacer216            = 232,
		UnusedSpacer217            = 233,
		UnusedSpacer218            = 234,
		UnusedSpacer219            = 235,
		UnusedSpacer220            = 236,
		UnusedSpacer221            = 237,
		UnusedSpacer222            = 238,
		UnusedSpacer223            = 239,
		UnusedSpacer224            = 240,
		UnusedSpacer225            = 241,
		UnusedSpacer226            = 242,
		UnusedSpacer227            = 243,
		UnusedSpacer228            = 244,
		UnusedSpacer229            = 245,
		UnusedSpacer230            = 246,
		UnusedSpacer231            = 247,
		UnusedSpacer232            = 248,
		UnusedSpacer233            = 249,
		UnusedSpacer234            = 250,
		UnusedSpacer235            = 251,
		UnusedSpacer236            = 252,
		UnusedSpacer237            = 253,
		UnusedSpacer238            = 254,
		VMI_Unknown                = 255,
		MAX                        = 256
	};

	/**
	 * Enum Engine.EngineBaseTypes.ETravelType
	 */
	enum class ETravelType : uint8_t
	{
		TRAVEL_Absolute = 0,
		TRAVEL_Partial  = 1,
		TRAVEL_Relative = 2,
		TRAVEL_MAX      = 3
	};

	/**
	 * Enum Engine.EngineBaseTypes.ETickingGroup
	 */
	enum class ETickingGroup : uint8_t
	{
		TG_PrePhysics     = 0,
		TG_StartPhysics   = 1,
		TG_DuringPhysics  = 2,
		TG_EndPhysics     = 3,
		TG_PreCloth       = 4,
		TG_StartCloth     = 5,
		TG_EndCloth       = 6,
		TG_PostPhysics    = 7,
		TG_PostUpdateWork = 8,
		TG_NewlySpawned   = 9,
		TG_MAX            = 10
	};

	/**
	 * Enum Engine.EngineBaseTypes.EInputEvent
	 */
	enum class EInputEvent : uint8_t
	{
		IE_Pressed     = 0,
		IE_Released    = 1,
		IE_Repeat      = 2,
		IE_DoubleClick = 3,
		IE_Axis        = 4,
		IE_MAX         = 5
	};

	/**
	 * Enum Engine.PlayerController.EDynamicForceFeedbackAction
	 */
	enum class EDynamicForceFeedbackAction : uint8_t
	{
		Start  = 0,
		Update = 1,
		Stop   = 2,
		MAX    = 3
	};

	/**
	 * Enum Engine.PlayerCameraManager.EViewTargetBlendFunction
	 */
	enum class EViewTargetBlendFunction : uint8_t
	{
		VTBlend_Linear    = 0,
		VTBlend_Cubic     = 1,
		VTBlend_EaseIn    = 2,
		VTBlend_EaseOut   = 3,
		VTBlend_EaseInOut = 4,
		VTBlend_MAX       = 5
	};

	/**
	 * Enum Engine.Scene.EAntiAliasingMethod
	 */
	enum class EAntiAliasingMethod : uint8_t
	{
		AAM_None       = 0,
		AAM_FXAA       = 1,
		AAM_TemporalAA = 2,
		AAM_MAX        = 3
	};

	/**
	 * Enum Engine.Scene.EDepthOfFieldMethod
	 */
	enum class EDepthOfFieldMethod : uint8_t
	{
		DOFM_BokehDOF = 0,
		DOFM_Gaussian = 1,
		DOFM_MAX      = 2
	};

	/**
	 * Enum Engine.InputComponent.EControllerAnalogStick
	 */
	enum class EControllerAnalogStick : uint8_t
	{
		CAS_LeftStick  = 0,
		CAS_RightStick = 1,
		CAS_MAX        = 2
	};

	/**
	 * Enum Engine.CurveBase.ERichCurveTangentWeightMode
	 */
	enum class ERichCurveTangentWeightMode : uint8_t
	{
		RCTWM_WeightedNone   = 0,
		RCTWM_WeightedArrive = 1,
		RCTWM_WeightedLeave  = 2,
		RCTWM_WeightedBoth   = 3,
		RCTWM_MAX            = 4
	};

	/**
	 * Enum Engine.CurveBase.ERichCurveTangentMode
	 */
	enum class ERichCurveTangentMode : uint8_t
	{
		RCTM_Auto  = 0,
		RCTM_User  = 1,
		RCTM_Break = 2,
		RCTM_MAX   = 3
	};

	/**
	 * Enum Engine.CurveBase.ERichCurveInterpMode
	 */
	enum class ERichCurveInterpMode : uint8_t
	{
		RCIM_Linear   = 0,
		RCIM_Constant = 1,
		RCIM_Cubic    = 2,
		RCIM_MAX      = 3
	};

	/**
	 * Enum Engine.Brush.EBrushType
	 */
	enum class EBrushType : uint8_t
	{
		Brush_Default  = 0,
		Brush_Add      = 1,
		Brush_Subtract = 2,
		Brush_MAX      = 3
	};

	/**
	 * Enum Engine.Brush.ECsgOper
	 */
	enum class ECsgOper : uint8_t
	{
		CSG_Active      = 0,
		CSG_Add         = 1,
		CSG_Subtract    = 2,
		CSG_Intersect   = 3,
		CSG_Deintersect = 4,
		CSG_None        = 5,
		CSG_MAX         = 6
	};

	/**
	 * Enum Engine.SceneComponent.ERelativeTransformSpace
	 */
	enum class ERelativeTransformSpace : uint8_t
	{
		RTS_World     = 0,
		RTS_Actor     = 1,
		RTS_Component = 2,
		RTS_MAX       = 3
	};

	/**
	 * Enum Engine.SceneComponent.EDetailMode
	 */
	enum class EDetailMode : uint8_t
	{
		DM_Low    = 0,
		DM_Medium = 1,
		DM_High   = 2,
		DM_MAX    = 3
	};

	/**
	 * Enum Engine.PrimitiveComponent.ECanBeCharacterBase
	 */
	enum class ECanBeCharacterBase : uint8_t
	{
		ECB_No    = 0,
		ECB_Yes   = 1,
		ECB_Owner = 2,
		ECB_MAX   = 3
	};

	/**
	 * Enum Engine.SkinnedMeshComponent.EMeshComponentUpdateFlag
	 */
	enum class EMeshComponentUpdateFlag : uint8_t
	{
		AlwaysTickPoseAndRefreshBones       = 0,
		AlwaysTickPose                      = 1,
		OnlyTickPoseWhenRendered            = 2,
		LocalControlTickPoseAndRefreshBones = 3,
		MAX                                 = 4
	};

	/**
	 * Enum Engine.SkinnedMeshComponent.EPhysBodyOp
	 */
	enum class EPhysBodyOp : uint8_t
	{
		PBO_None    = 0,
		PBO_Term    = 1,
		PBO_Disable = 2,
		PBO_MAX     = 3
	};

	/**
	 * Enum Engine.SkinnedMeshComponent.EBoneVisibilityStatus
	 */
	enum class EBoneVisibilityStatus : uint8_t
	{
		BVS_HiddenByParent   = 0,
		BVS_Visible          = 1,
		BVS_ExplicitlyHidden = 2,
		BVS_MAX              = 3
	};

	/**
	 * Enum Engine.SkeletalMeshComponent.EAnimationMode
	 */
	enum class EAnimationMode : uint8_t
	{
		AnimationBlueprint  = 0,
		AnimationSingleNode = 1,
		MAX                 = 2
	};

	/**
	 * Enum Engine.SkeletalMeshComponent.EKinematicBonesUpdateToPhysics
	 */
	enum class EKinematicBonesUpdateToPhysics : uint8_t
	{
		SkipSimulatingBones = 0,
		SkipAllBones        = 1,
		MAX                 = 2
	};

	/**
	 * Enum Engine.SkeletalMesh.SkeletalMeshOptimizationType
	 */
	enum class ESkeletalMeshOptimizationType : uint8_t
	{
		SMOT_NumOfTriangles = 0,
		SMOT_MaxDeviation   = 1,
		SMOT_MAX            = 2
	};

	/**
	 * Enum Engine.SkeletalMesh.SkeletalMeshOptimizationImportance
	 */
	enum class ESkeletalMeshOptimizationImportance : uint8_t
	{
		SMOI_Off     = 0,
		SMOI_Lowest  = 1,
		SMOI_Low     = 2,
		SMOI_Normal  = 3,
		SMOI_High    = 4,
		SMOI_Highest = 5,
		SMOI_MAX     = 6
	};

	/**
	 * Enum Engine.AnimationAsset.EAnimGroupRole
	 */
	enum class EAnimGroupRole : uint8_t
	{
		CanBeLeader    = 0,
		AlwaysFollower = 1,
		AlwaysLeader   = 2,
		MAX            = 3
	};

	/**
	 * Enum Engine.AnimationAsset.ERootMotionRootLock
	 */
	enum class ERootMotionRootLock : uint8_t
	{
		RefPose        = 0,
		AnimFirstFrame = 1,
		Zero           = 2,
		MAX            = 3
	};

	/**
	 * Enum Engine.WorldSettings.EActorListsBP
	 */
	enum class EActorListsBP : uint8_t
	{
		AL_PLAYERS                    = 0,
		AL_PLAYERSTATES               = 1,
		AL_FLOATINGHUD                = 2,
		AL_UNSTASISEDACTORS           = 3,
		AL_NPC                        = 4,
		AL_NPC_ACTIVE                 = 5,
		AL_FORCEDHUD                  = 6,
		AL_NPCZONEMANAGERS            = 7,
		AL_PLAYERCONTROLLERS          = 8,
		AL_BEDS                       = 9,
		AL_BIOMEZONEVOLUMES           = 10,
		AL_NPC_DEAD                   = 11,
		AL_DAYCYCLEAMBIENTSOUNDS      = 12,
		AL_STRUCTURESCLIENT           = 13,
		AL_STRUCTUREPREVENTIONVOLUMES = 14,
		AL_TRANSPONDERS               = 15,
		AL_CUSTOMACTORLISTS           = 16,
		AL_BLOCKINGVOLUMES            = 17,
		AL_AMBIENTSOUNDS              = 18,
		AL_CONNECTEDSHOOTERCHARACTERS = 19,
		AL_EXPLORERNOTECHESTS         = 20,
		AL_SUPPLYCRATEVOLUMES         = 21,
		AL_TAMED_DINOS                = 22,
		MAX                           = 23,
		MAX01                         = 24
	};

	/**
	 * Enum Engine.WorldSettings.EVisibilityAggressiveness
	 */
	enum class EVisibilityAggressiveness : uint8_t
	{
		VIS_LeastAggressive      = 0,
		VIS_ModeratelyAggressive = 1,
		VIS_MostAggressive       = 2,
		VIS_Max                  = 3
	};

	/**
	 * Enum Engine.ReverbVolume.ReverbPreset
	 */
	enum class EReverbPreset : uint8_t
	{
		REVERB_Default       = 0,
		REVERB_Bathroom      = 1,
		REVERB_StoneRoom     = 2,
		REVERB_Auditorium    = 3,
		REVERB_ConcertHall   = 4,
		REVERB_Cave          = 5,
		REVERB_Hallway       = 6,
		REVERB_StoneCorridor = 7,
		REVERB_Alley         = 8,
		REVERB_Forest        = 9,
		REVERB_City          = 10,
		REVERB_Mountains     = 11,
		REVERB_Quarry        = 12,
		REVERB_Plain         = 13,
		REVERB_ParkingLot    = 14,
		REVERB_SewerPipe     = 15,
		REVERB_Underwater    = 16,
		REVERB_SmallRoom     = 17,
		REVERB_MediumRoom    = 18,
		REVERB_LargeRoom     = 19,
		REVERB_MediumHall    = 20,
		REVERB_LargeHall     = 21,
		REVERB_Plate         = 22,
		REVERB_MAX           = 23
	};

	/**
	 * Enum Engine.SkyLightComponent.ESkyLightSourceType
	 */
	enum class ESkyLightSourceType : uint8_t
	{
		SLS_CapturedScene    = 0,
		SLS_SpecifiedCubemap = 1,
		SLS_MAX              = 2
	};

	/**
	 * Enum Engine.AntiDupeTransactionLog.EAntiDupeTransactionLog
	 */
	enum class EAntiDupeTransactionLog : uint8_t
	{
		Item_Upload   = 0,
		Dino_Upload   = 1,
		Player_Upload = 2,
		MAX_ENTRY     = 3,
		MAX           = 4
	};

	/**
	 * Enum Engine.LandscapeGizmoActiveActor.ELandscapeGizmoType
	 */
	enum class ELandscapeGizmoType : uint8_t
	{
		LGT_None   = 0,
		LGT_Height = 1,
		LGT_Weight = 2,
		LGT_MAX    = 3
	};

	/**
	 * Enum Engine.LandscapeProxy.ELandscapeLODFalloff
	 */
	enum class ELandscapeLODFalloff : uint8_t
	{
		Linear     = 0,
		SquareRoot = 1,
		MAX        = 2
	};

	/**
	 * Enum Engine.LandscapeProxy.ELandscapeLayerPaintingRestriction
	 */
	enum class ELandscapeLayerPaintingRestriction : uint8_t
	{
		None         = 0,
		UseMaxLayers = 1,
		ExistingOnly = 2,
		MAX          = 3
	};

	/**
	 * Enum Engine.NavigationTypes.ENavigationQueryResult
	 */
	enum class ENavigationQueryResult : uint8_t
	{
		Invalid = 0,
		Error   = 1,
		Fail    = 2,
		Success = 3,
		MAX     = 4
	};

	/**
	 * Enum Engine.NavigationTypes.ENavPathEvent
	 */
	enum class ENavPathEvent : uint8_t
	{
		Cleared                       = 0,
		NewPath                       = 1,
		UpdatedDueToGoalMoved         = 2,
		UpdatedDueToNavigationChanged = 3,
		Invalidated                   = 4,
		RePathFailed                  = 5,
		Custom                        = 6,
		MAX                           = 7
	};

	/**
	 * Enum Engine.NavigationTypes.ENavigationOptionFlag
	 */
	enum class ENavigationOptionFlag : uint8_t
	{
		Default = 0,
		Enable  = 1,
		Disable = 2,
		MAX     = 3,
		MAX01   = 4
	};

	/**
	 * Enum Engine.NavLinkDefinition.ENavLinkDirection
	 */
	enum class ENavLinkDirection : uint8_t
	{
		BothWays    = 0,
		LeftToRight = 1,
		RightToLeft = 2,
		MAX         = 3
	};

	/**
	 * Enum Engine.Skeleton.EBoneTranslationRetargetingMode
	 */
	enum class EBoneTranslationRetargetingMode : uint8_t
	{
		Animation       = 0,
		Skeleton        = 1,
		AnimationScaled = 2,
		MAX             = 3
	};

	/**
	 * Enum Engine.CharacterMovementComponent.ENetMoveType
	 */
	enum class ENetMoveType : uint8_t
	{
		ServerMove                = 0,
		ServerMoveOld             = 1,
		ServerMoveWithRotation    = 2,
		ServerMoveOldWithRotation = 3,
		ServerMoveOnlyRotation    = 4,
		MAX                       = 5
	};

	/**
	 * Enum Engine.WheeledVehicleMovementComponent4W.EVehicleDifferential4W
	 */
	enum class EVehicleDifferential4W : uint8_t
	{
		LimitedSlip_4W         = 0,
		LimitedSlip_FrontDrive = 1,
		LimitedSlip_RearDrive  = 2,
		Open_4W                = 3,
		Open_FrontDrive        = 4,
		Open_RearDrive         = 5,
		MAX                    = 6
	};

	/**
	 * Enum Engine.SoundAttenuation.EAttenuationShape
	 */
	enum class EAttenuationShape : uint8_t
	{
		Sphere  = 0,
		Capsule = 1,
		Box     = 2,
		Cone    = 3,
		MAX     = 4
	};

	/**
	 * Enum Engine.SoundAttenuation.ESoundDistanceCalc
	 */
	enum class ESoundDistanceCalc : uint8_t
	{
		SOUNDDISTANCE_Normal          = 0,
		SOUNDDISTANCE_InfiniteXYPlane = 1,
		SOUNDDISTANCE_InfiniteXZPlane = 2,
		SOUNDDISTANCE_InfiniteYZPlane = 3,
		SOUNDDISTANCE_MAX             = 4
	};

	/**
	 * Enum Engine.SoundAttenuation.ESoundDistanceModel
	 */
	enum class ESoundDistanceModel : uint8_t
	{
		ATTENUATION_Linear       = 0,
		ATTENUATION_Logarithmic  = 1,
		ATTENUATION_Inverse      = 2,
		ATTENUATION_LogReverse   = 3,
		ATTENUATION_NaturalSound = 4,
		ATTENUATION_MAX          = 5
	};

	/**
	 * Enum Engine.SplineMeshComponent.ESplineMeshAxis
	 */
	enum class ESplineMeshAxis : uint8_t
	{
		X   = 0,
		Y   = 1,
		Z   = 2,
		MAX = 3
	};

	/**
	 * Enum Engine.MaterialInterface.EMaterialUsage
	 */
	enum class EMaterialUsage : uint8_t
	{
		MATUSAGE_SkeletalMesh          = 0,
		MATUSAGE_ParticleSprites       = 1,
		MATUSAGE_BeamTrails            = 2,
		MATUSAGE_MeshParticles         = 3,
		MATUSAGE_StaticLighting        = 4,
		MATUSAGE_MorphTargets          = 5,
		MATUSAGE_SplineMesh            = 6,
		MATUSAGE_Landscape             = 7,
		MATUSAGE_InstancedStaticMeshes = 8,
		MATUSAGE_Clothing              = 9,
		MATUSAGE_UI                    = 10,
		MATUSAGE_GroundClutter         = 11,
		MATUSAGE_StaticMesh            = 12,
		MATUSAGE_MAX                   = 13
	};

	/**
	 * Enum Engine.ParticleSystem.EParticleSystemOcclusionBoundsMethod
	 */
	enum class EParticleSystemOcclusionBoundsMethod : uint8_t
	{
		EPSOBM_None           = 0,
		EPSOBM_ParticleBounds = 1,
		EPSOBM_CustomBounds   = 2,
		EPSOBM_MAX            = 3
	};

	/**
	 * Enum Engine.ParticleSystem.ParticleSystemLODMethod
	 */
	enum class EParticleSystemLODMethod : uint8_t
	{
		PARTICLESYSTEMLODMETHOD_Automatic         = 0,
		PARTICLESYSTEMLODMETHOD_DirectSet         = 1,
		PARTICLESYSTEMLODMETHOD_ActivateAutomatic = 2,
		PARTICLESYSTEMLODMETHOD_MAX               = 3
	};

	/**
	 * Enum Engine.ParticleSystem.EParticleSystemUpdateMode
	 */
	enum class EParticleSystemUpdateMode : uint8_t
	{
		EPSUM_RealTime  = 0,
		EPSUM_FixedTime = 1,
		EPSUM_MAX       = 2
	};

	/**
	 * Enum Engine.ParticleSystemComponent.EParticleEventType
	 */
	enum class EParticleEventType : uint8_t
	{
		EPET_Any       = 0,
		EPET_Spawn     = 1,
		EPET_Death     = 2,
		EPET_Collision = 3,
		EPET_Burst     = 4,
		EPET_Blueprint = 5,
		EPET_MAX       = 6
	};

	/**
	 * Enum Engine.ParticleSystemComponent.ParticleReplayState
	 */
	enum class EParticleReplayState : uint8_t
	{
		PRS_Disabled  = 0,
		PRS_Capturing = 1,
		PRS_Replaying = 2,
		PRS_MAX       = 3
	};

	/**
	 * Enum Engine.ParticleSystemComponent.EParticleSysParamType
	 */
	enum class EParticleSysParamType : uint8_t
	{
		PSPT_None       = 0,
		PSPT_Scalar     = 1,
		PSPT_ScalarRand = 2,
		PSPT_Vector     = 3,
		PSPT_VectorRand = 4,
		PSPT_Color      = 5,
		PSPT_Actor      = 6,
		PSPT_Material   = 7,
		PSPT_MAX        = 8
	};

	/**
	 * Enum Engine.TimelineComponent.ETimelineDirection
	 */
	enum class ETimelineDirection : uint8_t
	{
		Forward  = 0,
		Backward = 1,
		MAX      = 2
	};

	/**
	 * Enum Engine.TimelineComponent.ETimelineLengthMode
	 */
	enum class ETimelineLengthMode : uint8_t
	{
		TL_TimelineLength = 0,
		TL_LastKeyFrame   = 1,
		TL_MAX            = 2
	};

	/**
	 * Enum Engine.AnimSequenceBase.ETypeAdvanceAnim
	 */
	enum class ETypeAdvanceAnim : uint8_t
	{
		ETAA_Default  = 0,
		ETAA_Finished = 1,
		ETAA_Looped   = 2,
		ETAA_MAX      = 3
	};

	/**
	 * Enum Engine.AnimSequence.EAdditiveBasePoseType
	 */
	enum class EAdditiveBasePoseType : uint8_t
	{
		ABPT_None       = 0,
		ABPT_RefPose    = 1,
		ABPT_AnimScaled = 2,
		ABPT_AnimFrame  = 3,
		ABPT_MAX        = 4
	};

	/**
	 * Enum Engine.AnimSequence.EAdditiveAnimationType
	 */
	enum class EAdditiveAnimationType : uint8_t
	{
		AAT_None                    = 0,
		AAT_LocalSpaceBase          = 1,
		AAT_RotationOffsetMeshSpace = 2,
		AAT_MAX                     = 3
	};

	/**
	 * Enum Engine.AnimSequence.AnimationKeyFormat
	 */
	enum class EAnimationKeyFormat : uint8_t
	{
		AKF_ConstantKeyLerp     = 0,
		AKF_VariableKeyLerp     = 1,
		AKF_PerTrackCompression = 2,
		AKF_MAX                 = 3
	};

	/**
	 * Enum Engine.AnimSequence.AnimationCompressionFormat
	 */
	enum class EAnimationCompressionFormat : uint8_t
	{
		ACF_None               = 0,
		ACF_Float96NoW         = 1,
		ACF_Fixed48NoW         = 2,
		ACF_IntervalFixed32NoW = 3,
		ACF_Fixed32NoW         = 4,
		ACF_Float32NoW         = 5,
		ACF_Identity           = 6,
		ACF_MAX                = 7
	};

	/**
	 * Enum Engine.AnimInstance.EBoneRotationSource
	 */
	enum class EBoneRotationSource : uint8_t
	{
		BRS_KeepComponentSpaceRotation = 0,
		BRS_KeepLocalSpaceRotation     = 1,
		BRS_CopyFromTarget             = 2,
		BRS_MAX                        = 3
	};

	/**
	 * Enum Engine.AnimInstance.EBoneControlSpace
	 */
	enum class EBoneControlSpace : uint8_t
	{
		BCS_WorldSpace      = 0,
		BCS_ComponentSpace  = 1,
		BCS_ParentBoneSpace = 2,
		BCS_BoneSpace       = 3,
		BCS_MAX             = 4
	};

	/**
	 * Enum Engine.BlendSpaceBase.ENotifyTriggerMode
	 */
	enum class ENotifyTriggerMode : uint8_t
	{
		AllAnimations            = 0,
		HighestWeightedAnimation = 1,
		None                     = 2,
		MAX                      = 3
	};

	/**
	 * Enum Engine.BlendSpaceBase.EBlendSpaceAxis
	 */
	enum class EBlendSpaceAxis : uint8_t
	{
		BSA_None = 0,
		BSA_X    = 1,
		BSA_Y    = 2,
		BSA_Max  = 3
	};

	/**
	 * Enum Engine.AnimStateMachineTypes.ETransitionLogicType
	 */
	enum class ETransitionLogicType : uint8_t
	{
		TLT_StandardBlend = 0,
		TLT_Custom        = 1,
		TLT_MAX           = 2
	};

	/**
	 * Enum Engine.AnimStateMachineTypes.ETransitionBlendMode
	 */
	enum class ETransitionBlendMode : uint8_t
	{
		TBM_Linear = 0,
		TBM_Cubic  = 1,
		TBM_MAX    = 2
	};

	/**
	 * Enum Engine.EdGraphPin.EBlueprintPinStyleType
	 */
	enum class EBlueprintPinStyleType : uint8_t
	{
		BPST_Original = 0,
		BPST_VariantA = 1,
		BPST_MAX      = 2
	};

	/**
	 * Enum Engine.EdGraphNode.ENodeAdvancedPins
	 */
	enum class ENodeAdvancedPins : uint8_t
	{
		NoPins = 0,
		Shown  = 1,
		Hidden = 2,
		MAX    = 3
	};

	/**
	 * Enum Engine.EdGraphNode.ENodeTitleType
	 */
	enum class ENodeTitleType : uint8_t
	{
		FullTitle      = 0,
		ListView       = 1,
		EditableTitle  = 2,
		MenuTitle      = 3,
		MAX_TitleTypes = 4,
		MAX            = 5
	};

	/**
	 * Enum Engine.EdGraphNode.EEdGraphPinDirection
	 */
	enum class EEdGraphPinDirection : uint8_t
	{
		EGPD_Input  = 0,
		EGPD_Output = 1,
		EGPD_MAX    = 2
	};

	/**
	 * Enum Engine.Blueprint.EBlueprintType
	 */
	enum class EBlueprintType : uint8_t
	{
		BPTYPE_Normal          = 0,
		BPTYPE_Const           = 1,
		BPTYPE_MacroLibrary    = 2,
		BPTYPE_Interface       = 3,
		BPTYPE_LevelScript     = 4,
		BPTYPE_FunctionLibrary = 5,
		BPTYPE_MAX             = 6
	};

	/**
	 * Enum Engine.Blueprint.EBlueprintStatus
	 */
	enum class EBlueprintStatus : uint8_t
	{
		BS_Unknown              = 0,
		BS_Dirty                = 1,
		BS_Error                = 2,
		BS_UpToDate             = 3,
		BS_BeingCreated         = 4,
		BS_UpToDateWithWarnings = 5,
		BS_MAX                  = 6
	};

	/**
	 * Enum Engine.DialogueTypes.EGrammaticalNumber
	 */
	enum class EGrammaticalNumber : uint8_t
	{
		Singular = 0,
		Plural   = 1,
		MAX      = 2
	};

	/**
	 * Enum Engine.DialogueTypes.EGrammaticalGender
	 */
	enum class EGrammaticalGender : uint8_t
	{
		Neuter    = 0,
		Masculine = 1,
		Feminine  = 2,
		Mixed     = 3,
		MAX       = 4
	};

	/**
	 * Enum Engine.Texture.ETextureSourceFormat
	 */
	enum class ETextureSourceFormat : uint8_t
	{
		TSF_Invalid = 0,
		TSF_G8      = 1,
		TSF_BGRA8   = 2,
		TSF_BGRE8   = 3,
		TSF_RGBA16  = 4,
		TSF_RGBA16F = 5,
		TSF_RGBA8   = 6,
		TSF_RGBE8   = 7,
		TSF_MAX     = 8
	};

	/**
	 * Enum Engine.Texture.ETextureSourceArtType
	 */
	enum class ETextureSourceArtType : uint8_t
	{
		TSAT_Uncompressed  = 0,
		TSAT_PNGCompressed = 1,
		TSAT_DDSFile       = 2,
		TSAT_MAX           = 3
	};

	/**
	 * Enum Engine.Texture.ETextureMipCount
	 */
	enum class ETextureMipCount : uint8_t
	{
		TMC_ResidentMips  = 0,
		TMC_AllMips       = 1,
		TMC_AllMipsBiased = 2,
		TMC_MAX           = 3
	};

	/**
	 * Enum Engine.Texture.ECompositeTextureMode
	 */
	enum class ECompositeTextureMode : uint8_t
	{
		CTM_Disabled               = 0,
		CTM_NormalRoughnessToRed   = 1,
		CTM_NormalRoughnessToGreen = 2,
		CTM_NormalRoughnessToBlue  = 3,
		CTM_NormalRoughnessToAlpha = 4,
		CTM_MAX                    = 5
	};

	/**
	 * Enum Engine.Texture.TextureAddress
	 */
	enum class ETextureAddress : uint8_t
	{
		TA_Wrap   = 0,
		TA_Clamp  = 1,
		TA_Mirror = 2,
		TA_MAX    = 3
	};

	/**
	 * Enum Engine.Texture.TextureFilter
	 */
	enum class ETextureFilter : uint8_t
	{
		TF_Nearest   = 0,
		TF_Bilinear  = 1,
		TF_Trilinear = 2,
		TF_Default   = 3,
		TF_MAX       = 4
	};

	/**
	 * Enum Engine.Texture.TextureCompressionSettings
	 */
	enum class ETextureCompressionSettings : uint8_t
	{
		TC_Default               = 0,
		TC_Normalmap             = 1,
		TC_Masks                 = 2,
		TC_Grayscale             = 3,
		TC_Displacementmap       = 4,
		TC_VectorDisplacementmap = 5,
		TC_HDR                   = 6,
		TC_EditorIcon            = 7,
		TC_Alpha                 = 8,
		TC_DistanceFieldFont     = 9,
		TC_MAX                   = 10
	};

	/**
	 * Enum Engine.TextureRenderTarget2D.ETextureRenderTargetFormat
	 */
	enum class ETextureRenderTargetFormat : uint8_t
	{
		RTF_R8      = 0,
		RTF_RG8     = 1,
		RTF_RGBA8   = 2,
		RTF_R16f    = 3,
		RTF_RG16f   = 4,
		RTF_RGBA16f = 5,
		RTF_R32f    = 6,
		RTF_RG32f   = 7,
		RTF_RGBA32f = 8,
		RTF_MAX     = 9
	};

	/**
	 * Enum Engine.KismetSystemLibrary.ENetModeBP
	 */
	enum class ENetModeBP : uint8_t
	{
		Standalone      = 0,
		DedicatedServer = 1,
		ListenServer    = 2,
		Client          = 3,
		MAX             = 4
	};

	/**
	 * Enum Engine.KismetSystemLibrary.ENetworkModeResult
	 */
	enum class ENetworkModeResult : uint8_t
	{
		Yes = 0,
		No  = 1,
		MAX = 2
	};

	/**
	 * Enum Engine.KismetSystemLibrary.EQuitPreference
	 */
	enum class EQuitPreference : uint8_t
	{
		Quit       = 0,
		Background = 1,
		MAX        = 2
	};

	/**
	 * Enum Engine.KismetSystemLibrary.EMoveComponentAction
	 */
	enum class EMoveComponentAction : uint8_t
	{
		Move   = 0,
		Stop   = 1,
		Return = 2,
		MAX    = 3
	};

	/**
	 * Enum Engine.KismetSystemLibrary.EDrawDebugTrace
	 */
	enum class EDrawDebugTrace : uint8_t
	{
		None        = 0,
		ForOneFrame = 1,
		ForDuration = 2,
		Persistent  = 3,
		MAX         = 4
	};

	/**
	 * Enum Engine.KismetTextLibrary.ERoundingMode
	 */
	enum class ERoundingMode : uint8_t
	{
		HalfToEven         = 0,
		HalfFromZero       = 1,
		HalfToZero         = 2,
		FromZero           = 3,
		ToZero             = 4,
		ToNegativeInfinity = 5,
		ToPositiveInfinity = 6,
		MAX                = 7
	};

	/**
	 * Enum Engine.BodySetup.EBodyCollisionResponse
	 */
	enum class EBodyCollisionResponse : uint8_t
	{
		BodyCollision_Enabled  = 0,
		BodyCollision_Disabled = 1,
		BodyCollision_MAX      = 2
	};

	/**
	 * Enum Engine.BodySetup.EPhysicsType
	 */
	enum class EPhysicsType : uint8_t
	{
		PhysType_Default   = 0,
		PhysType_Kinematic = 1,
		PhysType_Simulated = 2,
		PhysType_MAX       = 3
	};

	/**
	 * Enum Engine.BodySetup.ECollisionTraceFlag
	 */
	enum class ECollisionTraceFlag : uint8_t
	{
		CTF_UseDefault         = 0,
		CTF_UseSimpleAsComplex = 1,
		CTF_UseComplexAsSimple = 2,
		CTF_MAX                = 3
	};

	/**
	 * Enum Engine.CameraShake.EInitialOscillatorOffset
	 */
	enum class EInitialOscillatorOffset : uint8_t
	{
		EOO_OffsetRandom = 0,
		EOO_OffsetZero   = 1,
		EOO_MAX          = 2
	};

	/**
	 * Enum Engine.DistributionVector.EDistributionVectorMirrorFlags
	 */
	enum class EDistributionVectorMirrorFlags : uint8_t
	{
		EDVMF_Same      = 0,
		EDVMF_Different = 1,
		EDVMF_Mirror    = 2,
		EDVMF_MAX       = 3
	};

	/**
	 * Enum Engine.DistributionVector.EDistributionVectorLockFlags
	 */
	enum class EDistributionVectorLockFlags : uint8_t
	{
		EDVLF_None = 0,
		EDVLF_XY   = 1,
		EDVLF_XZ   = 2,
		EDVLF_YZ   = 3,
		EDVLF_XYZ  = 4,
		EDVLF_MAX  = 5
	};

	/**
	 * Enum Engine.EdGraphSchema.ECanCreateConnectionResponse
	 */
	enum class ECanCreateConnectionResponse : uint8_t
	{
		CONNECT_RESPONSE_MAKE                      = 0,
		CONNECT_RESPONSE_DISALLOW                  = 1,
		CONNECT_RESPONSE_BREAK_OTHERS_A            = 2,
		CONNECT_RESPONSE_BREAK_OTHERS_B            = 3,
		CONNECT_RESPONSE_BREAK_OTHERS_AB           = 4,
		CONNECT_RESPONSE_MAKE_WITH_CONVERSION_NODE = 5,
		CONNECT_RESPONSE_MAX                       = 6
	};

	/**
	 * Enum Engine.EdGraphSchema.EGraphType
	 */
	enum class EGraphType : uint8_t
	{
		GT_Function     = 0,
		GT_Ubergraph    = 1,
		GT_Macro        = 2,
		GT_Animation    = 3,
		GT_StateMachine = 4,
		GT_MAX          = 5
	};

	/**
	 * Enum Engine.Engine.EMatineeCaptureType
	 */
	enum class EMatineeCaptureType : uint8_t
	{
		AVI  = 0,
		BMP  = 1,
		PNG  = 2,
		JPEG = 3,
		MAX  = 4
	};

	/**
	 * Enum Engine.Engine.EConsoleType
	 */
	enum class EConsoleType : uint8_t
	{
		CONSOLE_Any     = 0,
		CONSOLE_Mobile  = 1,
		CONSOLE_XBOXONE = 2,
		CONSOLE_MAX     = 3
	};

	/**
	 * Enum Engine.Engine.ETransitionType
	 */
	enum class ETransitionType : uint8_t
	{
		TT_None             = 0,
		TT_Paused           = 1,
		TT_Loading          = 2,
		TT_Saving           = 3,
		TT_Connecting       = 4,
		TT_Precaching       = 5,
		TT_WaitingToConnect = 6,
		TT_MAX              = 7
	};

	/**
	 * Enum Engine.Engine.EFullyLoadPackageType
	 */
	enum class EFullyLoadPackageType : uint8_t
	{
		FULLYLOAD_Map                = 0,
		FULLYLOAD_Game_PreLoadClass  = 1,
		FULLYLOAD_Game_PostLoadClass = 2,
		FULLYLOAD_Always             = 3,
		FULLYLOAD_Mutator            = 4,
		FULLYLOAD_MAX                = 5
	};

	/**
	 * Enum Engine.FontImportOptions.EFontImportCharacterSet
	 */
	enum class EFontImportCharacterSet : uint8_t
	{
		FontICS_Default = 0,
		FontICS_Ansi    = 1,
		FontICS_Symbol  = 2,
		FontICS_MAX     = 3
	};

	/**
	 * Enum Engine.Font.EFontCacheType
	 */
	enum class EFontCacheType : uint8_t
	{
		Offline = 0,
		Runtime = 1,
		MAX     = 2
	};

	/**
	 * Enum Engine.InterpTrack.ETrackActiveCondition
	 */
	enum class ETrackActiveCondition : uint8_t
	{
		ETAC_Always       = 0,
		ETAC_GoreEnabled  = 1,
		ETAC_GoreDisabled = 2,
		ETAC_MAX          = 3
	};

	/**
	 * Enum Engine.InterpTrackFloatBase.ETrackInterpMode
	 */
	enum class ETrackInterpMode : uint8_t
	{
		FTI_Set      = 0,
		FTI_Add      = 1,
		FTI_Multiply = 2,
		FTI_MAX      = 3
	};

	/**
	 * Enum Engine.InterpTrackMove.EInterpTrackMoveRotMode
	 */
	enum class EInterpTrackMoveRotMode : uint8_t
	{
		IMR_Keyframed   = 0,
		IMR_LookAtGroup = 1,
		IMR_Ignore      = 2,
		IMR_MAX         = 3
	};

	/**
	 * Enum Engine.InterpTrackToggle.ETrackToggleAction
	 */
	enum class ETrackToggleAction : uint8_t
	{
		ETTA_Off     = 0,
		ETTA_On      = 1,
		ETTA_Toggle  = 2,
		ETTA_Trigger = 3,
		ETTA_MAX     = 4
	};

	/**
	 * Enum Engine.InterpTrackVisibility.EVisibilityTrackCondition
	 */
	enum class EVisibilityTrackCondition : uint8_t
	{
		EVTC_Always       = 0,
		EVTC_GoreEnabled  = 1,
		EVTC_GoreDisabled = 2,
		EVTC_MAX          = 3
	};

	/**
	 * Enum Engine.InterpTrackVisibility.EVisibilityTrackAction
	 */
	enum class EVisibilityTrackAction : uint8_t
	{
		EVTA_Hide   = 0,
		EVTA_Show   = 1,
		EVTA_Toggle = 2,
		EVTA_MAX    = 3
	};

	/**
	 * Enum Engine.LandscapeSplineSegment.LandscapeSplineMeshOrientation
	 */
	enum class ELandscapeSplineMeshOrientation : uint8_t
	{
		LSMO_XUp = 0,
		LSMO_YUp = 1,
		LSMO_MAX = 2
	};

	/**
	 * Enum Engine.MaterialExpressionCustom.ECustomMaterialOutputType
	 */
	enum class ECustomMaterialOutputType : uint8_t
	{
		CMOT_Float1 = 0,
		CMOT_Float2 = 1,
		CMOT_Float3 = 2,
		CMOT_Float4 = 3,
		CMOT_MAX    = 4
	};

	/**
	 * Enum Engine.MaterialExpressionLandscapeLayerBlend.ELandscapeLayerBlendType
	 */
	enum class ELandscapeLayerBlendType : uint8_t
	{
		LB_WeightBlend = 0,
		LB_AlphaBlend  = 1,
		LB_HeightBlend = 2,
		LB_MAX         = 3
	};

	/**
	 * Enum Engine.Material.EMaterialDecalResponse
	 */
	enum class EMaterialDecalResponse : uint8_t
	{
		MDR_None                 = 0,
		MDR_ColorNormalRoughness = 1,
		MDR_Color                = 2,
		MDR_ColorNormal          = 3,
		MDR_ColorRoughness       = 4,
		MDR_Normal               = 5,
		MDR_NormalRoughness      = 6,
		MDR_Roughness            = 7,
		MDR_MAX                  = 8
	};

	/**
	 * Enum Engine.Material.EMaterialDomain
	 */
	enum class EMaterialDomain : uint8_t
	{
		MD_Surface       = 0,
		MD_DeferredDecal = 1,
		MD_LightFunction = 2,
		MD_PostProcess   = 3,
		MD_MAX           = 4
	};

	/**
	 * Enum Engine.Material.EDecalBlendMode
	 */
	enum class EDecalBlendMode : uint8_t
	{
		DBM_Translucent                  = 0,
		DBM_Stain                        = 1,
		DBM_Normal                       = 2,
		DBM_Emissive                     = 3,
		DBM_DBuffer_ColorNormalRoughness = 4,
		DBM_DBuffer_Color                = 5,
		DBM_DBuffer_ColorNormal          = 6,
		DBM_DBuffer_ColorRoughness       = 7,
		DBM_DBuffer_Normal               = 8,
		DBM_DBuffer_NormalRoughness      = 9,
		DBM_DBuffer_Roughness            = 10,
		DBM_MAX                          = 11
	};

	/**
	 * Enum Engine.BlendableInterface.EBlendableLocation
	 */
	enum class EBlendableLocation : uint8_t
	{
		BL_AfterTonemapping   = 0,
		BL_BeforeTonemapping  = 1,
		BL_BeforeTranslucency = 2,
		BL_MAX                = 3
	};

	/**
	 * Enum Engine.ParticleEmitter.EEmitterRenderMode
	 */
	enum class EEmitterRenderMode : uint8_t
	{
		ERM_Normal     = 0,
		ERM_Point      = 1,
		ERM_Cross      = 2,
		ERM_LightsOnly = 3,
		ERM_None       = 4,
		ERM_MAX        = 5
	};

	/**
	 * Enum Engine.ParticleEmitter.EParticleSubUVInterpMethod
	 */
	enum class EParticleSubUVInterpMethod : uint8_t
	{
		PSUVIM_None         = 0,
		PSUVIM_Linear       = 1,
		PSUVIM_Linear_Blend = 2,
		PSUVIM_Random       = 3,
		PSUVIM_Random_Blend = 4,
		PSUVIM_MAX          = 5
	};

	/**
	 * Enum Engine.ParticleEmitter.EParticleBurstMethod
	 */
	enum class EParticleBurstMethod : uint8_t
	{
		EPBM_Instant      = 0,
		EPBM_Interpolated = 1,
		EPBM_MAX          = 2
	};

	/**
	 * Enum Engine.ParticleModule.EParticleSourceSelectionMethod
	 */
	enum class EParticleSourceSelectionMethod : uint8_t
	{
		EPSSM_Random     = 0,
		EPSSM_Sequential = 1,
		EPSSM_MAX        = 2
	};

	/**
	 * Enum Engine.ParticleModule.EModuleType
	 */
	enum class EModuleType : uint8_t
	{
		EPMT_General  = 0,
		EPMT_TypeData = 1,
		EPMT_Beam     = 2,
		EPMT_Trail    = 3,
		EPMT_Spawn    = 4,
		EPMT_Required = 5,
		EPMT_Event    = 6,
		EPMT_Light    = 7,
		EPMT_MAX      = 8
	};

	/**
	 * Enum Engine.ParticleModuleBeamBase.Beam2SourceTargetTangentMethod
	 */
	enum class EBeam2SourceTargetTangentMethod : uint8_t
	{
		PEB2STTM_Direct       = 0,
		PEB2STTM_UserSet      = 1,
		PEB2STTM_Distribution = 2,
		PEB2STTM_Emitter      = 3,
		PEB2STTM_MAX          = 4
	};

	/**
	 * Enum Engine.ParticleModuleBeamBase.Beam2SourceTargetMethod
	 */
	enum class EBeam2SourceTargetMethod : uint8_t
	{
		PEB2STM_Default  = 0,
		PEB2STM_UserSet  = 1,
		PEB2STM_Emitter  = 2,
		PEB2STM_Particle = 3,
		PEB2STM_Actor    = 4,
		PEB2STM_MAX      = 5
	};

	/**
	 * Enum Engine.ParticleModuleBeamModifier.BeamModifierType
	 */
	enum class EBeamModifierType : uint8_t
	{
		PEB2MT_Source = 0,
		PEB2MT_Target = 1,
		PEB2MT_MAX    = 2
	};

	/**
	 * Enum Engine.ParticleModuleLocationBoneSocket.ELocationBoneSocketSelectionMethod
	 */
	enum class ELocationBoneSocketSelectionMethod : uint8_t
	{
		BONESOCKETSEL_Sequential = 0,
		BONESOCKETSEL_Random     = 1,
		BONESOCKETSEL_MAX        = 2
	};

	/**
	 * Enum Engine.ParticleModuleLocationBoneSocket.ELocationBoneSocketSource
	 */
	enum class ELocationBoneSocketSource : uint8_t
	{
		BONESOCKETSOURCE_Bones   = 0,
		BONESOCKETSOURCE_Sockets = 1,
		BONESOCKETSOURCE_MAX     = 2
	};

	/**
	 * Enum Engine.ParticleModuleOrbit.EOrbitChainMode
	 */
	enum class EOrbitChainMode : uint8_t
	{
		EOChainMode_Add   = 0,
		EOChainMode_Scale = 1,
		EOChainMode_Link  = 2,
		EOChainMode_MAX   = 3
	};

	/**
	 * Enum Engine.ParticleModuleParameterDynamic.EEmitterDynamicParameterValue
	 */
	enum class EEmitterDynamicParameterValue : uint8_t
	{
		EDPV_UserSet     = 0,
		EDPV_VelocityX   = 1,
		EDPV_VelocityY   = 2,
		EDPV_VelocityZ   = 3,
		EDPV_VelocityMag = 4,
		EDPV_MAX         = 5
	};

	/**
	 * Enum Engine.ParticleModuleTypeDataBeam2.EBeamTaperMethod
	 */
	enum class EBeamTaperMethod : uint8_t
	{
		PEBTM_None    = 0,
		PEBTM_Full    = 1,
		PEBTM_Partial = 2,
		PEBTM_MAX     = 3
	};

	/**
	 * Enum Engine.ParticleModuleTypeDataBeam2.EBeam2Method
	 */
	enum class EBeam2Method : uint8_t
	{
		PEB2M_Distance = 0,
		PEB2M_Target   = 1,
		PEB2M_Branch   = 2,
		PEB2M_MAX      = 3
	};

	/**
	 * Enum Engine.ParticleModuleOrientationAxisLock.EParticleAxisLock
	 */
	enum class EParticleAxisLock : uint8_t
	{
		EPAL_NONE       = 0,
		EPAL_X          = 1,
		EPAL_Y          = 2,
		EPAL_Z          = 3,
		EPAL_NEGATIVE_X = 4,
		EPAL_NEGATIVE_Y = 5,
		EPAL_NEGATIVE_Z = 6,
		EPAL_ROTATE_X   = 7,
		EPAL_ROTATE_Y   = 8,
		EPAL_ROTATE_Z   = 9,
		EPAL_MAX        = 10
	};

	/**
	 * Enum Engine.ParticleSpriteEmitter.EParticleScreenAlignment
	 */
	enum class EParticleScreenAlignment : uint8_t
	{
		PSA_FacingCameraPosition = 0,
		PSA_Square               = 1,
		PSA_Rectangle            = 2,
		PSA_Velocity             = 3,
		PSA_AwayFromCenter       = 4,
		PSA_TypeSpecific         = 5,
		PSA_MAX                  = 6
	};

	/**
	 * Enum Engine.PhysicsSettings.ESettingsLockedAxis
	 */
	enum class ESettingsLockedAxis : uint8_t
	{
		None = 0,
		X    = 1,
		Y    = 2,
		Z    = 3,
		MAX  = 4
	};

	/**
	 * Enum Engine.PhysicsSettings.EFrictionCombineMode
	 */
	enum class EFrictionCombineMode : uint8_t
	{
		Average  = 0,
		Min      = 1,
		Multiply = 2,
		Max      = 3,
		MAX      = 4
	};

	/**
	 * Enum Engine.PlatformInterfaceBase.EPlatformInterfaceDataType
	 */
	enum class EPlatformInterfaceDataType : uint8_t
	{
		PIDT_None   = 0,
		PIDT_Int    = 1,
		PIDT_Float  = 2,
		PIDT_String = 3,
		PIDT_Object = 4,
		PIDT_Custom = 5,
		PIDT_MAX    = 6
	};

	/**
	 * Enum Engine.MicroTransactionBase.EMicroTransactionResult
	 */
	enum class EMicroTransactionResult : uint8_t
	{
		MTR_Succeeded          = 0,
		MTR_Failed             = 1,
		MTR_Canceled           = 2,
		MTR_RestoredFromServer = 3,
		MTR_MAX                = 4
	};

	/**
	 * Enum Engine.MicroTransactionBase.EMicroTransactionDelegate
	 */
	enum class EMicroTransactionDelegate : uint8_t
	{
		MTD_PurchaseQueryComplete = 0,
		MTD_PurchaseComplete      = 1,
		MTD_MAX                   = 2
	};

	/**
	 * Enum Engine.Rig.EConstraintTransform
	 */
	enum class EConstraintTransform : uint8_t
	{
		Absoluate = 0,
		Relative  = 1,
		MAX       = 2
	};

	/**
	 * Enum Engine.Rig.EControlConstraint
	 */
	enum class EControlConstraint : uint8_t
	{
		Orientation = 0,
		Translation = 1,
		Max         = 2,
		MAX         = 3
	};

	/**
	 * Enum Engine.DestructibleMesh.EImpactDamageOverride
	 */
	enum class EImpactDamageOverride : uint8_t
	{
		IDO_None = 0,
		IDO_On   = 1,
		IDO_Off  = 2,
		IDO_MAX  = 3
	};

	/**
	 * Enum Engine.SoundBase.EMaxConcurrentResolutionRule
	 */
	enum class EMaxConcurrentResolutionRule : uint8_t
	{
		PreventNew                 = 0,
		StopOldest                 = 1,
		StopFarthestThenPreventNew = 2,
		StopFarthestThenOldest     = 3,
		MAX                        = 4
	};

	/**
	 * Enum Engine.SoundGroups.ESoundGroup
	 */
	enum class ESoundGroup : uint8_t
	{
		SOUNDGROUP_Default          = 0,
		SOUNDGROUP_Effects          = 1,
		SOUNDGROUP_UI               = 2,
		SOUNDGROUP_Music            = 3,
		SOUNDGROUP_Voice            = 4,
		SOUNDGROUP_GameSoundGroup1  = 5,
		SOUNDGROUP_GameSoundGroup2  = 6,
		SOUNDGROUP_GameSoundGroup3  = 7,
		SOUNDGROUP_GameSoundGroup4  = 8,
		SOUNDGROUP_GameSoundGroup5  = 9,
		SOUNDGROUP_GameSoundGroup6  = 10,
		SOUNDGROUP_GameSoundGroup7  = 11,
		SOUNDGROUP_GameSoundGroup8  = 12,
		SOUNDGROUP_GameSoundGroup9  = 13,
		SOUNDGROUP_GameSoundGroup10 = 14,
		SOUNDGROUP_GameSoundGroup11 = 15,
		SOUNDGROUP_GameSoundGroup12 = 16,
		SOUNDGROUP_GameSoundGroup13 = 17,
		SOUNDGROUP_GameSoundGroup14 = 18,
		SOUNDGROUP_GameSoundGroup15 = 19,
		SOUNDGROUP_GameSoundGroup16 = 20,
		SOUNDGROUP_GameSoundGroup17 = 21,
		SOUNDGROUP_GameSoundGroup18 = 22,
		SOUNDGROUP_GameSoundGroup19 = 23,
		SOUNDGROUP_GameSoundGroup20 = 24,
		SOUNDGROUP_MAX              = 25
	};

	/**
	 * Enum Engine.SoundWave.EDecompressionType
	 */
	enum class EDecompressionType : uint8_t
	{
		DTYPE_Setup      = 0,
		DTYPE_Invalid    = 1,
		DTYPE_Preview    = 2,
		DTYPE_Native     = 3,
		DTYPE_RealTime   = 4,
		DTYPE_Procedural = 5,
		DTYPE_Xenon      = 6,
		DTYPE_Streaming  = 7,
		DTYPE_MAX        = 8
	};

	/**
	 * Enum Engine.SoundClass.EAudioOutputTarget
	 */
	enum class EAudioOutputTarget : uint8_t
	{
		Speaker                     = 0,
		Controller                  = 1,
		ControllerFallbackToSpeaker = 2,
		MAX                         = 3
	};

	/**
	 * Enum Engine.SoundNodeModulatorContinuous.ModulationParamMode
	 */
	enum class EModulationParamMode : uint8_t
	{
		MPM_Normal = 0,
		MPM_Abs    = 1,
		MPM_Direct = 2,
		MPM_MAX    = 3
	};

	/**
	 * Enum Engine.StaticMesh.EDistanceFieldTwoSidedOverride
	 */
	enum class EDistanceFieldTwoSidedOverride : uint8_t
	{
		DFTSO_NotOverriden  = 0,
		DFTSO_OverrideTrue  = 1,
		DFTSO_OverrideFalse = 2,
		DFTSO_Max           = 3
	};

	/**
	 * Enum Engine.StaticMesh.EOptimizationType
	 */
	enum class EOptimizationType : uint8_t
	{
		OT_NumOfTriangles = 0,
		OT_MaxDeviation   = 1,
		OT_MAX            = 2
	};

	/**
	 * Enum Engine.StaticMesh.EImportanceLevel
	 */
	enum class EImportanceLevel : uint8_t
	{
		IL_Off       = 0,
		IL_Lowest    = 1,
		IL_Low       = 2,
		IL_Normal    = 3,
		IL_High      = 4,
		IL_Highest   = 5,
		TEMP_BROKEN2 = 6,
		MAX          = 7
	};

	/**
	 * Enum Engine.StaticMesh.ENormalMode
	 */
	enum class ENormalMode : uint8_t
	{
		NM_PreserveSmoothingGroups  = 0,
		NM_RecalculateNormals       = 1,
		NM_RecalculateNormalsSmooth = 2,
		NM_RecalculateNormalsHard   = 3,
		TEMP_BROKEN                 = 4,
		MAX                         = 5
	};

	/**
	 * Enum Engine.LevelStreamingVolume.EStreamingVolumeUsage
	 */
	enum class EStreamingVolumeUsage : uint8_t
	{
		SVB_Loading                  = 0,
		SVB_LoadingAndVisibility     = 1,
		SVB_VisibilityBlockingOnLoad = 2,
		SVB_BlockingOnLoad           = 3,
		SVB_LoadingNotVisible        = 4,
		SVB_MAX                      = 5
	};

	/**
	 * Enum Engine.PostProcessVolume.EPostProcessVolumeType
	 */
	enum class EPostProcessVolumeType : uint8_t
	{
		Generic = 0,
		Cave    = 1,
		Water   = 2,
		MAX     = 3
	};

	/**
	 * Enum Engine.GameNetworkManager.EStandbyType
	 */
	enum class EStandbyType : uint8_t
	{
		STDBY_Rx      = 0,
		STDBY_Tx      = 1,
		STDBY_BadPing = 2,
		STDBY_MAX     = 3
	};

	/**
	 * Enum Engine.Landscape.ELandscapeSetupErrors
	 */
	enum class ELandscapeSetupErrors : uint8_t
	{
		LSE_None            = 0,
		LSE_NoLandscapeInfo = 1,
		LSE_CollsionXY      = 2,
		LSE_NoLayerInfo     = 3,
		LSE_MAX             = 4
	};

	/**
	 * Enum Engine.RecastNavMesh.ERecastPartitioning
	 */
	enum class ERecastPartitioning : uint8_t
	{
		Monotone       = 0,
		Watershed      = 1,
		ChunkyMonotone = 2,
		MAX            = 3
	};

	/**
	 * Enum Engine.NavigationTestingActor.ENavCostDisplay
	 */
	enum class ENavCostDisplay : uint8_t
	{
		TotalCost     = 0,
		HeuristicOnly = 1,
		RealCostOnly  = 2,
		MAX           = 3
	};

	/**
	 * Enum Engine.PoseableMeshComponent.EBoneSpaces
	 */
	enum class EBoneSpaces : uint8_t
	{
		WorldSpace     = 0,
		ComponentSpace = 1,
		MAX            = 2
	};

	/**
	 * Enum Engine.NiagaraComponent.ERenderModuleType
	 */
	enum class ERenderModuleType : uint8_t
	{
		Sprites = 0,
		Ribbon  = 1,
		MAX     = 2
	};

	/**
	 * Enum Engine.TextRenderComponent.EVerticalTextAligment
	 */
	enum class EVerticalTextAligment : uint8_t
	{
		EVRTA_TextTop    = 0,
		EVRTA_TextCenter = 1,
		EVRTA_TextBottom = 2,
		EVRTA_QuadTop    = 3,
		EVRTA_MAX        = 4
	};

	/**
	 * Enum Engine.TextRenderComponent.EHorizTextAligment
	 */
	enum class EHorizTextAligment : uint8_t
	{
		EHTA_Left   = 0,
		EHTA_Center = 1,
		EHTA_Right  = 2,
		EHTA_MAX    = 3
	};

	/**
	 * Enum Engine.ReflectionCaptureComponent.EReflectionDFAOOption
	 */
	enum class EReflectionDFAOOption : uint8_t
	{
		Default         = 0,
		UsedWithDFAO    = 1,
		NotUsedWithDFAO = 2,
		MAX             = 3
	};

	/**
	 * Enum Engine.SceneCaptureComponent2D.ESceneCaptureSource
	 */
	enum class ESceneCaptureSource : uint8_t
	{
		SCS_SceneColorHDR = 0,
		SCS_FinalColorLDR = 1,
		SCS_MAX           = 2
	};

	/**
	 * Enum Engine.SplineComponent.ESplineCoordinateSpace
	 */
	enum class ESplineCoordinateSpace : uint8_t
	{
		Local = 0,
		World = 1,
		MAX   = 2
	};

	/**
	 * Enum Engine.SplineComponent.ESplinePointType
	 */
	enum class ESplinePointType : uint8_t
	{
		Linear             = 0,
		Curve              = 1,
		Constant           = 2,
		CurveClamped       = 3,
		CurveCustomTangent = 4,
		MAX                = 5
	};

	/**
	 * Enum Engine.DataTableFunctionLibrary.EEvaluateCurveTableResult
	 */
	enum class EEvaluateCurveTableResult : uint8_t
	{
		RowFound    = 0,
		RowNotFound = 1,
		MAX         = 2
	};

	/**
	 * Enum Engine.GameplayStatics.ESuggestProjVelocityTraceOption
	 */
	enum class ESuggestProjVelocityTraceOption : uint8_t
	{
		DoNotTrace             = 0,
		TraceFullPath          = 1,
		OnlyTraceWhileAsceding = 2,
		MAX                    = 3
	};

	/**
	 * Enum Engine.KismetMathLibrary.EEasingFunc
	 */
	enum class EEasingFunc : uint8_t
	{
		Linear          = 0,
		Step            = 1,
		SinusoidalIn    = 2,
		SinusoidalOut   = 3,
		SinusoidalInOut = 4,
		EaseIn          = 5,
		EaseOut         = 6,
		EaseInOut       = 7,
		ExpoIn          = 8,
		ExpoOut         = 9,
		ExpoInOut       = 10,
		CircularIn      = 11,
		CircularOut     = 12,
		CircularInOut   = 13,
		MAX             = 14
	};

	/**
	 * Enum Engine.DistributionFloatParameterBase.DistributionParamMode
	 */
	enum class EDistributionParamMode : uint8_t
	{
		DPM_Normal = 0,
		DPM_Abs    = 1,
		DPM_Direct = 2,
		DPM_MAX    = 3
	};

	/**
	 * Enum Engine.EdGraphNode_Comment.ECommentBoxMode
	 */
	enum class ECommentBoxMode : uint8_t
	{
		GroupMovement   = 0,
		NoGroupMovement = 1,
		MAX             = 2
	};

	/**
	 * Enum Engine.FoliageType.FoliageVertexColorMask
	 */
	enum class EFoliageVertexColorMask : uint8_t
	{
		FOLIAGEVERTEXCOLORMASK_Disabled = 0,
		FOLIAGEVERTEXCOLORMASK_Red      = 1,
		FOLIAGEVERTEXCOLORMASK_Green    = 2,
		FOLIAGEVERTEXCOLORMASK_Blue     = 3,
		FOLIAGEVERTEXCOLORMASK_Alpha    = 4,
		FOLIAGEVERTEXCOLORMASK_MAX      = 5
	};

	/**
	 * Enum Engine.InterpTrackMoveAxis.EInterpMoveAxis
	 */
	enum class EInterpMoveAxis : uint8_t
	{
		AXIS_TranslationX = 0,
		AXIS_TranslationY = 1,
		AXIS_TranslationZ = 2,
		AXIS_RotationX    = 3,
		AXIS_RotationY    = 4,
		AXIS_RotationZ    = 5,
		AXIS_MAX          = 6
	};

	/**
	 * Enum Engine.MaterialExpressionClamp.EClampMode
	 */
	enum class EClampMode : uint8_t
	{
		CMODE_Clamp    = 0,
		CMODE_ClampMin = 1,
		CMODE_ClampMax = 2,
		CMODE_MAX      = 3
	};

	/**
	 * Enum Engine.MaterialExpressionDepthOfFieldFunction.EDepthOfFieldFunctionValue
	 */
	enum class EDepthOfFieldFunctionValue : uint8_t
	{
		TDOF_NearAndFarMask = 0,
		TDOF_NearMask       = 1,
		TDOF_FarMask        = 2,
		TDOF_MAX            = 3
	};

	/**
	 * Enum Engine.MaterialExpressionFunctionInput.EFunctionInputType
	 */
	enum class EFunctionInputType : uint8_t
	{
		FunctionInput_Scalar             = 0,
		FunctionInput_Vector2            = 1,
		FunctionInput_Vector3            = 2,
		FunctionInput_Vector4            = 3,
		FunctionInput_Texture2D          = 4,
		FunctionInput_TextureCube        = 5,
		FunctionInput_StaticBool         = 6,
		FunctionInput_MaterialAttributes = 7,
		FunctionInput_MAX                = 8
	};

	/**
	 * Enum Engine.MaterialExpressionLandscapeLayerCoords.ELandscapeCustomizedCoordType
	 */
	enum class ELandscapeCustomizedCoordType : uint8_t
	{
		LCCT_None        = 0,
		LCCT_CustomUV0   = 1,
		LCCT_CustomUV1   = 2,
		LCCT_CustomUV2   = 3,
		LCCT_WeightMapUV = 4,
		LCCT_MAX         = 5
	};

	/**
	 * Enum Engine.MaterialExpressionLandscapeLayerCoords.ETerrainCoordMappingType
	 */
	enum class ETerrainCoordMappingType : uint8_t
	{
		TCMT_Auto = 0,
		TCMT_XY   = 1,
		TCMT_XZ   = 2,
		TCMT_YZ   = 3,
		TCMT_MAX  = 4
	};

	/**
	 * Enum Engine.MaterialExpressionNoise.ENoiseFunction
	 */
	enum class ENoiseFunction : uint8_t
	{
		NOISEFUNCTION_Simplex      = 0,
		NOISEFUNCTION_Perlin       = 1,
		NOISEFUNCTION_Gradient     = 2,
		NOISEFUNCTION_FastGradient = 3,
		NOISEFUNCTION_MAX          = 4
	};

	/**
	 * Enum Engine.MaterialExpressionSceneColor.EMaterialSceneAttributeInputMode
	 */
	enum class EMaterialSceneAttributeInputMode : uint8_t
	{
		Coordinates    = 0,
		OffsetFraction = 1,
		MAX            = 2
	};

	/**
	 * Enum Engine.MaterialExpressionSceneTexture.ESceneTextureId
	 */
	enum class ESceneTextureId : uint8_t
	{
		PPI_SceneColor           = 0,
		PPI_SceneDepth           = 1,
		PPI_DiffuseColor         = 2,
		PPI_SpecularColor        = 3,
		PPI_SubsurfaceColor      = 4,
		PPI_BaseColor            = 5,
		PPI_Specular             = 6,
		PPI_Metallic             = 7,
		PPI_WorldNormal          = 8,
		PPI_SeparateTranslucency = 9,
		PPI_Opacity              = 10,
		PPI_Roughness            = 11,
		PPI_MaterialAO           = 12,
		PPI_CustomDepth          = 13,
		PPI_PostProcessInput0    = 14,
		PPI_PostProcessInput1    = 15,
		PPI_PostProcessInput2    = 16,
		PPI_PostProcessInput3    = 17,
		PPI_PostProcessInput4    = 18,
		PPI_PostProcessInput5    = 19,
		PPI_PostProcessInput6    = 20,
		PPI_DecalMask            = 21,
		PPI_ShadingModel         = 22,
		PPI_AmbientOcclusion     = 23,
		PPI_MAX                  = 24
	};

	/**
	 * Enum Engine.MaterialExpressionSpeedTree.ESpeedTreeLODType
	 */
	enum class ESpeedTreeLODType : uint8_t
	{
		STLOD_Pop    = 0,
		STLOD_Smooth = 1,
		STLOD_MAX    = 2
	};

	/**
	 * Enum Engine.MaterialExpressionSpeedTree.ESpeedTreeWindType
	 */
	enum class ESpeedTreeWindType : uint8_t
	{
		STW_None    = 0,
		STW_Fastest = 1,
		STW_Fast    = 2,
		STW_Better  = 3,
		STW_Best    = 4,
		STW_Palm    = 5,
		STW_MAX     = 6
	};

	/**
	 * Enum Engine.MaterialExpressionSpeedTree.ESpeedTreeGeometryType
	 */
	enum class ESpeedTreeGeometryType : uint8_t
	{
		STG_Branch     = 0,
		STG_Frond      = 1,
		STG_Leaf       = 2,
		STG_FacingLeaf = 3,
		STG_Billboard  = 4,
		STG_MAX        = 5
	};

	/**
	 * Enum Engine.MaterialExpressionTextureSample.ETextureMipValueMode
	 */
	enum class ETextureMipValueMode : uint8_t
	{
		TMVM_None       = 0,
		TMVM_MipLevel   = 1,
		TMVM_MipBias    = 2,
		TMVM_Derivative = 3,
		TMVM_MAX        = 4
	};

	/**
	 * Enum Engine.MaterialExpressionAntialiasedTextureMask.ETextureColorChannel
	 */
	enum class ETextureColorChannel : uint8_t
	{
		TCC_Red   = 0,
		TCC_Green = 1,
		TCC_Blue  = 2,
		TCC_Alpha = 3,
		TCC_MAX   = 4
	};

	/**
	 * Enum Engine.MaterialExpressionTransform.EMaterialVectorCoordTransform
	 */
	enum class EMaterialVectorCoordTransform : uint8_t
	{
		TRANSFORM_World   = 0,
		TRANSFORM_View    = 1,
		TRANSFORM_Local   = 2,
		TRANSFORM_Tangent = 3,
		TRANSFORM_MAX     = 4
	};

	/**
	 * Enum Engine.MaterialExpressionTransform.EMaterialVectorCoordTransformSource
	 */
	enum class EMaterialVectorCoordTransformSource : uint8_t
	{
		TRANSFORMSOURCE_World   = 0,
		TRANSFORMSOURCE_Local   = 1,
		TRANSFORMSOURCE_Tangent = 2,
		TRANSFORMSOURCE_View    = 3,
		TRANSFORMSOURCE_RefPose = 4,
		TRANSFORMSOURCE_MAX     = 5
	};

	/**
	 * Enum Engine.MaterialExpressionTransformPosition.EMaterialPositionTransformSource
	 */
	enum class EMaterialPositionTransformSource : uint8_t
	{
		TRANSFORMPOSSOURCE_Local = 0,
		TRANSFORMPOSSOURCE_World = 1,
		TRANSFORMPOSSOURCE_MAX   = 2
	};

	/**
	 * Enum Engine.MaterialExpressionWorldPosition.EWorldPositionIncludedOffsets
	 */
	enum class EWorldPositionIncludedOffsets : uint8_t
	{
		WPT_Default                 = 0,
		WPT_ExcludeAllShaderOffsets = 1,
		WPT_CameraRelative          = 2,
		WPT_CameraRelativeNoOffsets = 3,
		WPT_MAX                     = 4
	};

	/**
	 * Enum Engine.ParticleModuleAttractorParticle.EAttractorParticleSelectionMethod
	 */
	enum class EAttractorParticleSelectionMethod : uint8_t
	{
		EAPSM_Random     = 0,
		EAPSM_Sequential = 1,
		EAPSM_MAX        = 2
	};

	/**
	 * Enum Engine.ParticleModuleCameraOffset.EParticleCameraOffsetUpdateMethod
	 */
	enum class EParticleCameraOffsetUpdateMethod : uint8_t
	{
		EPCOUM_DirectSet = 0,
		EPCOUM_Additive  = 1,
		EPCOUM_Scalar    = 2,
		EPCOUM_MAX       = 3
	};

	/**
	 * Enum Engine.ParticleModuleCollisionBase.EParticleCollisionComplete
	 */
	enum class EParticleCollisionComplete : uint8_t
	{
		EPCC_Kill              = 0,
		EPCC_Freeze            = 1,
		EPCC_HaltCollisions    = 2,
		EPCC_FreezeTranslation = 3,
		EPCC_FreezeRotation    = 4,
		EPCC_FreezeMovement    = 5,
		EPCC_MAX               = 6
	};

	/**
	 * Enum Engine.ParticleModuleCollisionGPU.EParticleCollisionResponse
	 */
	enum class EParticleCollisionResponse : uint8_t
	{
		Bounce = 0,
		Stop   = 1,
		Kill   = 2,
		MAX    = 3
	};

	/**
	 * Enum Engine.ParticleModuleLocationEmitter.ELocationEmitterSelectionMethod
	 */
	enum class ELocationEmitterSelectionMethod : uint8_t
	{
		ELESM_Random     = 0,
		ELESM_Sequential = 1,
		ELESM_MAX        = 2
	};

	/**
	 * Enum Engine.ParticleModuleLocationPrimitiveCylinder.CylinderHeightAxis
	 */
	enum class ECylinderHeightAxis : uint8_t
	{
		PMLPC_HEIGHTAXIS_X   = 0,
		PMLPC_HEIGHTAXIS_Y   = 1,
		PMLPC_HEIGHTAXIS_Z   = 2,
		PMLPC_HEIGHTAXIS_MAX = 3
	};

	/**
	 * Enum Engine.ParticleModuleLocationSkelVertSurface.ELocationSkelVertSurfaceSource
	 */
	enum class ELocationSkelVertSurfaceSource : uint8_t
	{
		VERTSURFACESOURCE_Vert    = 0,
		VERTSURFACESOURCE_Surface = 1,
		VERTSURFACESOURCE_MAX     = 2
	};

	/**
	 * Enum Engine.ParticleModuleRequired.EEmitterNormalsMode
	 */
	enum class EEmitterNormalsMode : uint8_t
	{
		ENM_CameraFacing = 0,
		ENM_Spherical    = 1,
		ENM_Cylindrical  = 2,
		ENM_MAX          = 3
	};

	/**
	 * Enum Engine.ParticleModuleRequired.EParticleSortMode
	 */
	enum class EParticleSortMode : uint8_t
	{
		PSORTMODE_None            = 0,
		PSORTMODE_ViewProjDepth   = 1,
		PSORTMODE_DistanceToView  = 2,
		PSORTMODE_Age_OldestFirst = 3,
		PSORTMODE_Age_NewestFirst = 4,
		PSORTMODE_MAX             = 5
	};

	/**
	 * Enum Engine.ParticleModuleTrailSource.ETrail2SourceMethod
	 */
	enum class ETrail2SourceMethod : uint8_t
	{
		PET2SRCM_Default  = 0,
		PET2SRCM_Particle = 1,
		PET2SRCM_Actor    = 2,
		PET2SRCM_MAX      = 3
	};

	/**
	 * Enum Engine.ParticleModuleTypeDataMesh.EMeshCameraFacingOptions
	 */
	enum class EMeshCameraFacingOptions : uint8_t
	{
		XAxisFacing_NoUp                    = 0,
		XAxisFacing_ZUp                     = 1,
		XAxisFacing_NegativeZUp             = 2,
		XAxisFacing_YUp                     = 3,
		XAxisFacing_NegativeYUp             = 4,
		LockedAxis_ZAxisFacing              = 5,
		LockedAxis_NegativeZAxisFacing      = 6,
		LockedAxis_YAxisFacing              = 7,
		LockedAxis_NegativeYAxisFacing      = 8,
		VelocityAligned_ZAxisFacing         = 9,
		VelocityAligned_NegativeZAxisFacing = 10,
		VelocityAligned_YAxisFacing         = 11,
		VelocityAligned_NegativeYAxisFacing = 12,
		MAX                                 = 13
	};

	/**
	 * Enum Engine.ParticleModuleTypeDataMesh.EMeshCameraFacingUpAxis
	 */
	enum class EMeshCameraFacingUpAxis : uint8_t
	{
		CameraFacing_NoneUP      = 0,
		CameraFacing_ZUp         = 1,
		CameraFacing_NegativeZUp = 2,
		CameraFacing_YUp         = 3,
		CameraFacing_NegativeYUp = 4,
		CameraFacing_MAX         = 5
	};

	/**
	 * Enum Engine.ParticleModuleTypeDataMesh.EMeshScreenAlignment
	 */
	enum class EMeshScreenAlignment : uint8_t
	{
		PSMA_MeshFaceCameraWithRoll       = 0,
		PSMA_MeshFaceCameraWithSpin       = 1,
		PSMA_MeshFaceCameraWithLockedAxis = 2,
		PSMA_MAX                          = 3
	};

	/**
	 * Enum Engine.ParticleModuleTypeDataRibbon.ETrailsRenderAxisOption
	 */
	enum class ETrailsRenderAxisOption : uint8_t
	{
		Trails_CameraUp = 0,
		Trails_SourceUp = 1,
		Trails_WorldUp  = 2,
		Trails_MAX      = 3
	};

	/**
	 * Enum Engine.CloudStorageBase.ECloudStorageDelegate
	 */
	enum class ECloudStorageDelegate : uint8_t
	{
		CSD_KeyValueReadComplete     = 0,
		CSD_KeyValueWriteComplete    = 1,
		CSD_ValueChanged             = 2,
		CSD_DocumentQueryComplete    = 3,
		CSD_DocumentReadComplete     = 4,
		CSD_DocumentWriteComplete    = 5,
		CSD_DocumentConflictDetected = 6,
		CSD_MAX                      = 7
	};

	/**
	 * Enum Engine.InGameAdManager.EAdManagerDelegate
	 */
	enum class EAdManagerDelegate : uint8_t
	{
		AMD_ClickedBanner = 0,
		AMD_UserClosedAd  = 1,
		AMD_MAX           = 2
	};

	/**
	 * Enum Engine.TwitterIntegrationBase.ETwitterIntegrationDelegate
	 */
	enum class ETwitterIntegrationDelegate : uint8_t
	{
		TID_AuthorizeComplete = 0,
		TID_TweetUIComplete   = 1,
		TID_RequestComplete   = 2,
		TID_MAX               = 3
	};

	/**
	 * Enum Engine.TwitterIntegrationBase.ETwitterRequestMethod
	 */
	enum class ETwitterRequestMethod : uint8_t
	{
		TRM_Get    = 0,
		TRM_Post   = 1,
		TRM_Delete = 2,
		TRM_MAX    = 3
	};

	/**
	 * Enum Engine.RendererSettings.EUIScalingRule
	 */
	enum class EUIScalingRule : uint8_t
	{
		ShortestSide  = 0,
		LongestSide   = 1,
		Horizontal    = 2,
		Vertical      = 3,
		SmallestCurve = 4,
		MAX           = 5
	};

	/**
	 * Enum Engine.RendererSettings.EAntiAliasingMethodUI
	 */
	enum class EAntiAliasingMethodUI : uint8_t
	{
		AAM_None       = 0,
		AAM_FXAA       = 1,
		AAM_TemporalAA = 2,
		AAM_MAX        = 3
	};

	/**
	 * Enum Engine.RendererSettings.EEarlyZPass
	 */
	enum class EEarlyZPass : uint8_t
	{
		None            = 0,
		OpaqueOnly      = 1,
		OpaqueAndMasked = 2,
		Auto            = 3,
		MAX             = 4
	};

	/**
	 * Enum Engine.RendererSettings.ECustomDepth
	 */
	enum class ECustomDepth : uint8_t
	{
		Disabled        = 0,
		Enabled         = 1,
		EnabledOnDemand = 2,
		MAX             = 3
	};

	/**
	 * Enum Engine.RendererSettings.ECompositingSampleCount
	 */
	enum class ECompositingSampleCount : uint8_t
	{
		UnusedSpacer   = 0,
		One            = 1,
		Two            = 2,
		UnusedSpacer01 = 3,
		Four           = 4,
		UnusedSpacer02 = 5,
		UnusedSpacer03 = 6,
		UnusedSpacer04 = 7,
		Eight          = 8,
		MAX            = 9
	};

	/**
	 * Enum Engine.RendererSettings.EClearSceneOptions
	 */
	enum class EClearSceneOptions : uint8_t
	{
		NoClear       = 0,
		HardwareClear = 1,
		QuadAtMaxZ    = 2,
		MAX           = 3
	};

	/**
	 * Enum Engine.ReporterBase.EReporterLineStyle
	 */
	enum class EReporterLineStyle : uint8_t
	{
		Line = 0,
		Dash = 1,
		MAX  = 2
	};

	/**
	 * Enum Engine.ReporterGraph.ELegendPosition
	 */
	enum class ELegendPosition : uint8_t
	{
		Outside = 0,
		Inside  = 1,
		MAX     = 2
	};

	/**
	 * Enum Engine.ReporterGraph.EGraphDataStyle
	 */
	enum class EGraphDataStyle : uint8_t
	{
		Lines  = 0,
		Filled = 1,
		MAX    = 2
	};

	/**
	 * Enum Engine.ReporterGraph.EGraphAxisStyle
	 */
	enum class EGraphAxisStyle : uint8_t
	{
		Lines   = 0,
		Notches = 1,
		Grid    = 2,
		MAX     = 3
	};

	/**
	 * Enum Engine.UserDefinedStruct.EUserDefinedStructureStatus
	 */
	enum class EUserDefinedStructureStatus : uint8_t
	{
		UDSS_UpToDate  = 0,
		UDSS_Dirty     = 1,
		UDSS_Error     = 2,
		UDSS_Duplicate = 3,
		UDSS_MAX       = 4
	};

	/**
	 * Enum Engine.VectorFieldAnimated.EVectorFieldConstructionOp
	 */
	enum class EVectorFieldConstructionOp : uint8_t
	{
		VFCO_Extrude = 0,
		VFCO_Revolve = 1,
		VFCO_MAX     = 2
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct Engine.EngineBaseTypes.TickFunction
	 * Size -> 0x0048
	 */
	struct FTickFunction
	{
	public:
		unsigned char                                              UnknownData_7ZJC[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		ETickingGroup                                              TickGroup;                                               // 0x0008(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_6DQ6[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bTickEvenWhenPaused : 1;                                 // 0x000C(0x0001) BIT_FIELD NoDestructor
		bool                                                       bCanEverTick : 1;                                        // 0x000C(0x0001) BIT_FIELD NoDestructor
		bool                                                       bStartWithTickEnabled : 1;                               // 0x000C(0x0001) BIT_FIELD NoDestructor
		bool                                                       bAllowTickOnDedicatedServer : 1;                         // 0x000C(0x0001) BIT_FIELD NoDestructor
		unsigned char                                              UnknownData_6FFD[0x3B];                                  // 0x000D(0x003B) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.EngineBaseTypes.ActorTickFunction
	 * Size -> 0x0010 (FullSize[0x0058] - InheritedSize[0x0048])
	 */
	struct FActorTickFunction : public FTickFunction
	{
	public:
		unsigned char                                              UnknownData_2297[0x8];                                   // 0x0048(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bSavedActorTickState : 1;                                // 0x0050(0x0001) BIT_FIELD NoDestructor
		bool                                                       bSavedActorTickStateValue : 1;                           // 0x0050(0x0001) BIT_FIELD NoDestructor
		unsigned char                                              UnknownData_FW0G[0x7];                                   // 0x0051(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.Vector_NetQuantizeLow
	 * Size -> 0x0000 (FullSize[0x000C] - InheritedSize[0x000C])
	 */
	struct FVector_NetQuantizeLow : public FVector
	{	};

	/**
	 * ScriptStruct Engine.Vector_NetQuantize
	 * Size -> 0x0000 (FullSize[0x000C] - InheritedSize[0x000C])
	 */
	struct FVector_NetQuantize : public FVector
	{	};

	/**
	 * ScriptStruct Engine.EngineTypes.RepMovement
	 * Size -> 0x0034
	 */
	struct FRepMovement
	{
	public:
		struct FVector_NetQuantizeLow                              LinearVelocity;                                          // 0x0000(0x000C)
		struct FVector_NetQuantize                                 AngularVelocity;                                         // 0x000C(0x000C)
		struct FVector_NetQuantize                                 Location;                                                // 0x0018(0x000C)
		struct FRotator                                            Rotation;                                                // 0x0024(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bSimulatedPhysicSleep : 1;                               // 0x0030(0x0001) BIT_FIELD NoDestructor
		bool                                                       bRepPhysics : 1;                                         // 0x0030(0x0001) BIT_FIELD NoDestructor
		bool                                                       bRepCompressedRotation : 1;                              // 0x0030(0x0001) BIT_FIELD NoDestructor
		bool                                                       bRepCompressedRotationPitch : 1;                         // 0x0030(0x0001) BIT_FIELD NoDestructor
		bool                                                       bRepLinearVelocityHQ : 1;                                // 0x0030(0x0001) BIT_FIELD NoDestructor
		unsigned char                                              UnknownData_REXK[0x3];                                   // 0x0031(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.Vector_NetQuantize100
	 * Size -> 0x0000 (FullSize[0x000C] - InheritedSize[0x000C])
	 */
	struct FVector_NetQuantize100 : public FVector
	{	};

	/**
	 * ScriptStruct Engine.EngineTypes.RepAttachment
	 * Size -> 0x0040
	 */
	struct FRepAttachment
	{
	public:
		class AActor*                                              AttachParent;                                            // 0x0000(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector_NetQuantize100                              LocationOffset;                                          // 0x0008(0x000C)
		struct FVector_NetQuantize100                              RelativeScale3D;                                         // 0x0014(0x000C)
		struct FRotator                                            RotationOffset;                                          // 0x0020(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor
		class FName                                                AttachSocket;                                            // 0x002C(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_MJ50[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USceneComponent*                                     AttachComponent;                                         // 0x0038(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct Engine.Actor.BPNetExecParams
	 * Size -> 0x0040
	 */
	struct FBPNetExecParams
	{
	public:
		int32_t                                                    IntParam1;                                               // 0x0000(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		int32_t                                                    IntParam2;                                               // 0x0004(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		int32_t                                                    IntParam3;                                               // 0x0008(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      FloatParam1;                                             // 0x000C(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      FloatParam2;                                             // 0x0010(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      FloatParam3;                                             // 0x0014(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UObject*                                             ObjParam1;                                               // 0x0018(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UObject*                                             ObjParam2;                                               // 0x0020(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UObject*                                             ObjParam3;                                               // 0x0028(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class FString                                              StringParam1;                                            // 0x0030(0x0010) BlueprintVisible, ZeroConstructor
	};

	/**
	 * ScriptStruct Engine.Vector_NetQuantizeNormal
	 * Size -> 0x0000 (FullSize[0x000C] - InheritedSize[0x000C])
	 */
	struct FVector_NetQuantizeNormal : public FVector
	{	};

	/**
	 * ScriptStruct Engine.EngineTypes.HitResult
	 * Size -> 0x0088
	 */
	struct FHitResult
	{
	public:
		bool                                                       bBlockingHit : 1;                                        // 0x0000(0x0001) BIT_FIELD NoDestructor
		bool                                                       bStartPenetrating : 1;                                   // 0x0000(0x0001) BIT_FIELD NoDestructor
		unsigned char                                              UnknownData_OLR1[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Time;                                                    // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector_NetQuantize                                 Location;                                                // 0x0008(0x000C)
		struct FVector_NetQuantizeNormal                           Normal;                                                  // 0x0014(0x000C)
		struct FVector_NetQuantize                                 ImpactPoint;                                             // 0x0020(0x000C)
		struct FVector_NetQuantizeNormal                           ImpactNormal;                                            // 0x002C(0x000C)
		struct FVector_NetQuantize                                 TraceStart;                                              // 0x0038(0x000C)
		struct FVector_NetQuantize                                 TraceEnd;                                                // 0x0044(0x000C)
		float                                                      PenetrationDepth;                                        // 0x0050(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		int32_t                                                    Item;                                                    // 0x0054(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		TWeakObjectPtr<class UPhysicalMaterial>                    PhysMaterial;                                            // 0x0058(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor
		TWeakObjectPtr<class AActor>                               Actor;                                                   // 0x0060(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor
		TWeakObjectPtr<class UPrimitiveComponent>                  Component;                                               // 0x0068(0x0008) ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor
		unsigned char                                              UnknownData_YZ0Y[0x8];                                   // 0x0070(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                BoneName;                                                // 0x0078(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor
		int32_t                                                    FaceIndex;                                               // 0x0080(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_73WS[0x4];                                   // 0x0084(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.Actor.MultiUseEntry
	 * Size -> 0x0048
	 */
	struct FMultiUseEntry
	{
	public:
		class UActorComponent*                                     ForComponent;                                            // 0x0000(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor
		class FString                                              UseString;                                               // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		int32_t                                                    UseIndex;                                                // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    Priority;                                                // 0x001C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bHideFromUI : 1;                                         // 0x0020(0x0001) BIT_FIELD Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		bool                                                       bDisableUse : 1;                                         // 0x0020(0x0001) BIT_FIELD Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		bool                                                       bHideActivationKey : 1;                                  // 0x0020(0x0001) BIT_FIELD Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		bool                                                       bRepeatMultiUse : 1;                                     // 0x0020(0x0001) BIT_FIELD Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		bool                                                       bDisplayOnInventoryUI : 1;                               // 0x0020(0x0001) BIT_FIELD Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		bool                                                       bDisplayOnInventoryUISecondary : 1;                      // 0x0020(0x0001) BIT_FIELD Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		bool                                                       bHarvestable : 1;                                        // 0x0020(0x0001) BIT_FIELD Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		bool                                                       bIsSecondaryUse : 1;                                     // 0x0020(0x0001) BIT_FIELD Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		bool                                                       bPersistWheelOnActivation : 1;                           // 0x0021(0x0001) BIT_FIELD Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		bool                                                       bOverrideUseTextColor : 1;                               // 0x0021(0x0001) BIT_FIELD Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		bool                                                       bDisplayOnInventoryUITertiary : 1;                       // 0x0021(0x0001) BIT_FIELD Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		bool                                                       bClientSideOnly : 1;                                     // 0x0021(0x0001) BIT_FIELD Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		bool                                                       bPersistWheelRequiresDirectActivation : 1;               // 0x0021(0x0001) BIT_FIELD Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		bool                                                       bDrawTooltip : 1;                                        // 0x0021(0x0001) BIT_FIELD Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		unsigned char                                              UnknownData_6Q9I[0x2];                                   // 0x0022(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    WheelCategory;                                           // 0x0024(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FColor                                              DisableUseColor;                                         // 0x0028(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FColor                                              UseTextColor;                                            // 0x002C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      EntryActivationTimer;                                    // 0x0030(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      DefaultEntryActivationTimer;                             // 0x0034(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class USoundBase*                                          ActivationSound;                                         // 0x0038(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    UseInventoryButtonStyleOverrideIndex;                    // 0x0040(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    AdditionalButtonsIndex;                                  // 0x0044(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct Engine.Actor.BPMapCheckEntry
	 * Size -> 0x0028
	 */
	struct FBPMapCheckEntry
	{
	public:
		EBPMapCheckSeverity                                        Severity;                                                // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_JEO9[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Message;                                                 // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor
		TArray<class AActor*>                                      ActorLinks;                                              // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor
	};

	/**
	 * ScriptStruct Engine.AnimationAsset.AnimTickRecord
	 * Size -> 0x0040
	 */
	struct FAnimTickRecord
	{
	public:
		class UAnimationAsset*                                     SourceAsset;                                             // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_KFH2[0x38];                                  // 0x0008(0x0038) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.AnimationAsset.AnimGroupInstance
	 * Size -> 0x0018
	 */
	struct FAnimGroupInstance
	{
	public:
		unsigned char                                              UnknownData_WBLP[0x18];                                  // 0x0000(0x0018) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.EngineBaseTypes.ActorComponentTickFunction
	 * Size -> 0x0010 (FullSize[0x0058] - InheritedSize[0x0048])
	 */
	struct FActorComponentTickFunction : public FTickFunction
	{
	public:
		unsigned char                                              UnknownData_8FTR[0x8];                                   // 0x0048(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bSavedComponentTickState : 1;                            // 0x0050(0x0001) BIT_FIELD NoDestructor
		bool                                                       bSavedComponentTickStateValue : 1;                       // 0x0050(0x0001) BIT_FIELD NoDestructor
		unsigned char                                              UnknownData_G6PG[0x7];                                   // 0x0051(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.EngineTypes.CollisionResponseContainer
	 * Size -> 0x0020
	 */
	struct FCollisionResponseContainer
	{
	public:
		ECollisionResponse                                         WorldStatic;                                             // 0x0000(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor
		ECollisionResponse                                         WorldDynamic;                                            // 0x0001(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor
		ECollisionResponse                                         Visibility;                                              // 0x0002(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor
		ECollisionResponse                                         PhysicsBody;                                             // 0x0003(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor
		ECollisionResponse                                         Destructible;                                            // 0x0004(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor
		ECollisionResponse                                         GameTraceChannel1;                                       // 0x0005(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor
		ECollisionResponse                                         GameTraceChannel2;                                       // 0x0006(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor
		ECollisionResponse                                         GameTraceChannel3;                                       // 0x0007(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor
		ECollisionResponse                                         GameTraceChannel4;                                       // 0x0008(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor
		ECollisionResponse                                         GameTraceChannel5;                                       // 0x0009(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor
		ECollisionResponse                                         GameTraceChannel6;                                       // 0x000A(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor
		ECollisionResponse                                         GameTraceChannel7;                                       // 0x000B(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor
		ECollisionResponse                                         GameTraceChannel8;                                       // 0x000C(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor
		ECollisionResponse                                         GameTraceChannel9;                                       // 0x000D(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor
		ECollisionResponse                                         GameTraceChannel10;                                      // 0x000E(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor
		ECollisionResponse                                         GameTraceChannel11;                                      // 0x000F(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor
		ECollisionResponse                                         GameTraceChannel12;                                      // 0x0010(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor
		ECollisionResponse                                         GameTraceChannel13;                                      // 0x0011(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor
		ECollisionResponse                                         GameTraceChannel14;                                      // 0x0012(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor
		ECollisionResponse                                         GameTraceChannel15;                                      // 0x0013(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor
		ECollisionResponse                                         GameTraceChannel16;                                      // 0x0014(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor
		ECollisionResponse                                         GameTraceChannel17;                                      // 0x0015(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor
		ECollisionResponse                                         GameTraceChannel18;                                      // 0x0016(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor
		ECollisionResponse                                         GameTraceChannel19;                                      // 0x0017(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor
		ECollisionResponse                                         GameTraceChannel20;                                      // 0x0018(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor
		ECollisionResponse                                         GameTraceChannel21;                                      // 0x0019(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor
		ECollisionResponse                                         GameTraceChannel22;                                      // 0x001A(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor
		ECollisionResponse                                         GameTraceChannel23;                                      // 0x001B(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor
		ECollisionResponse                                         GameTraceChannel24;                                      // 0x001C(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor
		ECollisionResponse                                         GameTraceChannel25;                                      // 0x001D(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor
		ECollisionResponse                                         GameTraceChannel26;                                      // 0x001E(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor
		ECollisionResponse                                         GameTraceChannel27;                                      // 0x001F(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct Engine.EngineTypes.ResponseChannel
	 * Size -> 0x000C
	 */
	struct FResponseChannel
	{
	public:
		class FName                                                Channel;                                                 // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		ECollisionResponse                                         Response;                                                // 0x0008(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_74ZE[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.CollisionResponse
	 * Size -> 0x0030
	 */
	struct FCollisionResponse
	{
	public:
		struct FCollisionResponseContainer                         ResponseToChannels;                                      // 0x0000(0x0020) Transient
		TArray<struct FResponseChannel>                            ResponseArray;                                           // 0x0020(0x0010) ZeroConstructor
	};

	/**
	 * ScriptStruct Engine.EngineTypes.WalkableSlopeOverride
	 * Size -> 0x0008
	 */
	struct FWalkableSlopeOverride
	{
	public:
		EWalkableSlopeBehavior                                     WalkableSlopeBehavior;                                   // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_HP1P[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      WalkableSlopeAngle;                                      // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct Engine.BodyInstance
	 * Size -> 0x0160
	 */
	struct FBodyInstance
	{
	public:
		unsigned char                                              UnknownData_637W[0x4];                                   // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             Scale3D;                                                 // 0x0004(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_VU1O[0x8];                                   // 0x0010(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bEnableCollision : 1;                                    // 0x0018(0x0001) BIT_FIELD Deprecated, NoDestructor
		unsigned char                                              UnknownData_JMTF[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FCollisionResponseContainer                         ResponseToChannels;                                      // 0x001C(0x0020) Deprecated
		unsigned char                                              UnknownData_THGD[0x1C];                                  // 0x003C(0x001C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                CollisionProfileName;                                    // 0x0058(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		ECollisionEnabled                                          CollisionEnabled;                                        // 0x0060(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		ECollisionChannel                                          ObjectType;                                              // 0x0061(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_3RXF[0x6];                                   // 0x0062(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FCollisionResponse                                  CollisionResponses;                                      // 0x0068(0x0030) Edit
		bool                                                       bUseCCD : 1;                                             // 0x0098(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay
		bool                                                       bNotifyRigidBodyCollision : 1;                           // 0x0098(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor
		bool                                                       bSimulatePhysics : 1;                                    // 0x0098(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor
		bool                                                       bAutoWeld : 1;                                           // 0x0098(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor
		bool                                                       UnknownData_MS9P : 1;                                    // 0x0098(0x0001) BIT_FIELD (PADDING)
		bool                                                       bStartAwake : 1;                                         // 0x0098(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor
		bool                                                       bEnableGravity : 1;                                      // 0x0098(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay
		bool                                                       bUseSpecificBodyArmorType : 1;                           // 0x0098(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor
		bool                                                       bIsShieldHolder : 1;                                     // 0x0099(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor
		bool                                                       bUseAsyncScene : 1;                                      // 0x0099(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, AdvancedDisplay
		bool                                                       bUpdateMassWhenScaleChanges : 1;                         // 0x0099(0x0001) BIT_FIELD NoDestructor
		unsigned char                                              UnknownData_H4XG[0x2];                                   // 0x009A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		ELockedAxis                                                LockedAxisMode;                                          // 0x009C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_B25G[0x3];                                   // 0x009D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             CustomLockedAxis;                                        // 0x00A0(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_S66T[0x14];                                  // 0x00AC(0x0014) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bOverrideWalkableSlopeOnInstance : 1;                    // 0x00C0(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, Protected
		unsigned char                                              UnknownData_VG3J[0x3];                                   // 0x00C1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FWalkableSlopeOverride                              WalkableSlopeOverride;                                   // 0x00C4(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, AdvancedDisplay, Protected
		bool                                                       bOverrideMaxDepenetrationVelocity : 1;                   // 0x00CC(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, Protected
		unsigned char                                              UnknownData_M8RB[0x3];                                   // 0x00CD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MaxDepenetrationVelocity;                                // 0x00D0(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected
		unsigned char                                              UnknownData_N1GL[0x4];                                   // 0x00D4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPhysicalMaterial*                                   PhysMaterialOverride;                                    // 0x00D8(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected
		struct FVector                                             COMNudge;                                                // 0x00E0(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay
		ESleepFamily                                               SleepFamily;                                             // 0x00EC(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay
		EPrimalEquipmentType                                       BodyArmorType;                                           // 0x00ED(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_YG7B[0x2];                                   // 0x00EE(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MassScale;                                               // 0x00F0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay
		float                                                      AngularDamping;                                          // 0x00F4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay
		float                                                      LinearDamping;                                           // 0x00F8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay
		float                                                      MaxAngularVelocity;                                      // 0x00FC(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay
		float                                                      PhysicsBlendWeight;                                      // 0x0100(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		int32_t                                                    PositionSolverIterationCount;                            // 0x0104(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay
		int32_t                                                    VelocitySolverIterationCount;                            // 0x0108(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay
		unsigned char                                              UnknownData_KGQL[0x54];                                  // 0x010C(0x0054) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.EngineBaseTypes.PrimitiveComponentPostPhysicsTickFunction
	 * Size -> 0x0008 (FullSize[0x0050] - InheritedSize[0x0048])
	 */
	struct FPrimitiveComponentPostPhysicsTickFunction : public FTickFunction
	{
	public:
		unsigned char                                              UnknownData_HCQX[0x8];                                   // 0x0048(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.PrimitiveComponent.CollisionResponseSet
	 * Size -> 0x0020
	 */
	struct FCollisionResponseSet
	{
	public:
		TArray<ECollisionChannel>                                  Channels;                                                // 0x0000(0x0010) BlueprintVisible, ZeroConstructor
		TArray<ECollisionResponse>                                 Responses;                                               // 0x0010(0x0010) BlueprintVisible, ZeroConstructor
	};

	/**
	 * ScriptStruct Engine.SceneComponent.OverlapInfo
	 * Size -> 0x0098
	 */
	struct FOverlapInfo
	{
	public:
		unsigned char                                              UnknownData_SPO0[0x98];                                  // 0x0000(0x0098) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.SkinnedMeshComponent.SkelMeshComponentLODInfo
	 * Size -> 0x0010
	 */
	struct FSkelMeshComponentLODInfo
	{
	public:
		TArray<bool>                                               HiddenMaterials;                                         // 0x0000(0x0010) ZeroConstructor
	};

	/**
	 * ScriptStruct Engine.EngineTypes.AnimUpdateRateParameters
	 * Size -> 0x000C
	 */
	struct FAnimUpdateRateParameters
	{
	public:
		int32_t                                                    UpdateRate;                                              // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		int32_t                                                    EvaluationRate;                                          // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bInterpolateSkippedFrames;                               // 0x0008(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bSkipUpdate;                                             // 0x0009(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bSkipEvaluation;                                         // 0x000A(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_UUZY[0x1];                                   // 0x000B(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.SkinnedMeshComponent.ActiveVertexAnim
	 * Size -> 0x0010
	 */
	struct FActiveVertexAnim
	{
	public:
		class UVertexAnimBase*                                     VertAnim;                                                // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      Weight;                                                  // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      Time;                                                    // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct Engine.CurveBase.KeyHandleMap
	 * Size -> 0x0050
	 */
	struct FKeyHandleMap
	{
	public:
		unsigned char                                              UnknownData_PWGK[0x50];                                  // 0x0000(0x0050) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.CurveBase.IndexedCurve
	 * Size -> 0x0058
	 */
	struct FIndexedCurve
	{
	public:
		unsigned char                                              UnknownData_J20V[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FKeyHandleMap                                       KeyHandlesToIndices;                                     // 0x0008(0x0050) Transient, Protected
	};

	/**
	 * ScriptStruct Engine.CurveBase.RichCurveKey
	 * Size -> 0x001C
	 */
	struct FRichCurveKey
	{
	public:
		ERichCurveInterpMode                                       InterpMode;                                              // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		ERichCurveTangentMode                                      TangentMode;                                             // 0x0001(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		ERichCurveTangentWeightMode                                TangentWeightMode;                                       // 0x0002(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_RX43[0x1];                                   // 0x0003(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Time;                                                    // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      Value;                                                   // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      ArriveTangent;                                           // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      ArriveTangentWeight;                                     // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      LeaveTangent;                                            // 0x0014(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      LeaveTangentWeight;                                      // 0x0018(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct Engine.CurveBase.RichCurve
	 * Size -> 0x0010 (FullSize[0x0068] - InheritedSize[0x0058])
	 */
	struct FRichCurve : public FIndexedCurve
	{
	public:
		TArray<struct FRichCurveKey>                               Keys;                                                    // 0x0058(0x0010) ZeroConstructor
	};

	/**
	 * ScriptStruct Engine.CurveFloat.RuntimeFloatCurve
	 * Size -> 0x0070
	 */
	struct FRuntimeFloatCurve
	{
	public:
		struct FRichCurve                                          EditorCurveData;                                         // 0x0000(0x0068)
		class UCurveFloat*                                         ExternalCurve;                                           // 0x0068(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct Engine.ForceFeedbackEffect.ForceFeedbackChannelDetails
	 * Size -> 0x0078
	 */
	struct FForceFeedbackChannelDetails
	{
	public:
		bool                                                       bAffectsLeftLarge : 1;                                   // 0x0000(0x0001) BIT_FIELD Edit, NoDestructor
		bool                                                       bAffectsLeftSmall : 1;                                   // 0x0000(0x0001) BIT_FIELD Edit, NoDestructor
		bool                                                       bAffectsRightLarge : 1;                                  // 0x0000(0x0001) BIT_FIELD Edit, NoDestructor
		bool                                                       bAffectsRightSmall : 1;                                  // 0x0000(0x0001) BIT_FIELD Edit, NoDestructor
		unsigned char                                              UnknownData_Z4BG[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRuntimeFloatCurve                                  Curve;                                                   // 0x0008(0x0070) Edit
	};

	/**
	 * ScriptStruct Engine.ForceFeedbackEffect.ActiveForceFeedbackEffect
	 * Size -> 0x0018
	 */
	struct FActiveForceFeedbackEffect
	{
	public:
		class UForceFeedbackEffect*                                ForceFeedbackEffect;                                     // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_P6Z9[0x10];                                  // 0x0008(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.Scene.ClutterData
	 * Size -> 0x0030
	 */
	struct FClutterData
	{
	public:
		float                                                      Density;                                                 // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      MinSize;                                                 // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      MaxSize;                                                 // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		int32_t                                                    GenerationSeed;                                          // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bAllowShadows;                                           // 0x0010(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_EVII[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UStaticMesh*                                         StaticMesh;                                              // 0x0018(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		class UTexture2D*                                          VisibilityTexture;                                       // 0x0020(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		int32_t                                                    TextureChannel;                                          // 0x0028(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_35WK[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.Scene.OverrideClutterLayer
	 * Size -> 0x0018
	 */
	struct FOverrideClutterLayer
	{
	public:
		int32_t                                                    LayerID;                                                 // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_YECJ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FClutterData>                                ClutterLayers;                                           // 0x0008(0x0010) Edit, ZeroConstructor
	};

	/**
	 * ScriptStruct Engine.Scene.ClutterPropertyOverride
	 * Size -> 0x0050
	 */
	struct FClutterPropertyOverride
	{
	public:
		int32_t                                                    LayerID;                                                 // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		int32_t                                                    ArrayIndex;                                              // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       OverrideDensity;                                         // 0x0008(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_30SO[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Density;                                                 // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       OverrideMinSize;                                         // 0x0010(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_7ZFP[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MinSize;                                                 // 0x0014(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       OverrideMaxSize;                                         // 0x0018(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_CC3O[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MaxSize;                                                 // 0x001C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       OverrideGenerationSeed;                                  // 0x0020(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_HWRD[0x3];                                   // 0x0021(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    GenerationSeed;                                          // 0x0024(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       OverrideAllowShadows;                                    // 0x0028(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bAllowShadows;                                           // 0x0029(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       OverrideStaticMesh;                                      // 0x002A(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_ZVRD[0x5];                                   // 0x002B(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UStaticMesh*                                         StaticMesh;                                              // 0x0030(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       OverrideVisibilityTexture;                               // 0x0038(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_AVZG[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTexture2D*                                          VisibilityTexture;                                       // 0x0040(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       OverrideTextureChannel;                                  // 0x0048(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_AUX1[0x3];                                   // 0x0049(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    TextureChannel;                                          // 0x004C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct Engine.Scene.PostProcessSettingsMaterialAdjuster
	 * Size -> 0x0050
	 */
	struct FPostProcessSettingsMaterialAdjuster
	{
	public:
		class UMaterialInterface*                                  PostProcessParentMaterial;                               // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		class UMaterialParameterCollection*                        MaterialParamCollecton;                                  // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		TArray<class FName>                                        ScalarParameterNames;                                    // 0x0010(0x0010) Edit, ZeroConstructor
		TArray<float>                                              ScalarParameterValues;                                   // 0x0020(0x0010) Edit, ZeroConstructor
		TArray<class FName>                                        VectorParameterNames;                                    // 0x0030(0x0010) Edit, ZeroConstructor
		TArray<struct FVector>                                     VectorParameterValues;                                   // 0x0040(0x0010) Edit, ZeroConstructor
	};

	/**
	 * ScriptStruct Engine.Scene.PostProcessSettings
	 * Size -> 0x0358
	 */
	struct FPostProcessSettings
	{
	public:
		bool                                                       bOverride_FilmWhitePoint : 1;                            // 0x0000(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		bool                                                       bOverride_FilmSaturation : 1;                            // 0x0000(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		bool                                                       bOverride_FilmChannelMixerRed : 1;                       // 0x0000(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		bool                                                       bOverride_FilmChannelMixerGreen : 1;                     // 0x0000(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		bool                                                       bOverride_FilmChannelMixerBlue : 1;                      // 0x0000(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		bool                                                       bOverride_FilmContrast : 1;                              // 0x0000(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		bool                                                       bOverride_FilmDynamicRange : 1;                          // 0x0000(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		bool                                                       bOverride_FilmHealAmount : 1;                            // 0x0000(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		bool                                                       bOverride_FilmToeAmount : 1;                             // 0x0001(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		bool                                                       bOverride_MinExposureFilmToeAmount : 1;                  // 0x0001(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		bool                                                       bOverride_MinFilmToeAmount : 1;                          // 0x0001(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		bool                                                       bOverride_MaxExposureFilmToeAmount : 1;                  // 0x0001(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		bool                                                       bOverride_MaxFilmToeAmount : 1;                          // 0x0001(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		bool                                                       bOverride_FilmShadowTint : 1;                            // 0x0001(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		bool                                                       bOverride_FilmShadowTintBlend : 1;                       // 0x0001(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		bool                                                       bOverride_FilmShadowTintAmount : 1;                      // 0x0001(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		bool                                                       bOverride_SceneColorTint : 1;                            // 0x0002(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		bool                                                       bOverride_SceneFringeIntensity : 1;                      // 0x0002(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		bool                                                       bOverride_SceneFringeSaturation : 1;                     // 0x0002(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		bool                                                       bOverride_AmbientCubemapTint : 1;                        // 0x0002(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		bool                                                       bOverride_AmbientCubemapIntensity : 1;                   // 0x0002(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		bool                                                       bOverride_BloomIntensity : 1;                            // 0x0002(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		bool                                                       bOverride_BloomThreshold : 1;                            // 0x0002(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		bool                                                       bOverride_Bloom1Tint : 1;                                // 0x0002(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		bool                                                       bOverride_Bloom1Size : 1;                                // 0x0003(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		bool                                                       bOverride_Bloom2Size : 1;                                // 0x0003(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		bool                                                       bOverride_Bloom2Tint : 1;                                // 0x0003(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		bool                                                       bOverride_Bloom3Tint : 1;                                // 0x0003(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		bool                                                       bOverride_Bloom3Size : 1;                                // 0x0003(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		bool                                                       bOverride_Bloom4Tint : 1;                                // 0x0003(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		bool                                                       bOverride_Bloom4Size : 1;                                // 0x0003(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		bool                                                       bOverride_Bloom5Tint : 1;                                // 0x0003(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		bool                                                       bOverride_Bloom5Size : 1;                                // 0x0004(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		bool                                                       bOverride_BloomDirtMaskIntensity : 1;                    // 0x0004(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		bool                                                       bOverride_BloomDirtMaskTint : 1;                         // 0x0004(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		bool                                                       bOverride_BloomDirtMask : 1;                             // 0x0004(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		bool                                                       bOverride_AutoExposureLowPercent : 1;                    // 0x0004(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		bool                                                       bOverride_AutoExposureHighPercent : 1;                   // 0x0004(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		bool                                                       bOverride_AutoExposureMinBrightness : 1;                 // 0x0004(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		bool                                                       bOverride_AutoExposureMaxBrightness : 1;                 // 0x0004(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		bool                                                       bOverride_AutoExposureSpeedUp : 1;                       // 0x0005(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		bool                                                       bOverride_AutoExposureSpeedDown : 1;                     // 0x0005(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		bool                                                       bOverride_AutoExposureBias : 1;                          // 0x0005(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		bool                                                       bOverride_HistogramLogMin : 1;                           // 0x0005(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		bool                                                       bOverride_HistogramLogMax : 1;                           // 0x0005(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		bool                                                       bOverride_LensFlareIntensity : 1;                        // 0x0005(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		bool                                                       bOverride_LensFlareTint : 1;                             // 0x0005(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		bool                                                       bOverride_LensFlareTints : 1;                            // 0x0005(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		bool                                                       bOverride_LensFlareBokehSize : 1;                        // 0x0006(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		bool                                                       bOverride_LensFlareBokehShape : 1;                       // 0x0006(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		bool                                                       bOverride_LensFlareThreshold : 1;                        // 0x0006(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		bool                                                       bOverride_VignetteIntensity : 1;                         // 0x0006(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		bool                                                       bOverride_VignetteColor : 1;                             // 0x0006(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		bool                                                       bOverride_GrainIntensity : 1;                            // 0x0006(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		bool                                                       bOverride_GrainJitter : 1;                               // 0x0006(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		bool                                                       bOverride_AmbientOcclusionIntensity : 1;                 // 0x0006(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		bool                                                       bOverride_AmbientOcclusionStaticFraction : 1;            // 0x0007(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		bool                                                       bOverride_AmbientOcclusionRadius : 1;                    // 0x0007(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		bool                                                       bOverride_AmbientOcclusionFadeDistance : 1;              // 0x0007(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		bool                                                       bOverride_AmbientOcclusionFadeRadius : 1;                // 0x0007(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		bool                                                       bOverride_AmbientOcclusionDistance : 1;                  // 0x0007(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		bool                                                       bOverride_AmbientOcclusionRadiusInWS : 1;                // 0x0007(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		bool                                                       bOverride_AmbientOcclusionPower : 1;                     // 0x0007(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		bool                                                       bOverride_AmbientOcclusionBias : 1;                      // 0x0007(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		bool                                                       bOverride_AmbientOcclusionQuality : 1;                   // 0x0008(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		bool                                                       bOverride_AmbientOcclusionMipBlend : 1;                  // 0x0008(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		bool                                                       bOverride_AmbientOcclusionMipScale : 1;                  // 0x0008(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		bool                                                       bOverride_AmbientOcclusionMipThreshold : 1;              // 0x0008(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		bool                                                       bOverride_LPVIntensity : 1;                              // 0x0008(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		bool                                                       bOverride_LPVWarpIntensity : 1;                          // 0x0008(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		bool                                                       bOverride_LPVSize : 1;                                   // 0x0008(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		bool                                                       bOverride_LPVSecondaryOcclusionIntensity : 1;            // 0x0008(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		bool                                                       bOverride_LPVSecondaryBounceIntensity : 1;               // 0x0009(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		bool                                                       bOverride_LPVGeometryVolumeBias : 1;                     // 0x0009(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		bool                                                       bOverride_LPVVplInjectionBias : 1;                       // 0x0009(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		bool                                                       bOverride_LPVEmissiveInjectionIntensity : 1;             // 0x0009(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		bool                                                       bOverride_LPVTransmissionIntensity : 1;                  // 0x0009(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		bool                                                       bOverride_IndirectLightingColor : 1;                     // 0x0009(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		bool                                                       bOverride_IndirectLightingIntensity : 1;                 // 0x0009(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		bool                                                       bOverride_ColorGradingIntensity : 1;                     // 0x0009(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		bool                                                       bOverride_ColorGradingLUT : 1;                           // 0x000A(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		bool                                                       bOverride_DepthOfFieldFocalDistance : 1;                 // 0x000A(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		bool                                                       bOverride_DepthOfFieldFocalRegion : 1;                   // 0x000A(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		bool                                                       bOverride_DepthOfFieldNearTransitionRegion : 1;          // 0x000A(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		bool                                                       bOverride_DepthOfFieldFarTransitionRegion : 1;           // 0x000A(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		bool                                                       bOverride_DepthOfFieldScale : 1;                         // 0x000A(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		bool                                                       bOverride_DepthOfFieldMaxBokehSize : 1;                  // 0x000A(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		bool                                                       bOverride_DepthOfFieldNearBlurSize : 1;                  // 0x000A(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		bool                                                       bOverride_DepthOfFieldFarBlurSize : 1;                   // 0x000B(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		bool                                                       bOverride_DepthOfFieldMethod : 1;                        // 0x000B(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		bool                                                       bOverride_DepthOfFieldBokehShape : 1;                    // 0x000B(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		bool                                                       bOverride_DepthOfFieldOcclusion : 1;                     // 0x000B(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		bool                                                       bOverride_DepthOfFieldColorThreshold : 1;                // 0x000B(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		bool                                                       bOverride_DepthOfFieldSizeThreshold : 1;                 // 0x000B(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		bool                                                       bOverride_DepthOfFieldSkyFocusDistance : 1;              // 0x000B(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		bool                                                       bOverride_MotionBlurAmount : 1;                          // 0x000B(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		bool                                                       bOverride_MotionBlurMax : 1;                             // 0x000C(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		bool                                                       bOverride_MotionBlurPerObjectSize : 1;                   // 0x000C(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		bool                                                       bOverride_ScreenPercentage : 1;                          // 0x000C(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		bool                                                       bOverride_AntiAliasingMethod : 1;                        // 0x000C(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		bool                                                       bOverride_ScreenSpaceReflectionIntensity : 1;            // 0x000C(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		bool                                                       bOverride_ScreenSpaceReflectionQuality : 1;              // 0x000C(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		bool                                                       bOverride_ScreenSpaceReflectionMaxRoughness : 1;         // 0x000C(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		bool                                                       bOverride_ScreenSpaceReflectionRoughnessScale : 1;       // 0x000C(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		bool                                                       bOverride_UseIBLDrivenSSR : 1;                           // 0x000D(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		bool                                                       bOverride_AdditionalMaterialSetSkyLightMultiplier : 1;   // 0x000D(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		bool                                                       bOverride_ClutterLayers : 1;                             // 0x000D(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		unsigned char                                              UnknownData_55O9[0x2];                                   // 0x000E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FOverrideClutterLayer>                       OverrideClutterLayers;                                   // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, AdvancedDisplay
		TArray<struct FClutterPropertyOverride>                    ClutterPropertyOverrides;                                // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, AdvancedDisplay
		struct FLinearColor                                        FilmWhitePoint;                                          // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor
		struct FLinearColor                                        FilmShadowTint;                                          // 0x0040(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay
		float                                                      FilmShadowTintBlend;                                     // 0x0050(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay
		float                                                      FilmShadowTintAmount;                                    // 0x0054(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay
		float                                                      FilmSaturation;                                          // 0x0058(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor
		struct FLinearColor                                        FilmChannelMixerRed;                                     // 0x005C(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay
		struct FLinearColor                                        FilmChannelMixerGreen;                                   // 0x006C(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay
		struct FLinearColor                                        FilmChannelMixerBlue;                                    // 0x007C(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay
		float                                                      FilmContrast;                                            // 0x008C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor
		float                                                      FilmToeAmount;                                           // 0x0090(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay
		float                                                      FilmHealAmount;                                          // 0x0094(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay
		float                                                      FilmDynamicRange;                                        // 0x0098(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay
		float                                                      MinExposureFilmToeAmount;                                // 0x009C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay
		float                                                      MinFilmToeAmount;                                        // 0x00A0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay
		float                                                      MaxExposureFilmToeAmount;                                // 0x00A4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay
		float                                                      MaxFilmToeAmount;                                        // 0x00A8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay
		struct FLinearColor                                        SceneColorTint;                                          // 0x00AC(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay
		float                                                      SceneFringeIntensity;                                    // 0x00BC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor
		float                                                      SceneFringeSaturation;                                   // 0x00C0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay
		float                                                      BloomIntensity;                                          // 0x00C4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor
		float                                                      BloomThreshold;                                          // 0x00C8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay
		float                                                      Bloom1Size;                                              // 0x00CC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay
		float                                                      Bloom2Size;                                              // 0x00D0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay
		float                                                      Bloom3Size;                                              // 0x00D4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay
		float                                                      Bloom4Size;                                              // 0x00D8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay
		float                                                      Bloom5Size;                                              // 0x00DC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay
		struct FLinearColor                                        Bloom1Tint;                                              // 0x00E0(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay
		struct FLinearColor                                        Bloom2Tint;                                              // 0x00F0(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay
		struct FLinearColor                                        Bloom3Tint;                                              // 0x0100(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay
		struct FLinearColor                                        Bloom4Tint;                                              // 0x0110(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay
		struct FLinearColor                                        Bloom5Tint;                                              // 0x0120(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay
		float                                                      BloomDirtMaskIntensity;                                  // 0x0130(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor
		struct FLinearColor                                        BloomDirtMaskTint;                                       // 0x0134(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay
		unsigned char                                              UnknownData_UNOF[0xC];                                   // 0x0144(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      LPVIntensity;                                            // 0x0150(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor
		float                                                      LPVWarpIntensity;                                        // 0x0154(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay
		float                                                      LPVVplInjectionBias;                                     // 0x0158(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor
		float                                                      LPVSize;                                                 // 0x015C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      LPVSecondaryOcclusionIntensity;                          // 0x0160(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor
		float                                                      LPVSecondaryBounceIntensity;                             // 0x0164(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor
		float                                                      LPVGeometryVolumeBias;                                   // 0x0168(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay
		float                                                      LPVEmissiveInjectionIntensity;                           // 0x016C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor
		float                                                      LPVTransmissionIntensity;                                // 0x0170(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor
		struct FLinearColor                                        AmbientCubemapTint;                                      // 0x0174(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay
		float                                                      AmbientCubemapIntensity;                                 // 0x0184(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor
		class UTextureCube*                                        AmbientCubemap;                                          // 0x0188(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      AutoExposureLowPercent;                                  // 0x0190(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay
		float                                                      AutoExposureHighPercent;                                 // 0x0194(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay
		float                                                      AutoExposureMinBrightness;                               // 0x0198(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor
		float                                                      AutoExposureMaxBrightness;                               // 0x019C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor
		float                                                      AutoExposureSpeedUp;                                     // 0x01A0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay
		float                                                      AutoExposureSpeedDown;                                   // 0x01A4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay
		float                                                      AutoExposureBias;                                        // 0x01A8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor
		float                                                      HistogramLogMin;                                         // 0x01AC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay
		float                                                      HistogramLogMax;                                         // 0x01B0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay
		float                                                      LensFlareIntensity;                                      // 0x01B4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor
		struct FLinearColor                                        LensFlareTint;                                           // 0x01B8(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay
		float                                                      LensFlareBokehSize;                                      // 0x01C8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor
		float                                                      LensFlareThreshold;                                      // 0x01CC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay
		class UTexture*                                            LensFlareBokehShape;                                     // 0x01D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FLinearColor                                        LensFlareTints[0x8];                                     // 0x01D8(0x0080) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      VignetteIntensity;                                       // 0x0258(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor
		struct FLinearColor                                        VignetteColor;                                           // 0x025C(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay
		float                                                      GrainJitter;                                             // 0x026C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay
		float                                                      GrainIntensity;                                          // 0x0270(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor
		float                                                      AmbientOcclusionIntensity;                               // 0x0274(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor
		float                                                      AmbientOcclusionStaticFraction;                          // 0x0278(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay
		float                                                      AmbientOcclusionRadius;                                  // 0x027C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor
		bool                                                       AmbientOcclusionRadiusInWS : 1;                          // 0x0280(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, AdvancedDisplay
		unsigned char                                              UnknownData_WM8D[0x3];                                   // 0x0281(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      AmbientOcclusionFadeDistance;                            // 0x0284(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay
		float                                                      AmbientOcclusionFadeRadius;                              // 0x0288(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay
		float                                                      AmbientOcclusionDistance;                                // 0x028C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay
		float                                                      AmbientOcclusionPower;                                   // 0x0290(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay
		float                                                      AmbientOcclusionBias;                                    // 0x0294(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay
		float                                                      AmbientOcclusionQuality;                                 // 0x0298(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay
		float                                                      AmbientOcclusionMipBlend;                                // 0x029C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay
		float                                                      AmbientOcclusionMipScale;                                // 0x02A0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay
		float                                                      AmbientOcclusionMipThreshold;                            // 0x02A4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay
		struct FLinearColor                                        IndirectLightingColor;                                   // 0x02A8(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor
		float                                                      IndirectLightingIntensity;                               // 0x02B8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor
		float                                                      ColorGradingIntensity;                                   // 0x02BC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor
		class UTexture*                                            ColorGradingLUT;                                         // 0x02C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		EDepthOfFieldMethod                                        DepthOfFieldMethod;                                      // 0x02C8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_FBXC[0x3];                                   // 0x02C9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      DepthOfFieldFocalDistance;                               // 0x02CC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor
		float                                                      DepthOfFieldFocalRegion;                                 // 0x02D0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor
		float                                                      DepthOfFieldNearTransitionRegion;                        // 0x02D4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor
		float                                                      DepthOfFieldFarTransitionRegion;                         // 0x02D8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor
		float                                                      DepthOfFieldScale;                                       // 0x02DC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor
		float                                                      DepthOfFieldMaxBokehSize;                                // 0x02E0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor
		float                                                      DepthOfFieldNearBlurSize;                                // 0x02E4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor
		float                                                      DepthOfFieldFarBlurSize;                                 // 0x02E8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor
		unsigned char                                              UnknownData_76JS[0x4];                                   // 0x02EC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTexture*                                            DepthOfFieldBokehShape;                                  // 0x02F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay
		float                                                      DepthOfFieldOcclusion;                                   // 0x02F8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay
		float                                                      DepthOfFieldColorThreshold;                              // 0x02FC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay
		float                                                      DepthOfFieldSizeThreshold;                               // 0x0300(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay
		float                                                      DepthOfFieldSkyFocusDistance;                            // 0x0304(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay
		float                                                      MotionBlurAmount;                                        // 0x0308(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor
		float                                                      MotionBlurMax;                                           // 0x030C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor
		float                                                      MotionBlurPerObjectSize;                                 // 0x0310(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay
		float                                                      ScreenPercentage;                                        // 0x0314(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay
		EAntiAliasingMethod                                        AntiAliasingMethod;                                      // 0x0318(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay
		unsigned char                                              UnknownData_2JVK[0x3];                                   // 0x0319(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ScreenSpaceReflectionIntensity;                          // 0x031C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor
		float                                                      ScreenSpaceReflectionQuality;                            // 0x0320(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor
		float                                                      ScreenSpaceReflectionMaxRoughness;                       // 0x0324(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor
		bool                                                       IBLDrivenSSR : 1;                                        // 0x0328(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, AdvancedDisplay
		unsigned char                                              UnknownData_HJPM[0x3];                                   // 0x0329(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      AdditionalMaterialSetSkyLightMultiplier;                 // 0x032C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor
		TArray<class UObject*>                                     Blendables;                                              // 0x0330(0x0010) Edit, ZeroConstructor
		TArray<struct FPostProcessSettingsMaterialAdjuster>        PostProcessSettingsMaterialAdjusters;                    // 0x0340(0x0010) Edit, ZeroConstructor
		class USoundBase*                                          PostProcessAmbientSound;                                 // 0x0350(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct Engine.MinimalViewInfo
	 * Size -> 0x0398
	 */
	struct FMinimalViewInfo
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FRotator                                            Rotation;                                                // 0x000C(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FRotator                                            AimRotation;                                             // 0x0018(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bUseTPVAim : 1;                                          // 0x0024(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor
		unsigned char                                              UnknownData_U9DX[0x3];                                   // 0x0025(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      FOV;                                                     // 0x0028(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      OrthoWidth;                                              // 0x002C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      AspectRatio;                                             // 0x0030(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bConstrainAspectRatio : 1;                               // 0x0034(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor
		unsigned char                                              UnknownData_5HBZ[0x3];                                   // 0x0035(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		ECameraProjectionMode                                      ProjectionMode;                                          // 0x0038(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_18ZG[0x3];                                   // 0x0039(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      PostProcessBlendWeight;                                  // 0x003C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		struct FPostProcessSettings                                PostProcessSettings;                                     // 0x0040(0x0358)
	};

	/**
	 * ScriptStruct Engine.PlayerCameraManager.CameraCacheEntry
	 * Size -> 0x03A0
	 */
	struct FCameraCacheEntry
	{
	public:
		float                                                      TimeStamp;                                               // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_848A[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FMinimalViewInfo                                    POV;                                                     // 0x0008(0x0398)
	};

	/**
	 * ScriptStruct Engine.PlayerCameraManager.TViewTarget
	 * Size -> 0x03A8
	 */
	struct FTViewTarget
	{
	public:
		class AActor*                                              Target;                                                  // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FMinimalViewInfo                                    POV;                                                     // 0x0008(0x0398) Edit, BlueprintVisible
		class APlayerState*                                        PlayerState;                                             // 0x03A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected
	};

	/**
	 * ScriptStruct Engine.PlayerCameraManager.ViewTargetTransitionParams
	 * Size -> 0x0010
	 */
	struct FViewTargetTransitionParams
	{
	public:
		float                                                      BlendTime;                                               // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		EViewTargetBlendFunction                                   BlendFunction;                                           // 0x0004(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_VVS7[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      BlendExp;                                                // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bLockOutgoing : 1;                                       // 0x000C(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor
		unsigned char                                              UnknownData_VW2H[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.UniqueNetIdRepl
	 * Size -> 0x0010
	 */
	struct FUniqueNetIdRepl
	{
	public:
		unsigned char                                              UnknownData_D1E3[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.LatentActionInfo
	 * Size -> 0x0018
	 */
	struct FLatentActionInfo
	{
	public:
		int32_t                                                    Linkage;                                                 // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		int32_t                                                    UUID;                                                    // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		class FName                                                ExecutionFunction;                                       // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor
		class UObject*                                             CallbackTarget;                                          // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct Engine.EngineTypes.Rotator_NetQuantize
	 * Size -> 0x0000 (FullSize[0x000C] - InheritedSize[0x000C])
	 */
	struct FRotator_NetQuantize : public FRotator
	{	};

	/**
	 * ScriptStruct Engine.Actor.NetExecParams
	 * Size -> 0x0018
	 */
	struct FNetExecParams
	{
	public:
		int32_t                                                    IntParam1;                                               // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		int32_t                                                    IntParam2;                                               // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      FloatParam1;                                             // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_OPOR[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UObject*                                             ObjParam1;                                               // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct Engine.HUD.DebugTextInfo
	 * Size -> 0x0060
	 */
	struct FDebugTextInfo
	{
	public:
		class AActor*                                              SrcActor;                                                // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector                                             SrcActorOffset;                                          // 0x0008(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector                                             SrcActorDesiredOffset;                                   // 0x0014(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor
		class FString                                              DebugText;                                               // 0x0020(0x0010) ZeroConstructor
		float                                                      TimeRemaining;                                           // 0x0030(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor
		float                                                      Duration;                                                // 0x0034(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		struct FColor                                              TextColor;                                               // 0x0038(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bAbsoluteLocation : 1;                                   // 0x003C(0x0001) BIT_FIELD NoDestructor
		bool                                                       bKeepAttachedToActor : 1;                                // 0x003C(0x0001) BIT_FIELD NoDestructor
		unsigned char                                              UnknownData_N9FK[0x3];                                   // 0x003D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             OrigActorLocation;                                       // 0x0040(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_YUB6[0x4];                                   // 0x004C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UFont*                                               Font;                                                    // 0x0050(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      FontScale;                                               // 0x0058(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_AV3E[0x4];                                   // 0x005C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.Brush.GeomSelection
	 * Size -> 0x000C
	 */
	struct FGeomSelection
	{
	public:
		int32_t                                                    Type;                                                    // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		int32_t                                                    index;                                                   // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		int32_t                                                    SelectionIndex;                                          // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct Engine.EngineTypes.DamageEvent
	 * Size -> 0x0020
	 */
	struct FDamageEvent
	{
	public:
		unsigned char                                              UnknownData_1DS9[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Impulse;                                                 // 0x0008(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      OriginalDamage;                                          // 0x000C(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		int32_t                                                    InstanceBodyIndex;                                       // 0x0010(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_SEMP[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              DamageTypeClass;                                         // 0x0018(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct Engine.Character.BasedMovementInfo
	 * Size -> 0x0030
	 */
	struct FBasedMovementInfo
	{
	public:
		class UPrimitiveComponent*                                 MovementBase;                                            // 0x0000(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor
		class FName                                                BoneName;                                                // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector_NetQuantize100                              Location;                                                // 0x0010(0x000C)
		struct FRotator                                            Rotation;                                                // 0x001C(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bServerHasBaseComponent;                                 // 0x0028(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bRelativeRotation;                                       // 0x0029(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bServerHasVelocity;                                      // 0x002A(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_YEZF[0x5];                                   // 0x002B(0x0005) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.EngineTypes.Rotator_NetQuantizeSmartPitch
	 * Size -> 0x0000 (FullSize[0x000C] - InheritedSize[0x000C])
	 */
	struct FRotator_NetQuantizeSmartPitch : public FRotator
	{	};

	/**
	 * ScriptStruct Engine.AnimationAsset.RootMotionMovementParams
	 * Size -> 0x0040
	 */
	struct FRootMotionMovementParams
	{
	public:
		bool                                                       bHasRootMotion;                                          // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_BFNN[0xF];                                   // 0x0001(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          RootMotionTransform;                                     // 0x0010(0x0030) IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct Engine.Vector_NetQuantize10
	 * Size -> 0x0000 (FullSize[0x000C] - InheritedSize[0x000C])
	 */
	struct FVector_NetQuantize10 : public FVector
	{	};

	/**
	 * ScriptStruct Engine.Character.RepRootMotionMontage
	 * Size -> 0x0040
	 */
	struct FRepRootMotionMontage
	{
	public:
		class UAnimMontage*                                        AnimMontage;                                             // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      Position;                                                // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector_NetQuantize10                               Location;                                                // 0x000C(0x000C)
		struct FRotator                                            Rotation;                                                // 0x0018(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_IGTK[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPrimitiveComponent*                                 MovementBase;                                            // 0x0028(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor
		class FName                                                MovementBaseBoneName;                                    // 0x0030(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bRelativePosition;                                       // 0x0038(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bRelativeRotation;                                       // 0x0039(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_SYWY[0x6];                                   // 0x003A(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.Character.SimulatedRootMotionReplicatedMove
	 * Size -> 0x0048
	 */
	struct FSimulatedRootMotionReplicatedMove
	{
	public:
		float                                                      Time;                                                    // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_6ZGI[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRepRootMotionMontage                               RootMotion;                                              // 0x0008(0x0040) ContainsInstancedReference
	};

	/**
	 * ScriptStruct Engine.WorldSettings.GameModePrefix
	 * Size -> 0x0020
	 */
	struct FGameModePrefix
	{
	public:
		class FString                                              Prefix;                                                  // 0x0000(0x0010) ZeroConstructor
		class FString                                              GameMode;                                                // 0x0010(0x0010) ZeroConstructor
	};

	/**
	 * ScriptStruct Engine.WorldSettings.LightmassWorldInfoSettings
	 * Size -> 0x0044
	 */
	struct FLightmassWorldInfoSettings
	{
	public:
		float                                                      StaticLightingLevelScale;                                // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay
		int32_t                                                    NumIndirectLightingBounces;                              // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      IndirectLightingQuality;                                 // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay
		float                                                      IndirectLightingSmoothness;                              // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay
		struct FColor                                              EnvironmentColor;                                        // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      EnvironmentIntensity;                                    // 0x0014(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      EmissiveBoost;                                           // 0x0018(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      DiffuseBoost;                                            // 0x001C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bUseAmbientOcclusion : 1;                                // 0x0020(0x0001) BIT_FIELD Edit, NoDestructor
		unsigned char                                              UnknownData_R41Y[0x3];                                   // 0x0021(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      DirectIlluminationOcclusionFraction;                     // 0x0024(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      IndirectIlluminationOcclusionFraction;                   // 0x0028(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      OcclusionExponent;                                       // 0x002C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      FullyOccludedSamplesFraction;                            // 0x0030(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      MaxOcclusionDistance;                                    // 0x0034(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bVisualizeMaterialDiffuse : 1;                           // 0x0038(0x0001) BIT_FIELD Edit, NoDestructor, AdvancedDisplay
		bool                                                       bVisualizeAmbientOcclusion : 1;                          // 0x0038(0x0001) BIT_FIELD Edit, NoDestructor, AdvancedDisplay
		unsigned char                                              UnknownData_3DX0[0x3];                                   // 0x0039(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      VolumeLightSamplePlacementScale;                         // 0x003C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay
		bool                                                       bCompressLightmaps : 1;                                  // 0x0040(0x0001) BIT_FIELD Edit, NoDestructor, AdvancedDisplay
		unsigned char                                              UnknownData_46X4[0x3];                                   // 0x0041(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.ReverbVolume.InteriorSettings
	 * Size -> 0x0024
	 */
	struct FInteriorSettings
	{
	public:
		bool                                                       bIsWorldSettings : 1;                                    // 0x0000(0x0001) BIT_FIELD NoDestructor
		unsigned char                                              UnknownData_1EUV[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ExteriorVolume;                                          // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      ExteriorTime;                                            // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      ExteriorLPF;                                             // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      ExteriorLPFTime;                                         // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      InteriorVolume;                                          // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      InteriorTime;                                            // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      InteriorLPF;                                             // 0x001C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      InteriorLPFTime;                                         // 0x0020(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct Engine.ReverbVolume.ReverbSettings
	 * Size -> 0x0018
	 */
	struct FReverbSettings
	{
	public:
		bool                                                       bApplyReverb : 1;                                        // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor
		unsigned char                                              UnknownData_0M1A[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		EReverbPreset                                              ReverbType;                                              // 0x0004(0x0001) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_8OHU[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UReverbEffect*                                       ReverbEffect;                                            // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      Volume;                                                  // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      FadeTime;                                                // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct Engine.WorldSettings.ProxyMeshSettings
	 * Size -> 0x000C
	 */
	struct FProxyMeshSettings
	{
	public:
		float                                                      MaxDrawDistance;                                         // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      TransitionDistance;                                      // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      TrianglePercent;                                         // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct Engine.NavigationTypes.MovementProperties
	 * Size -> 0x0004
	 */
	struct FMovementProperties
	{
	public:
		bool                                                       bCanCrouch : 1;                                          // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor
		bool                                                       bCanJump : 1;                                            // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor
		bool                                                       bCanWalk : 1;                                            // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor
		bool                                                       bCanSwim : 1;                                            // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor
		bool                                                       bCanFly : 1;                                             // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor
		unsigned char                                              UnknownData_URY5[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.NavigationTypes.NavAgentProperties
	 * Size -> 0x000C (FullSize[0x0010] - InheritedSize[0x0004])
	 */
	struct FNavAgentProperties : public FMovementProperties
	{
	public:
		float                                                      AgentRadius;                                             // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      AgentHeight;                                             // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      AgentStepHeight;                                         // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct Engine.CharacterMovementComponent.FindFloorResult
	 * Size -> 0x0098
	 */
	struct FFindFloorResult
	{
	public:
		bool                                                       bBlockingHit : 1;                                        // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, EditConst, NoDestructor
		bool                                                       bShouldSlide : 1;                                        // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, EditConst, NoDestructor
		bool                                                       bWalkableFloor : 1;                                      // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, EditConst, NoDestructor
		bool                                                       bLineTrace : 1;                                          // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, EditConst, NoDestructor
		unsigned char                                              UnknownData_0T2D[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      FloorDist;                                               // 0x0004(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor
		float                                                      LineDist;                                                // 0x0008(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_631V[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FHitResult                                          HitResult;                                               // 0x0010(0x0088) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, EditConst
	};

	/**
	 * ScriptStruct Engine.CharacterMovementComponent.CharacterMovementComponentPreClothTickFunction
	 * Size -> 0x0008 (FullSize[0x0050] - InheritedSize[0x0048])
	 */
	struct FCharacterMovementComponentPreClothTickFunction : public FTickFunction
	{
	public:
		unsigned char                                              UnknownData_8ENS[0x8];                                   // 0x0048(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.CharacterMovementComponent.StoredMoveData
	 * Size -> 0x0048
	 */
	struct FStoredMoveData
	{
	public:
		unsigned char                                              UnknownData_3GKR[0x48];                                  // 0x0000(0x0048) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.Engine.StatColorMapEntry
	 * Size -> 0x0008
	 */
	struct FStatColorMapEntry
	{
	public:
		float                                                      In;                                                      // 0x0000(0x0004) ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor
		struct FColor                                              Out;                                                     // 0x0004(0x0004) ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct Engine.Engine.StatColorMapping
	 * Size -> 0x0028
	 */
	struct FStatColorMapping
	{
	public:
		class FString                                              StatName;                                                // 0x0000(0x0010) ZeroConstructor, Config, GlobalConfig
		TArray<struct FStatColorMapEntry>                          ColorMap;                                                // 0x0010(0x0010) ZeroConstructor, Config, GlobalConfig
		bool                                                       DisableBlend : 1;                                        // 0x0020(0x0001) BIT_FIELD Config, GlobalConfig, NoDestructor
		unsigned char                                              UnknownData_GZL1[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.Engine.GameNameRedirect
	 * Size -> 0x0020
	 */
	struct FGameNameRedirect
	{
	public:
		class FString                                              OldGameName;                                             // 0x0000(0x0010) ZeroConstructor
		class FString                                              NewGameName;                                             // 0x0010(0x0010) ZeroConstructor
	};

	/**
	 * ScriptStruct Engine.Engine.ClassRedirect
	 * Size -> 0x0058
	 */
	struct FClassRedirect
	{
	public:
		class FString                                              ObjectName;                                              // 0x0000(0x0010) ZeroConstructor
		class FString                                              OldClassName;                                            // 0x0010(0x0010) ZeroConstructor
		class FString                                              NewClassName;                                            // 0x0020(0x0010) ZeroConstructor
		class FString                                              OldSubobjName;                                           // 0x0030(0x0010) ZeroConstructor
		class FString                                              NewSubobjName;                                           // 0x0040(0x0010) ZeroConstructor
		bool                                                       InstanceOnly;                                            // 0x0050(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_ZHWA[0x7];                                   // 0x0051(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.Engine.PluginRedirect
	 * Size -> 0x0020
	 */
	struct FPluginRedirect
	{
	public:
		class FString                                              OldPluginName;                                           // 0x0000(0x0010) ZeroConstructor
		class FString                                              NewPluginName;                                           // 0x0010(0x0010) ZeroConstructor
	};

	/**
	 * ScriptStruct Engine.Engine.StructRedirect
	 * Size -> 0x0020
	 */
	struct FStructRedirect
	{
	public:
		class FString                                              OldStructName;                                           // 0x0000(0x0010) ZeroConstructor
		class FString                                              NewStructName;                                           // 0x0010(0x0010) ZeroConstructor
	};

	/**
	 * ScriptStruct Engine.Engine.DropNoteInfo
	 * Size -> 0x0028
	 */
	struct FDropNoteInfo
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor
		struct FRotator                                            Rotation;                                                // 0x000C(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor
		class FString                                              Comment;                                                 // 0x0018(0x0010) ZeroConstructor
	};

	/**
	 * ScriptStruct Engine.EngineTypes.RigidBodyErrorCorrection
	 * Size -> 0x001C
	 */
	struct FRigidBodyErrorCorrection
	{
	public:
		float                                                      LinearDeltaThresholdSq;                                  // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      LinearInterpAlpha;                                       // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      LinearRecipFixTime;                                      // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      AngularDeltaThreshold;                                   // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      AngularInterpAlpha;                                      // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      AngularRecipFixTime;                                     // 0x0014(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      BodySpeedThresholdSq;                                    // 0x0018(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct Engine.Engine.NetDriverDefinition
	 * Size -> 0x0018
	 */
	struct FNetDriverDefinition
	{
	public:
		class FName                                                DefName;                                                 // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor
		class FName                                                DriverClassName;                                         // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor
		class FName                                                DriverClassNameFallback;                                 // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct Engine.GameMode.GameClassShortName
	 * Size -> 0x0020
	 */
	struct FGameClassShortName
	{
	public:
		class FString                                              ShortName;                                               // 0x0000(0x0010) ZeroConstructor
		class FString                                              GameClassName;                                           // 0x0010(0x0010) ZeroConstructor
	};

	/**
	 * ScriptStruct Engine.GameViewportClient.DebugDisplayProperty
	 * Size -> 0x0020
	 */
	struct FDebugDisplayProperty
	{
	public:
		class UObject*                                             Obj;                                                     // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor
		class UClass*                                              WithinClass;                                             // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_N7JH[0x10];                                  // 0x0010(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.ParticleSystemComponent.ParticleSysParam
	 * Size -> 0x0040
	 */
	struct FParticleSysParam
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		EParticleSysParamType                                      ParamType;                                               // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_XXJU[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Scalar;                                                  // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      Scalar_Low;                                              // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector                                             Vector;                                                  // 0x0014(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector                                             Vector_Low;                                              // 0x0020(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FColor                                              Color;                                                   // 0x002C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class AActor*                                              Actor;                                                   // 0x0030(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UMaterialInterface*                                  Material;                                                // 0x0038(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct Engine.MaterialInterface.LightmassMaterialInterfaceSettings
	 * Size -> 0x0018
	 */
	struct FLightmassMaterialInterfaceSettings
	{
	public:
		bool                                                       bCastShadowAsMasked : 1;                                 // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor
		unsigned char                                              UnknownData_NP80[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      EmissiveBoost;                                           // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      DiffuseBoost;                                            // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      ExportResolutionScale;                                   // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      DistanceFieldPenumbraScale;                              // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bOverrideCastShadowAsMasked : 1;                         // 0x0014(0x0001) BIT_FIELD NoDestructor
		bool                                                       bOverrideEmissiveBoost : 1;                              // 0x0014(0x0001) BIT_FIELD NoDestructor
		bool                                                       bOverrideDiffuseBoost : 1;                               // 0x0014(0x0001) BIT_FIELD NoDestructor
		bool                                                       bOverrideExportResolutionScale : 1;                      // 0x0014(0x0001) BIT_FIELD NoDestructor
		bool                                                       bOverrideDistanceFieldPenumbraScale : 1;                 // 0x0014(0x0001) BIT_FIELD NoDestructor
		unsigned char                                              UnknownData_YUAR[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.MaterialInterface.MaterialRelevance
	 * Size -> 0x0004
	 */
	struct FMaterialRelevance
	{
	public:
		bool                                                       bOpaque : 1;                                             // 0x0000(0x0001) BIT_FIELD NoDestructor
		bool                                                       bMasked : 1;                                             // 0x0000(0x0001) BIT_FIELD NoDestructor
		bool                                                       bDistortion : 1;                                         // 0x0000(0x0001) BIT_FIELD NoDestructor
		bool                                                       bSeparateTranslucency : 1;                               // 0x0000(0x0001) BIT_FIELD NoDestructor
		bool                                                       bNormalTranslucency : 1;                                 // 0x0000(0x0001) BIT_FIELD NoDestructor
		bool                                                       bDisableDepthTest : 1;                                   // 0x0000(0x0001) BIT_FIELD NoDestructor
		bool                                                       bSubsurfaceProfile : 1;                                  // 0x0000(0x0001) BIT_FIELD NoDestructor
		unsigned char                                              UnknownData_TISK[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.CullDistanceVolume.CullDistanceSizePair
	 * Size -> 0x0008
	 */
	struct FCullDistanceSizePair
	{
	public:
		float                                                      Size;                                                    // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      CullDistance;                                            // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct Engine.DynamicCaptureManager.OverrideCaptureData
	 * Size -> 0x0018
	 */
	struct FOverrideCaptureData
	{
	public:
		struct FStringAssetReference                               SnapshotAsset;                                           // 0x0000(0x0010) Edit, ZeroConstructor
		float                                                      Brightness;                                              // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_V3KB[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.EngineTypes.LightmassPrimitiveSettings
	 * Size -> 0x0018
	 */
	struct FLightmassPrimitiveSettings
	{
	public:
		bool                                                       bUseTwoSidedLighting : 1;                                // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor
		bool                                                       bShadowIndirectOnly : 1;                                 // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor
		bool                                                       bUseEmissiveForStaticLighting : 1;                       // 0x0000(0x0001) BIT_FIELD NoDestructor
		unsigned char                                              UnknownData_FDB6[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      EmissiveLightFalloffExponent;                            // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      EmissiveLightExplicitInfluenceRadius;                    // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      EmissiveBoost;                                           // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      DiffuseBoost;                                            // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      FullyOccludedSamplesFraction;                            // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct Engine.LandscapeProxy.LandscapeLayerStruct
	 * Size -> 0x0008
	 */
	struct FLandscapeLayerStruct
	{
	public:
		class ULandscapeLayerInfoObject*                           LayerInfoObj;                                            // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct Engine.MatineeActor.InterpGroupActorInfo
	 * Size -> 0x0020
	 */
	struct FInterpGroupActorInfo
	{
	public:
		class FName                                                GroupName;                                               // 0x0000(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor
		class FName                                                ObjectName;                                              // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		TArray<class AActor*>                                      actors;                                                  // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor
	};

	/**
	 * ScriptStruct Engine.MatineeActor.CameraCutInfo
	 * Size -> 0x0010
	 */
	struct FCameraCutInfo
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      TimeStamp;                                               // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct Engine.NavigationQueryFilter.NavigationFilterArea
	 * Size -> 0x0018
	 */
	struct FNavigationFilterArea
	{
	public:
		class UClass*                                              AreaClass;                                               // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      TravelCostOverride;                                      // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      EnteringCostOverride;                                    // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bIsExcluded : 1;                                         // 0x0010(0x0001) BIT_FIELD Edit, NoDestructor
		bool                                                       bOverrideTravelCost : 1;                                 // 0x0010(0x0001) BIT_FIELD NoDestructor
		bool                                                       bOverrideEnteringCost : 1;                               // 0x0010(0x0001) BIT_FIELD NoDestructor
		unsigned char                                              UnknownData_ZLUG[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.NavigationQueryFilter.NavigationFilterFlags
	 * Size -> 0x0004
	 */
	struct FNavigationFilterFlags
	{
	public:
		bool                                                       bNavFlag0 : 1;                                           // 0x0000(0x0001) BIT_FIELD Edit, NoDestructor
		bool                                                       bNavFlag1 : 1;                                           // 0x0000(0x0001) BIT_FIELD Edit, NoDestructor
		bool                                                       bNavFlag2 : 1;                                           // 0x0000(0x0001) BIT_FIELD Edit, NoDestructor
		bool                                                       bNavFlag3 : 1;                                           // 0x0000(0x0001) BIT_FIELD Edit, NoDestructor
		bool                                                       bNavFlag4 : 1;                                           // 0x0000(0x0001) BIT_FIELD Edit, NoDestructor
		bool                                                       bNavFlag5 : 1;                                           // 0x0000(0x0001) BIT_FIELD Edit, NoDestructor
		bool                                                       bNavFlag6 : 1;                                           // 0x0000(0x0001) BIT_FIELD Edit, NoDestructor
		bool                                                       bNavFlag7 : 1;                                           // 0x0000(0x0001) BIT_FIELD Edit, NoDestructor
		bool                                                       bNavFlag8 : 1;                                           // 0x0001(0x0001) BIT_FIELD Edit, NoDestructor
		bool                                                       bNavFlag9 : 1;                                           // 0x0001(0x0001) BIT_FIELD Edit, NoDestructor
		bool                                                       bNavFlag10 : 1;                                          // 0x0001(0x0001) BIT_FIELD Edit, NoDestructor
		bool                                                       bNavFlag11 : 1;                                          // 0x0001(0x0001) BIT_FIELD Edit, NoDestructor
		bool                                                       bNavFlag12 : 1;                                          // 0x0001(0x0001) BIT_FIELD Edit, NoDestructor
		bool                                                       bNavFlag13 : 1;                                          // 0x0001(0x0001) BIT_FIELD Edit, NoDestructor
		bool                                                       bNavFlag14 : 1;                                          // 0x0001(0x0001) BIT_FIELD Edit, NoDestructor
		bool                                                       bNavFlag15 : 1;                                          // 0x0001(0x0001) BIT_FIELD Edit, NoDestructor
		unsigned char                                              UnknownData_245R[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.NavigationTypes.NavDataConfig
	 * Size -> 0x0018 (FullSize[0x0028] - InheritedSize[0x0010])
	 */
	struct FNavDataConfig : public FNavAgentProperties
	{
	public:
		class FName                                                Name;                                                    // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FColor                                              Color;                                                   // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector                                             DefaultQueryExtent;                                      // 0x001C(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct Engine.NavigationData.SupportedAreaData
	 * Size -> 0x0020
	 */
	struct FSupportedAreaData
	{
	public:
		class FString                                              AreaClassName;                                           // 0x0000(0x0010) ZeroConstructor
		int32_t                                                    AreaID;                                                  // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_I5HM[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              AreaClass;                                               // 0x0018(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct Engine.NavLinkDefinition.NavigationLinkBase
	 * Size -> 0x0020
	 */
	struct FNavigationLinkBase
	{
	public:
		float                                                      MaxFallDownLength;                                       // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		ENavLinkDirection                                          Direction;                                               // 0x0004(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_GRQB[0x7];                                   // 0x0005(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      SnapRadius;                                              // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		class UClass*                                              AreaClass;                                               // 0x0010(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bSupportsAgent0 : 1;                                     // 0x0018(0x0001) BIT_FIELD Edit, NoDestructor
		bool                                                       bSupportsAgent1 : 1;                                     // 0x0018(0x0001) BIT_FIELD Edit, NoDestructor
		bool                                                       bSupportsAgent2 : 1;                                     // 0x0018(0x0001) BIT_FIELD Edit, NoDestructor
		bool                                                       bSupportsAgent3 : 1;                                     // 0x0018(0x0001) BIT_FIELD Edit, NoDestructor
		bool                                                       bSupportsAgent4 : 1;                                     // 0x0018(0x0001) BIT_FIELD Edit, NoDestructor
		bool                                                       bSupportsAgent5 : 1;                                     // 0x0018(0x0001) BIT_FIELD Edit, NoDestructor
		bool                                                       bSupportsAgent6 : 1;                                     // 0x0018(0x0001) BIT_FIELD Edit, NoDestructor
		bool                                                       bSupportsAgent7 : 1;                                     // 0x0018(0x0001) BIT_FIELD Edit, NoDestructor
		bool                                                       bSupportsAgent8 : 1;                                     // 0x0019(0x0001) BIT_FIELD Edit, NoDestructor
		bool                                                       bSupportsAgent9 : 1;                                     // 0x0019(0x0001) BIT_FIELD Edit, NoDestructor
		bool                                                       bSupportsAgent10 : 1;                                    // 0x0019(0x0001) BIT_FIELD Edit, NoDestructor
		bool                                                       bSupportsAgent11 : 1;                                    // 0x0019(0x0001) BIT_FIELD Edit, NoDestructor
		bool                                                       bSupportsAgent12 : 1;                                    // 0x0019(0x0001) BIT_FIELD Edit, NoDestructor
		bool                                                       bSupportsAgent13 : 1;                                    // 0x0019(0x0001) BIT_FIELD Edit, NoDestructor
		bool                                                       bSupportsAgent14 : 1;                                    // 0x0019(0x0001) BIT_FIELD Edit, NoDestructor
		bool                                                       bSupportsAgent15 : 1;                                    // 0x0019(0x0001) BIT_FIELD Edit, NoDestructor
		unsigned char                                              UnknownData_3KLX[0x6];                                   // 0x001A(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.NavLinkDefinition.NavigationLink
	 * Size -> 0x0018 (FullSize[0x0038] - InheritedSize[0x0020])
	 */
	struct FNavigationLink : public FNavigationLinkBase
	{
	public:
		struct FVector                                             Left;                                                    // 0x0020(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector                                             Right;                                                   // 0x002C(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct Engine.NavLinkDefinition.NavigationSegmentLink
	 * Size -> 0x0030 (FullSize[0x0050] - InheritedSize[0x0020])
	 */
	struct FNavigationSegmentLink : public FNavigationLinkBase
	{
	public:
		struct FVector                                             LeftStart;                                               // 0x0020(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector                                             LeftEnd;                                                 // 0x002C(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector                                             RightStart;                                              // 0x0038(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector                                             RightEnd;                                                // 0x0044(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct Engine.Skeleton.BoneNode
	 * Size -> 0x0010
	 */
	struct FBoneNode
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor
		int32_t                                                    ParentIndex;                                             // 0x0008(0x0004) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor
		EBoneTranslationRetargetingMode                            TranslationRetargetingMode;                              // 0x000C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bLockBone;                                               // 0x000D(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bRemoveBone;                                             // 0x000E(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_C999[0x1];                                   // 0x000F(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.Skeleton.SkeletonToMeshLinkup
	 * Size -> 0x0020
	 */
	struct FSkeletonToMeshLinkup
	{
	public:
		TArray<int32_t>                                            SkeletonToMeshTable;                                     // 0x0000(0x0010) ZeroConstructor
		TArray<int32_t>                                            MeshToSkeletonTable;                                     // 0x0010(0x0010) ZeroConstructor
	};

	/**
	 * ScriptStruct Engine.SmartNameContainer
	 * Size -> 0x0050
	 */
	struct FSmartNameContainer
	{
	public:
		unsigned char                                              UnknownData_YP47[0x50];                                  // 0x0000(0x0050) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.Skeleton.AnimSlotGroup
	 * Size -> 0x0018
	 */
	struct FAnimSlotGroup
	{
	public:
		class FName                                                GroupName;                                               // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor
		TArray<class FName>                                        SlotNames;                                               // 0x0008(0x0010) ZeroConstructor
	};

	/**
	 * ScriptStruct Engine.SkeletalMesh.SkeletalMaterial
	 * Size -> 0x0010
	 */
	struct FSkeletalMaterial
	{
	public:
		class UMaterialInterface*                                  MaterialInterface;                                       // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor
		bool                                                       bEnableShadowCasting;                                    // 0x0008(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_BU0N[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.SkeletalMesh.GroundBoneModifier
	 * Size -> 0x0010
	 */
	struct FGroundBoneModifier
	{
	public:
		class FName                                                BoneName;                                                // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      TraceDistance;                                           // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      ZOffset;                                                 // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct Engine.SkeletalMesh.GroundBoneChain
	 * Size -> 0x0020
	 */
	struct FGroundBoneChain
	{
	public:
		class FName                                                LeafGroundBoneName;                                      // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		TArray<struct FGroundBoneModifier>                         GroundBones;                                             // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor
		bool                                                       bIsAfterIk;                                              // 0x0018(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bUpdateRoll;                                             // 0x0019(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_IK4A[0x6];                                   // 0x001A(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.SkeletalMesh.BoneMirrorInfo
	 * Size -> 0x0008
	 */
	struct FBoneMirrorInfo
	{
	public:
		int32_t                                                    SourceIndex;                                             // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		EAxis                                                      BoneFlipAxis;                                            // 0x0004(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_R4XB[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.SkeletalMesh.TriangleSortSettings
	 * Size -> 0x000C
	 */
	struct FTriangleSortSettings
	{
	public:
		ETriangleSortOption                                        TriangleSorting;                                         // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		ETriangleSortAxis                                          CustomLeftRightAxis;                                     // 0x0001(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_QG97[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                CustomLeftRightBoneName;                                 // 0x0004(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct Engine.SkeletalMesh.BoneReference
	 * Size -> 0x000C
	 */
	struct FBoneReference
	{
	public:
		class FName                                                BoneName;                                                // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_7QJM[0x4];                                   // 0x0008(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.SkeletalMesh.SkeletalMeshOptimizationSettings
	 * Size -> 0x0048
	 */
	struct FSkeletalMeshOptimizationSettings
	{
	public:
		ESkeletalMeshOptimizationType                              ReductionMethod;                                         // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_25P8[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      NumOfTrianglesPercentage;                                // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      MaxDeviationPercentage;                                  // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      WeldingThreshold;                                        // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bRecalcNormals;                                          // 0x0010(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_T46O[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      NormalsThreshold;                                        // 0x0014(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		ESkeletalMeshOptimizationImportance                        SilhouetteImportance;                                    // 0x0018(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		ESkeletalMeshOptimizationImportance                        TextureImportance;                                       // 0x0019(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		ESkeletalMeshOptimizationImportance                        ShadingImportance;                                       // 0x001A(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		ESkeletalMeshOptimizationImportance                        SkinningImportance;                                      // 0x001B(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      BoneReductionRatio;                                      // 0x001C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		int32_t                                                    MaxBonesPerVertex;                                       // 0x0020(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_2INF[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FBoneReference>                              BonesToRemove;                                           // 0x0028(0x0010) Edit, ZeroConstructor
		int32_t                                                    BaseLODModel;                                            // 0x0038(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		int32_t                                                    LODChainLastIndex;                                       // 0x003C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		uint32_t                                                   MinTrianglesForLOD;                                      // 0x0040(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		uint32_t                                                   MaxTrianglesForLOD;                                      // 0x0044(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct Engine.SkeletalMesh.SkeletalMeshLODInfo
	 * Size -> 0x00A0
	 */
	struct FSkeletalMeshLODInfo
	{
	public:
		float                                                      ScreenSize;                                              // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      LODHysteresis;                                           // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		TArray<int32_t>                                            LODMaterialMap;                                          // 0x0008(0x0010) Edit, EditFixedSize, ZeroConstructor
		TArray<bool>                                               bEnableShadowCasting;                                    // 0x0018(0x0010) ZeroConstructor, Deprecated
		TArray<ETriangleSortOption>                                TriangleSorting;                                         // 0x0028(0x0010) ZeroConstructor, Deprecated
		TArray<struct FTriangleSortSettings>                       TriangleSortSettings;                                    // 0x0038(0x0010) Edit, EditFixedSize, ZeroConstructor
		bool                                                       bHasBeenSimplified : 1;                                  // 0x0048(0x0001) BIT_FIELD NoDestructor
		unsigned char                                              UnknownData_CKGY[0x7];                                   // 0x0049(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSkeletalMeshOptimizationSettings                   ReductionSettings;                                       // 0x0050(0x0048) Edit
		int32_t                                                    StaggeredUpdateFrequency;                                // 0x0098(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_HHDX[0x4];                                   // 0x009C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.SkeletalMesh.MorphTargetMap
	 * Size -> 0x0010
	 */
	struct FMorphTargetMap
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		class UMorphTarget*                                        MorphTarget;                                             // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct Engine.SkeletalMesh.ClothPhysicsProperties
	 * Size -> 0x0024
	 */
	struct FClothPhysicsProperties
	{
	public:
		float                                                      BendResistance;                                          // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      ShearResistance;                                         // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      StretchLimit;                                            // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      Friction;                                                // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      Damping;                                                 // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      Drag;                                                    // 0x0014(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      GravityScale;                                            // 0x0018(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      InertiaBlend;                                            // 0x001C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      SelfCollisionThickness;                                  // 0x0020(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct Engine.SkeletalMesh.ClothingAssetData
	 * Size -> 0x0040
	 */
	struct FClothingAssetData
	{
	public:
		class FName                                                AssetName;                                               // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		class FString                                              ApexFileName;                                            // 0x0008(0x0010) Edit, ZeroConstructor
		bool                                                       bClothPropertiesChanged;                                 // 0x0018(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_Y9SV[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FClothPhysicsProperties                             PhysicsProperties;                                       // 0x001C(0x0024) Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct Engine.EngineTypes.ConstrainComponentPropName
	 * Size -> 0x0008
	 */
	struct FConstrainComponentPropName
	{
	public:
		class FName                                                ComponentName;                                           // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct Engine.ConstraintInstance
	 * Size -> 0x0160
	 */
	struct FConstraintInstance
	{
	public:
		unsigned char                                              UnknownData_LE1I[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USceneComponent*                                     OwnerComponent;                                          // 0x0008(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_SA16[0xC];                                   // 0x0010(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                JointName;                                               // 0x001C(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor
		class FName                                                ConstraintBone1;                                         // 0x0024(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		class FName                                                ConstraintBone2;                                         // 0x002C(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector                                             Pos1;                                                    // 0x0034(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector                                             PriAxis1;                                                // 0x0040(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector                                             SecAxis1;                                                // 0x004C(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector                                             Pos2;                                                    // 0x0058(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector                                             PriAxis2;                                                // 0x0064(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector                                             SecAxis2;                                                // 0x0070(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bDisableCollision : 1;                                   // 0x007C(0x0001) BIT_FIELD Edit, NoDestructor
		bool                                                       bEnableProjection : 1;                                   // 0x007C(0x0001) BIT_FIELD Edit, NoDestructor
		unsigned char                                              UnknownData_4H07[0x3];                                   // 0x007D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ProjectionLinearTolerance;                               // 0x0080(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      ProjectionAngularTolerance;                              // 0x0084(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		ELinearConstraintMotion                                    LinearXMotion;                                           // 0x0088(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		ELinearConstraintMotion                                    LinearYMotion;                                           // 0x0089(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		ELinearConstraintMotion                                    LinearZMotion;                                           // 0x008A(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_6UEV[0x1];                                   // 0x008B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      LinearLimitSize;                                         // 0x008C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bLinearLimitSoft : 1;                                    // 0x0090(0x0001) BIT_FIELD Edit, NoDestructor, AdvancedDisplay
		unsigned char                                              UnknownData_PCDP[0x3];                                   // 0x0091(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      LinearLimitStiffness;                                    // 0x0094(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay
		float                                                      LinearLimitDamping;                                      // 0x0098(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay
		bool                                                       bLinearBreakable : 1;                                    // 0x009C(0x0001) BIT_FIELD Edit, NoDestructor, AdvancedDisplay
		unsigned char                                              UnknownData_BOF5[0x3];                                   // 0x009D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      LinearBreakThreshold;                                    // 0x00A0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay
		bool                                                       bSwingLimited : 1;                                       // 0x00A4(0x0001) BIT_FIELD Deprecated, NoDestructor
		bool                                                       bTwistLimited : 1;                                       // 0x00A4(0x0001) BIT_FIELD Deprecated, NoDestructor
		unsigned char                                              UnknownData_YJQA[0x3];                                   // 0x00A5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		EAngularConstraintMotion                                   AngularSwing1Motion;                                     // 0x00A8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		EAngularConstraintMotion                                   AngularTwistMotion;                                      // 0x00A9(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		EAngularConstraintMotion                                   AngularSwing2Motion;                                     // 0x00AA(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_SP1J[0x1];                                   // 0x00AB(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bSwingLimitSoft : 1;                                     // 0x00AC(0x0001) BIT_FIELD Edit, NoDestructor, AdvancedDisplay
		bool                                                       bTwistLimitSoft : 1;                                     // 0x00AC(0x0001) BIT_FIELD Edit, NoDestructor, AdvancedDisplay
		unsigned char                                              UnknownData_JTYF[0x3];                                   // 0x00AD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Swing1LimitAngle;                                        // 0x00B0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      TwistLimitAngle;                                         // 0x00B4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      Swing2LimitAngle;                                        // 0x00B8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      SwingLimitStiffness;                                     // 0x00BC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay
		float                                                      SwingLimitDamping;                                       // 0x00C0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay
		float                                                      TwistLimitStiffness;                                     // 0x00C4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay
		float                                                      TwistLimitDamping;                                       // 0x00C8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay
		struct FRotator                                            AngularRotationOffset;                                   // 0x00CC(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bAngularBreakable : 1;                                   // 0x00D8(0x0001) BIT_FIELD Edit, NoDestructor, AdvancedDisplay
		unsigned char                                              UnknownData_06VW[0x3];                                   // 0x00D9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      AngularBreakThreshold;                                   // 0x00DC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay
		bool                                                       bLinearXPositionDrive : 1;                               // 0x00E0(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor
		bool                                                       bLinearXVelocityDrive : 1;                               // 0x00E0(0x0001) BIT_FIELD Deprecated, NoDestructor
		bool                                                       bLinearYPositionDrive : 1;                               // 0x00E0(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor
		bool                                                       bLinearYVelocityDrive : 1;                               // 0x00E0(0x0001) BIT_FIELD Deprecated, NoDestructor
		bool                                                       bLinearZPositionDrive : 1;                               // 0x00E0(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor
		bool                                                       bLinearZVelocityDrive : 1;                               // 0x00E0(0x0001) BIT_FIELD Deprecated, NoDestructor
		bool                                                       bLinearPositionDrive : 1;                                // 0x00E0(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor
		bool                                                       bLinearVelocityDrive : 1;                                // 0x00E0(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor
		unsigned char                                              UnknownData_HUR4[0x3];                                   // 0x00E1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             LinearPositionTarget;                                    // 0x00E4(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector                                             LinearVelocityTarget;                                    // 0x00F0(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      LinearDriveSpring;                                       // 0x00FC(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      LinearDriveDamping;                                      // 0x0100(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      LinearDriveForceLimit;                                   // 0x0104(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bSwingPositionDrive : 1;                                 // 0x0108(0x0001) BIT_FIELD Deprecated, NoDestructor
		bool                                                       bSwingVelocityDrive : 1;                                 // 0x0108(0x0001) BIT_FIELD Deprecated, NoDestructor
		bool                                                       bTwistPositionDrive : 1;                                 // 0x0108(0x0001) BIT_FIELD Deprecated, NoDestructor
		bool                                                       bTwistVelocityDrive : 1;                                 // 0x0108(0x0001) BIT_FIELD Deprecated, NoDestructor
		bool                                                       bAngularSlerpDrive : 1;                                  // 0x0108(0x0001) BIT_FIELD Deprecated, NoDestructor
		bool                                                       bAngularOrientationDrive : 1;                            // 0x0108(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor
		bool                                                       bAngularVelocityDrive : 1;                               // 0x0108(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor
		unsigned char                                              UnknownData_OEM6[0x7];                                   // 0x0109(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FQuat                                               AngularPositionTarget;                                   // 0x0110(0x0010) Deprecated, IsPlainOldData, NoDestructor
		EAngularDriveMode                                          AngularDriveMode;                                        // 0x0120(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_YA43[0x3];                                   // 0x0121(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRotator                                            AngularOrientationTarget;                                // 0x0124(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector                                             AngularVelocityTarget;                                   // 0x0130(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      AngularDriveSpring;                                      // 0x013C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      AngularDriveDamping;                                     // 0x0140(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      AngularDriveForceLimit;                                  // 0x0144(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_RILK[0x18];                                  // 0x0148(0x0018) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.SkeletalMeshComponent.IKLegInfo
	 * Size -> 0x00E0
	 */
	struct FIKLegInfo
	{
	public:
		struct FRotator                                            OldTipRotation;                                          // 0x0000(0x000C) ZeroConstructor, Transient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_PKK1[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FQuat                                               OldTipRotationQuat;                                      // 0x0010(0x0010) Transient, IsPlainOldData, NoDestructor
		TArray<struct FVector>                                     FabrikPositions;                                         // 0x0020(0x0010) ZeroConstructor, Transient
		class FName                                                RootBoneName;                                            // 0x0030(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class FName                                                IKBoneName;                                              // 0x0038(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      FeetOffset;                                              // 0x0040(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FRotator                                            IKBoneRotationOffset;                                    // 0x0044(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector                                             HitNormalWS;                                             // 0x0050(0x000C) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor
		struct FVector                                             HitLocationWS;                                           // 0x005C(0x000C) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor
		struct FVector                                             LastTargetHitNormalWS;                                   // 0x0068(0x000C) ZeroConstructor, Transient, IsPlainOldData, NoDestructor
		struct FVector                                             LastTargetHitLocationWS;                                 // 0x0074(0x000C) ZeroConstructor, Transient, IsPlainOldData, NoDestructor
		struct FTransform                                          EffectorTransformCS;                                     // 0x0080(0x0030) BlueprintVisible, BlueprintReadOnly, Transient, IsPlainOldData, NoDestructor
		float                                                      IKAlpha;                                                 // 0x00B0(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor
		struct FBoneReference                                      TipBone;                                                 // 0x00B4(0x000C) Transient
		struct FBoneReference                                      RootBone;                                                // 0x00C0(0x000C) Transient
		bool                                                       bInit;                                                   // 0x00CC(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor
		bool                                                       bHasGround;                                              // 0x00CD(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_3A3X[0x2];                                   // 0x00CE(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    Mute;                                                    // 0x00D0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      TimeIKStarted;                                           // 0x00D4(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_OTXW[0x8];                                   // 0x00D8(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.SkeletalMeshComponent.IKGroundPlaneOverrideInfo
	 * Size -> 0x004C
	 */
	struct FIKGroundPlaneOverrideInfo
	{
	public:
		struct FVector                                             RootLocationOffset;                                      // 0x0000(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bUseActorRootInstead : 1;                                // 0x000C(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor
		unsigned char                                              UnknownData_FMUV[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             HitLocationWS;                                           // 0x0010(0x000C) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor
		struct FVector                                             HitLocationCS;                                           // 0x001C(0x000C) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor
		struct FVector                                             CachedHitLocationWS;                                     // 0x0028(0x000C) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor
		struct FVector                                             CachedHitLocationCS;                                     // 0x0034(0x000C) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor
		struct FVector                                             HitLocationTargetWS;                                     // 0x0040(0x000C) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct Engine.SkeletalMeshComponent.IKRootAdjustmentInfo
	 * Size -> 0x0030
	 */
	struct FIKRootAdjustmentInfo
	{
	public:
		class FName                                                RootBoneName;                                            // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector                                             NonBoneRootLocationOffset;                               // 0x0008(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      TraceExtraZBuffer;                                       // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      TraceLength;                                             // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bUseActorRootInsteadForNonBone : 1;                      // 0x001C(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor
		unsigned char                                              UnknownData_LPLH[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      DistanceTracedFromStartPoint;                            // 0x0020(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor
		struct FVector                                             CachedDistanceTraced;                                    // 0x0024(0x000C) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct Engine.SkeletalMeshComponent.SingleAnimationPlayData
	 * Size -> 0x0020
	 */
	struct FSingleAnimationPlayData
	{
	public:
		class UAnimationAsset*                                     AnimToPlay;                                              // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UVertexAnimation*                                    VertexAnimToPlay;                                        // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bSavedLooping : 1;                                       // 0x0010(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor
		bool                                                       bSavedPlaying : 1;                                       // 0x0010(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor
		unsigned char                                              UnknownData_O5GB[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      SavedPosition;                                           // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      SavedPlayRate;                                           // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay
		unsigned char                                              UnknownData_DKJK[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.SkeletalMeshComponent.BoneModifier
	 * Size -> 0x0020
	 */
	struct FBoneModifier
	{
	public:
		int32_t                                                    BoneIndex;                                               // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector                                             Scale;                                                   // 0x0004(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector                                             Translation;                                             // 0x0010(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       Recursive;                                               // 0x001C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_ILI9[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.SkeletalMeshComponent.BoneModifierNamed
	 * Size -> 0x0028
	 */
	struct FBoneModifierNamed
	{
	public:
		class FName                                                TheBoneName;                                             // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FBoneModifier                                       TheBoneModifier;                                         // 0x0008(0x0020) Edit, BlueprintVisible
	};

	/**
	 * ScriptStruct Engine.WheeledVehicleMovementComponent.WheelSetup
	 * Size -> 0x0020
	 */
	struct FWheelSetup
	{
	public:
		class UClass*                                              WheelClass;                                              // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		class FName                                                BoneName;                                                // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector                                             AdditionalOffset;                                        // 0x0010(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_RFYZ[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.WheeledVehicleMovementComponent.ReplicatedVehicleState
	 * Size -> 0x0014
	 */
	struct FReplicatedVehicleState
	{
	public:
		float                                                      SteeringInput;                                           // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      ThrottleInput;                                           // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      BrakeInput;                                              // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      HandbrakeInput;                                          // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		int32_t                                                    CurrentGear;                                             // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct Engine.WheeledVehicleMovementComponent.VehicleInputRate
	 * Size -> 0x0008
	 */
	struct FVehicleInputRate
	{
	public:
		float                                                      RiseRate;                                                // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      FallRate;                                                // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct Engine.WheeledVehicleMovementComponent4W.VehicleEngineData
	 * Size -> 0x0088
	 */
	struct FVehicleEngineData
	{
	public:
		struct FRuntimeFloatCurve                                  TorqueCurve;                                             // 0x0000(0x0070) Edit
		float                                                      MaxRPM;                                                  // 0x0070(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      MOI;                                                     // 0x0074(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      DampingRateFullThrottle;                                 // 0x0078(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay
		float                                                      DampingRateZeroThrottleClutchEngaged;                    // 0x007C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay
		float                                                      DampingRateZeroThrottleClutchDisengaged;                 // 0x0080(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay
		unsigned char                                              UnknownData_46NX[0x4];                                   // 0x0084(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.WheeledVehicleMovementComponent4W.VehicleDifferential4WData
	 * Size -> 0x001C
	 */
	struct FVehicleDifferential4WData
	{
	public:
		EVehicleDifferential4W                                     DifferentialType;                                        // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_4201[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      FrontRearSplit;                                          // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      FrontLeftRightSplit;                                     // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      RearLeftRightSplit;                                      // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      CentreBias;                                              // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      FrontBias;                                               // 0x0014(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      RearBias;                                                // 0x0018(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct Engine.WheeledVehicleMovementComponent4W.VehicleGearData
	 * Size -> 0x000C
	 */
	struct FVehicleGearData
	{
	public:
		float                                                      Ratio;                                                   // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      DownRatio;                                               // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      UpRatio;                                                 // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct Engine.WheeledVehicleMovementComponent4W.VehicleTransmissionData
	 * Size -> 0x0030
	 */
	struct FVehicleTransmissionData
	{
	public:
		bool                                                       bUseGearAutoBox;                                         // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_RA61[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      GearSwitchTime;                                          // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      GearAutoBoxLatency;                                      // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      FinalRatio;                                              // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay
		TArray<struct FVehicleGearData>                            ForwardGears;                                            // 0x0010(0x0010) Edit, ZeroConstructor, AdvancedDisplay
		float                                                      ReverseGearRatio;                                        // 0x0020(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay
		float                                                      NeutralGearUpRatio;                                      // 0x0024(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay
		float                                                      ClutchStrength;                                          // 0x0028(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay
		unsigned char                                              UnknownData_765Q[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.AtmosphericFogComponent.AtmospherePrecomputeParameters
	 * Size -> 0x002C
	 */
	struct FAtmospherePrecomputeParameters
	{
	public:
		float                                                      DensityHeight;                                           // 0x0000(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      DecayHeight;                                             // 0x0004(0x0004) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor
		int32_t                                                    MaxScatteringOrder;                                      // 0x0008(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor
		int32_t                                                    TransmittanceTexWidth;                                   // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		int32_t                                                    TransmittanceTexHeight;                                  // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		int32_t                                                    IrradianceTexWidth;                                      // 0x0014(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		int32_t                                                    IrradianceTexHeight;                                     // 0x0018(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		int32_t                                                    InscatterAltitudeSampleNum;                              // 0x001C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor
		int32_t                                                    InscatterMuNum;                                          // 0x0020(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		int32_t                                                    InscatterMuSNum;                                         // 0x0024(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		int32_t                                                    InscatterNuNum;                                          // 0x0028(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct Engine.SoundAttenuation.AttenuationSettings
	 * Size -> 0x0034
	 */
	struct FAttenuationSettings
	{
	public:
		bool                                                       bAttenuate : 1;                                          // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor
		bool                                                       bSpatialize : 1;                                         // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor
		bool                                                       bAttenuateWithLPF : 1;                                   // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor
		unsigned char                                              UnknownData_NSH7[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		ESoundDistanceModel                                        DistanceAlgorithm;                                       // 0x0004(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		ESoundDistanceCalc                                         DistanceType;                                            // 0x0005(0x0001) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor
		EAttenuationShape                                          AttenuationShape;                                        // 0x0006(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_QEAK[0x1];                                   // 0x0007(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      dBAttenuationAtMax;                                      // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      OmniRadius;                                              // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      RadiusMin;                                               // 0x0010(0x0004) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor
		float                                                      RadiusMax;                                               // 0x0014(0x0004) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor
		struct FVector                                             AttenuationShapeExtents;                                 // 0x0018(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      ConeOffset;                                              // 0x0024(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      FalloffDistance;                                         // 0x0028(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      LPFRadiusMin;                                            // 0x002C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      LPFRadiusMax;                                            // 0x0030(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct Engine.AudioComponent.AudioComponentParam
	 * Size -> 0x0028
	 */
	struct FAudioComponentParam
	{
	public:
		class FName                                                ParamName;                                               // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      FloatParam;                                              // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       BoolParam;                                               // 0x000C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_J3I2[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    IntParam;                                                // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_MVMM[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USoundNodeWave*                                      WaveParam;                                               // 0x0018(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor
		class USoundWave*                                          SoundWaveParam;                                          // 0x0020(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct Engine.EngineTypes.SubtitleCue
	 * Size -> 0x0030
	 */
	struct FSubtitleCue
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018) ELEMENT_SIZE_MISMATCH Edit, BlueprintVisible
		unsigned char                                              UnknownData_W753[0x10];                                  // 0x0018(0x0010) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		float                                                      Time;                                                    // 0x0028(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_ZHF4[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.EngineTypes.LightmassLightSettings
	 * Size -> 0x000C
	 */
	struct FLightmassLightSettings
	{
	public:
		float                                                      IndirectLightingScale;                                   // 0x0000(0x0004) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor
		float                                                      IndirectLightingSaturation;                              // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      ShadowExponent;                                          // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct Engine.EngineTypes.LightmassDirectionalLightSettings
	 * Size -> 0x0004 (FullSize[0x0010] - InheritedSize[0x000C])
	 */
	struct FLightmassDirectionalLightSettings : public FLightmassLightSettings
	{
	public:
		float                                                      LightSourceAngle;                                        // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct Engine.EngineTypes.LightmassPointLightSettings
	 * Size -> 0x0000 (FullSize[0x000C] - InheritedSize[0x000C])
	 */
	struct FLightmassPointLightSettings : public FLightmassLightSettings
	{	};

	/**
	 * ScriptStruct Engine.NavigationGraph.NavGraphNode
	 * Size -> 0x0018
	 */
	struct FNavGraphNode
	{
	public:
		class UObject*                                             Owner;                                                   // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_3QJS[0x10];                                  // 0x0008(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.LandscapeComponent.WeightmapLayerAllocationInfo
	 * Size -> 0x0018
	 */
	struct FWeightmapLayerAllocationInfo
	{
	public:
		class FName                                                LayerName;                                               // 0x0000(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor
		class ULandscapeLayerInfoObject*                           LayerInfo;                                               // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              WeightmapTextureIndex;                                   // 0x0010(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              WeightmapTextureChannel;                                 // 0x0011(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_ZQ6P[0x6];                                   // 0x0012(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.MaterialBillboardComponent.MaterialSpriteElement
	 * Size -> 0x0028
	 */
	struct FMaterialSpriteElement
	{
	public:
		class UMaterialInterface*                                  Material;                                                // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UCurveFloat*                                         DistanceToOpacityCurve;                                  // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bSizeIsInScreenSpace : 1;                                // 0x0010(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor
		unsigned char                                              UnknownData_IOXO[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      BaseSizeX;                                               // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      BaseSizeY;                                               // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_AJZI[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCurveFloat*                                         DistanceToSizeCurve;                                     // 0x0020(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct Engine.EngineTypes.FractureEffect
	 * Size -> 0x0010
	 */
	struct FFractureEffect
	{
	public:
		class UParticleSystem*                                     ParticleSystem;                                          // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class USoundBase*                                          Sound;                                                   // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct Engine.StaticMeshComponent.PaintedVertex
	 * Size -> 0x0014
	 */
	struct FPaintedVertex
	{
	public:
		struct FVector                                             Position;                                                // 0x0000(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor
		struct FPackedNormal                                       Normal;                                                  // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		struct FColor                                              Color;                                                   // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct Engine.StaticMeshComponent.StaticMeshComponentLODInfo
	 * Size -> 0x0028
	 */
	struct FStaticMeshComponentLODInfo
	{
	public:
		unsigned char                                              UnknownData_372O[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FPaintedVertex>                              PaintedVertices;                                         // 0x0010(0x0010) ZeroConstructor
		unsigned char                                              UnknownData_RTSV[0x8];                                   // 0x0020(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.InstancedStaticMeshComponent.InstancedStaticMeshInstanceData
	 * Size -> 0x0050
	 */
	struct FInstancedStaticMeshInstanceData
	{
	public:
		struct FMatrix                                             Transform;                                               // 0x0000(0x0040) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector2D                                           LightmapUVBias;                                          // 0x0040(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector2D                                           ShadowmapUVBias;                                         // 0x0048(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct Engine.SplineMeshComponent.SplineMeshParams
	 * Size -> 0x0058
	 */
	struct FSplineMeshParams
	{
	public:
		struct FVector                                             StartPos;                                                // 0x0000(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector                                             StartTangent;                                            // 0x000C(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector2D                                           StartScale;                                              // 0x0018(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay
		float                                                      StartRoll;                                               // 0x0020(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay
		struct FVector2D                                           StartOffset;                                             // 0x0024(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay
		struct FVector                                             EndPos;                                                  // 0x002C(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector                                             EndTangent;                                              // 0x0038(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector2D                                           EndScale;                                                // 0x0044(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay
		float                                                      EndRoll;                                                 // 0x004C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay
		struct FVector2D                                           EndOffset;                                               // 0x0050(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay
	};

	/**
	 * ScriptStruct Engine.ParticleSystem.ParticleSystemLOD
	 * Size -> 0x0001
	 */
	struct FParticleSystemLOD
	{
	public:
		unsigned char                                              UnknownData_PIPM[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.ParticleSystem.LODSoloTrack
	 * Size -> 0x0010
	 */
	struct FLODSoloTrack
	{
	public:
		TArray<unsigned char>                                      SoloEnableSetting;                                       // 0x0000(0x0010) ZeroConstructor, Transient
	};

	/**
	 * ScriptStruct Engine.ParticleSystem.NamedEmitterMaterial
	 * Size -> 0x0010
	 */
	struct FNamedEmitterMaterial
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		class UMaterialInterface*                                  Material;                                                // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct Engine.TimelineComponent.TimelineEventEntry
	 * Size -> 0x0014
	 */
	struct FTimelineEventEntry
	{
	public:
		float                                                      Time;                                                    // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		class FScriptDelegate                                      EventFunc;                                               // 0x0004(0x0010) ZeroConstructor, InstancedReference, NoDestructor
	};

	/**
	 * ScriptStruct Engine.TimelineComponent.TimelineVectorTrack
	 * Size -> 0x0030
	 */
	struct FTimelineVectorTrack
	{
	public:
		class UCurveVector*                                        VectorCurve;                                             // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor
		class FScriptDelegate                                      InterpFunc;                                              // 0x0008(0x0010) ZeroConstructor, InstancedReference, NoDestructor
		class FName                                                VectorPropertyName;                                      // 0x0018(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor
		class UStructProperty*                                     VectorProperty;                                          // 0x0020(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_JL5A[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.TimelineComponent.TimelineFloatTrack
	 * Size -> 0x0030
	 */
	struct FTimelineFloatTrack
	{
	public:
		class UCurveFloat*                                         FloatCurve;                                              // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor
		class FScriptDelegate                                      InterpFunc;                                              // 0x0008(0x0010) ZeroConstructor, InstancedReference, NoDestructor
		class FName                                                FloatPropertyName;                                       // 0x0018(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor
		class UFloatProperty*                                      FloatProperty;                                           // 0x0020(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_T3S9[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.TimelineComponent.TimelineLinearColorTrack
	 * Size -> 0x0030
	 */
	struct FTimelineLinearColorTrack
	{
	public:
		class UCurveLinearColor*                                   LinearColorCurve;                                        // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor
		class FScriptDelegate                                      InterpFunc;                                              // 0x0008(0x0010) ZeroConstructor, InstancedReference, NoDestructor
		class FName                                                LinearColorPropertyName;                                 // 0x0018(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor
		class UStructProperty*                                     LinearColorProperty;                                     // 0x0020(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_AKFY[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.TimelineComponent.Timeline
	 * Size -> 0x0098
	 */
	struct FTimeline
	{
	public:
		ETimelineLengthMode                                        LengthMode;                                              // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor
		unsigned char                                              UnknownData_HBOM[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Length;                                                  // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor
		bool                                                       bLooping : 1;                                            // 0x0008(0x0001) BIT_FIELD NoDestructor
		bool                                                       bReversePlayback : 1;                                    // 0x0008(0x0001) BIT_FIELD NoDestructor
		bool                                                       bPlaying : 1;                                            // 0x0008(0x0001) BIT_FIELD NoDestructor
		unsigned char                                              UnknownData_C8RK[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      PlayRate;                                                // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      Position;                                                // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_3HRW[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FTimelineEventEntry>                         Events;                                                  // 0x0018(0x0010) ZeroConstructor, RepSkip, ContainsInstancedReference
		TArray<struct FTimelineVectorTrack>                        InterpVectors;                                           // 0x0028(0x0010) ZeroConstructor, RepSkip, ContainsInstancedReference
		TArray<struct FTimelineFloatTrack>                         InterpFloats;                                            // 0x0038(0x0010) ZeroConstructor, RepSkip, ContainsInstancedReference
		TArray<struct FTimelineLinearColorTrack>                   InterpLinearColors;                                      // 0x0048(0x0010) ZeroConstructor, RepSkip, ContainsInstancedReference
		class FScriptDelegate                                      TimelinePostUpdateFunc;                                  // 0x0058(0x0010) ZeroConstructor, InstancedReference, RepSkip, NoDestructor
		class FScriptDelegate                                      TimelineFinishedFunc;                                    // 0x0068(0x0010) ZeroConstructor, InstancedReference, RepSkip, NoDestructor
		unsigned char                                              UnknownData_RFIK[0x8];                                   // 0x0078(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TWeakObjectPtr<class UObject>                              PropertySetObject;                                       // 0x0080(0x0008) ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor
		class FName                                                DirectionPropertyName;                                   // 0x0088(0x0008) ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor
		class UByteProperty*                                       DirectionProperty;                                       // 0x0090(0x0008) ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
	};

	/**
	 * ScriptStruct Engine.AnimSequenceBase.AnimNotifyEvent
	 * Size -> 0x0030
	 */
	struct FAnimNotifyEvent
	{
	public:
		float                                                      DisplayTime;                                             // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      TriggerTimeOffset;                                       // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      EndTriggerTimeOffset;                                    // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      TriggerWeightThreshold;                                  // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class FName                                                NotifyName;                                              // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UAnimNotify*                                         Notify;                                                  // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UAnimNotifyState*                                    NotifyStateClass;                                        // 0x0020(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bIgnoreOnDediServer;                                     // 0x0028(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_BJAW[0x3];                                   // 0x0029(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Duration;                                                // 0x002C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct Engine.AnimSequenceBase.AnimCurveBase
	 * Size -> 0x0018
	 */
	struct FAnimCurveBase
	{
	public:
		unsigned char                                              UnknownData_XK8X[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                LastObservedName;                                        // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_4RBR[0x8];                                   // 0x0010(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.AnimSequenceBase.FloatCurve
	 * Size -> 0x0070 (FullSize[0x0088] - InheritedSize[0x0018])
	 */
	struct FFloatCurve : public FAnimCurveBase
	{
	public:
		struct FRichCurve                                          FloatCurve;                                              // 0x0018(0x0068)
		int32_t                                                    CurveTypeFlags;                                          // 0x0080(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_5WIT[0x4];                                   // 0x0084(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.AnimSequenceBase.RawCurveTracks
	 * Size -> 0x0010
	 */
	struct FRawCurveTracks
	{
	public:
		TArray<struct FFloatCurve>                                 FloatCurves;                                             // 0x0000(0x0010) ZeroConstructor
	};

	/**
	 * ScriptStruct Engine.AnimCompositeBase.AnimSegment
	 * Size -> 0x0028
	 */
	struct FAnimSegment
	{
	public:
		class UAnimSequenceBase*                                   AnimReference;                                           // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      StartPos;                                                // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor
		float                                                      AnimStartOffset;                                         // 0x000C(0x0004) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor
		float                                                      AnimEndOffset;                                           // 0x0010(0x0004) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor
		float                                                      AnimStartTime;                                           // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      AnimEndTime;                                             // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      AnimPlayRate;                                            // 0x001C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		int32_t                                                    LoopingCount;                                            // 0x0020(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_PW9T[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.AnimCompositeBase.AnimTrack
	 * Size -> 0x0010
	 */
	struct FAnimTrack
	{
	public:
		TArray<struct FAnimSegment>                                AnimSegments;                                            // 0x0000(0x0010) Edit, BlueprintVisible, EditFixedSize, ZeroConstructor
	};

	/**
	 * ScriptStruct Engine.AnimSequence.TrackToSkeletonMap
	 * Size -> 0x0008
	 */
	struct FTrackToSkeletonMap
	{
	public:
		int32_t                                                    SkeletonIndex;                                           // 0x0000(0x0004) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor
		int32_t                                                    BoneTreeIndex;                                           // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct Engine.AnimSequence.TranslationTrack
	 * Size -> 0x0020
	 */
	struct FTranslationTrack
	{
	public:
		TArray<struct FVector>                                     PosKeys;                                                 // 0x0000(0x0010) ZeroConstructor
		TArray<float>                                              Times;                                                   // 0x0010(0x0010) ZeroConstructor
	};

	/**
	 * ScriptStruct Engine.AnimSequence.RotationTrack
	 * Size -> 0x0020
	 */
	struct FRotationTrack
	{
	public:
		TArray<struct FQuat>                                       RotKeys;                                                 // 0x0000(0x0010) ZeroConstructor
		TArray<float>                                              Times;                                                   // 0x0010(0x0010) ZeroConstructor
	};

	/**
	 * ScriptStruct Engine.AnimSequence.ScaleTrack
	 * Size -> 0x0020
	 */
	struct FScaleTrack
	{
	public:
		TArray<struct FVector>                                     ScaleKeys;                                               // 0x0000(0x0010) ZeroConstructor
		TArray<float>                                              Times;                                                   // 0x0010(0x0010) ZeroConstructor
	};

	/**
	 * ScriptStruct Engine.AnimSequence.CurveTrack
	 * Size -> 0x0018
	 */
	struct FCurveTrack
	{
	public:
		class FName                                                CurveName;                                               // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor
		TArray<float>                                              CurveWeights;                                            // 0x0008(0x0010) ZeroConstructor
	};

	/**
	 * ScriptStruct Engine.AnimSequence.CompressedOffsetData
	 * Size -> 0x0018
	 */
	struct FCompressedOffsetData
	{
	public:
		TArray<int32_t>                                            OffsetData;                                              // 0x0000(0x0010) ZeroConstructor
		int32_t                                                    StripSize;                                               // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_Q60Q[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.AnimMontage.CompositeSection
	 * Size -> 0x0018
	 */
	struct FCompositeSection
	{
	public:
		class FName                                                SectionName;                                             // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      StarTime;                                                // 0x0008(0x0004) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor
		float                                                      StartTime;                                               // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		class FName                                                NextSectionName;                                         // 0x0010(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct Engine.AnimMontage.SlotAnimationTrack
	 * Size -> 0x0018
	 */
	struct FSlotAnimationTrack
	{
	public:
		class FName                                                SlotName;                                                // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FAnimTrack                                          AnimTrack;                                               // 0x0008(0x0010) Edit
	};

	/**
	 * ScriptStruct Engine.AnimMontage.BranchingPoint
	 * Size -> 0x0010
	 */
	struct FBranchingPoint
	{
	public:
		class FName                                                EventName;                                               // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      DisplayTime;                                             // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      TriggerTimeOffset;                                       // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct Engine.BlendSpaceBase.BlendParameter
	 * Size -> 0x0020
	 */
	struct FBlendParameter
	{
	public:
		class FString                                              DisplayName;                                             // 0x0000(0x0010) Edit, ZeroConstructor
		float                                                      Min;                                                     // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      Max;                                                     // 0x0014(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      Offset;                                                  // 0x0018(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		int32_t                                                    GridNum;                                                 // 0x001C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct Engine.BlendSpaceBase.InterpolationParameter
	 * Size -> 0x0008
	 */
	struct FInterpolationParameter
	{
	public:
		float                                                      InterpolationTime;                                       // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		EFilterInterpolationType                                   InterpolationType;                                       // 0x0004(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_70UE[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.BlendSpaceBase.PerBoneInterpolation
	 * Size -> 0x0010
	 */
	struct FPerBoneInterpolation
	{
	public:
		struct FBoneReference                                      BoneReference;                                           // 0x0000(0x000C) Edit
		float                                                      InterpolationSpeedPerSec;                                // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct Engine.BlendSpaceBase.BlendSample
	 * Size -> 0x0018
	 */
	struct FBlendSample
	{
	public:
		class UAnimSequence*                                       Animation;                                               // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector                                             SampleValue;                                             // 0x0008(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_DC11[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.BlendSpaceBase.EditorElement
	 * Size -> 0x0018
	 */
	struct FEditorElement
	{
	public:
		int32_t                                                    Indices[0x3];                                            // 0x0000(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      Weights[0x3];                                            // 0x000C(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct Engine.AnimationAsset.BlendSampleData
	 * Size -> 0x0020
	 */
	struct FBlendSampleData
	{
	public:
		int32_t                                                    SampleDataIndex;                                         // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      TotalWeight;                                             // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      Time;                                                    // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_S0LN[0x14];                                  // 0x000C(0x0014) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.AnimationAsset.BlendFilter
	 * Size -> 0x0090
	 */
	struct FBlendFilter
	{
	public:
		unsigned char                                              UnknownData_CUU6[0x90];                                  // 0x0000(0x0090) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.AnimSet.AnimSetMeshLinkup
	 * Size -> 0x0010
	 */
	struct FAnimSetMeshLinkup
	{
	public:
		TArray<int32_t>                                            BoneToTrackTable;                                        // 0x0000(0x0010) ZeroConstructor
	};

	/**
	 * ScriptStruct Engine.EngineTypes.FilePath
	 * Size -> 0x0010
	 */
	struct FFilePath
	{
	public:
		class FString                                              FilePath;                                                // 0x0000(0x0010) Edit, ZeroConstructor
	};

	/**
	 * ScriptStruct Engine.AutomationTestSettings.EditorMapPerformanceTestDefinition
	 * Size -> 0x0018
	 */
	struct FEditorMapPerformanceTestDefinition
	{
	public:
		struct FFilePath                                           PerformanceTestmap;                                      // 0x0000(0x0010) Edit, Config
		int32_t                                                    TestTimer;                                               // 0x0010(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_IHNP[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.AutomationTestSettings.ImportFactorySettingValues
	 * Size -> 0x0020
	 */
	struct FImportFactorySettingValues
	{
	public:
		class FString                                              SettingName;                                             // 0x0000(0x0010) Edit, ZeroConstructor, Config
		class FString                                              Value;                                                   // 0x0010(0x0010) Edit, ZeroConstructor, Config
	};

	/**
	 * ScriptStruct Engine.AutomationTestSettings.EditorImportWorkflowDefinition
	 * Size -> 0x0020
	 */
	struct FEditorImportWorkflowDefinition
	{
	public:
		struct FFilePath                                           ImportFilePath;                                          // 0x0000(0x0010) Edit, Config
		TArray<struct FImportFactorySettingValues>                 FactorySettings;                                         // 0x0010(0x0010) Edit, ZeroConstructor, Config
	};

	/**
	 * ScriptStruct Engine.AutomationTestSettings.BuildPromotionImportWorkflowSettings
	 * Size -> 0x0150
	 */
	struct FBuildPromotionImportWorkflowSettings
	{
	public:
		struct FEditorImportWorkflowDefinition                     Diffuse;                                                 // 0x0000(0x0020) Edit, Config
		struct FEditorImportWorkflowDefinition                     Normal;                                                  // 0x0020(0x0020) Edit, Config
		struct FEditorImportWorkflowDefinition                     StaticMesh;                                              // 0x0040(0x0020) Edit, Config
		struct FEditorImportWorkflowDefinition                     ReimportStaticMesh;                                      // 0x0060(0x0020) Edit, Config
		struct FEditorImportWorkflowDefinition                     BlendShapeMesh;                                          // 0x0080(0x0020) Edit, Config
		struct FEditorImportWorkflowDefinition                     MorphMesh;                                               // 0x00A0(0x0020) Edit, Config
		struct FEditorImportWorkflowDefinition                     SkeletalMesh;                                            // 0x00C0(0x0020) Edit, Config
		struct FEditorImportWorkflowDefinition                     Animation;                                               // 0x00E0(0x0020) Edit, Config
		struct FEditorImportWorkflowDefinition                     Sound;                                                   // 0x0100(0x0020) Edit, Config
		struct FEditorImportWorkflowDefinition                     SurroundSound;                                           // 0x0120(0x0020) Edit, Config
		TArray<struct FEditorImportWorkflowDefinition>             OtherAssetsToImport;                                     // 0x0140(0x0010) Edit, ZeroConstructor, Config
	};

	/**
	 * ScriptStruct Engine.AutomationTestSettings.BuildPromotionOpenAssetSettings
	 * Size -> 0x0060
	 */
	struct FBuildPromotionOpenAssetSettings
	{
	public:
		struct FFilePath                                           BlueprintAsset;                                          // 0x0000(0x0010) Edit, Config
		struct FFilePath                                           MaterialAsset;                                           // 0x0010(0x0010) Edit, Config
		struct FFilePath                                           ParticleSystemAsset;                                     // 0x0020(0x0010) Edit, Config
		struct FFilePath                                           SkeletalMeshAsset;                                       // 0x0030(0x0010) Edit, Config
		struct FFilePath                                           StaticMeshAsset;                                         // 0x0040(0x0010) Edit, Config
		struct FFilePath                                           TextureAsset;                                            // 0x0050(0x0010) Edit, Config
	};

	/**
	 * ScriptStruct Engine.AutomationTestSettings.BuildPromotionBlueprintSettings
	 * Size -> 0x0020
	 */
	struct FBuildPromotionBlueprintSettings
	{
	public:
		struct FFilePath                                           FirstMeshPath;                                           // 0x0000(0x0010) Edit
		struct FFilePath                                           SecondMeshPath;                                          // 0x0010(0x0010) Edit
	};

	/**
	 * ScriptStruct Engine.EngineTypes.DirectoryPath
	 * Size -> 0x0010
	 */
	struct FDirectoryPath
	{
	public:
		class FString                                              Path;                                                    // 0x0000(0x0010) Edit, ZeroConstructor
	};

	/**
	 * ScriptStruct Engine.AutomationTestSettings.BuildPromotionNewProjectSettings
	 * Size -> 0x0020
	 */
	struct FBuildPromotionNewProjectSettings
	{
	public:
		struct FDirectoryPath                                      NewProjectFolderOverride;                                // 0x0000(0x0010) Edit
		class FString                                              NewProjectNameOverride;                                  // 0x0010(0x0010) Edit, ZeroConstructor
	};

	/**
	 * ScriptStruct Engine.AutomationTestSettings.BuildPromotionTestSettings
	 * Size -> 0x0210
	 */
	struct FBuildPromotionTestSettings
	{
	public:
		struct FFilePath                                           DefaultStaticMeshAsset;                                  // 0x0000(0x0010) Edit
		struct FBuildPromotionImportWorkflowSettings               ImportWorkflow;                                          // 0x0010(0x0150) Edit
		struct FBuildPromotionOpenAssetSettings                    OpenAssets;                                              // 0x0160(0x0060) Edit
		struct FBuildPromotionBlueprintSettings                    BlueprintSettings;                                       // 0x01C0(0x0020) Edit
		struct FBuildPromotionNewProjectSettings                   NewProjectSettings;                                      // 0x01E0(0x0020) Edit
		struct FFilePath                                           SourceControlMaterial;                                   // 0x0200(0x0010) Edit
	};

	/**
	 * ScriptStruct Engine.AutomationTestSettings.OpenTestAsset
	 * Size -> 0x0018
	 */
	struct FOpenTestAsset
	{
	public:
		struct FFilePath                                           AssetToOpen;                                             // 0x0000(0x0010) Edit
		bool                                                       bSkipTestWhenUnAttended;                                 // 0x0010(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_2VDM[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.AutomationTestSettings.ExternalToolDefinition
	 * Size -> 0x0060
	 */
	struct FExternalToolDefinition
	{
	public:
		class FString                                              ToolName;                                                // 0x0000(0x0010) Edit, ZeroConstructor, Config
		struct FFilePath                                           ExecutablePath;                                          // 0x0010(0x0010) Edit, Config
		class FString                                              CommandLineOptions;                                      // 0x0020(0x0010) Edit, ZeroConstructor, Config
		struct FDirectoryPath                                      WorkingDirectory;                                        // 0x0030(0x0010) Edit, Config
		class FString                                              ScriptExtension;                                         // 0x0040(0x0010) Edit, ZeroConstructor, Config
		struct FDirectoryPath                                      ScriptDirectory;                                         // 0x0050(0x0010) Edit, Config
	};

	/**
	 * ScriptStruct Engine.AutomationTestSettings.EditorImportExportTestDefinition
	 * Size -> 0x0038
	 */
	struct FEditorImportExportTestDefinition
	{
	public:
		struct FFilePath                                           ImportFilePath;                                          // 0x0000(0x0010) Edit, Config
		class FString                                              ExportFileExtension;                                     // 0x0010(0x0010) Edit, ZeroConstructor, Config
		bool                                                       bSkipExport;                                             // 0x0020(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_UDJC[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FImportFactorySettingValues>                 FactorySettings;                                         // 0x0028(0x0010) Edit, ZeroConstructor, Config
	};

	/**
	 * ScriptStruct Engine.AvoidanceManager.NavAvoidanceData
	 * Size -> 0x0038
	 */
	struct FNavAvoidanceData
	{
	public:
		unsigned char                                              UnknownData_ADZS[0x38];                                  // 0x0000(0x0038) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.EdGraphPin.SimpleMemberReference
	 * Size -> 0x0020
	 */
	struct FSimpleMemberReference
	{
	public:
		class UClass*                                              MemberParentClass;                                       // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor
		class FName                                                MemberName;                                              // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor
		struct FGuid                                               MemberGuid;                                              // 0x0010(0x0010) ZeroConstructor
	};

	/**
	 * ScriptStruct Engine.EdGraphPin.EdGraphPinType
	 * Size -> 0x0050
	 */
	struct FEdGraphPinType
	{
	public:
		class FString                                              PinCategory;                                             // 0x0000(0x0010) ZeroConstructor
		class FString                                              PinSubCategory;                                          // 0x0010(0x0010) ZeroConstructor
		TWeakObjectPtr<class UObject>                              PinSubCategoryObject;                                    // 0x0020(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor
		struct FSimpleMemberReference                              PinSubCategoryMemberReference;                           // 0x0028(0x0020)
		bool                                                       bIsArray;                                                // 0x0048(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bIsReference;                                            // 0x0049(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bIsConst;                                                // 0x004A(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bIsWeakPointer;                                          // 0x004B(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_Q0G5[0x4];                                   // 0x004C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.AnimBlueprint.AnimGroupInfo
	 * Size -> 0x0018
	 */
	struct FAnimGroupInfo
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor
		struct FLinearColor                                        Color;                                                   // 0x0008(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct Engine.DataTable.TableRowBase
	 * Size -> 0x0001
	 */
	struct FTableRowBase
	{
	public:
		unsigned char                                              UnknownData_1DAG[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.DialogueTypes.DialogueContext
	 * Size -> 0x0018
	 */
	struct FDialogueContext
	{
	public:
		class UDialogueVoice*                                      Speaker;                                                 // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		TArray<class UDialogueVoice*>                              Targets;                                                 // 0x0008(0x0010) Edit, ZeroConstructor
	};

	/**
	 * ScriptStruct Engine.KismetRenderingLibrary.DrawToRenderTargetContext
	 * Size -> 0x0010
	 */
	struct FDrawToRenderTargetContext
	{
	public:
		class UTextureRenderTarget2D*                              RenderTarget;                                            // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_K5Z1[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.KismetSystemLibrary.GenericStruct
	 * Size -> 0x0004
	 */
	struct FGenericStruct
	{
	public:
		int32_t                                                    Data;                                                    // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct Engine.EngineTypes.DebugFloatHistory
	 * Size -> 0x0020
	 */
	struct FDebugFloatHistory
	{
	public:
		TArray<float>                                              Samples;                                                 // 0x0000(0x0010) ZeroConstructor, Transient
		float                                                      MaxSamples;                                              // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      MinValue;                                                // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      MaxValue;                                                // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bAutoAdjustMinMax;                                       // 0x001C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_YTRX[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.KismetTextLibrary.FormatTextArgument
	 * Size -> 0x0050
	 */
	struct FFormatTextArgument
	{
	public:
		class FText                                                ArgumentName;                                            // 0x0000(0x0018) ELEMENT_SIZE_MISMATCH Edit, BlueprintVisible, DisableEditOnTemplate
		unsigned char                                              UnknownData_48IW[0x10];                                  // 0x0018(0x0010) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		class FText                                                TextValue;                                               // 0x0028(0x0018) ELEMENT_SIZE_MISMATCH Edit, BlueprintVisible, DisableEditOnTemplate
		unsigned char                                              UnknownData_M68H[0x10];                                  // 0x0040(0x0010) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	};

	/**
	 * ScriptStruct Engine.AnimStateMachineTypes.BakedStateExitTransition
	 * Size -> 0x0020
	 */
	struct FBakedStateExitTransition
	{
	public:
		int32_t                                                    CanTakeDelegateIndex;                                    // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		int32_t                                                    CustomResultNodeIndex;                                   // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		int32_t                                                    TransitionIndex;                                         // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bDesiredTransitionReturnValue;                           // 0x000C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_87YM[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<int32_t>                                            PoseEvaluatorLinks;                                      // 0x0010(0x0010) ZeroConstructor
	};

	/**
	 * ScriptStruct Engine.AnimStateMachineTypes.BakedAnimationState
	 * Size -> 0x0030
	 */
	struct FBakedAnimationState
	{
	public:
		class FName                                                StateName;                                               // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor
		TArray<struct FBakedStateExitTransition>                   Transitions;                                             // 0x0008(0x0010) ZeroConstructor
		int32_t                                                    StateRootNodeIndex;                                      // 0x0018(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		int32_t                                                    StartNotify;                                             // 0x001C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		int32_t                                                    EndNotify;                                               // 0x0020(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		int32_t                                                    FullyBlendedNotify;                                      // 0x0024(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bIsAConduit;                                             // 0x0028(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_GS0R[0x3];                                   // 0x0029(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    EntryRuleNodeIndex;                                      // 0x002C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct Engine.AnimStateMachineTypes.AnimationStateBase
	 * Size -> 0x0008
	 */
	struct FAnimationStateBase
	{
	public:
		class FName                                                StateName;                                               // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct Engine.AnimStateMachineTypes.AnimationTransitionBetweenStates
	 * Size -> 0x001C (FullSize[0x0024] - InheritedSize[0x0008])
	 */
	struct FAnimationTransitionBetweenStates : public FAnimationStateBase
	{
	public:
		int32_t                                                    PreviousState;                                           // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		int32_t                                                    NextState;                                               // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      CrossfadeDuration;                                       // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		int32_t                                                    StartNotify;                                             // 0x0014(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		int32_t                                                    EndNotify;                                               // 0x0018(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		int32_t                                                    InterruptNotify;                                         // 0x001C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		ETransitionBlendMode                                       CrossfadeMode;                                           // 0x0020(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		ETransitionLogicType                                       LogicType;                                               // 0x0021(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_FFV3[0x2];                                   // 0x0022(0x0002) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.AnimStateMachineTypes.BakedAnimationStateMachine
	 * Size -> 0x0030
	 */
	struct FBakedAnimationStateMachine
	{
	public:
		class FName                                                MachineName;                                             // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor
		int32_t                                                    InitialState;                                            // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_1VNQ[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FBakedAnimationState>                        States;                                                  // 0x0010(0x0010) ZeroConstructor
		TArray<struct FAnimationTransitionBetweenStates>           Transitions;                                             // 0x0020(0x0010) ZeroConstructor
	};

	/**
	 * ScriptStruct Engine.BodySetup.KSphereElem
	 * Size -> 0x0050
	 */
	struct FKSphereElem
	{
	public:
		struct FMatrix                                             TM;                                                      // 0x0000(0x0040) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor
		struct FVector                                             Center;                                                  // 0x0040(0x000C) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor
		float                                                      Radius;                                                  // 0x004C(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct Engine.BodySetup.KBoxElem
	 * Size -> 0x0070
	 */
	struct FKBoxElem
	{
	public:
		struct FMatrix                                             TM;                                                      // 0x0000(0x0040) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor
		struct FVector                                             Center;                                                  // 0x0040(0x000C) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_NIG6[0x4];                                   // 0x004C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FQuat                                               Orientation;                                             // 0x0050(0x0010) Edit, EditConst, IsPlainOldData, NoDestructor
		float                                                      X;                                                       // 0x0060(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor
		float                                                      Y;                                                       // 0x0064(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor
		float                                                      Z;                                                       // 0x0068(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_821Y[0x4];                                   // 0x006C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.BodySetup.KSphylElem
	 * Size -> 0x0070
	 */
	struct FKSphylElem
	{
	public:
		struct FMatrix                                             TM;                                                      // 0x0000(0x0040) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor
		struct FVector                                             Center;                                                  // 0x0040(0x000C) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_EWNL[0x4];                                   // 0x004C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FQuat                                               Orientation;                                             // 0x0050(0x0010) Edit, EditConst, IsPlainOldData, NoDestructor
		float                                                      Radius;                                                  // 0x0060(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor
		float                                                      Length;                                                  // 0x0064(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_PEAS[0x8];                                   // 0x0068(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.BodySetup.KConvexElem
	 * Size -> 0x0070
	 */
	struct FKConvexElem
	{
	public:
		TArray<struct FVector>                                     VertexData;                                              // 0x0000(0x0010) ZeroConstructor
		struct FBox                                                ElemBox;                                                 // 0x0010(0x001C) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_60TY[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Transform;                                               // 0x0030(0x0030) IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_1613[0x10];                                  // 0x0060(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.BodySetup.KAggregateGeom
	 * Size -> 0x0048
	 */
	struct FKAggregateGeom
	{
	public:
		TArray<struct FKSphereElem>                                SphereElems;                                             // 0x0000(0x0010) Edit, EditFixedSize, ZeroConstructor
		TArray<struct FKBoxElem>                                   BoxElems;                                                // 0x0010(0x0010) Edit, EditFixedSize, ZeroConstructor
		TArray<struct FKSphylElem>                                 SphylElems;                                              // 0x0020(0x0010) Edit, EditFixedSize, ZeroConstructor
		TArray<struct FKConvexElem>                                ConvexElems;                                             // 0x0030(0x0010) Edit, EditFixedSize, ZeroConstructor
		unsigned char                                              UnknownData_PO8H[0x8];                                   // 0x0040(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.CircleElement2D
	 * Size -> 0x000C
	 */
	struct FCircleElement2D
	{
	public:
		struct FVector2D                                           Center;                                                  // 0x0000(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor
		float                                                      Radius;                                                  // 0x0008(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct Engine.BoxElement2D
	 * Size -> 0x0014
	 */
	struct FBoxElement2D
	{
	public:
		struct FVector2D                                           Center;                                                  // 0x0000(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor
		float                                                      Width;                                                   // 0x0008(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor
		float                                                      Height;                                                  // 0x000C(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor
		float                                                      Angle;                                                   // 0x0010(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct Engine.ConvexElement2D
	 * Size -> 0x0010
	 */
	struct FConvexElement2D
	{
	public:
		TArray<struct FVector2D>                                   VertexData;                                              // 0x0000(0x0010) ZeroConstructor
	};

	/**
	 * ScriptStruct Engine.AggregateGeometry2D
	 * Size -> 0x0030
	 */
	struct FAggregateGeometry2D
	{
	public:
		TArray<struct FCircleElement2D>                            CircleElements;                                          // 0x0000(0x0010) Edit, EditFixedSize, ZeroConstructor
		TArray<struct FBoxElement2D>                               BoxElements;                                             // 0x0010(0x0010) Edit, EditFixedSize, ZeroConstructor
		TArray<struct FConvexElement2D>                            ConvexElements;                                          // 0x0020(0x0010) Edit, EditFixedSize, ZeroConstructor
	};

	/**
	 * ScriptStruct Engine.BoneMaskFilter.BranchFilter
	 * Size -> 0x000C
	 */
	struct FBranchFilter
	{
	public:
		class FName                                                BoneName;                                                // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		int32_t                                                    BlendDepth;                                              // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct Engine.BoneMaskFilter.InputBlendPose
	 * Size -> 0x0010
	 */
	struct FInputBlendPose
	{
	public:
		TArray<struct FBranchFilter>                               BranchFilters;                                           // 0x0000(0x0010) Edit, ZeroConstructor
	};

	/**
	 * ScriptStruct Engine.BrushBuilder.BuilderPoly
	 * Size -> 0x0020
	 */
	struct FBuilderPoly
	{
	public:
		TArray<int32_t>                                            VertexIndices;                                           // 0x0000(0x0010) ZeroConstructor
		int32_t                                                    Direction;                                               // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		class FName                                                ItemName;                                                // 0x0014(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor
		int32_t                                                    PolyFlags;                                               // 0x001C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct Engine.CameraModifier_CameraShake.CameraShakeInstance
	 * Size -> 0x00A0
	 */
	struct FCameraShakeInstance
	{
	public:
		class UCameraShake*                                        SourceShake;                                             // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor
		class FName                                                SourceShakeName;                                         // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      OscillatorTimeRemaining;                                 // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bBlendingIn : 1;                                         // 0x0014(0x0001) BIT_FIELD NoDestructor
		unsigned char                                              UnknownData_5R2X[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CurrentBlendInTime;                                      // 0x0018(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bBlendingOut : 1;                                        // 0x001C(0x0001) BIT_FIELD NoDestructor
		unsigned char                                              UnknownData_ZIVE[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CurrentBlendOutTime;                                     // 0x0020(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector                                             LocSinOffset;                                            // 0x0024(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector                                             RotSinOffset;                                            // 0x0030(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      FOVSinOffset;                                            // 0x003C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      Scale;                                                   // 0x0040(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      Speed;                                                   // 0x0044(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		class UCameraAnimInst*                                     AnimInst;                                                // 0x0048(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor
		ECameraAnimPlaySpace                                       PlaySpace;                                               // 0x0050(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_AONO[0xF];                                   // 0x0051(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FMatrix                                             UserPlaySpaceMatrix;                                     // 0x0060(0x0040) ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct Engine.CameraShake.FOscillator
	 * Size -> 0x000C
	 */
	struct FFOscillator
	{
	public:
		float                                                      Amplitude;                                               // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      Frequency;                                               // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		EInitialOscillatorOffset                                   InitialOffset;                                           // 0x0008(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_2PNJ[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.CameraShake.ROscillator
	 * Size -> 0x0024
	 */
	struct FROscillator
	{
	public:
		struct FFOscillator                                        Pitch;                                                   // 0x0000(0x000C) Edit
		struct FFOscillator                                        Yaw;                                                     // 0x000C(0x000C) Edit
		struct FFOscillator                                        Roll;                                                    // 0x0018(0x000C) Edit
	};

	/**
	 * ScriptStruct Engine.CameraShake.VOscillator
	 * Size -> 0x0024
	 */
	struct FVOscillator
	{
	public:
		struct FFOscillator                                        X;                                                       // 0x0000(0x000C) Edit
		struct FFOscillator                                        Y;                                                       // 0x000C(0x000C) Edit
		struct FFOscillator                                        Z;                                                       // 0x0018(0x000C) Edit
	};

	/**
	 * ScriptStruct Engine.EngineTypes.CanvasUVTri
	 * Size -> 0x0060
	 */
	struct FCanvasUVTri
	{
	public:
		struct FVector2D                                           V0_Pos;                                                  // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector2D                                           V0_UV;                                                   // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FLinearColor                                        V0_Color;                                                // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector2D                                           V1_Pos;                                                  // 0x0020(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector2D                                           V1_UV;                                                   // 0x0028(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FLinearColor                                        V1_Color;                                                // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector2D                                           V2_Pos;                                                  // 0x0040(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector2D                                           V2_UV;                                                   // 0x0048(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FLinearColor                                        V2_Color;                                                // 0x0050(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct Engine.CollisionProfile.CollisionResponseTemplate
	 * Size -> 0x0060
	 */
	struct FCollisionResponseTemplate
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor
		ECollisionEnabled                                          CollisionEnabled;                                        // 0x0008(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_5QND[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                ObjectTypeName;                                          // 0x000C(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_F2RI[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FResponseChannel>                            CustomResponses;                                         // 0x0018(0x0010) ZeroConstructor
		class FString                                              HelpMessage;                                             // 0x0028(0x0010) ZeroConstructor
		bool                                                       bCanModify;                                              // 0x0038(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_JTP6[0x27];                                  // 0x0039(0x0027) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.CollisionProfile.CustomChannelSetup
	 * Size -> 0x0010
	 */
	struct FCustomChannelSetup
	{
	public:
		ECollisionChannel                                          Channel;                                                 // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_CWAZ[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                Name;                                                    // 0x0004(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor
		ECollisionResponse                                         DefaultResponse;                                         // 0x000C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bTraceType;                                              // 0x000D(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bStaticObject;                                           // 0x000E(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_BFIS[0x1];                                   // 0x000F(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.CollisionProfile.CustomProfile
	 * Size -> 0x0018
	 */
	struct FCustomProfile
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor
		TArray<struct FResponseChannel>                            CustomResponses;                                         // 0x0008(0x0010) ZeroConstructor
	};

	/**
	 * ScriptStruct Engine.EngineTypes.Redirector
	 * Size -> 0x0010
	 */
	struct FRedirector
	{
	public:
		class FName                                                OldName;                                                 // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor
		class FName                                                NewName;                                                 // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct Engine.DestructibleFractureSettings.FractureMaterial
	 * Size -> 0x0024
	 */
	struct FFractureMaterial
	{
	public:
		struct FVector2D                                           UVScale;                                                 // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector2D                                           UVOffset;                                                // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector                                             Tangent;                                                 // 0x0010(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      UAngle;                                                  // 0x001C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		int32_t                                                    InteriorElementIndex;                                    // 0x0020(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct Engine.DestructibleFractureSettings.DestructibleChunkParameters
	 * Size -> 0x0004
	 */
	struct FDestructibleChunkParameters
	{
	public:
		bool                                                       bIsSupportChunk;                                         // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bDoNotFracture;                                          // 0x0001(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bDoNotDamage;                                            // 0x0002(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bDoNotCrumble;                                           // 0x0003(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct Engine.DialogueWave.DialogueContextMapping
	 * Size -> 0x0028
	 */
	struct FDialogueContextMapping
	{
	public:
		struct FDialogueContext                                    Context;                                                 // 0x0000(0x0018) Edit
		class USoundWave*                                          SoundWave;                                               // 0x0018(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		class UDialogueSoundWaveProxy*                             Proxy;                                                   // 0x0020(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct Engine.ComponentDelegateBinding.BlueprintComponentDelegateBinding
	 * Size -> 0x0018
	 */
	struct FBlueprintComponentDelegateBinding
	{
	public:
		class FName                                                ComponentPropertyName;                                   // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor
		class FName                                                DelegatePropertyName;                                    // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor
		class FName                                                FunctionNameToBind;                                      // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct Engine.InputDelegateBinding.BlueprintInputDelegateBinding
	 * Size -> 0x0004
	 */
	struct FBlueprintInputDelegateBinding
	{
	public:
		bool                                                       bConsumeInput : 1;                                       // 0x0000(0x0001) BIT_FIELD NoDestructor
		bool                                                       bExecuteWhenPaused : 1;                                  // 0x0000(0x0001) BIT_FIELD NoDestructor
		bool                                                       bOverrideParentBinding : 1;                              // 0x0000(0x0001) BIT_FIELD NoDestructor
		unsigned char                                              UnknownData_FPFK[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.InputActionDelegateBinding.BlueprintInputActionDelegateBinding
	 * Size -> 0x0014 (FullSize[0x0018] - InheritedSize[0x0004])
	 */
	struct FBlueprintInputActionDelegateBinding : public FBlueprintInputDelegateBinding
	{
	public:
		class FName                                                InputActionName;                                         // 0x0004(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor
		EInputEvent                                                InputKeyEvent;                                           // 0x000C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_SJZN[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                FunctionNameToBind;                                      // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct Engine.InputAxisDelegateBinding.BlueprintInputAxisDelegateBinding
	 * Size -> 0x0010 (FullSize[0x0014] - InheritedSize[0x0004])
	 */
	struct FBlueprintInputAxisDelegateBinding : public FBlueprintInputDelegateBinding
	{
	public:
		class FName                                                InputAxisName;                                           // 0x0004(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor
		class FName                                                FunctionNameToBind;                                      // 0x000C(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct Engine.InputAxisKeyDelegateBinding.BlueprintInputAxisKeyDelegateBinding
	 * Size -> 0x0024 (FullSize[0x0028] - InheritedSize[0x0004])
	 */
	struct FBlueprintInputAxisKeyDelegateBinding : public FBlueprintInputDelegateBinding
	{
	public:
		unsigned char                                              UnknownData_VS64[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FKey                                                AxisKey;                                                 // 0x0008(0x0018)
		class FName                                                FunctionNameToBind;                                      // 0x0020(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct Engine.InputComponent.InputChord
	 * Size -> 0x0020
	 */
	struct FInputChord
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)
		bool                                                       bShift : 1;                                              // 0x0018(0x0001) BIT_FIELD NoDestructor
		bool                                                       bCtrl : 1;                                               // 0x0018(0x0001) BIT_FIELD NoDestructor
		bool                                                       bAlt : 1;                                                // 0x0018(0x0001) BIT_FIELD NoDestructor
		bool                                                       bCmd : 1;                                                // 0x0018(0x0001) BIT_FIELD NoDestructor
		unsigned char                                              UnknownData_G4L9[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.InputKeyDelegateBinding.BlueprintInputKeyDelegateBinding
	 * Size -> 0x0034 (FullSize[0x0038] - InheritedSize[0x0004])
	 */
	struct FBlueprintInputKeyDelegateBinding : public FBlueprintInputDelegateBinding
	{
	public:
		unsigned char                                              UnknownData_DTQ2[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FInputChord                                         InputChord;                                              // 0x0008(0x0020)
		EInputEvent                                                InputKeyEvent;                                           // 0x0028(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_364J[0x3];                                   // 0x0029(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                FunctionNameToBind;                                      // 0x002C(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_NUGI[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.InputTouchDelegateBinding.BlueprintInputTouchDelegateBinding
	 * Size -> 0x000C (FullSize[0x0010] - InheritedSize[0x0004])
	 */
	struct FBlueprintInputTouchDelegateBinding : public FBlueprintInputDelegateBinding
	{
	public:
		EInputEvent                                                InputKeyEvent;                                           // 0x0004(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_D294[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                FunctionNameToBind;                                      // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct Engine.FontImportOptions.FontImportOptionsData
	 * Size -> 0x00B0
	 */
	struct FFontImportOptionsData
	{
	public:
		class FString                                              FontName;                                                // 0x0000(0x0010) Edit, ZeroConstructor
		float                                                      Height;                                                  // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bEnableAntialiasing : 1;                                 // 0x0014(0x0001) BIT_FIELD Edit, NoDestructor
		bool                                                       bEnableBold : 1;                                         // 0x0014(0x0001) BIT_FIELD Edit, NoDestructor
		bool                                                       bEnableItalic : 1;                                       // 0x0014(0x0001) BIT_FIELD Edit, NoDestructor
		bool                                                       bEnableUnderline : 1;                                    // 0x0014(0x0001) BIT_FIELD Edit, NoDestructor
		bool                                                       bAlphaOnly : 1;                                          // 0x0014(0x0001) BIT_FIELD Edit, NoDestructor
		unsigned char                                              UnknownData_OSRH[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		EFontImportCharacterSet                                    CharacterSet;                                            // 0x0018(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_5WYH[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Chars;                                                   // 0x0020(0x0010) Edit, ZeroConstructor
		class FString                                              UnicodeRange;                                            // 0x0030(0x0010) Edit, ZeroConstructor
		class FString                                              CharsFilePath;                                           // 0x0040(0x0010) Edit, ZeroConstructor
		class FString                                              CharsFileWildcard;                                       // 0x0050(0x0010) Edit, ZeroConstructor
		bool                                                       bCreatePrintableOnly : 1;                                // 0x0060(0x0001) BIT_FIELD Edit, NoDestructor
		bool                                                       bIncludeASCIIRange : 1;                                  // 0x0060(0x0001) BIT_FIELD Edit, NoDestructor
		unsigned char                                              UnknownData_ICC2[0x3];                                   // 0x0061(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLinearColor                                        ForegroundColor;                                         // 0x0064(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bEnableDropShadow : 1;                                   // 0x0074(0x0001) BIT_FIELD Edit, NoDestructor
		unsigned char                                              UnknownData_9Z1U[0x3];                                   // 0x0075(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    TexturePageWidth;                                        // 0x0078(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		int32_t                                                    TexturePageMaxHeight;                                    // 0x007C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		int32_t                                                    XPadding;                                                // 0x0080(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		int32_t                                                    YPadding;                                                // 0x0084(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		int32_t                                                    ExtendBoxTop;                                            // 0x0088(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		int32_t                                                    ExtendBoxBottom;                                         // 0x008C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		int32_t                                                    ExtendBoxRight;                                          // 0x0090(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		int32_t                                                    ExtendBoxLeft;                                           // 0x0094(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bEnableLegacyMode : 1;                                   // 0x0098(0x0001) BIT_FIELD Edit, NoDestructor
		unsigned char                                              UnknownData_TS2Y[0x3];                                   // 0x0099(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    Kerning;                                                 // 0x009C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bUseDistanceFieldAlpha : 1;                              // 0x00A0(0x0001) BIT_FIELD Edit, NoDestructor
		unsigned char                                              UnknownData_WIQ6[0x3];                                   // 0x00A1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    DistanceFieldScaleFactor;                                // 0x00A4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      DistanceFieldScanRadiusScale;                            // 0x00A8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_WQD8[0x4];                                   // 0x00AC(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.Font.FontCharacter
	 * Size -> 0x0018
	 */
	struct FFontCharacter
	{
	public:
		int32_t                                                    StartU;                                                  // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		int32_t                                                    StartV;                                                  // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		int32_t                                                    USize;                                                   // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		int32_t                                                    VSize;                                                   // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              TextureIndex;                                            // 0x0010(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_06Y8[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    VerticalOffset;                                          // 0x0014(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct Engine.PlayerInput.KeyBind
	 * Size -> 0x0030
	 */
	struct FKeyBind
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018) Config
		class FString                                              Command;                                                 // 0x0018(0x0010) ZeroConstructor, Config
		bool                                                       Control : 1;                                             // 0x0028(0x0001) BIT_FIELD Config, NoDestructor
		bool                                                       Shift : 1;                                               // 0x0028(0x0001) BIT_FIELD Config, NoDestructor
		bool                                                       Alt : 1;                                                 // 0x0028(0x0001) BIT_FIELD Config, NoDestructor
		bool                                                       Cmd : 1;                                                 // 0x0028(0x0001) BIT_FIELD Config, NoDestructor
		bool                                                       bIgnoreCtrl : 1;                                         // 0x0028(0x0001) BIT_FIELD Config, NoDestructor
		bool                                                       bIgnoreShift : 1;                                        // 0x0028(0x0001) BIT_FIELD Config, NoDestructor
		bool                                                       bIgnoreAlt : 1;                                          // 0x0028(0x0001) BIT_FIELD Config, NoDestructor
		bool                                                       bIgnoreCmd : 1;                                          // 0x0028(0x0001) BIT_FIELD Config, NoDestructor
		unsigned char                                              UnknownData_WW06[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.PlayerInput.InputAxisProperties
	 * Size -> 0x0010
	 */
	struct FInputAxisProperties
	{
	public:
		float                                                      DeadZone;                                                // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      Sensitivity;                                             // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      Exponent;                                                // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bInvert : 1;                                             // 0x000C(0x0001) BIT_FIELD Edit, NoDestructor
		unsigned char                                              UnknownData_D92F[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.PlayerInput.InputAxisConfigEntry
	 * Size -> 0x0018
	 */
	struct FInputAxisConfigEntry
	{
	public:
		class FName                                                AxisKeyName;                                             // 0x0000(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor
		struct FInputAxisProperties                                AxisProperties;                                          // 0x0008(0x0010) Edit
	};

	/**
	 * ScriptStruct Engine.PlayerInput.InputActionKeyMapping
	 * Size -> 0x0028
	 */
	struct FInputActionKeyMapping
	{
	public:
		class FName                                                ActionName;                                              // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FKey                                                Key;                                                     // 0x0008(0x0018) Edit
		bool                                                       bShift : 1;                                              // 0x0020(0x0001) BIT_FIELD Edit, NoDestructor
		bool                                                       bCtrl : 1;                                               // 0x0020(0x0001) BIT_FIELD Edit, NoDestructor
		bool                                                       bAlt : 1;                                                // 0x0020(0x0001) BIT_FIELD Edit, NoDestructor
		bool                                                       bCmd : 1;                                                // 0x0020(0x0001) BIT_FIELD Edit, NoDestructor
		unsigned char                                              UnknownData_OQ6O[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.PlayerInput.InputAxisKeyMapping
	 * Size -> 0x0028
	 */
	struct FInputAxisKeyMapping
	{
	public:
		class FName                                                AxisName;                                                // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FKey                                                Key;                                                     // 0x0008(0x0018) Edit
		float                                                      Scale;                                                   // 0x0020(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_7ZW2[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.InterpCurveEdSetup.CurveEdEntry
	 * Size -> 0x0038
	 */
	struct FCurveEdEntry
	{
	public:
		class UObject*                                             CurveObject;                                             // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor
		struct FColor                                              CurveColor;                                              // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_LD95[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              CurveName;                                               // 0x0010(0x0010) ZeroConstructor
		int32_t                                                    bHideCurve;                                              // 0x0020(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		int32_t                                                    bColorCurve;                                             // 0x0024(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		int32_t                                                    bFloatingPointColorCurve;                                // 0x0028(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		int32_t                                                    bClamp;                                                  // 0x002C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      ClampLow;                                                // 0x0030(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      ClampHigh;                                               // 0x0034(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct Engine.InterpCurveEdSetup.CurveEdTab
	 * Size -> 0x0030
	 */
	struct FCurveEdTab
	{
	public:
		class FString                                              TabName;                                                 // 0x0000(0x0010) ZeroConstructor
		TArray<struct FCurveEdEntry>                               Curves;                                                  // 0x0010(0x0010) ZeroConstructor
		float                                                      ViewStartInput;                                          // 0x0020(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      ViewEndInput;                                            // 0x0024(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      ViewStartOutput;                                         // 0x0028(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      ViewEndOutput;                                           // 0x002C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct Engine.InterpData.AnimSetBakeAndPruneStatus
	 * Size -> 0x0018
	 */
	struct FAnimSetBakeAndPruneStatus
	{
	public:
		class FString                                              AnimSetName;                                             // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, EditConst
		bool                                                       bReferencedButUnused : 1;                                // 0x0010(0x0001) BIT_FIELD Edit, BlueprintVisible, EditConst, NoDestructor
		bool                                                       bSkipBakeAndPrune : 1;                                   // 0x0010(0x0001) BIT_FIELD Edit, NoDestructor
		unsigned char                                              UnknownData_DXBV[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.InterpTrackBoolProp.BoolTrackKey
	 * Size -> 0x0008
	 */
	struct FBoolTrackKey
	{
	public:
		float                                                      Time;                                                    // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       Value : 1;                                               // 0x0004(0x0001) BIT_FIELD Edit, NoDestructor
		unsigned char                                              UnknownData_WQDP[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.InterpTrackDirector.DirectorTrackCut
	 * Size -> 0x0014
	 */
	struct FDirectorTrackCut
	{
	public:
		float                                                      Time;                                                    // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      TransitionTime;                                          // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		class FName                                                TargetCamGroup;                                          // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		int32_t                                                    ShotNumber;                                              // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct Engine.InterpTrackEvent.EventTrackKey
	 * Size -> 0x000C
	 */
	struct FEventTrackKey
	{
	public:
		float                                                      Time;                                                    // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		class FName                                                EventName;                                               // 0x0004(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct Engine.InterpTrackAnimControl.AnimControlTrackKey
	 * Size -> 0x0020
	 */
	struct FAnimControlTrackKey
	{
	public:
		float                                                      StartTime;                                               // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_938J[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAnimSequence*                                       AnimSeq;                                                 // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      AnimStartOffset;                                         // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      AnimEndOffset;                                           // 0x0014(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      AnimPlayRate;                                            // 0x0018(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bLooping : 1;                                            // 0x001C(0x0001) BIT_FIELD NoDestructor
		bool                                                       bReverse : 1;                                            // 0x001C(0x0001) BIT_FIELD NoDestructor
		unsigned char                                              UnknownData_HV4G[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.InterpTrackMove.InterpLookupPoint
	 * Size -> 0x000C
	 */
	struct FInterpLookupPoint
	{
	public:
		class FName                                                GroupName;                                               // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      Time;                                                    // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct Engine.InterpTrackMove.InterpLookupTrack
	 * Size -> 0x0010
	 */
	struct FInterpLookupTrack
	{
	public:
		TArray<struct FInterpLookupPoint>                          Points;                                                  // 0x0000(0x0010) ZeroConstructor
	};

	/**
	 * ScriptStruct Engine.InterpTrackParticleReplay.ParticleReplayTrackKey
	 * Size -> 0x000C
	 */
	struct FParticleReplayTrackKey
	{
	public:
		float                                                      Time;                                                    // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      Duration;                                                // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		int32_t                                                    ClipIDNumber;                                            // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct Engine.InterpTrackToggle.ToggleTrackKey
	 * Size -> 0x0008
	 */
	struct FToggleTrackKey
	{
	public:
		float                                                      Time;                                                    // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		ETrackToggleAction                                         ToggleAction;                                            // 0x0004(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_ADKQ[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.InterpTrackSound.SoundTrackKey
	 * Size -> 0x0018
	 */
	struct FSoundTrackKey
	{
	public:
		float                                                      Time;                                                    // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      Volume;                                                  // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      Pitch;                                                   // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_M4SZ[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USoundBase*                                          Sound;                                                   // 0x0010(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct Engine.InterpTrackVisibility.VisibilityTrackKey
	 * Size -> 0x0008
	 */
	struct FVisibilityTrackKey
	{
	public:
		float                                                      Time;                                                    // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		EVisibilityTrackAction                                     Action;                                                  // 0x0004(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		EVisibilityTrackCondition                                  ActiveCondition;                                         // 0x0005(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_9F6G[0x2];                                   // 0x0006(0x0002) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.EngineTypes.PrimitiveMaterialRef
	 * Size -> 0x0018
	 */
	struct FPrimitiveMaterialRef
	{
	public:
		class UPrimitiveComponent*                                 Primitive;                                               // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor
		class UDecalComponent*                                     Decal;                                                   // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor
		int32_t                                                    ElementIndex;                                            // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_G6H6[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.LandscapeSplineSegment.LandscapeSplineSegmentConnection
	 * Size -> 0x0018
	 */
	struct FLandscapeSplineSegmentConnection
	{
	public:
		class ULandscapeSplineControlPoint*                        ControlPoint;                                            // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      TangentLen;                                              // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		class FName                                                SocketName;                                              // 0x000C(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_M4T7[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.LandscapeSplineSegment.LandscapeSplineInterpPoint
	 * Size -> 0x0040
	 */
	struct FLandscapeSplineInterpPoint
	{
	public:
		struct FVector                                             Center;                                                  // 0x0000(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector                                             Left;                                                    // 0x000C(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector                                             Right;                                                   // 0x0018(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector                                             FalloffLeft;                                             // 0x0024(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector                                             FalloffRight;                                            // 0x0030(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      StartEndFalloff;                                         // 0x003C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct Engine.LandscapeSplineControlPoint.LandscapeSplineConnection
	 * Size -> 0x0010
	 */
	struct FLandscapeSplineConnection
	{
	public:
		class ULandscapeSplineSegment*                             Segment;                                                 // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       End : 1;                                                 // 0x0008(0x0001) BIT_FIELD NoDestructor
		unsigned char                                              UnknownData_CFEH[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.Layer.LayerActorStats
	 * Size -> 0x0010
	 */
	struct FLayerActorStats
	{
	public:
		class UClass*                                              Type;                                                    // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor
		int32_t                                                    Total;                                                   // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_8VUS[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.MaterialExpression.ExpressionInput
	 * Size -> 0x0038
	 */
	struct FExpressionInput
	{
	public:
		class UMaterialExpression*                                 Expression;                                              // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor
		int32_t                                                    OutputIndex;                                             // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_7NCM[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              InputName;                                               // 0x0010(0x0010) ZeroConstructor
		int32_t                                                    mask;                                                    // 0x0020(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		int32_t                                                    MaskR;                                                   // 0x0024(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		int32_t                                                    MaskG;                                                   // 0x0028(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		int32_t                                                    MaskB;                                                   // 0x002C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		int32_t                                                    MaskA;                                                   // 0x0030(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		int32_t                                                    GCC64_Padding;                                           // 0x0034(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct Engine.MaterialExpression.MaterialAttributesInput
	 * Size -> 0x0000 (FullSize[0x0038] - InheritedSize[0x0038])
	 */
	struct FMaterialAttributesInput : public FExpressionInput
	{	};

	/**
	 * ScriptStruct Engine.MaterialExpressionCustom.CustomInput
	 * Size -> 0x0048
	 */
	struct FCustomInput
	{
	public:
		class FString                                              InputName;                                               // 0x0000(0x0010) Edit, ZeroConstructor
		struct FExpressionInput                                    Input;                                                   // 0x0010(0x0038) ZeroConstructor
	};

	/**
	 * ScriptStruct Engine.MaterialExpressionLandscapeLayerBlend.LayerBlendInput
	 * Size -> 0x0098
	 */
	struct FLayerBlendInput
	{
	public:
		class FName                                                LayerName;                                               // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		ELandscapeLayerBlendType                                   BlendType;                                               // 0x0008(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_8IZU[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FExpressionInput                                    LayerInput;                                              // 0x0010(0x0038) ZeroConstructor
		struct FExpressionInput                                    HeightInput;                                             // 0x0048(0x0038) ZeroConstructor
		float                                                      PreviewWeight;                                           // 0x0080(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector                                             ConstLayerInput;                                         // 0x0084(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      ConstHeightInput;                                        // 0x0090(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_4T4N[0x4];                                   // 0x0094(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.MaterialExpressionMaterialFunctionCall.FunctionExpressionInput
	 * Size -> 0x0050
	 */
	struct FFunctionExpressionInput
	{
	public:
		class UMaterialExpressionFunctionInput*                    ExpressionInput;                                         // 0x0000(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor
		struct FGuid                                               ExpressionInputId;                                       // 0x0008(0x0010) ZeroConstructor
		struct FExpressionInput                                    Input;                                                   // 0x0018(0x0038) ZeroConstructor
	};

	/**
	 * ScriptStruct Engine.MaterialExpression.ExpressionOutput
	 * Size -> 0x0028
	 */
	struct FExpressionOutput
	{
	public:
		class FString                                              OutputName;                                              // 0x0000(0x0010) ZeroConstructor
		int32_t                                                    mask;                                                    // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		int32_t                                                    MaskR;                                                   // 0x0014(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		int32_t                                                    MaskG;                                                   // 0x0018(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		int32_t                                                    MaskB;                                                   // 0x001C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		int32_t                                                    MaskA;                                                   // 0x0020(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_47ZD[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.MaterialExpressionMaterialFunctionCall.FunctionExpressionOutput
	 * Size -> 0x0040
	 */
	struct FFunctionExpressionOutput
	{
	public:
		class UMaterialExpressionFunctionOutput*                   ExpressionOutput;                                        // 0x0000(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor
		struct FGuid                                               ExpressionOutputId;                                      // 0x0008(0x0010) ZeroConstructor
		struct FExpressionOutput                                   Output;                                                  // 0x0018(0x0028) ZeroConstructor
	};

	/**
	 * ScriptStruct Engine.Material.MaterialInput
	 * Size -> 0x0038
	 */
	struct FMaterialInput
	{
	public:
		class UMaterialExpression*                                 Expression;                                              // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor
		int32_t                                                    OutputIndex;                                             // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_AB1H[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              InputName;                                               // 0x0010(0x0010) ZeroConstructor
		int32_t                                                    mask;                                                    // 0x0020(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		int32_t                                                    MaskR;                                                   // 0x0024(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		int32_t                                                    MaskG;                                                   // 0x0028(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		int32_t                                                    MaskB;                                                   // 0x002C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		int32_t                                                    MaskA;                                                   // 0x0030(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		int32_t                                                    GCC64_Padding;                                           // 0x0034(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct Engine.Material.ColorMaterialInput
	 * Size -> 0x0008 (FullSize[0x0040] - InheritedSize[0x0038])
	 */
	struct FColorMaterialInput : public FMaterialInput
	{
	public:
		bool                                                       UseConstant : 1;                                         // 0x0038(0x0001) BIT_FIELD NoDestructor
		unsigned char                                              UnknownData_G33O[0x3];                                   // 0x0039(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FColor                                              Constant;                                                // 0x003C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct Engine.Material.ScalarMaterialInput
	 * Size -> 0x0008 (FullSize[0x0040] - InheritedSize[0x0038])
	 */
	struct FScalarMaterialInput : public FMaterialInput
	{
	public:
		bool                                                       UseConstant : 1;                                         // 0x0038(0x0001) BIT_FIELD NoDestructor
		unsigned char                                              UnknownData_CLHB[0x3];                                   // 0x0039(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Constant;                                                // 0x003C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct Engine.Material.VectorMaterialInput
	 * Size -> 0x0010 (FullSize[0x0048] - InheritedSize[0x0038])
	 */
	struct FVectorMaterialInput : public FMaterialInput
	{
	public:
		bool                                                       UseConstant : 1;                                         // 0x0038(0x0001) BIT_FIELD NoDestructor
		unsigned char                                              UnknownData_MOGH[0x3];                                   // 0x0039(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             Constant;                                                // 0x003C(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct Engine.Material.Vector2MaterialInput
	 * Size -> 0x0010 (FullSize[0x0048] - InheritedSize[0x0038])
	 */
	struct FVector2MaterialInput : public FMaterialInput
	{
	public:
		bool                                                       UseConstant : 1;                                         // 0x0038(0x0001) BIT_FIELD NoDestructor
		unsigned char                                              UnknownData_6K2T[0x3];                                   // 0x0039(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ConstantX;                                               // 0x003C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      ConstantY;                                               // 0x0040(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_U4WU[0x4];                                   // 0x0044(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.Material.MaterialFunctionInfo
	 * Size -> 0x0018
	 */
	struct FMaterialFunctionInfo
	{
	public:
		struct FGuid                                               StateId;                                                 // 0x0000(0x0010) ZeroConstructor
		class UMaterialFunction*                                   Function;                                                // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct Engine.Material.MaterialParameterCollectionInfo
	 * Size -> 0x0018
	 */
	struct FMaterialParameterCollectionInfo
	{
	public:
		struct FGuid                                               StateId;                                                 // 0x0000(0x0010) ZeroConstructor
		class UMaterialParameterCollection*                        ParameterCollection;                                     // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct Engine.MaterialInstance.FontParameterValue
	 * Size -> 0x0028
	 */
	struct FFontParameterValue
	{
	public:
		class FName                                                ParameterName;                                           // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UFont*                                               FontValue;                                               // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		int32_t                                                    FontPage;                                                // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FGuid                                               ExpressionGUID;                                          // 0x0014(0x0010) ZeroConstructor
		unsigned char                                              UnknownData_YED1[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.MaterialInstance.ScalarParameterValue
	 * Size -> 0x001C
	 */
	struct FScalarParameterValue
	{
	public:
		class FName                                                ParameterName;                                           // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      ParameterValue;                                          // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FGuid                                               ExpressionGUID;                                          // 0x000C(0x0010) ZeroConstructor
	};

	/**
	 * ScriptStruct Engine.MaterialInstance.TextureParameterValue
	 * Size -> 0x0020
	 */
	struct FTextureParameterValue
	{
	public:
		class FName                                                ParameterName;                                           // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UTexture*                                            ParameterValue;                                          // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FGuid                                               ExpressionGUID;                                          // 0x0010(0x0010) ZeroConstructor
	};

	/**
	 * ScriptStruct Engine.MaterialInstance.VectorParameterValue
	 * Size -> 0x0028
	 */
	struct FVectorParameterValue
	{
	public:
		class FName                                                ParameterName;                                           // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FLinearColor                                        ParameterValue;                                          // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FGuid                                               ExpressionGUID;                                          // 0x0018(0x0010) ZeroConstructor
	};

	/**
	 * ScriptStruct Engine.MaterialInstanceBasePropertyOverrides
	 * Size -> 0x0010
	 */
	struct FMaterialInstanceBasePropertyOverrides
	{
	public:
		bool                                                       bOverride_OpacityMaskClipValue;                          // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bOverride_BlendMode;                                     // 0x0001(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bOverride_ShadingModel;                                  // 0x0002(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bOverride_TwoSided;                                      // 0x0003(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      OpacityMaskClipValue;                                    // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		EBlendMode                                                 BlendMode;                                               // 0x0008(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		EMaterialShadingModel                                      ShadingModel;                                            // 0x0009(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_T65D[0x2];                                   // 0x000A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       TwoSided : 1;                                            // 0x000C(0x0001) BIT_FIELD Edit, NoDestructor
		unsigned char                                              UnknownData_XPQL[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.Material.MaterialInstanceUsedWithOverride
	 * Size -> 0x0004
	 */
	struct FMaterialInstanceUsedWithOverride
	{
	public:
		bool                                                       bUsedWithSkeletalMesh : 1;                               // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor
		bool                                                       bUsedWithLandscape : 1;                                  // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor
		bool                                                       bUsedWithParticleSprites : 1;                            // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor
		bool                                                       bUsedWithBeamTrails : 1;                                 // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor
		bool                                                       bUsedWithMeshParticles : 1;                              // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor
		bool                                                       bUsedWithInstancedStaticMeshes : 1;                      // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor
		bool                                                       bUsedWithGroundClutter : 1;                              // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor
		bool                                                       bUsedWithStaticMesh : 1;                                 // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor
		unsigned char                                              UnknownData_CT9T[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.MaterialParameterCollection.CollectionParameterBase
	 * Size -> 0x0018
	 */
	struct FCollectionParameterBase
	{
	public:
		class FName                                                ParameterName;                                           // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FGuid                                               ID;                                                      // 0x0008(0x0010) ZeroConstructor
	};

	/**
	 * ScriptStruct Engine.MaterialParameterCollection.CollectionScalarParameter
	 * Size -> 0x0004 (FullSize[0x001C] - InheritedSize[0x0018])
	 */
	struct FCollectionScalarParameter : public FCollectionParameterBase
	{
	public:
		float                                                      DefaultValue;                                            // 0x0018(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct Engine.MaterialParameterCollection.CollectionVectorParameter
	 * Size -> 0x0010 (FullSize[0x0028] - InheritedSize[0x0018])
	 */
	struct FCollectionVectorParameter : public FCollectionParameterBase
	{
	public:
		struct FLinearColor                                        DefaultValue;                                            // 0x0018(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct Engine.MountedDLCManager.MountedDLCInfo
	 * Size -> 0x0058
	 */
	struct FMountedDLCInfo
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010) ZeroConstructor, Config, GlobalConfig
		class FString                                              Path;                                                    // 0x0010(0x0010) ZeroConstructor, Config, GlobalConfig
		class FString                                              ID;                                                      // 0x0020(0x0010) ZeroConstructor, Config, GlobalConfig
		class FString                                              ProductId;                                               // 0x0030(0x0010) ZeroConstructor, Config, GlobalConfig
		bool                                                       bAutoMount : 1;                                          // 0x0040(0x0001) BIT_FIELD Config, GlobalConfig, NoDestructor
		unsigned char                                              UnknownData_ZISE[0x7];                                   // 0x0041(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              StoreProductIdOverride;                                  // 0x0048(0x0010) ZeroConstructor, Config, GlobalConfig
	};

	/**
	 * ScriptStruct Engine.MountedDLCManager.MountedDLCMapInfo
	 * Size -> 0x0020
	 */
	struct FMountedDLCMapInfo
	{
	public:
		class FString                                              ID;                                                      // 0x0000(0x0010) ZeroConstructor, Config, GlobalConfig
		class FString                                              Map;                                                     // 0x0010(0x0010) ZeroConstructor, Config, GlobalConfig
	};

	/**
	 * ScriptStruct Engine.NavCollision.NavCollisionCylinder
	 * Size -> 0x0014
	 */
	struct FNavCollisionCylinder
	{
	public:
		struct FVector                                             Offset;                                                  // 0x0000(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      Radius;                                                  // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      Height;                                                  // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct Engine.NavCollision.NavCollisionBox
	 * Size -> 0x0018
	 */
	struct FNavCollisionBox
	{
	public:
		struct FVector                                             Offset;                                                  // 0x0000(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector                                             Extent;                                                  // 0x000C(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct Engine.Distribution.DistributionLookupTable
	 * Size -> 0x0028
	 */
	struct FDistributionLookupTable
	{
	public:
		unsigned char                                              Op;                                                      // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              EntryCount;                                              // 0x0001(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              EntryStride;                                             // 0x0002(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              SubEntryStride;                                          // 0x0003(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      TimeScale;                                               // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      TimeBias;                                                // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_KCEV[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<float>                                              Values;                                                  // 0x0010(0x0010) ZeroConstructor
		unsigned char                                              LockFlag;                                                // 0x0020(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_BPEM[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.Distribution.RawDistribution
	 * Size -> 0x0028
	 */
	struct FRawDistribution
	{
	public:
		struct FDistributionLookupTable                            Table;                                                   // 0x0000(0x0028) ZeroConstructor
	};

	/**
	 * ScriptStruct Engine.DistributionVector.RawDistributionVector
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	struct FRawDistributionVector : public FRawDistribution
	{
	public:
		float                                                      MinValue;                                                // 0x0028(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      MaxValue;                                                // 0x002C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		class UDistributionVector*                                 Distribution;                                            // 0x0030(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, NoClear, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct Engine.DistributionFloat.RawDistributionFloat
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	struct FRawDistributionFloat : public FRawDistribution
	{
	public:
		float                                                      MinValue;                                                // 0x0028(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      MaxValue;                                                // 0x002C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		class UDistributionFloat*                                  Distribution;                                            // 0x0030(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, NoClear, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct Engine.ParticleModuleBeamModifier.BeamModifierOptions
	 * Size -> 0x0004
	 */
	struct FBeamModifierOptions
	{
	public:
		bool                                                       bModify : 1;                                             // 0x0000(0x0001) BIT_FIELD Edit, NoDestructor
		bool                                                       bScale : 1;                                              // 0x0000(0x0001) BIT_FIELD Edit, NoDestructor
		bool                                                       bLock : 1;                                               // 0x0000(0x0001) BIT_FIELD Edit, NoDestructor
		unsigned char                                              UnknownData_ZCJG[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.ParticleModule.ParticleRandomSeedInfo
	 * Size -> 0x0020
	 */
	struct FParticleRandomSeedInfo
	{
	public:
		class FName                                                ParameterName;                                           // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bGetSeedFromInstance : 1;                                // 0x0008(0x0001) BIT_FIELD Edit, NoDestructor
		bool                                                       bInstanceSeedIsIndex : 1;                                // 0x0008(0x0001) BIT_FIELD Edit, NoDestructor
		bool                                                       bResetSeedOnEmitterLooping : 1;                          // 0x0008(0x0001) BIT_FIELD Edit, NoDestructor
		bool                                                       bRandomlySelectSeedArray : 1;                            // 0x0008(0x0001) BIT_FIELD Edit, NoDestructor
		unsigned char                                              UnknownData_XFQR[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<int32_t>                                            RandomSeeds;                                             // 0x0010(0x0010) Edit, ZeroConstructor
	};

	/**
	 * ScriptStruct Engine.ParticleModuleEventGenerator.ParticleEvent_GenerateInfo
	 * Size -> 0x0028
	 */
	struct FParticleEvent_GenerateInfo
	{
	public:
		EParticleEventType                                         Type;                                                    // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_CCCY[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    Frequency;                                               // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		int32_t                                                    ParticleFrequency;                                       // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       FirstTimeOnly : 1;                                       // 0x000C(0x0001) BIT_FIELD Edit, NoDestructor
		bool                                                       LastTimeOnly : 1;                                        // 0x000C(0x0001) BIT_FIELD Edit, NoDestructor
		bool                                                       UseReflectedImpactVector : 1;                            // 0x000C(0x0001) BIT_FIELD Edit, NoDestructor
		bool                                                       bUseOrbitOffset : 1;                                     // 0x000C(0x0001) BIT_FIELD Edit, NoDestructor
		unsigned char                                              UnknownData_Y1TZ[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                CustomName;                                              // 0x0010(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		TArray<class UParticleModuleEventSendToGame*>              ParticleModuleEventsToSendToGame;                        // 0x0018(0x0010) Edit, ExportObject, ZeroConstructor, ContainsInstancedReference
	};

	/**
	 * ScriptStruct Engine.ParticleModuleLocationBoneSocket.LocationBoneSocketInfo
	 * Size -> 0x0014
	 */
	struct FLocationBoneSocketInfo
	{
	public:
		class FName                                                BoneSocketName;                                          // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector                                             Offset;                                                  // 0x0008(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct Engine.ParticleModuleOrbit.OrbitOptions
	 * Size -> 0x0004
	 */
	struct FOrbitOptions
	{
	public:
		bool                                                       bProcessDuringSpawn : 1;                                 // 0x0000(0x0001) BIT_FIELD Edit, NoDestructor
		bool                                                       bProcessDuringUpdate : 1;                                // 0x0000(0x0001) BIT_FIELD Edit, NoDestructor
		bool                                                       bUseEmitterTime : 1;                                     // 0x0000(0x0001) BIT_FIELD Edit, NoDestructor
		unsigned char                                              UnknownData_Y2F8[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.ParticleModuleParameterDynamic.EmitterDynamicParameter
	 * Size -> 0x0050
	 */
	struct FEmitterDynamicParameter
	{
	public:
		class FName                                                ParamName;                                               // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor
		bool                                                       bUseEmitterTime : 1;                                     // 0x0008(0x0001) BIT_FIELD Edit, NoDestructor
		bool                                                       bSpawnTimeOnly : 1;                                      // 0x0008(0x0001) BIT_FIELD Edit, NoDestructor
		unsigned char                                              UnknownData_2C5E[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		EEmitterDynamicParameterValue                              ValueMethod;                                             // 0x000C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_2PAA[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bScaleVelocityByParamValue : 1;                          // 0x0010(0x0001) BIT_FIELD Edit, NoDestructor
		unsigned char                                              UnknownData_2AQ9[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRawDistributionFloat                               ParamValue;                                              // 0x0018(0x0038) Edit, ContainsInstancedReference
	};

	/**
	 * ScriptStruct Engine.ParticleEmitter.ParticleBurst
	 * Size -> 0x000C
	 */
	struct FParticleBurst
	{
	public:
		int32_t                                                    Count;                                                   // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		int32_t                                                    CountLow;                                                // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      Time;                                                    // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct Engine.ParticleModuleTypeDataGpu.GPUSpriteLocalVectorFieldInfo
	 * Size -> 0x0070
	 */
	struct FGPUSpriteLocalVectorFieldInfo
	{
	public:
		class UVectorField*                                        Field;                                                   // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_6TAX[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Transform;                                               // 0x0010(0x0030) IsPlainOldData, NoDestructor
		struct FRotator                                            MinInitialRotation;                                      // 0x0040(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor
		struct FRotator                                            MaxInitialRotation;                                      // 0x004C(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor
		struct FRotator                                            RotationRate;                                            // 0x0058(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      Intensity;                                               // 0x0064(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      Tightness;                                               // 0x0068(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bIgnoreComponentTransform : 1;                           // 0x006C(0x0001) BIT_FIELD NoDestructor
		bool                                                       bTileX : 1;                                              // 0x006C(0x0001) BIT_FIELD NoDestructor
		bool                                                       bTileY : 1;                                              // 0x006C(0x0001) BIT_FIELD NoDestructor
		bool                                                       bTileZ : 1;                                              // 0x006C(0x0001) BIT_FIELD NoDestructor
		unsigned char                                              UnknownData_TL9V[0x3];                                   // 0x006D(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.DistributionFloat.FloatDistribution
	 * Size -> 0x0028
	 */
	struct FFloatDistribution
	{
	public:
		struct FDistributionLookupTable                            Table;                                                   // 0x0000(0x0028) ZeroConstructor
	};

	/**
	 * ScriptStruct Engine.ParticleModuleTypeDataGpu.GPUSpriteEmitterInfo
	 * Size -> 0x0280
	 */
	struct FGPUSpriteEmitterInfo
	{
	public:
		class UParticleModuleRequired*                             RequiredModule;                                          // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor
		class UParticleModuleSpawn*                                SpawnModule;                                             // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor
		class UParticleModuleSpawnPerUnit*                         SpawnPerUnitModule;                                      // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor
		TArray<class UParticleModule*>                             SpawnModules;                                            // 0x0018(0x0010) ZeroConstructor
		unsigned char                                              UnknownData_YV3Z[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGPUSpriteLocalVectorFieldInfo                      LocalVectorField;                                        // 0x0030(0x0070)
		struct FFloatDistribution                                  VectorFieldScale;                                        // 0x00A0(0x0028) ZeroConstructor
		struct FFloatDistribution                                  DragCoefficient;                                         // 0x00C8(0x0028) ZeroConstructor
		struct FFloatDistribution                                  PointAttractorStrength;                                  // 0x00F0(0x0028) ZeroConstructor
		struct FFloatDistribution                                  Resilience;                                              // 0x0118(0x0028) ZeroConstructor
		struct FVector                                             ConstantAcceleration;                                    // 0x0140(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector                                             PointAttractorPosition;                                  // 0x014C(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      PointAttractorRadiusSq;                                  // 0x0158(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector                                             OrbitOffsetBase;                                         // 0x015C(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector                                             OrbitOffsetRange;                                        // 0x0168(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector2D                                           InvMaxSize;                                              // 0x0174(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      InvRotationRateScale;                                    // 0x017C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      MaxLifetime;                                             // 0x0180(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		int32_t                                                    MaxParticleCount;                                        // 0x0184(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		EParticleScreenAlignment                                   ScreenAlignment;                                         // 0x0188(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		EParticleAxisLock                                          LockAxisFlag;                                            // 0x0189(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_HDEB[0x2];                                   // 0x018A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bEnableCollision : 1;                                    // 0x018C(0x0001) BIT_FIELD NoDestructor
		unsigned char                                              UnknownData_NADL[0x3];                                   // 0x018D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRawDistributionVector                              DynamicColor;                                            // 0x0190(0x0038) ContainsInstancedReference
		struct FRawDistributionFloat                               DynamicAlpha;                                            // 0x01C8(0x0038) ContainsInstancedReference
		struct FRawDistributionVector                              DynamicColorScale;                                       // 0x0200(0x0038) ContainsInstancedReference
		struct FRawDistributionFloat                               DynamicAlphaScale;                                       // 0x0238(0x0038) ContainsInstancedReference
		unsigned char                                              UnknownData_KXOO[0x10];                                  // 0x0270(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.ParticleModuleTypeDataGpu.GPUSpriteResourceData
	 * Size -> 0x0150
	 */
	struct FGPUSpriteResourceData
	{
	public:
		TArray<struct FColor>                                      QuantizedColorSamples;                                   // 0x0000(0x0010) ZeroConstructor
		TArray<struct FColor>                                      QuantizedMiscSamples;                                    // 0x0010(0x0010) ZeroConstructor
		TArray<struct FColor>                                      QuantizedSimulationAttrSamples;                          // 0x0020(0x0010) ZeroConstructor
		struct FVector4                                            ColorScale;                                              // 0x0030(0x0010) ZeroConstructor
		struct FVector4                                            ColorBias;                                               // 0x0040(0x0010) ZeroConstructor
		struct FVector4                                            MiscScale;                                               // 0x0050(0x0010) ZeroConstructor
		struct FVector4                                            MiscBias;                                                // 0x0060(0x0010) ZeroConstructor
		struct FVector4                                            SimulationAttrCurveScale;                                // 0x0070(0x0010) ZeroConstructor
		struct FVector4                                            SimulationAttrCurveBias;                                 // 0x0080(0x0010) ZeroConstructor
		struct FVector4                                            SubImageSize;                                            // 0x0090(0x0010) ZeroConstructor
		struct FVector4                                            SizeBySpeed;                                             // 0x00A0(0x0010) ZeroConstructor
		struct FVector                                             ConstantAcceleration;                                    // 0x00B0(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector                                             OrbitOffsetBase;                                         // 0x00BC(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector                                             OrbitOffsetRange;                                        // 0x00C8(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector                                             OrbitFrequencyBase;                                      // 0x00D4(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector                                             OrbitFrequencyRange;                                     // 0x00E0(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector                                             OrbitPhaseBase;                                          // 0x00EC(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector                                             OrbitPhaseRange;                                         // 0x00F8(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      GlobalVectorFieldScale;                                  // 0x0104(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      GlobalVectorFieldTightness;                              // 0x0108(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      PerParticleVectorFieldScale;                             // 0x010C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      PerParticleVectorFieldBias;                              // 0x0110(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      DragCoefficientScale;                                    // 0x0114(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      DragCoefficientBias;                                     // 0x0118(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      ResilienceScale;                                         // 0x011C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      ResilienceBias;                                          // 0x0120(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      CollisionRadiusScale;                                    // 0x0124(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      CollisionRadiusBias;                                     // 0x0128(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      CollisionTimeBias;                                       // 0x012C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      OneMinusFriction;                                        // 0x0130(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      RotationRateScale;                                       // 0x0134(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      CameraMotionBlurAmount;                                  // 0x0138(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		EParticleScreenAlignment                                   ScreenAlignment;                                         // 0x013C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		EParticleAxisLock                                          LockAxisFlag;                                            // 0x013D(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_L7IH[0x2];                                   // 0x013E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector2D                                           PivotOffset;                                             // 0x0140(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_WAZ4[0x8];                                   // 0x0148(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.PhysicsSettings.PhysicalSurfaceName
	 * Size -> 0x000C
	 */
	struct FPhysicalSurfaceName
	{
	public:
		EPhysicalSurface                                           Type;                                                    // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_CRFT[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                Name;                                                    // 0x0004(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct Engine.PhysicalMaterial.TireFrictionScalePair
	 * Size -> 0x0010
	 */
	struct FTireFrictionScalePair
	{
	public:
		class UTireType*                                           TireType;                                                // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      FrictionScale;                                           // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_LQG3[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.PlatformInterfaceBase.DelegateArray
	 * Size -> 0x0010
	 */
	struct FDelegateArray
	{
	public:
		TArray<class FScriptDelegate>                              Delegates;                                               // 0x0000(0x0010) ZeroConstructor, ContainsInstancedReference
	};

	/**
	 * ScriptStruct Engine.PlatformInterfaceBase.PlatformInterfaceData
	 * Size -> 0x0030
	 */
	struct FPlatformInterfaceData
	{
	public:
		class FName                                                DataName;                                                // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor
		EPlatformInterfaceDataType                                 Type;                                                    // 0x0008(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_P4AE[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    IntValue;                                                // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      FloatValue;                                              // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_RCHQ[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              StringValue;                                             // 0x0018(0x0010) ZeroConstructor
		class UObject*                                             ObjectValue;                                             // 0x0028(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct Engine.PlatformInterfaceBase.PlatformInterfaceDelegateResult
	 * Size -> 0x0038
	 */
	struct FPlatformInterfaceDelegateResult
	{
	public:
		bool                                                       bSuccessful;                                             // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_FMRJ[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPlatformInterfaceData                              Data;                                                    // 0x0008(0x0030)
	};

	/**
	 * ScriptStruct Engine.MicroTransactionBase.PurchaseInfo
	 * Size -> 0x0040
	 */
	struct FPurchaseInfo
	{
	public:
		class FString                                              Identifier;                                              // 0x0000(0x0010) ZeroConstructor
		class FString                                              DisplayName;                                             // 0x0010(0x0010) ZeroConstructor
		class FString                                              DisplayDescription;                                      // 0x0020(0x0010) ZeroConstructor
		class FString                                              DisplayPrice;                                            // 0x0030(0x0010) ZeroConstructor
	};

	/**
	 * ScriptStruct Engine.Rig.RigTransformConstraint
	 * Size -> 0x0010
	 */
	struct FRigTransformConstraint
	{
	public:
		EConstraintTransform                                       TranformType;                                            // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_VN2X[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                ParentSpace;                                             // 0x0004(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      Weight;                                                  // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct Engine.Rig.TransformBaseConstraint
	 * Size -> 0x0010
	 */
	struct FTransformBaseConstraint
	{
	public:
		TArray<struct FRigTransformConstraint>                     TransformConstraints;                                    // 0x0000(0x0010) Edit, ZeroConstructor
	};

	/**
	 * ScriptStruct Engine.Rig.TransformBase
	 * Size -> 0x0028
	 */
	struct FTransformBase
	{
	public:
		class FName                                                Node;                                                    // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FTransformBaseConstraint                            Constraints[0x2];                                        // 0x0008(0x0020) Edit
	};

	/**
	 * ScriptStruct Engine.Rig.Node
	 * Size -> 0x0060
	 */
	struct FNode
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor
		class FName                                                ParentName;                                              // 0x0008(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor
		struct FTransform                                          Transform;                                               // 0x0010(0x0030) IsPlainOldData, NoDestructor
		class FString                                              DisplayName;                                             // 0x0040(0x0010) Edit, ZeroConstructor
		bool                                                       bAdvanced;                                               // 0x0050(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_3Z2S[0xF];                                   // 0x0051(0x000F) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.Blueprint.BPVariableMetaDataEntry
	 * Size -> 0x0018
	 */
	struct FBPVariableMetaDataEntry
	{
	public:
		class FName                                                DataKey;                                                 // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		class FString                                              DataValue;                                               // 0x0008(0x0010) Edit, ZeroConstructor
	};

	/**
	 * ScriptStruct Engine.DestructibleMesh.DestructibleDamageParameters
	 * Size -> 0x0014
	 */
	struct FDestructibleDamageParameters
	{
	public:
		float                                                      DamageThreshold;                                         // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      DamageSpread;                                            // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      ImpactDamage;                                            // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      ImpactResistance;                                        // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		int32_t                                                    DefaultImpactDamageDepth;                                // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct Engine.DestructibleMesh.DestructibleDebrisParameters
	 * Size -> 0x002C
	 */
	struct FDestructibleDebrisParameters
	{
	public:
		float                                                      DebrisLifetimeMin;                                       // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      DebrisLifetimeMax;                                       // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      DebrisMaxSeparationMin;                                  // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      DebrisMaxSeparationMax;                                  // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FBox                                                ValidBounds;                                             // 0x0010(0x001C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct Engine.DestructibleMesh.DestructibleAdvancedParameters
	 * Size -> 0x0010
	 */
	struct FDestructibleAdvancedParameters
	{
	public:
		float                                                      DamageCap;                                               // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      ImpactVelocityThreshold;                                 // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      MaxChunkSpeed;                                           // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      FractureImpulseScale;                                    // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct Engine.DestructibleMesh.DestructibleSpecialHierarchyDepths
	 * Size -> 0x0010
	 */
	struct FDestructibleSpecialHierarchyDepths
	{
	public:
		int32_t                                                    SupportDepth;                                            // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		int32_t                                                    MinimumFractureDepth;                                    // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		int32_t                                                    DebrisDepth;                                             // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		int32_t                                                    EssentialDepth;                                          // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct Engine.DestructibleMesh.DestructibleDepthParameters
	 * Size -> 0x0001
	 */
	struct FDestructibleDepthParameters
	{
	public:
		EImpactDamageOverride                                      ImpactDamageOverride;                                    // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct Engine.DestructibleMesh.DestructibleParametersFlag
	 * Size -> 0x0004
	 */
	struct FDestructibleParametersFlag
	{
	public:
		bool                                                       bAccumulateDamage : 1;                                   // 0x0000(0x0001) BIT_FIELD Edit, NoDestructor
		bool                                                       bAssetDefinedSupport : 1;                                // 0x0000(0x0001) BIT_FIELD Edit, NoDestructor
		bool                                                       bWorldSupport : 1;                                       // 0x0000(0x0001) BIT_FIELD Edit, NoDestructor
		bool                                                       bDebrisTimeout : 1;                                      // 0x0000(0x0001) BIT_FIELD Edit, NoDestructor
		bool                                                       bDebrisMaxSeparation : 1;                                // 0x0000(0x0001) BIT_FIELD Edit, NoDestructor
		bool                                                       bCrumbleSmallestChunks : 1;                              // 0x0000(0x0001) BIT_FIELD Edit, NoDestructor
		bool                                                       bAccurateRaycasts : 1;                                   // 0x0000(0x0001) BIT_FIELD Edit, NoDestructor
		bool                                                       bUseValidBounds : 1;                                     // 0x0000(0x0001) BIT_FIELD Edit, NoDestructor
		bool                                                       bFormExtendedStructures : 1;                             // 0x0001(0x0001) BIT_FIELD Edit, NoDestructor
		unsigned char                                              UnknownData_DVOV[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.DestructibleMesh.DestructibleParameters
	 * Size -> 0x0078
	 */
	struct FDestructibleParameters
	{
	public:
		struct FDestructibleDamageParameters                       DamageParameters;                                        // 0x0000(0x0014) Edit
		struct FDestructibleDebrisParameters                       DebrisParameters;                                        // 0x0014(0x002C) Edit
		struct FDestructibleAdvancedParameters                     AdvancedParameters;                                      // 0x0040(0x0010) Edit
		struct FDestructibleSpecialHierarchyDepths                 SpecialHierarchyDepths;                                  // 0x0050(0x0010) Edit
		TArray<struct FDestructibleDepthParameters>                DepthParameters;                                         // 0x0060(0x0010) Edit, EditFixedSize, ZeroConstructor
		struct FDestructibleParametersFlag                         Flags;                                                   // 0x0070(0x0004) Edit
		unsigned char                                              UnknownData_C6K7[0x4];                                   // 0x0074(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.EngineTypes.LocalizedSpokenText
	 * Size -> 0x0018
	 */
	struct FLocalizedSpokenText
	{
	public:
		ELocalizedLanguage                                         LanguageCode;                                            // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_KZIS[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              SpokenText;                                              // 0x0008(0x0010) Edit, ZeroConstructor
	};

	/**
	 * ScriptStruct Engine.SoundGroups.SoundGroup
	 * Size -> 0x0020
	 */
	struct FSoundGroup
	{
	public:
		ESoundGroup                                                SoundGroup;                                              // 0x0000(0x0001) ZeroConstructor, Config, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_35HZ[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              DisplayName;                                             // 0x0008(0x0010) ZeroConstructor, Config
		bool                                                       bAlwaysDecompressOnLoad : 1;                             // 0x0018(0x0001) BIT_FIELD Config, NoDestructor
		unsigned char                                              UnknownData_T8MR[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      DecompressedDuration;                                    // 0x001C(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct Engine.EngineTypes.LocalizedSubtitle
	 * Size -> 0x0028
	 */
	struct FLocalizedSubtitle
	{
	public:
		class FString                                              LanguageExt;                                             // 0x0000(0x0010) ZeroConstructor
		TArray<struct FSubtitleCue>                                Subtitles;                                               // 0x0010(0x0010) ZeroConstructor
		bool                                                       bMature : 1;                                             // 0x0020(0x0001) BIT_FIELD NoDestructor
		bool                                                       bManualWordWrap : 1;                                     // 0x0020(0x0001) BIT_FIELD NoDestructor
		bool                                                       bSingleLine : 1;                                         // 0x0020(0x0001) BIT_FIELD NoDestructor
		unsigned char                                              UnknownData_ZMPZ[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.SoundClass.SoundClassProperties
	 * Size -> 0x0024
	 */
	struct FSoundClassProperties
	{
	public:
		float                                                      Volume;                                                  // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      Pitch;                                                   // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      StereoBleed;                                             // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      LFEBleed;                                                // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      VoiceCenterChannelVolume;                                // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      RadioFilterVolume;                                       // 0x0014(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      RadioFilterVolumeThreshold;                              // 0x0018(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bApplyEffects : 1;                                       // 0x001C(0x0001) BIT_FIELD Edit, NoDestructor
		bool                                                       bAlwaysPlay : 1;                                         // 0x001C(0x0001) BIT_FIELD Edit, NoDestructor
		bool                                                       bIsUISound : 1;                                          // 0x001C(0x0001) BIT_FIELD Edit, NoDestructor
		bool                                                       bIsMusic : 1;                                            // 0x001C(0x0001) BIT_FIELD Edit, NoDestructor
		bool                                                       bReverb : 1;                                             // 0x001C(0x0001) BIT_FIELD Edit, NoDestructor
		bool                                                       bCenterChannelOnly : 1;                                  // 0x001C(0x0001) BIT_FIELD Edit, NoDestructor
		bool                                                       bApplyAmbientVolumes : 1;                                // 0x001C(0x0001) BIT_FIELD Edit, NoDestructor
		unsigned char                                              UnknownData_PO5Q[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		EAudioOutputTarget                                         OutputTarget;                                            // 0x0020(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_5PXF[0x3];                                   // 0x0021(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.SoundClass.PassiveSoundMixModifier
	 * Size -> 0x0010
	 */
	struct FPassiveSoundMixModifier
	{
	public:
		class USoundMix*                                           SoundMix;                                                // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      MinVolumeThreshold;                                      // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      MaxVolumeThreshold;                                      // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct Engine.SoundMix.AudioEQEffect
	 * Size -> 0x0028
	 */
	struct FAudioEQEffect
	{
	public:
		unsigned char                                              UnknownData_NFXV[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      HFFrequency;                                             // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      HFGain;                                                  // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      MFCutoffFrequency;                                       // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      MFBandwidth;                                             // 0x0014(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      MFGain;                                                  // 0x0018(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      LFFrequency;                                             // 0x001C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      LFGain;                                                  // 0x0020(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_OI6Y[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.SoundMix.SoundClassAdjuster
	 * Size -> 0x0020
	 */
	struct FSoundClassAdjuster
	{
	public:
		class FName                                                SoundClass;                                              // 0x0000(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor
		class USoundClass*                                         SoundClassObject;                                        // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      VolumeAdjuster;                                          // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      PitchAdjuster;                                           // 0x0014(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bApplyToChildren : 1;                                    // 0x0018(0x0001) BIT_FIELD Edit, NoDestructor
		unsigned char                                              UnknownData_1Y9J[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      VoiceCenterChannelVolumeAdjuster;                        // 0x001C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct Engine.SoundNodeAmbient.AmbientSoundSlot
	 * Size -> 0x0020
	 */
	struct FAmbientSoundSlot
	{
	public:
		class USoundNodeWave*                                      Wave;                                                    // 0x0000(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor
		class USoundWave*                                          SoundWave;                                               // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      PitchScale;                                              // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      VolumeScale;                                             // 0x0014(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      Weight;                                                  // 0x0018(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_NI3Q[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.DialogueTypes.DialogueWaveParameter
	 * Size -> 0x0020
	 */
	struct FDialogueWaveParameter
	{
	public:
		class UDialogueWave*                                       DialogueWave;                                            // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FDialogueContext                                    Context;                                                 // 0x0008(0x0018) Edit
	};

	/**
	 * ScriptStruct Engine.SoundNodeDistanceCrossFade.DistanceDatum
	 * Size -> 0x0014
	 */
	struct FDistanceDatum
	{
	public:
		float                                                      FadeInDistanceStart;                                     // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      FadeInDistanceEnd;                                       // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      FadeOutDistanceStart;                                    // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      FadeOutDistanceEnd;                                      // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      Volume;                                                  // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct Engine.SoundNodeModulatorContinuous.ModulatorContinuousParams
	 * Size -> 0x0020
	 */
	struct FModulatorContinuousParams
	{
	public:
		class FName                                                ParameterName;                                           // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      Default;                                                 // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      MinInput;                                                // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      MaxInput;                                                // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      MinOutput;                                               // 0x0014(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      MaxOutput;                                               // 0x0018(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		EModulationParamMode                                       ParamMode;                                               // 0x001C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_QYLB[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.SubsurfaceProfile.SubsurfaceProfileStruct
	 * Size -> 0x0024
	 */
	struct FSubsurfaceProfileStruct
	{
	public:
		float                                                      ScatterRadius;                                           // 0x0000(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FLinearColor                                        SubsurfaceColor;                                         // 0x0004(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FLinearColor                                        FalloffColor;                                            // 0x0014(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct Engine.TimelineTemplate.TTTrackBase
	 * Size -> 0x000C
	 */
	struct FTTTrackBase
	{
	public:
		class FName                                                TrackName;                                               // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bIsExternalCurve;                                        // 0x0008(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_H1JS[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.TimelineTemplate.TTEventTrack
	 * Size -> 0x000C (FullSize[0x0018] - InheritedSize[0x000C])
	 */
	struct FTTEventTrack : public FTTTrackBase
	{
	public:
		unsigned char                                              UnknownData_OICD[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCurveFloat*                                         CurveKeys;                                               // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct Engine.TimelineTemplate.TTFloatTrack
	 * Size -> 0x000C (FullSize[0x0018] - InheritedSize[0x000C])
	 */
	struct FTTFloatTrack : public FTTTrackBase
	{
	public:
		unsigned char                                              UnknownData_IFLP[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCurveFloat*                                         CurveFloat;                                              // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct Engine.TimelineTemplate.TTVectorTrack
	 * Size -> 0x000C (FullSize[0x0018] - InheritedSize[0x000C])
	 */
	struct FTTVectorTrack : public FTTTrackBase
	{
	public:
		unsigned char                                              UnknownData_E6VF[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCurveVector*                                        CurveVector;                                             // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct Engine.TimelineTemplate.TTLinearColorTrack
	 * Size -> 0x000C (FullSize[0x0018] - InheritedSize[0x000C])
	 */
	struct FTTLinearColorTrack : public FTTTrackBase
	{
	public:
		unsigned char                                              UnknownData_Z62E[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCurveLinearColor*                                   CurveLinearColor;                                        // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct Engine.TouchInterface.TouchInputControl
	 * Size -> 0x0068
	 */
	struct FTouchInputControl
	{
	public:
		class UTexture2D*                                          Image1;                                                  // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		class UTexture2D*                                          Image2;                                                  // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector2D                                           Center;                                                  // 0x0010(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector2D                                           VisualSize;                                              // 0x0018(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector2D                                           ThumbSize;                                               // 0x0020(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector2D                                           InteractionSize;                                         // 0x0028(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector2D                                           InputScale;                                              // 0x0030(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FKey                                                MainInputKey;                                            // 0x0038(0x0018) Edit
		struct FKey                                                AltInputKey;                                             // 0x0050(0x0018) Edit
	};

	/**
	 * ScriptStruct Engine.WorldComposition.EditorTileInitialState
	 * Size -> 0x0018
	 */
	struct FEditorTileInitialState
	{
	public:
		class FString                                              LevelName;                                               // 0x0000(0x0010) ZeroConstructor
		bool                                                       bWasInitiallyLoaded;                                     // 0x0010(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bWasInitiallyVisible;                                    // 0x0011(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_PKZ9[0x6];                                   // 0x0012(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.EngineTypes.ProxySettings
	 * Size -> 0x0028
	 */
	struct FProxySettings
	{
	public:
		int32_t                                                    ScreenSize;                                              // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		int32_t                                                    TextureWidth;                                            // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		int32_t                                                    TextureHeight;                                           // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bRecalculateNormals;                                     // 0x000C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_SGHA[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      HardAngleThreshold;                                      // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		int32_t                                                    MergeDistance;                                           // 0x0014(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bUseClippingPlane;                                       // 0x0018(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_3X01[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ClippingLevel;                                           // 0x001C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		int32_t                                                    AxisIndex;                                               // 0x0020(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bPlaneNegativeHalfspace;                                 // 0x0024(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bUseMassiveLOD;                                          // 0x0025(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bUseAggregateLOD;                                        // 0x0026(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bFlatterMaterialBeforeProcess;                           // 0x0027(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct Engine.EngineTypes.DepthFieldGlowInfo
	 * Size -> 0x002C
	 */
	struct FDepthFieldGlowInfo
	{
	public:
		bool                                                       bEnableGlow : 1;                                         // 0x0000(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		unsigned char                                              UnknownData_8HLA[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLinearColor                                        GlowColor;                                               // 0x0004(0x0010) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector2D                                           GlowOuterRadius;                                         // 0x0014(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector2D                                           GlowInnerRadius;                                         // 0x001C(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      ScreenPercentageLerpScalar;                              // 0x0024(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bUseOldShader : 1;                                       // 0x0028(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		unsigned char                                              UnknownData_UY2O[0x3];                                   // 0x0029(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.EngineTypes.FontRenderInfo
	 * Size -> 0x0030
	 */
	struct FFontRenderInfo
	{
	public:
		bool                                                       bClipText : 1;                                           // 0x0000(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		bool                                                       UnknownData_GOA6 : 1;                                    // 0x0000(0x0001) BIT_FIELD (PADDING)
		bool                                                       bEnableShadow : 1;                                       // 0x0000(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		unsigned char                                              UnknownData_TCY1[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDepthFieldGlowInfo                                 GlowInfo;                                                // 0x0004(0x002C) BlueprintVisible
	};

	/**
	 * ScriptStruct Engine.EngineTypes.ComponentReference
	 * Size -> 0x0018
	 */
	struct FComponentReference
	{
	public:
		class AActor*                                              OtherActor;                                              // 0x0000(0x0008) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor
		class FName                                                ComponentProperty;                                       // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		TWeakObjectPtr<class USceneComponent>                      OverrideComponent;                                       // 0x0010(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct Engine.EngineTypes.Rotator_NetQuantizeYawOnly
	 * Size -> 0x0000 (FullSize[0x000C] - InheritedSize[0x000C])
	 */
	struct FRotator_NetQuantizeYawOnly : public FRotator
	{	};

	/**
	 * ScriptStruct Engine.EngineTypes.Rotator_NetQuantizeNoRoll
	 * Size -> 0x0000 (FullSize[0x000C] - InheritedSize[0x000C])
	 */
	struct FRotator_NetQuantizeNoRoll : public FRotator
	{	};

	/**
	 * ScriptStruct Engine.EngineTypes.RadialDamageParams
	 * Size -> 0x0010
	 */
	struct FRadialDamageParams
	{
	public:
		float                                                      MinimumDamage;                                           // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      InnerRadius;                                             // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      OuterRadius;                                             // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      DamageFalloff;                                           // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct Engine.EngineTypes.RadialDamageEvent
	 * Size -> 0x0030 (FullSize[0x0050] - InheritedSize[0x0020])
	 */
	struct FRadialDamageEvent : public FDamageEvent
	{
	public:
		struct FRadialDamageParams                                 Params;                                                  // 0x0020(0x0010)
		struct FVector                                             Origin;                                                  // 0x0030(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_QSDO[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FHitResult>                                  ComponentHits;                                           // 0x0040(0x0010) ZeroConstructor
	};

	/**
	 * ScriptStruct Engine.EngineTypes.PointDamageEvent
	 * Size -> 0x0098 (FullSize[0x00B8] - InheritedSize[0x0020])
	 */
	struct FPointDamageEvent : public FDamageEvent
	{
	public:
		struct FVector_NetQuantizeNormal                           ShotDirection;                                           // 0x0020(0x000C)
		unsigned char                                              UnknownData_FPX5[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FHitResult                                          HitInfo;                                                 // 0x0030(0x0088)
	};

	/**
	 * ScriptStruct Engine.EngineTypes.MeshProxySettings
	 * Size -> 0x0028
	 */
	struct FMeshProxySettings
	{
	public:
		int32_t                                                    ScreenSize;                                              // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		int32_t                                                    TextureWidth;                                            // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		int32_t                                                    TextureHeight;                                           // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bRecalculateNormals;                                     // 0x000C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_BOCS[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      HardAngleThreshold;                                      // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		int32_t                                                    MergeDistance;                                           // 0x0014(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bUseClippingPlane;                                       // 0x0018(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_QFBM[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ClippingLevel;                                           // 0x001C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		int32_t                                                    AxisIndex;                                               // 0x0020(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bPlaneNegativeHalfspace;                                 // 0x0024(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_23ZW[0x3];                                   // 0x0025(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.EngineTypes.MeshBuildSettings
	 * Size -> 0x0038
	 */
	struct FMeshBuildSettings
	{
	public:
		bool                                                       bUseMikkTSpace;                                          // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bRecomputeNormals;                                       // 0x0001(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bRecomputeTangents;                                      // 0x0002(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bRemoveDegenerates;                                      // 0x0003(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bUseFullPrecisionUVs;                                    // 0x0004(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bGenerateLightmapUVs;                                    // 0x0005(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_UX2P[0x2];                                   // 0x0006(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    MinLightmapResolution;                                   // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		int32_t                                                    SrcLightmapIndex;                                        // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		int32_t                                                    DstLightmapIndex;                                        // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      BuildScale;                                              // 0x0014(0x0004) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor
		struct FVector                                             BuildScale3D;                                            // 0x0018(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      DistanceFieldResolutionScale;                            // 0x0024(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bGenerateDistanceFieldAsIfTwoSided;                      // 0x0028(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bReallyGenerateDistanceFieldAsIfTwoSided;                // 0x0029(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_RZO1[0x6];                                   // 0x002A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UStaticMesh*                                         DistanceFieldReplacementMesh;                            // 0x0030(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct Engine.EngineTypes.MeshReductionSettings
	 * Size -> 0x0028
	 */
	struct FMeshReductionSettings
	{
	public:
		float                                                      PercentTriangles;                                        // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      MaxDeviation;                                            // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      WeldingThreshold;                                        // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      HardAngleThreshold;                                      // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		EMeshFeatureImportance                                     SilhouetteImportance;                                    // 0x0010(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		EMeshFeatureImportance                                     TextureImportance;                                       // 0x0011(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		EMeshFeatureImportance                                     ShadingImportance;                                       // 0x0012(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bRecalculateNormals;                                     // 0x0013(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		int32_t                                                    BaseLODModel;                                            // 0x0014(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bGenerateUniqueLightmapUVs;                              // 0x0018(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bKeepSymmetry;                                           // 0x0019(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bVisibilityAided;                                        // 0x001A(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bCullOccluded;                                           // 0x001B(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		EMeshFeatureImportance                                     VisibilityAggressiveness;                                // 0x001C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_4D9I[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		uint32_t                                                   MaxTrianglesForLOD;                                      // 0x0020(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		uint32_t                                                   MinTrianglesForLOD;                                      // 0x0024(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct Engine.EngineTypes.POV
	 * Size -> 0x001C
	 */
	struct FPOV
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FRotator                                            Rotation;                                                // 0x000C(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      FOV;                                                     // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct Engine.EngineTypes.AnimSlotDesc
	 * Size -> 0x000C
	 */
	struct FAnimSlotDesc
	{
	public:
		class FName                                                SlotName;                                                // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor
		int32_t                                                    NumChannels;                                             // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct Engine.EngineTypes.AnimSlotInfo
	 * Size -> 0x0018
	 */
	struct FAnimSlotInfo
	{
	public:
		class FName                                                SlotName;                                                // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor
		TArray<float>                                              ChannelWeights;                                          // 0x0008(0x0010) ZeroConstructor
	};

	/**
	 * ScriptStruct Engine.EngineTypes.MTDResult
	 * Size -> 0x0010
	 */
	struct FMTDResult
	{
	public:
		struct FVector                                             Direction;                                               // 0x0000(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      Distance;                                                // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct Engine.EngineTypes.OverlapResult
	 * Size -> 0x0018
	 */
	struct FOverlapResult
	{
	public:
		TWeakObjectPtr<class AActor>                               Actor;                                                   // 0x0000(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor
		TWeakObjectPtr<class UPrimitiveComponent>                  Component;                                               // 0x0008(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor
		int32_t                                                    ItemIndex;                                               // 0x0010(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bBlockingHit : 1;                                        // 0x0014(0x0001) BIT_FIELD NoDestructor
		unsigned char                                              UnknownData_AEUH[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.EngineTypes.SwarmDebugOptions
	 * Size -> 0x0004
	 */
	struct FSwarmDebugOptions
	{
	public:
		bool                                                       bDistributionEnabled : 1;                                // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor
		bool                                                       bForceContentExport : 1;                                 // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor
		bool                                                       bInitialized : 1;                                        // 0x0000(0x0001) BIT_FIELD NoDestructor
		unsigned char                                              UnknownData_8RBY[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.EngineTypes.LightmassDebugOptions
	 * Size -> 0x0010
	 */
	struct FLightmassDebugOptions
	{
	public:
		bool                                                       bDebugMode : 1;                                          // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor
		bool                                                       bStatsEnabled : 1;                                       // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor
		bool                                                       bGatherBSPSurfacesAcrossComponents : 1;                  // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor
		unsigned char                                              UnknownData_LV2J[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CoplanarTolerance;                                       // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bUseImmediateImport : 1;                                 // 0x0008(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor
		bool                                                       bImmediateProcessMappings : 1;                           // 0x0008(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor
		bool                                                       bSortMappings : 1;                                       // 0x0008(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor
		bool                                                       bDumpBinaryFiles : 1;                                    // 0x0008(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor
		bool                                                       bDebugMaterials : 1;                                     // 0x0008(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor
		bool                                                       bPadMappings : 1;                                        // 0x0008(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor
		bool                                                       bDebugPaddings : 1;                                      // 0x0008(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor
		bool                                                       bOnlyCalcDebugTexelMappings : 1;                         // 0x0008(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor
		bool                                                       bUseRandomColors : 1;                                    // 0x0009(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor
		bool                                                       bColorBordersGreen : 1;                                  // 0x0009(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor
		bool                                                       bColorByExecutionTime : 1;                               // 0x0009(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor
		unsigned char                                              UnknownData_0M2L[0x2];                                   // 0x000A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ExecutionTimeDivisor;                                    // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct Engine.EngineTypes.BasedPosition
	 * Size -> 0x0038
	 */
	struct FBasedPosition
	{
	public:
		class AActor*                                              Base;                                                    // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector                                             Position;                                                // 0x0008(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector                                             CachedBaseLocation;                                      // 0x0014(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor
		struct FRotator                                            CachedBaseRotation;                                      // 0x0020(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector                                             CachedTransPosition;                                     // 0x002C(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct Engine.EngineTypes.RigidBodyContactInfo
	 * Size -> 0x0030
	 */
	struct FRigidBodyContactInfo
	{
	public:
		struct FVector                                             ContactPosition;                                         // 0x0000(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector                                             ContactNormal;                                           // 0x000C(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      ContactPenetration;                                      // 0x0018(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_9C8N[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPhysicalMaterial*                                   PhysMaterial[0x2];                                       // 0x0020(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct Engine.EngineTypes.CollisionImpactData
	 * Size -> 0x0028
	 */
	struct FCollisionImpactData
	{
	public:
		TArray<struct FRigidBodyContactInfo>                       ContactInfos;                                            // 0x0000(0x0010) ZeroConstructor
		struct FVector                                             TotalNormalImpulse;                                      // 0x0010(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector                                             TotalFrictionImpulse;                                    // 0x001C(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct Engine.EngineTypes.RigidBodyState
	 * Size -> 0x0040
	 */
	struct FRigidBodyState
	{
	public:
		struct FVector_NetQuantize100                              Position;                                                // 0x0000(0x000C)
		unsigned char                                              UnknownData_173V[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FQuat                                               Quaternion;                                              // 0x0010(0x0010) IsPlainOldData, NoDestructor
		struct FVector_NetQuantize100                              LinVel;                                                  // 0x0020(0x000C)
		struct FVector_NetQuantize100                              AngVel;                                                  // 0x002C(0x000C)
		unsigned char                                              Flags;                                                   // 0x0038(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_MCI0[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.EngineBaseTypes.ExposureSettings
	 * Size -> 0x0008
	 */
	struct FExposureSettings
	{
	public:
		int32_t                                                    LogOffset;                                               // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bFixed;                                                  // 0x0004(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_GQCM[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.EngineBaseTypes.URL
	 * Size -> 0x0060
	 */
	struct FURL
	{
	public:
		class FString                                              Protocol;                                                // 0x0000(0x0010) ZeroConstructor
		class FString                                              Host;                                                    // 0x0010(0x0010) ZeroConstructor
		int32_t                                                    Port;                                                    // 0x0020(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_G15Y[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Map;                                                     // 0x0028(0x0010) ZeroConstructor
		TArray<class FString>                                      Op;                                                      // 0x0038(0x0010) ZeroConstructor
		class FString                                              Portal;                                                  // 0x0048(0x0010) ZeroConstructor
		int32_t                                                    Valid;                                                   // 0x0058(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_WY96[0x4];                                   // 0x005C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.EngineBaseTypes.TickPrerequisite
	 * Size -> 0x0010
	 */
	struct FTickPrerequisite
	{
	public:
		unsigned char                                              UnknownData_RQSW[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.Canvas.WrappedStringElement
	 * Size -> 0x0018
	 */
	struct FWrappedStringElement
	{
	public:
		class FString                                              Value;                                                   // 0x0000(0x0010) ZeroConstructor
		struct FVector2D                                           LineExtent;                                              // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct Engine.Canvas.TextSizingParameters
	 * Size -> 0x0028
	 */
	struct FTextSizingParameters
	{
	public:
		float                                                      DrawX;                                                   // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      DrawY;                                                   // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      DrawXL;                                                  // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      DrawYL;                                                  // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector2D                                           Scaling;                                                 // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor
		class UFont*                                               DrawFont;                                                // 0x0018(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector2D                                           SpacingAdjust;                                           // 0x0020(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct Engine.Canvas.CanvasIcon
	 * Size -> 0x0018
	 */
	struct FCanvasIcon
	{
	public:
		class UTexture*                                            Texture;                                                 // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      U;                                                       // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      V;                                                       // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      UL;                                                      // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      VL;                                                      // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct Engine.CurveBase.IntegralKey
	 * Size -> 0x0008
	 */
	struct FIntegralKey
	{
	public:
		float                                                      Time;                                                    // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		int32_t                                                    Value;                                                   // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct Engine.CurveBase.IntegralCurve
	 * Size -> 0x0010 (FullSize[0x0068] - InheritedSize[0x0058])
	 */
	struct FIntegralCurve : public FIndexedCurve
	{
	public:
		TArray<struct FIntegralKey>                                Keys;                                                    // 0x0058(0x0010) ZeroConstructor
	};

	/**
	 * ScriptStruct Engine.PrimitiveComponent.SpriteCategoryInfo
	 * Size -> 0x0058
	 */
	struct FSpriteCategoryInfo
	{
	public:
		class FName                                                Category;                                                // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor
		class FText                                                DisplayName;                                             // 0x0008(0x0018) ELEMENT_SIZE_MISMATCH
		unsigned char                                              UnknownData_OREQ[0x10];                                  // 0x0020(0x0010) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		class FText                                                Description;                                             // 0x0030(0x0018) ELEMENT_SIZE_MISMATCH
		unsigned char                                              UnknownData_CWFL[0x10];                                  // 0x0048(0x0010) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	};

	/**
	 * ScriptStruct Engine.SkeletalMesh.BoneMirrorExport
	 * Size -> 0x0014
	 */
	struct FBoneMirrorExport
	{
	public:
		class FName                                                BoneName;                                                // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		class FName                                                SourceBoneName;                                          // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		EAxis                                                      BoneFlipAxis;                                            // 0x0010(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_RJWN[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.SkeletalMeshComponent.SkeletalMeshComponentPreClothTickFunction
	 * Size -> 0x0008 (FullSize[0x0050] - InheritedSize[0x0048])
	 */
	struct FSkeletalMeshComponentPreClothTickFunction : public FTickFunction
	{
	public:
		unsigned char                                              UnknownData_NVAH[0x8];                                   // 0x0048(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.AnimationAsset.AnimationGroupReference
	 * Size -> 0x000C
	 */
	struct FAnimationGroupReference
	{
	public:
		class FName                                                GroupName;                                               // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		EAnimGroupRole                                             GroupRole;                                               // 0x0008(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_661M[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.AnimationAsset.AnimExtractContext
	 * Size -> 0x000C
	 */
	struct FAnimExtractContext
	{
	public:
		bool                                                       bExtractRootMotionTranslation;                           // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bExtractRootMotionRotation;                              // 0x0001(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_TZCS[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CurrentTime;                                             // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		ERootMotionRootLock                                        RootMotionRootLock;                                      // 0x0008(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_4HZ2[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.WorldSettings.TickWorldSettingsDuringPhysics
	 * Size -> 0x0008 (FullSize[0x0050] - InheritedSize[0x0048])
	 */
	struct FTickWorldSettingsDuringPhysics : public FTickFunction
	{
	public:
		unsigned char                                              UnknownData_IVU9[0x8];                                   // 0x0048(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.WorldSettings.ActorList
	 * Size -> 0x0010
	 */
	struct FActorList
	{
	public:
		unsigned char                                              UnknownData_VPCV[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.WorldSettings.NetViewer
	 * Size -> 0x0028
	 */
	struct FNetViewer
	{
	public:
		class APlayerController*                                   InViewer;                                                // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor
		class AActor*                                              Viewer;                                                  // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector                                             ViewLocation;                                            // 0x0010(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector                                             viewDir;                                                 // 0x001C(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct Engine.BlueprintGeneratedClass.BlueprintDebugData
	 * Size -> 0x0001
	 */
	struct FBlueprintDebugData
	{
	public:
		unsigned char                                              UnknownData_YROR[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.BlueprintGeneratedClass.DebuggingInfoForSingleFunction
	 * Size -> 0x0140
	 */
	struct FDebuggingInfoForSingleFunction
	{
	public:
		unsigned char                                              UnknownData_B18Z[0x140];                                 // 0x0000(0x0140) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.BlueprintGeneratedClass.NodeToCodeAssociation
	 * Size -> 0x0014
	 */
	struct FNodeToCodeAssociation
	{
	public:
		unsigned char                                              UnknownData_LVDW[0x14];                                  // 0x0000(0x0014) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.FastArraySerializerItem
	 * Size -> 0x0008
	 */
	struct FFastArraySerializerItem
	{
	public:
		int32_t                                                    ReplicationID;                                           // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor
		int32_t                                                    ReplicationKey;                                          // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor
	};

	/**
	 * ScriptStruct Engine.FastArraySerializer
	 * Size -> 0x0058
	 */
	struct FFastArraySerializer
	{
	public:
		unsigned char                                              UnknownData_Y5O7[0x58];                                  // 0x0000(0x0058) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.LatentActionManager
	 * Size -> 0x00B0
	 */
	struct FLatentActionManager
	{
	public:
		unsigned char                                              UnknownData_QGD8[0xB0];                                  // 0x0000(0x00B0) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.World.EndClothSimulationFunction
	 * Size -> 0x0008 (FullSize[0x0050] - InheritedSize[0x0048])
	 */
	struct FEndClothSimulationFunction : public FTickFunction
	{
	public:
		unsigned char                                              UnknownData_ODPO[0x8];                                   // 0x0048(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.World.StartClothSimulationFunction
	 * Size -> 0x0008 (FullSize[0x0050] - InheritedSize[0x0048])
	 */
	struct FStartClothSimulationFunction : public FTickFunction
	{
	public:
		unsigned char                                              UnknownData_XGOE[0x8];                                   // 0x0048(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.World.EndPhysicsTickFunction
	 * Size -> 0x0008 (FullSize[0x0050] - InheritedSize[0x0048])
	 */
	struct FEndPhysicsTickFunction : public FTickFunction
	{
	public:
		unsigned char                                              UnknownData_XWQU[0x8];                                   // 0x0048(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.World.StartPhysicsTickFunction
	 * Size -> 0x0008 (FullSize[0x0050] - InheritedSize[0x0048])
	 */
	struct FStartPhysicsTickFunction : public FTickFunction
	{
	public:
		unsigned char                                              UnknownData_Z8XD[0x8];                                   // 0x0048(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.Level.CachedPerTriPhysSMData
	 * Size -> 0x0010
	 */
	struct FCachedPerTriPhysSMData
	{
	public:
		unsigned char                                              UnknownData_GORL[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.Level.CachedPhysSMData
	 * Size -> 0x0010
	 */
	struct FCachedPhysSMData
	{
	public:
		unsigned char                                              UnknownData_Z5L0[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.Level.StreamableTextureInstance
	 * Size -> 0x0014
	 */
	struct FStreamableTextureInstance
	{
	public:
		unsigned char                                              UnknownData_2UHI[0x14];                                  // 0x0000(0x0014) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.Level.DynamicTextureInstance
	 * Size -> 0x0014 (FullSize[0x0028] - InheritedSize[0x0014])
	 */
	struct FDynamicTextureInstance : public FStreamableTextureInstance
	{
	public:
		unsigned char                                              UnknownData_AX5G[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTexture2D*                                          Texture;                                                 // 0x0018(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bAttached;                                               // 0x0020(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_H561[0x3];                                   // 0x0021(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      OriginalRadius;                                          // 0x0024(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct Engine.PlayerMuteList
	 * Size -> 0x0038
	 */
	struct FPlayerMuteList
	{
	public:
		unsigned char                                              UnknownData_AT4E[0x30];                                  // 0x0000(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bHasVoiceHandshakeCompleted;                             // 0x0030(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_0JWI[0x3];                                   // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    VoiceChannelIdx;                                         // 0x0034(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct Engine.DynamicCaptureManager.UploadToGpuCommand
	 * Size -> 0x0018
	 */
	struct FUploadToGpuCommand
	{
	public:
		class UReflectionCaptureComponent*                         CaptureComponent;                                        // 0x0000(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_04SQ[0x10];                                  // 0x0008(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.AntiDupeTransactionLog.TransactionLogData
	 * Size -> 0x0020
	 */
	struct FTransactionLogData
	{
	public:
		unsigned char                                              UnknownData_2HR7[0x20];                                  // 0x0000(0x0020) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.LandscapeGizmoActiveActor.GizmoSelectData
	 * Size -> 0x0050
	 */
	struct FGizmoSelectData
	{
	public:
		unsigned char                                              UnknownData_PS49[0x50];                                  // 0x0000(0x0050) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.LandscapeProxy.LandscapeImportLayerInfo
	 * Size -> 0x0020
	 */
	struct FLandscapeImportLayerInfo
	{
	public:
		class FName                                                LayerName;                                               // 0x0000(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor
		class ULandscapeLayerInfoObject*                           LayerInfo;                                               // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_C77R[0x10];                                  // 0x0010(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.LandscapeProxy.LandscapeEditorLayerSettings
	 * Size -> 0x0001
	 */
	struct FLandscapeEditorLayerSettings
	{
	public:
		unsigned char                                              UnknownData_U37S[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.LandscapeProxy.LandscapeWeightmapUsage
	 * Size -> 0x0020
	 */
	struct FLandscapeWeightmapUsage
	{
	public:
		class ULandscapeComponent*                                 ChannelUsage[0x4];                                       // 0x0000(0x0020) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct Engine.NavigationGraph.NavGraphEdge
	 * Size -> 0x0018
	 */
	struct FNavGraphEdge
	{
	public:
		unsigned char                                              UnknownData_K6EZ[0x18];                                  // 0x0000(0x0018) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.PreviewAttachedObjectPair
	 * Size -> 0x0030
	 */
	struct FPreviewAttachedObjectPair
	{
	public:
		TAssetPtr<class UObject>                                   AttachedObject;                                          // 0x0000(0x001C) ELEMENT_SIZE_MISMATCH
		unsigned char                                              UnknownData_EUJ8[0x4];                                   // 0x001C(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		class UObject*                                             Object;                                                  // 0x0020(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor
		class FName                                                AttachedTo;                                              // 0x0028(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct Engine.PreviewAssetAttachContainer
	 * Size -> 0x0010
	 */
	struct FPreviewAssetAttachContainer
	{
	public:
		TArray<struct FPreviewAttachedObjectPair>                  AttachedObjects;                                         // 0x0000(0x0010) ZeroConstructor
	};

	/**
	 * ScriptStruct Engine.SmartNameMapping
	 * Size -> 0x0068
	 */
	struct FSmartNameMapping
	{
	public:
		unsigned char                                              UnknownData_8E1P[0x68];                                  // 0x0000(0x0068) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.Skeleton.NameMapping
	 * Size -> 0x0010
	 */
	struct FNameMapping
	{
	public:
		class FName                                                NodeName;                                                // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor
		class FName                                                BoneName;                                                // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct Engine.Skeleton.RigConfiguration
	 * Size -> 0x0018
	 */
	struct FRigConfiguration
	{
	public:
		class URig*                                                Rig;                                                     // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor
		TArray<struct FNameMapping>                                BoneMappingTable;                                        // 0x0008(0x0010) ZeroConstructor
	};

	/**
	 * ScriptStruct Engine.Skeleton.BoneReductionSetting
	 * Size -> 0x0010
	 */
	struct FBoneReductionSetting
	{
	public:
		TArray<class FName>                                        BonesToRemove;                                           // 0x0000(0x0010) ZeroConstructor
	};

	/**
	 * ScriptStruct Engine.Skeleton.ReferencePose
	 * Size -> 0x0018
	 */
	struct FReferencePose
	{
	public:
		class FName                                                PoseName;                                                // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor
		TArray<struct FTransform>                                  ReferencePose;                                           // 0x0008(0x0010) ZeroConstructor
	};

	/**
	 * ScriptStruct Engine.Interface_CollisionDataProvider.TriIndices
	 * Size -> 0x000C
	 */
	struct FTriIndices
	{
	public:
		int32_t                                                    v0;                                                      // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		int32_t                                                    v1;                                                      // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		int32_t                                                    v2;                                                      // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct Engine.Interface_CollisionDataProvider.TriMeshCollisionData
	 * Size -> 0x0038
	 */
	struct FTriMeshCollisionData
	{
	public:
		TArray<struct FVector>                                     Vertices;                                                // 0x0000(0x0010) ZeroConstructor, Transient
		TArray<struct FTriIndices>                                 Indices;                                                 // 0x0010(0x0010) ZeroConstructor, Transient
		bool                                                       bFlipNormals : 1;                                        // 0x0020(0x0001) BIT_FIELD Transient, NoDestructor
		unsigned char                                              UnknownData_JB7V[0x17];                                  // 0x0021(0x0017) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.NavAvoidanceMask
	 * Size -> 0x0004
	 */
	struct FNavAvoidanceMask
	{
	public:
		bool                                                       bGroup0 : 1;                                             // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor
		bool                                                       bGroup1 : 1;                                             // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor
		bool                                                       bGroup2 : 1;                                             // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor
		bool                                                       bGroup3 : 1;                                             // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor
		bool                                                       bGroup4 : 1;                                             // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor
		bool                                                       bGroup5 : 1;                                             // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor
		bool                                                       bGroup6 : 1;                                             // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor
		bool                                                       bGroup7 : 1;                                             // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor
		bool                                                       bGroup8 : 1;                                             // 0x0001(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor
		bool                                                       bGroup9 : 1;                                             // 0x0001(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor
		bool                                                       bGroup10 : 1;                                            // 0x0001(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor
		bool                                                       bGroup11 : 1;                                            // 0x0001(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor
		bool                                                       bGroup12 : 1;                                            // 0x0001(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor
		bool                                                       bGroup13 : 1;                                            // 0x0001(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor
		bool                                                       bGroup14 : 1;                                            // 0x0001(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor
		bool                                                       bGroup15 : 1;                                            // 0x0001(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor
		bool                                                       bGroup16 : 1;                                            // 0x0002(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor
		bool                                                       bGroup17 : 1;                                            // 0x0002(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor
		bool                                                       bGroup18 : 1;                                            // 0x0002(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor
		bool                                                       bGroup19 : 1;                                            // 0x0002(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor
		bool                                                       bGroup20 : 1;                                            // 0x0002(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor
		bool                                                       bGroup21 : 1;                                            // 0x0002(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor
		bool                                                       bGroup22 : 1;                                            // 0x0002(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor
		bool                                                       bGroup23 : 1;                                            // 0x0002(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor
		bool                                                       bGroup24 : 1;                                            // 0x0003(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor
		bool                                                       bGroup25 : 1;                                            // 0x0003(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor
		bool                                                       bGroup26 : 1;                                            // 0x0003(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor
		bool                                                       bGroup27 : 1;                                            // 0x0003(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor
		bool                                                       bGroup28 : 1;                                            // 0x0003(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor
		bool                                                       bGroup29 : 1;                                            // 0x0003(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor
		bool                                                       bGroup30 : 1;                                            // 0x0003(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor
		bool                                                       bGroup31 : 1;                                            // 0x0003(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor
	};

	/**
	 * ScriptStruct Engine.LineBatchComponent.BatchedPoint
	 * Size -> 0x0028
	 */
	struct FBatchedPoint
	{
	public:
		struct FVector                                             Position;                                                // 0x0000(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor
		struct FLinearColor                                        Color;                                                   // 0x000C(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      PointSize;                                               // 0x001C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      RemainingLifeTime;                                       // 0x0020(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              DepthPriority;                                           // 0x0024(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_Q7T1[0x3];                                   // 0x0025(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.LineBatchComponent.BatchedLine
	 * Size -> 0x0034
	 */
	struct FBatchedLine
	{
	public:
		struct FVector                                             Start;                                                   // 0x0000(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector                                             End;                                                     // 0x000C(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor
		struct FLinearColor                                        Color;                                                   // 0x0018(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      Thickness;                                               // 0x0028(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      RemainingLifeTime;                                       // 0x002C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              DepthPriority;                                           // 0x0030(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_6XM0[0x3];                                   // 0x0031(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.InstancedStaticMeshComponent.InstancedStaticMeshMappingInfo
	 * Size -> 0x0018
	 */
	struct FInstancedStaticMeshMappingInfo
	{
	public:
		class UTexture2D*                                          LightmapTexture;                                         // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_BDL0[0x10];                                  // 0x0008(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.HierarchicalInstancedStaticMeshComponent.ClusterNode
	 * Size -> 0x0028
	 */
	struct FClusterNode
	{
	public:
		struct FVector                                             BoundMin;                                                // 0x0000(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor
		int32_t                                                    FirstChild;                                              // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector                                             BoundMax;                                                // 0x0010(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor
		int32_t                                                    LastChild;                                               // 0x001C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		int32_t                                                    FirstInstance;                                           // 0x0020(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		int32_t                                                    LastInstance;                                            // 0x0024(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct Engine.HierarchicalInstancedStaticMeshComponent.ExpandedUniqueOctreeNode
	 * Size -> 0x004C
	 */
	struct FExpandedUniqueOctreeNode
	{
	public:
		struct FBox                                                CurrentBox;                                              // 0x0000(0x001C) ZeroConstructor, IsPlainOldData, NoDestructor
		int32_t                                                    Children[0x8];                                           // 0x001C(0x0020) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              bIsLeaf;                                                 // 0x003C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_29SU[0x3];                                   // 0x003D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    InstanceStart;                                           // 0x0040(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		int32_t                                                    InstanceEnd;                                             // 0x0044(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		int32_t                                                    OcclusionIndex;                                          // 0x0048(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct Engine.AnimSequenceBase.AnimNotifyTrack
	 * Size -> 0x0028
	 */
	struct FAnimNotifyTrack
	{
	public:
		class FName                                                TrackName;                                               // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor
		struct FLinearColor                                        TrackColor;                                              // 0x0008(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_RBFW[0x10];                                  // 0x0018(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.AnimCompositeBase.RootMotionExtractionStep
	 * Size -> 0x0010
	 */
	struct FRootMotionExtractionStep
	{
	public:
		class UAnimSequence*                                       AnimSequence;                                            // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      StartPosition;                                           // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      EndPosition;                                             // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct Engine.AnimSequence.CompressedTrack
	 * Size -> 0x0038
	 */
	struct FCompressedTrack
	{
	public:
		TArray<unsigned char>                                      ByteStream;                                              // 0x0000(0x0010) ZeroConstructor
		TArray<float>                                              Times;                                                   // 0x0010(0x0010) ZeroConstructor
		float                                                      Mins[0x3];                                               // 0x0020(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      Ranges[0x3];                                             // 0x002C(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct Engine.AnimSequence.RawAnimSequenceTrack
	 * Size -> 0x0030
	 */
	struct FRawAnimSequenceTrack
	{
	public:
		TArray<struct FVector>                                     PosKeys;                                                 // 0x0000(0x0010) ZeroConstructor
		TArray<struct FQuat>                                       RotKeys;                                                 // 0x0010(0x0010) ZeroConstructor
		TArray<struct FVector>                                     ScaleKeys;                                               // 0x0020(0x0010) ZeroConstructor
	};

	/**
	 * ScriptStruct Engine.AnimSequence.AnimSequenceTrackContainer
	 * Size -> 0x0020
	 */
	struct FAnimSequenceTrackContainer
	{
	public:
		TArray<struct FRawAnimSequenceTrack>                       AnimationTracks;                                         // 0x0000(0x0010) ZeroConstructor
		TArray<class FName>                                        TrackNames;                                              // 0x0010(0x0010) ZeroConstructor
	};

	/**
	 * ScriptStruct Engine.AnimInstance.A2Pose
	 * Size -> 0x0010
	 */
	struct FA2Pose
	{
	public:
		TArray<struct FTransform>                                  Bones;                                                   // 0x0000(0x0010) ZeroConstructor
	};

	/**
	 * ScriptStruct Engine.AnimInstance.SlotEvaluationPose
	 * Size -> 0x0018
	 */
	struct FSlotEvaluationPose
	{
	public:
		EAdditiveAnimationType                                     AdditiveType;                                            // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_HU9Y[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Weight;                                                  // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		struct FA2Pose                                             Pose;                                                    // 0x0008(0x0010)
	};

	/**
	 * ScriptStruct Engine.AnimInstance.PerBoneBlendWeight
	 * Size -> 0x0008
	 */
	struct FPerBoneBlendWeight
	{
	public:
		int32_t                                                    SourceIndex;                                             // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      BlendWeight;                                             // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct Engine.AnimInstance.PerBoneBlendWeights
	 * Size -> 0x0010
	 */
	struct FPerBoneBlendWeights
	{
	public:
		TArray<struct FPerBoneBlendWeight>                         BoneBlendWeights;                                        // 0x0000(0x0010) ZeroConstructor
	};

	/**
	 * ScriptStruct Engine.AnimInstance.BoneTransform
	 * Size -> 0x0040
	 */
	struct FBoneTransform
	{
	public:
		int32_t                                                    BoneIndex;                                               // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_3EI7[0xC];                                   // 0x0004(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Transform;                                               // 0x0010(0x0030) IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct Engine.AnimInstance.A2CSPose
	 * Size -> 0x0018 (FullSize[0x0028] - InheritedSize[0x0010])
	 */
	struct FA2CSPose : public FA2Pose
	{
	public:
		unsigned char                                              UnknownData_KEW8[0x8];                                   // 0x0010(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<unsigned char>                                      ComponentSpaceFlags;                                     // 0x0018(0x0010) ZeroConstructor
	};

	/**
	 * ScriptStruct Engine.AnimMontage.AnimMontageInstance
	 * Size -> 0x0070
	 */
	struct FAnimMontageInstance
	{
	public:
		class UAnimMontage*                                        Montage;                                                 // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      DesiredWeight;                                           // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      Weight;                                                  // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      BlendTime;                                               // 0x0010(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor
		float                                                      BlendOutTimeOverride;                                    // 0x0014(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor
		bool                                                       bPauseOnFinish;                                          // 0x0018(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_YFSW[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      DefaultBlendTimeMultiplier;                              // 0x001C(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor
		TArray<int32_t>                                            NextSections;                                            // 0x0020(0x0010) ZeroConstructor
		TArray<int32_t>                                            PrevSections;                                            // 0x0030(0x0010) ZeroConstructor
		bool                                                       bPlaying;                                                // 0x0040(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_8FIB[0x27];                                  // 0x0041(0x0027) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Position;                                                // 0x0068(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      PlayRate;                                                // 0x006C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct Engine.BlendSpaceBase.GridBlendSample
	 * Size -> 0x001C
	 */
	struct FGridBlendSample
	{
	public:
		struct FEditorElement                                      GridElement;                                             // 0x0000(0x0018)
		float                                                      BlendWeight;                                             // 0x0018(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct Engine.AnimStateMachineTypes.AnimationTransitionRule
	 * Size -> 0x0010
	 */
	struct FAnimationTransitionRule
	{
	public:
		class FName                                                RuleToExecute;                                           // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       TransitionReturnVal;                                     // 0x0008(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_B1EO[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    TransitionIndex;                                         // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct Engine.AnimStateMachineTypes.AnimationState
	 * Size -> 0x0020 (FullSize[0x0028] - InheritedSize[0x0008])
	 */
	struct FAnimationState : public FAnimationStateBase
	{
	public:
		TArray<struct FAnimationTransitionRule>                    Transitions;                                             // 0x0008(0x0010) ZeroConstructor
		int32_t                                                    StateRootNodeIndex;                                      // 0x0018(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		int32_t                                                    StartNotify;                                             // 0x001C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		int32_t                                                    EndNotify;                                               // 0x0020(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		int32_t                                                    FullyBlendedNotify;                                      // 0x0024(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct Engine.Blueprint.EditedDocumentInfo
	 * Size -> 0x0018
	 */
	struct FEditedDocumentInfo
	{
	public:
		class UObject*                                             EditedObject;                                            // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector2D                                           SavedViewOffset;                                         // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      SavedZoomAmount;                                         // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_AUO1[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.Blueprint.BPInterfaceDescription
	 * Size -> 0x0018
	 */
	struct FBPInterfaceDescription
	{
	public:
		class UClass*                                              Interface;                                               // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor
		TArray<class UEdGraph*>                                    Graphs;                                                  // 0x0008(0x0010) ZeroConstructor
	};

	/**
	 * ScriptStruct Engine.Blueprint.BPVariableDescription
	 * Size -> 0x00B8
	 */
	struct FBPVariableDescription
	{
	public:
		class FName                                                VarName;                                                 // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FGuid                                               VarGuid;                                                 // 0x0008(0x0010) ZeroConstructor
		struct FEdGraphPinType                                     VarType;                                                 // 0x0018(0x0050) Edit
		class FString                                              FriendlyName;                                            // 0x0068(0x0010) Edit, ZeroConstructor
		class FName                                                Category;                                                // 0x0078(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		uint64_t                                                   PropertyFlags;                                           // 0x0080(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              RepCondition;                                            // 0x0088(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_A5KI[0x3];                                   // 0x0089(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                RepNotifyFunc;                                           // 0x008C(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_BLB7[0x4];                                   // 0x0094(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FBPVariableMetaDataEntry>                    MetaDataArray;                                           // 0x0098(0x0010) Edit, ZeroConstructor
		class FString                                              DefaultValue;                                            // 0x00A8(0x0010) Edit, ZeroConstructor
	};

	/**
	 * ScriptStruct Engine.AnimBlueprint.AnimParentNodeAssetOverride
	 * Size -> 0x0018
	 */
	struct FAnimParentNodeAssetOverride
	{
	public:
		class UAnimationAsset*                                     NewAsset;                                                // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor
		struct FGuid                                               ParentNodeGuid;                                          // 0x0008(0x0010) ZeroConstructor
	};

	/**
	 * ScriptStruct Engine.DataTable.DataTableCategoryHandle
	 * Size -> 0x0018
	 */
	struct FDataTableCategoryHandle
	{
	public:
		class UDataTable*                                          DataTable;                                               // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class FName                                                ColumnName;                                              // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class FName                                                RowContents;                                             // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct Engine.DataTable.DataTableRowHandle
	 * Size -> 0x0010
	 */
	struct FDataTableRowHandle
	{
	public:
		class UDataTable*                                          DataTable;                                               // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class FName                                                RowName;                                                 // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct Engine.Texture.TexturePlatformData
	 * Size -> 0x0020
	 */
	struct FTexturePlatformData
	{
	public:
		unsigned char                                              UnknownData_78H7[0x20];                                  // 0x0000(0x0020) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.Texture.TextureSource
	 * Size -> 0x0058
	 */
	struct FTextureSource
	{
	public:
		unsigned char                                              UnknownData_RDX0[0x58];                                  // 0x0000(0x0058) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.AnimBlueprintGeneratedClass.AnimBlueprintDebugData
	 * Size -> 0x0001
	 */
	struct FAnimBlueprintDebugData
	{
	public:
		unsigned char                                              UnknownData_ILQN[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.AnimBlueprintGeneratedClass.AnimationFrameSnapshot
	 * Size -> 0x0001
	 */
	struct FAnimationFrameSnapshot
	{
	public:
		unsigned char                                              UnknownData_I1PS[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.AnimBlueprintGeneratedClass.StateMachineDebugData
	 * Size -> 0x00B0
	 */
	struct FStateMachineDebugData
	{
	public:
		unsigned char                                              UnknownData_VL6X[0xB0];                                  // 0x0000(0x00B0) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.Console.AutoCompleteNode
	 * Size -> 0x0028
	 */
	struct FAutoCompleteNode
	{
	public:
		int32_t                                                    IndexChar;                                               // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_K8XL[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<int32_t>                                            AutoCompleteListIndices;                                 // 0x0008(0x0010) ZeroConstructor
		unsigned char                                              UnknownData_LBQW[0x10];                                  // 0x0018(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.CurveTable.CurveTableRowHandle
	 * Size -> 0x0010
	 */
	struct FCurveTableRowHandle
	{
	public:
		class UCurveTable*                                         CurveTable;                                              // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class FName                                                RowName;                                                 // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct Engine.DistributionVector.Vector4Distribution
	 * Size -> 0x0028
	 */
	struct FVector4Distribution
	{
	public:
		struct FDistributionLookupTable                            Table;                                                   // 0x0000(0x0028) ZeroConstructor
	};

	/**
	 * ScriptStruct Engine.DistributionVector.VectorDistribution
	 * Size -> 0x0028
	 */
	struct FVectorDistribution
	{
	public:
		struct FDistributionLookupTable                            Table;                                                   // 0x0000(0x0028) ZeroConstructor
	};

	/**
	 * ScriptStruct Engine.EdGraph.GraphReference
	 * Size -> 0x0020
	 */
	struct FGraphReference
	{
	public:
		class UEdGraph*                                            MacroGraph;                                              // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected
		class UBlueprint*                                          GraphBlueprint;                                          // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected
		struct FGuid                                               GraphGuid;                                               // 0x0010(0x0010) ZeroConstructor, Protected
	};

	/**
	 * ScriptStruct Engine.EdGraphSchema.EdGraphSchemaAction
	 * Size -> 0x0090
	 */
	struct FEdGraphSchemaAction
	{
	public:
		unsigned char                                              UnknownData_X8FX[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                MenuDescription;                                         // 0x0008(0x0018) ELEMENT_SIZE_MISMATCH
		unsigned char                                              UnknownData_VE97[0x10];                                  // 0x0020(0x0010) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		class FString                                              TooltipDescription;                                      // 0x0030(0x0010) ZeroConstructor
		class FString                                              Category;                                                // 0x0040(0x0010) ZeroConstructor
		class FString                                              Keywords;                                                // 0x0050(0x0010) ZeroConstructor
		int32_t                                                    Grouping;                                                // 0x0060(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		int32_t                                                    SectionID;                                               // 0x0064(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		class FText                                                CachedSearchTitle;                                       // 0x0068(0x0018) ELEMENT_SIZE_MISMATCH
		unsigned char                                              UnknownData_U7VS[0x10];                                  // 0x0080(0x0010) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	};

	/**
	 * ScriptStruct Engine.EdGraphSchema.EdGraphSchemaAction_NewNode
	 * Size -> 0x0008 (FullSize[0x0098] - InheritedSize[0x0090])
	 */
	struct FEdGraphSchemaAction_NewNode : public FEdGraphSchemaAction
	{
	public:
		class UEdGraphNode*                                        NodeTemplate;                                            // 0x0090(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct Engine.Engine.ScreenMessageString
	 * Size -> 0x0030
	 */
	struct FScreenMessageString
	{
	public:
		uint64_t                                                   Key;                                                     // 0x0000(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor
		class FString                                              ScreenMessage;                                           // 0x0008(0x0010) ZeroConstructor, Transient
		struct FColor                                              DisplayColor;                                            // 0x0018(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor
		float                                                      timeToDisplay;                                           // 0x001C(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor
		float                                                      CurrentTimeDisplayed;                                    // 0x0020(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_NXJO[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		uint64_t                                                   ViewportKey;                                             // 0x0028(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct Engine.Engine.FullyLoadedPackagesInfo
	 * Size -> 0x0038
	 */
	struct FFullyLoadedPackagesInfo
	{
	public:
		EFullyLoadPackageType                                      FullyLoadType;                                           // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_TLWD[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Tag;                                                     // 0x0008(0x0010) ZeroConstructor
		TArray<class FName>                                        PackagesToLoad;                                          // 0x0018(0x0010) ZeroConstructor
		TArray<class UObject*>                                     LoadedObjects;                                           // 0x0028(0x0010) ZeroConstructor
	};

	/**
	 * ScriptStruct Engine.Engine.LevelStreamingStatus
	 * Size -> 0x0010
	 */
	struct FLevelStreamingStatus
	{
	public:
		class FName                                                PackageName;                                             // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bShouldBeLoaded : 1;                                     // 0x0008(0x0001) BIT_FIELD NoDestructor
		bool                                                       bshouldBeVisible : 1;                                    // 0x0008(0x0001) BIT_FIELD NoDestructor
		unsigned char                                              UnknownData_KNIU[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		uint32_t                                                   LODIndex;                                                // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct Engine.Engine.NamedNetDriver
	 * Size -> 0x0010
	 */
	struct FNamedNetDriver
	{
	public:
		class UNetDriver*                                          NetDriver;                                               // 0x0000(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_RJC5[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.Engine.WorldContext
	 * Size -> 0x0268
	 */
	struct FWorldContext
	{
	public:
		unsigned char                                              UnknownData_DE84[0xD0];                                  // 0x0000(0x00D0) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FURL                                                LastURL;                                                 // 0x00D0(0x0060)
		struct FURL                                                LastRemoteURL;                                           // 0x0130(0x0060)
		class UPendingNetGame*                                     PendingNetGame;                                          // 0x0190(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor
		TArray<struct FFullyLoadedPackagesInfo>                    PackagesToFullyLoad;                                     // 0x0198(0x0010) ZeroConstructor
		unsigned char                                              UnknownData_XG8V[0x10];                                  // 0x01A8(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class ULevel*>                                      LoadedLevelsForPendingMapChange;                         // 0x01B8(0x0010) ZeroConstructor
		unsigned char                                              UnknownData_24TR[0x18];                                  // 0x01C8(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UObjectReferencer*>                           ObjectReferencers;                                       // 0x01E0(0x0010) ZeroConstructor
		TArray<struct FLevelStreamingStatus>                       PendingLevelStreamingStatusUpdates;                      // 0x01F0(0x0010) ZeroConstructor
		class UGameViewportClient*                                 GameViewport;                                            // 0x0200(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor
		class UGameInstance*                                       OwningGameInstance;                                      // 0x0208(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor
		TArray<struct FNamedNetDriver>                             ActiveNetDrivers;                                        // 0x0210(0x0010) ZeroConstructor, Transient
		unsigned char                                              UnknownData_WMIB[0x48];                                  // 0x0220(0x0048) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.Font.FontData
	 * Size -> 0x0010
	 */
	struct FFontData
	{
	public:
		unsigned char                                              UnknownData_5OWZ[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.InterpGroup.InterpEdSelKey
	 * Size -> 0x0018
	 */
	struct FInterpEdSelKey
	{
	public:
		class UInterpGroup*                                        Group;                                                   // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor
		class UInterpTrack*                                        Track;                                                   // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor
		int32_t                                                    KeyIndex;                                                // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      UnsnappedPosition;                                       // 0x0014(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct Engine.InterpGroupCamera.CameraPreviewInfo
	 * Size -> 0x0030
	 */
	struct FCameraPreviewInfo
	{
	public:
		class UClass*                                              PawnClass;                                               // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		class UAnimSequence*                                       AnimSeq;                                                 // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector                                             Location;                                                // 0x0010(0x000C) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor
		struct FRotator                                            Rotation;                                                // 0x001C(0x000C) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor
		class APawn*                                               PawnInst;                                                // 0x0028(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct Engine.InterpTrack.SubTrackGroup
	 * Size -> 0x0028
	 */
	struct FSubTrackGroup
	{
	public:
		class FString                                              GroupName;                                               // 0x0000(0x0010) ZeroConstructor
		TArray<int32_t>                                            TrackIndices;                                            // 0x0010(0x0010) ZeroConstructor
		bool                                                       bIsCollapsed : 1;                                        // 0x0020(0x0001) BIT_FIELD NoDestructor
		bool                                                       bIsSelected : 1;                                         // 0x0020(0x0001) BIT_FIELD Transient, NoDestructor
		unsigned char                                              UnknownData_5JT9[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.InterpTrack.SupportedSubTrackInfo
	 * Size -> 0x0020
	 */
	struct FSupportedSubTrackInfo
	{
	public:
		class UClass*                                              SupportedClass;                                          // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor
		class FString                                              SubTrackName;                                            // 0x0008(0x0010) ZeroConstructor
		int32_t                                                    groupIndex;                                              // 0x0018(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_XAC1[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.LandscapeInfo.LandscapeInfoLayerSettings
	 * Size -> 0x0020
	 */
	struct FLandscapeInfoLayerSettings
	{
	public:
		class ULandscapeLayerInfoObject*                           LayerInfoObj;                                            // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor
		class FName                                                LayerName;                                               // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_QY8V[0x8];                                   // 0x0010(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bValid : 1;                                              // 0x0018(0x0001) BIT_FIELD Transient, NoDestructor
		unsigned char                                              UnknownData_D5TN[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.LandscapeInfo.LandscapeAddCollision
	 * Size -> 0x0030
	 */
	struct FLandscapeAddCollision
	{
	public:
		unsigned char                                              UnknownData_BISO[0x30];                                  // 0x0000(0x0030) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.LandscapeSplineSegment.LandscapeSplineMeshEntry
	 * Size -> 0x0038
	 */
	struct FLandscapeSplineMeshEntry
	{
	public:
		class UStaticMesh*                                         Mesh;                                                    // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		TArray<class UMaterialInterface*>                          MaterialOverrides;                                       // 0x0008(0x0010) Edit, ZeroConstructor
		bool                                                       bCenterH : 1;                                            // 0x0018(0x0001) BIT_FIELD Edit, NoDestructor
		unsigned char                                              UnknownData_DTJO[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector2D                                           Offset;                                                  // 0x001C(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bScaleToWidth : 1;                                       // 0x0024(0x0001) BIT_FIELD Edit, NoDestructor
		unsigned char                                              UnknownData_LNGH[0x3];                                   // 0x0025(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             Scale;                                                   // 0x0028(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		ELandscapeSplineMeshOrientation                            Orientation;                                             // 0x0034(0x0001) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor
		ESplineMeshAxis                                            ForwardAxis;                                             // 0x0035(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		ESplineMeshAxis                                            UpAxis;                                                  // 0x0036(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_QMJC[0x1];                                   // 0x0037(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.LocalMessage.ClientReceiveData
	 * Size -> 0x0040
	 */
	struct FClientReceiveData
	{
	public:
		class APlayerController*                                   LocalPC;                                                 // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor
		class FName                                                MessageType;                                             // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor
		int32_t                                                    MessageIndex;                                            // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_YDIF[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              MessageString;                                           // 0x0018(0x0010) ZeroConstructor
		class APlayerState*                                        RelatedPlayerState_2;                                    // 0x0028(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor
		class APlayerState*                                        RelatedPlayerState_3;                                    // 0x0030(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor
		class UObject*                                             OptionalObject;                                          // 0x0038(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct Engine.ParticleModule.ParticleCurvePair
	 * Size -> 0x0018
	 */
	struct FParticleCurvePair
	{
	public:
		class FString                                              CurveName;                                               // 0x0000(0x0010) ZeroConstructor
		class UObject*                                             CurveObject;                                             // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct Engine.ParticleModuleTypeDataBeam2.BeamTargetData
	 * Size -> 0x000C
	 */
	struct FBeamTargetData
	{
	public:
		class FName                                                TargetName;                                              // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      TargetPercentage;                                        // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct Engine.ParticleSystemReplay.ParticleSystemReplayFrame
	 * Size -> 0x0010
	 */
	struct FParticleSystemReplayFrame
	{
	public:
		unsigned char                                              UnknownData_JIOI[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.ParticleSystemReplay.ParticleEmitterReplayFrame
	 * Size -> 0x0010
	 */
	struct FParticleEmitterReplayFrame
	{
	public:
		unsigned char                                              UnknownData_OVXZ[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.SoundCue.SoundNodeEditorData
	 * Size -> 0x0008
	 */
	struct FSoundNodeEditorData
	{
	public:
		unsigned char                                              UnknownData_24Q2[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.SoundWave.StreamedAudioPlatformData
	 * Size -> 0x0020
	 */
	struct FStreamedAudioPlatformData
	{
	public:
		unsigned char                                              UnknownData_37GS[0x20];                                  // 0x0000(0x0020) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.SoundClass.SoundClassEditorData
	 * Size -> 0x0008
	 */
	struct FSoundClassEditorData
	{
	public:
		unsigned char                                              UnknownData_HO0K[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.StaticMesh.AssetEditorOrbitCameraPosition
	 * Size -> 0x0028
	 */
	struct FAssetEditorOrbitCameraPosition
	{
	public:
		bool                                                       bIsSet;                                                  // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_2AVR[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             CamOrbitPoint;                                           // 0x0004(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector                                             CamOrbitZoom;                                            // 0x0010(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor
		struct FRotator                                            CamOrbitRotation;                                        // 0x001C(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct Engine.StaticMesh.MeshSectionInfoMap
	 * Size -> 0x0050
	 */
	struct FMeshSectionInfoMap
	{
	public:
		unsigned char                                              UnknownData_N2M1[0x50];                                  // 0x0000(0x0050) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.StaticMesh.MeshSectionInfo
	 * Size -> 0x0008
	 */
	struct FMeshSectionInfo
	{
	public:
		int32_t                                                    MaterialIndex;                                           // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bEnableCollision;                                        // 0x0004(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bCastShadow;                                             // 0x0005(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_Q7R2[0x2];                                   // 0x0006(0x0002) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.StaticMesh.StaticMeshSourceModel
	 * Size -> 0x0068
	 */
	struct FStaticMeshSourceModel
	{
	public:
		struct FMeshBuildSettings                                  BuildSettings;                                           // 0x0000(0x0038) Edit
		struct FMeshReductionSettings                              ReductionSettings;                                       // 0x0038(0x0028) Edit
		float                                                      LODDistance;                                             // 0x0060(0x0004) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor
		float                                                      ScreenSize;                                              // 0x0064(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct Engine.StaticMesh.StaticMeshOptimizationSettings
	 * Size -> 0x001C
	 */
	struct FStaticMeshOptimizationSettings
	{
	public:
		EOptimizationType                                          ReductionMethod;                                         // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_KN7A[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      NumOfTrianglesPercentage;                                // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      MaxDeviationPercentage;                                  // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      WeldingThreshold;                                        // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bRecalcNormals;                                          // 0x0010(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_0EKW[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      NormalsThreshold;                                        // 0x0014(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              SilhouetteImportance;                                    // 0x0018(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              TextureImportance;                                       // 0x0019(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              ShadingImportance;                                       // 0x001A(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_FRLJ[0x1];                                   // 0x001B(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.PoseLinkBase
	 * Size -> 0x0018
	 */
	struct FPoseLinkBase
	{
	public:
		int32_t                                                    LinkID;                                                  // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_FH1C[0x14];                                  // 0x0004(0x0014) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.PoseLink
	 * Size -> 0x0000 (FullSize[0x0018] - InheritedSize[0x0018])
	 */
	struct FPoseLink : public FPoseLinkBase
	{	};

	/**
	 * ScriptStruct Engine.ComponentSpacePoseLink
	 * Size -> 0x0000 (FullSize[0x0018] - InheritedSize[0x0018])
	 */
	struct FComponentSpacePoseLink : public FPoseLinkBase
	{	};

	/**
	 * ScriptStruct Engine.ExposedValueCopyRecord
	 * Size -> 0x0048
	 */
	struct FExposedValueCopyRecord
	{
	public:
		class UProperty*                                           SourceProperty;                                          // 0x0000(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor
		class FName                                                SourcePropertyName;                                      // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor
		class FName                                                SourceSubPropertyName;                                   // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor
		int32_t                                                    SourceArrayIndex;                                        // 0x0018(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_WEGE[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UProperty*                                           DestProperty;                                            // 0x0020(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor
		int32_t                                                    DestArrayIndex;                                          // 0x0028(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		int32_t                                                    Size;                                                    // 0x002C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		EPostCopyOperation                                         PostCopyOperation;                                       // 0x0030(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_5WZU[0x17];                                  // 0x0031(0x0017) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.ExposedValueHandler
	 * Size -> 0x0028
	 */
	struct FExposedValueHandler
	{
	public:
		class FName                                                BoundFunction;                                           // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor
		TArray<struct FExposedValueCopyRecord>                     CopyRecords;                                             // 0x0008(0x0010) ZeroConstructor
		unsigned char                                              UnknownData_AXOA[0x10];                                  // 0x0018(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.AnimNode_Base
	 * Size -> 0x0030
	 */
	struct FAnimNode_Base
	{
	public:
		unsigned char                                              UnknownData_26XF[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FExposedValueHandler                                EvaluateGraphExposedInputs;                              // 0x0008(0x0028)
	};

	/**
	 * ScriptStruct Engine.InputScaleBias
	 * Size -> 0x0008
	 */
	struct FInputScaleBias
	{
	public:
		float                                                      Scale;                                                   // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      Bias;                                                    // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct Engine.AnimNode_ApplyAdditive
	 * Size -> 0x0040 (FullSize[0x0070] - InheritedSize[0x0030])
	 */
	struct FAnimNode_ApplyAdditive : public FAnimNode_Base
	{
	public:
		struct FPoseLink                                           Base;                                                    // 0x0030(0x0018) Edit, BlueprintVisible
		struct FPoseLink                                           additive;                                                // 0x0048(0x0018) Edit, BlueprintVisible
		float                                                      Alpha;                                                   // 0x0060(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FInputScaleBias                                     AlphaScaleBias;                                          // 0x0064(0x0008) Edit, BlueprintVisible
		unsigned char                                              UnknownData_XAVU[0x4];                                   // 0x006C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.AnimNode_BlendListBase
	 * Size -> 0x0048 (FullSize[0x0078] - InheritedSize[0x0030])
	 */
	struct FAnimNode_BlendListBase : public FAnimNode_Base
	{
	public:
		TArray<struct FPoseLink>                                   BlendPose;                                               // 0x0030(0x0010) Edit, BlueprintVisible, EditFixedSize, ZeroConstructor
		TArray<float>                                              BlendTime;                                               // 0x0040(0x0010) Edit, BlueprintVisible, EditFixedSize, ZeroConstructor
		TArray<float>                                              BlendWeights;                                            // 0x0050(0x0010) ZeroConstructor, Protected
		TArray<float>                                              RemainingBlendTimes;                                     // 0x0060(0x0010) ZeroConstructor, Protected
		int32_t                                                    LastActiveChildIndex;                                    // 0x0070(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, Protected
		unsigned char                                              UnknownData_Q9FG[0x4];                                   // 0x0074(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.AnimNode_BlendListByBool
	 * Size -> 0x0008 (FullSize[0x0080] - InheritedSize[0x0078])
	 */
	struct FAnimNode_BlendListByBool : public FAnimNode_BlendListBase
	{
	public:
		bool                                                       bActiveValue;                                            // 0x0078(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_1U3Z[0x7];                                   // 0x0079(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.AnimNode_BlendListByEnum
	 * Size -> 0x0018 (FullSize[0x0090] - InheritedSize[0x0078])
	 */
	struct FAnimNode_BlendListByEnum : public FAnimNode_BlendListBase
	{
	public:
		TArray<int32_t>                                            EnumToPoseIndex;                                         // 0x0078(0x0010) ZeroConstructor
		unsigned char                                              ActiveEnumValue;                                         // 0x0088(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_O9OF[0x7];                                   // 0x0089(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.AnimNode_BlendListByInt
	 * Size -> 0x0008 (FullSize[0x0080] - InheritedSize[0x0078])
	 */
	struct FAnimNode_BlendListByInt : public FAnimNode_BlendListBase
	{
	public:
		int32_t                                                    ActiveChildIndex;                                        // 0x0078(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_HL1Q[0x4];                                   // 0x007C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.AnimNode_BlendSpacePlayer
	 * Size -> 0x00D0 (FullSize[0x0100] - InheritedSize[0x0030])
	 */
	struct FAnimNode_BlendSpacePlayer : public FAnimNode_Base
	{
	public:
		float                                                      X;                                                       // 0x0030(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      Y;                                                       // 0x0034(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      Z;                                                       // 0x0038(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      PlayRate;                                                // 0x003C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bLoop;                                                   // 0x0040(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_C15D[0x7];                                   // 0x0041(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UBlendSpaceBase*                                     BlendSpace;                                              // 0x0048(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		int32_t                                                    groupIndex;                                              // 0x0050(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		EAnimGroupRole                                             GroupRole;                                               // 0x0054(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_6XQG[0x3];                                   // 0x0055(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      InternalTimeAccumulator;                                 // 0x0058(0x0004) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected
		unsigned char                                              UnknownData_O6GW[0x4];                                   // 0x005C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FBlendFilter                                        BlendFilter;                                             // 0x0060(0x0090) Protected
		TArray<struct FBlendSampleData>                            BlendSampleDataCache;                                    // 0x00F0(0x0010) ZeroConstructor, Protected
	};

	/**
	 * ScriptStruct Engine.AnimNode_BlendSpaceEvaluator
	 * Size -> 0x0008 (FullSize[0x0108] - InheritedSize[0x0100])
	 */
	struct FAnimNode_BlendSpaceEvaluator : public FAnimNode_BlendSpacePlayer
	{
	public:
		float                                                      NormalizedTime;                                          // 0x0100(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_D6VY[0x4];                                   // 0x0104(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.AnimNode_SkeletalControlBase
	 * Size -> 0x0028 (FullSize[0x0058] - InheritedSize[0x0030])
	 */
	struct FAnimNode_SkeletalControlBase : public FAnimNode_Base
	{
	public:
		struct FComponentSpacePoseLink                             ComponentPose;                                           // 0x0030(0x0018) Edit, BlueprintVisible
		float                                                      Alpha;                                                   // 0x0048(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FInputScaleBias                                     AlphaScaleBias;                                          // 0x004C(0x0008) Edit, BlueprintVisible
		unsigned char                                              UnknownData_G5BD[0x4];                                   // 0x0054(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.AnimNode_BoneDrivenController
	 * Size -> 0x0030 (FullSize[0x0088] - InheritedSize[0x0058])
	 */
	struct FAnimNode_BoneDrivenController : public FAnimNode_SkeletalControlBase
	{
	public:
		struct FBoneReference                                      SourceBone;                                              // 0x0058(0x000C) Edit, BlueprintVisible
		struct FBoneReference                                      TargetBone;                                              // 0x0064(0x000C) Edit, BlueprintVisible
		EComponentType                                             SourceComponent;                                         // 0x0070(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		EComponentType                                             TargetComponent;                                         // 0x0071(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_639L[0x2];                                   // 0x0072(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Multiplier;                                              // 0x0074(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bUseRange;                                               // 0x0078(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_FMIL[0x3];                                   // 0x0079(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      RangeMin;                                                // 0x007C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      RangeMax;                                                // 0x0080(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_80EE[0x4];                                   // 0x0084(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.AnimNode_CopyBone
	 * Size -> 0x0020 (FullSize[0x0078] - InheritedSize[0x0058])
	 */
	struct FAnimNode_CopyBone : public FAnimNode_SkeletalControlBase
	{
	public:
		struct FBoneReference                                      TargetBone;                                              // 0x0058(0x000C) Edit, BlueprintVisible
		struct FBoneReference                                      SourceBone;                                              // 0x0064(0x000C) Edit, BlueprintVisible
		bool                                                       bCopyTranslation;                                        // 0x0070(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bCopyRotation;                                           // 0x0071(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bCopyScale;                                              // 0x0072(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_AKH2[0x5];                                   // 0x0073(0x0005) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.ABRIKChainLink
	 * Size -> 0x0028
	 */
	struct FABRIKChainLink
	{
	public:
		unsigned char                                              UnknownData_ES8Y[0x18];                                  // 0x0000(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<int32_t>                                            ChildZeroLengthTransformIndices;                         // 0x0018(0x0010) ZeroConstructor
	};

	/**
	 * ScriptStruct Engine.AnimNode_Fabrik
	 * Size -> 0x0078 (FullSize[0x00D0] - InheritedSize[0x0058])
	 */
	struct FAnimNode_Fabrik : public FAnimNode_SkeletalControlBase
	{
	public:
		unsigned char                                              UnknownData_0Z5B[0x8];                                   // 0x0058(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          EffectorTransform;                                       // 0x0060(0x0030) Edit, BlueprintVisible, IsPlainOldData, NoDestructor
		EBoneControlSpace                                          EffectorTransformSpace;                                  // 0x0090(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_VHRJ[0x3];                                   // 0x0091(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FBoneReference                                      EffectorTransformBone;                                   // 0x0094(0x000C) Edit, BlueprintVisible
		EBoneRotationSource                                        EffectorRotationSource;                                  // 0x00A0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_LRIF[0x3];                                   // 0x00A1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FBoneReference                                      TipBone;                                                 // 0x00A4(0x000C) Edit, BlueprintVisible
		struct FBoneReference                                      RootBone;                                                // 0x00B0(0x000C) Edit, BlueprintVisible
		float                                                      Precision;                                               // 0x00BC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		int32_t                                                    MaxIterations;                                           // 0x00C0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bEnableDebugDraw;                                        // 0x00C4(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_EN96[0xB];                                   // 0x00C5(0x000B) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.AnimNode_GroundBones
	 * Size -> 0x0080 (FullSize[0x00D8] - InheritedSize[0x0058])
	 */
	struct FAnimNode_GroundBones : public FAnimNode_SkeletalControlBase
	{
	public:
		bool                                                       bDebug : 1;                                              // 0x0058(0x0001) BIT_FIELD Edit, NoDestructor
		unsigned char                                              UnknownData_70FA[0x7F];                                  // 0x0059(0x007F) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.AnimNode_HandIKRetargeting
	 * Size -> 0x0048 (FullSize[0x00A0] - InheritedSize[0x0058])
	 */
	struct FAnimNode_HandIKRetargeting : public FAnimNode_SkeletalControlBase
	{
	public:
		struct FBoneReference                                      RightHandFK;                                             // 0x0058(0x000C) Edit, BlueprintVisible
		struct FBoneReference                                      LeftHandFK;                                              // 0x0064(0x000C) Edit, BlueprintVisible
		struct FBoneReference                                      RightHandIK;                                             // 0x0070(0x000C) Edit, BlueprintVisible
		struct FBoneReference                                      LeftHandIK;                                              // 0x007C(0x000C) Edit, BlueprintVisible
		TArray<struct FBoneReference>                              IKBonesToMove;                                           // 0x0088(0x0010) Edit, BlueprintVisible, ZeroConstructor
		float                                                      HandFKWeight;                                            // 0x0098(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_NLVR[0x4];                                   // 0x009C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.AnimNode_LayeredBoneBlend
	 * Size -> 0x0070 (FullSize[0x00A0] - InheritedSize[0x0030])
	 */
	struct FAnimNode_LayeredBoneBlend : public FAnimNode_Base
	{
	public:
		struct FPoseLink                                           BasePose;                                                // 0x0030(0x0018) Edit, BlueprintVisible
		TArray<struct FPoseLink>                                   BlendPoses;                                              // 0x0048(0x0010) Edit, BlueprintVisible, EditFixedSize, ZeroConstructor
		TArray<struct FInputBlendPose>                             LayerSetup;                                              // 0x0058(0x0010) Edit, BlueprintVisible, EditFixedSize, ZeroConstructor
		TArray<float>                                              BlendWeights;                                            // 0x0068(0x0010) Edit, BlueprintVisible, EditFixedSize, ZeroConstructor
		bool                                                       bMeshSpaceRotationBlend;                                 // 0x0078(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_G61K[0x27];                                  // 0x0079(0x0027) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.AnimNode_LookAt
	 * Size -> 0x0038 (FullSize[0x0090] - InheritedSize[0x0058])
	 */
	struct FAnimNode_LookAt : public FAnimNode_SkeletalControlBase
	{
	public:
		struct FBoneReference                                      BoneToModify;                                            // 0x0058(0x000C) Edit, BlueprintVisible
		struct FBoneReference                                      LookAtBone;                                              // 0x0064(0x000C) Edit, BlueprintVisible
		struct FVector                                             LookAtLocation;                                          // 0x0070(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		EAxisOption                                                LookAtAxis;                                              // 0x007C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_VG4U[0x13];                                  // 0x007D(0x0013) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.AnimNode_ModifyBone
	 * Size -> 0x0078 (FullSize[0x00D0] - InheritedSize[0x0058])
	 */
	struct FAnimNode_ModifyBone : public FAnimNode_SkeletalControlBase
	{
	public:
		struct FBoneReference                                      BoneToModify;                                            // 0x0058(0x000C) Edit, BlueprintVisible
		struct FVector                                             Translation;                                             // 0x0064(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FRotator                                            Rotation;                                                // 0x0070(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_BADJ[0x4];                                   // 0x007C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          BoneTransform;                                           // 0x0080(0x0030) Edit, BlueprintVisible, IsPlainOldData, NoDestructor
		bool                                                       bUseRotationTransform;                                   // 0x00B0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bIgnoreOnDedicatedServer;                                // 0x00B1(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bAllowUpdatingOutsideOfGameWorld;                        // 0x00B2(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_GMM2[0x1];                                   // 0x00B3(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             Scale;                                                   // 0x00B4(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		EBoneModificationMode                                      TranslationMode;                                         // 0x00C0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		EBoneModificationMode                                      RotationMode;                                            // 0x00C1(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		EBoneModificationMode                                      ScaleMode;                                               // 0x00C2(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		EBoneControlSpace                                          TranslationSpace;                                        // 0x00C3(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		EBoneControlSpace                                          RotationSpace;                                           // 0x00C4(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		EBoneControlSpace                                          ScaleSpace;                                              // 0x00C5(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_ZWE1[0xA];                                   // 0x00C6(0x000A) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.AnimNode_ModifyBones
	 * Size -> 0x0008 (FullSize[0x0060] - InheritedSize[0x0058])
	 */
	struct FAnimNode_ModifyBones : public FAnimNode_SkeletalControlBase
	{
	public:
		unsigned char                                              UnknownData_W0OL[0x8];                                   // 0x0058(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.AnimNode_MultiFabrik
	 * Size -> 0x0010 (FullSize[0x0068] - InheritedSize[0x0058])
	 */
	struct FAnimNode_MultiFabrik : public FAnimNode_SkeletalControlBase
	{
	public:
		float                                                      Precision;                                               // 0x0058(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bEnableDebugDraw;                                        // 0x005C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_WFB8[0x3];                                   // 0x005D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                NodeName;                                                // 0x0060(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected
	};

	/**
	 * ScriptStruct Engine.AnimNode_MultiFabrik_Dinos
	 * Size -> 0x0020 (FullSize[0x0078] - InheritedSize[0x0058])
	 */
	struct FAnimNode_MultiFabrik_Dinos : public FAnimNode_SkeletalControlBase
	{
	public:
		float                                                      Precision;                                               // 0x0058(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bEnableDebugDraw;                                        // 0x005C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_R14E[0x3];                                   // 0x005D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      RootOffset;                                              // 0x0060(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected
		struct FRotator                                            RootRotationOffset;                                      // 0x0064(0x000C) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected
		bool                                                       bInitOffset;                                             // 0x0070(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected
		unsigned char                                              UnknownData_QIBG[0x7];                                   // 0x0071(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.AnimNode_RefPose
	 * Size -> 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
	 */
	struct FAnimNode_RefPose : public FAnimNode_Base
	{
	public:
		ERefPoseType                                               RefPoseType;                                             // 0x0030(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_9LTS[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.AnimNode_MeshSpaceRefPose
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	struct FAnimNode_MeshSpaceRefPose : public FAnimNode_Base
	{	};

	/**
	 * ScriptStruct Engine.AnimNode_Root
	 * Size -> 0x0018 (FullSize[0x0048] - InheritedSize[0x0030])
	 */
	struct FAnimNode_Root : public FAnimNode_Base
	{
	public:
		struct FPoseLink                                           Result;                                                  // 0x0030(0x0018) Edit, BlueprintVisible
	};

	/**
	 * ScriptStruct Engine.AnimNode_RotateRootBone
	 * Size -> 0x0030 (FullSize[0x0060] - InheritedSize[0x0030])
	 */
	struct FAnimNode_RotateRootBone : public FAnimNode_Base
	{
	public:
		struct FPoseLink                                           BasePose;                                                // 0x0030(0x0018) Edit, BlueprintVisible
		float                                                      Pitch;                                                   // 0x0048(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      Yaw;                                                     // 0x004C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FRotator                                            MeshToComponent;                                         // 0x0050(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_8PG0[0x4];                                   // 0x005C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.AnimNode_RotationMultiplier
	 * Size -> 0x0020 (FullSize[0x0078] - InheritedSize[0x0058])
	 */
	struct FAnimNode_RotationMultiplier : public FAnimNode_SkeletalControlBase
	{
	public:
		struct FBoneReference                                      TargetBone;                                              // 0x0058(0x000C) Edit, BlueprintVisible
		struct FBoneReference                                      SourceBone;                                              // 0x0064(0x000C) Edit, BlueprintVisible
		float                                                      Multiplier;                                              // 0x0070(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		EBoneAxis                                                  RotationAxisToRefer;                                     // 0x0074(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_ZMHR[0x3];                                   // 0x0075(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.AnimNode_RotationOffsetBlendSpace
	 * Size -> 0x0018 (FullSize[0x0118] - InheritedSize[0x0100])
	 */
	struct FAnimNode_RotationOffsetBlendSpace : public FAnimNode_BlendSpacePlayer
	{
	public:
		struct FPoseLink                                           BasePose;                                                // 0x0100(0x0018) Edit, BlueprintVisible
	};

	/**
	 * ScriptStruct Engine.AnimNode_SaveCachedPose
	 * Size -> 0x0030 (FullSize[0x0060] - InheritedSize[0x0030])
	 */
	struct FAnimNode_SaveCachedPose : public FAnimNode_Base
	{
	public:
		int16_t                                                    LastInitializedContextCounter;                           // 0x0030(0x0002) ZeroConstructor, Transient, IsPlainOldData, NoDestructor
		int16_t                                                    LastCacheBonesContextCounter;                            // 0x0032(0x0002) ZeroConstructor, Transient, IsPlainOldData, NoDestructor
		int16_t                                                    LastUpdatedContextCounter;                               // 0x0034(0x0002) ZeroConstructor, Transient, IsPlainOldData, NoDestructor
		int16_t                                                    LastEvaluatedContextCounter;                             // 0x0036(0x0002) ZeroConstructor, Transient, IsPlainOldData, NoDestructor
		struct FPoseLink                                           Pose;                                                    // 0x0038(0x0018) Edit, BlueprintVisible
		unsigned char                                              UnknownData_8MJK[0x10];                                  // 0x0050(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.AnimNode_SequenceEvaluator
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	struct FAnimNode_SequenceEvaluator : public FAnimNode_Base
	{
	public:
		class UAnimSequenceBase*                                   Sequence;                                                // 0x0030(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      ExplicitTime;                                            // 0x0038(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_MDL4[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.AnimNode_SequencePlayer
	 * Size -> 0x0020 (FullSize[0x0050] - InheritedSize[0x0030])
	 */
	struct FAnimNode_SequencePlayer : public FAnimNode_Base
	{
	public:
		class UAnimSequenceBase*                                   Sequence;                                                // 0x0030(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      InternalTimeAccumulator;                                 // 0x0038(0x0004) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor
		bool                                                       bLoopAnimation;                                          // 0x003C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_U2Z2[0x3];                                   // 0x003D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      PlayRate;                                                // 0x0040(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		int32_t                                                    groupIndex;                                              // 0x0044(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		EAnimGroupRole                                             GroupRole;                                               // 0x0048(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_GHJL[0x7];                                   // 0x0049(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.AnimNode_Slot
	 * Size -> 0x0028 (FullSize[0x0058] - InheritedSize[0x0030])
	 */
	struct FAnimNode_Slot : public FAnimNode_Base
	{
	public:
		struct FPoseLink                                           Source;                                                  // 0x0030(0x0018) Edit, BlueprintVisible
		class FName                                                SlotName;                                                // 0x0048(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_IK6O[0x8];                                   // 0x0050(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.AnimNode_SpringBone
	 * Size -> 0x0048 (FullSize[0x00A0] - InheritedSize[0x0058])
	 */
	struct FAnimNode_SpringBone : public FAnimNode_SkeletalControlBase
	{
	public:
		struct FBoneReference                                      SpringBone;                                              // 0x0058(0x000C) Edit, BlueprintVisible
		bool                                                       bLimitDisplacement;                                      // 0x0064(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_GDZQ[0x3];                                   // 0x0065(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MaxDisplacement;                                         // 0x0068(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      SpringStiffness;                                         // 0x006C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      SpringDamping;                                           // 0x0070(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      ErrorResetThresh;                                        // 0x0074(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bNoZSpring;                                              // 0x0078(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_7BOS[0x27];                                  // 0x0079(0x0027) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.AnimationActiveTransitionEntry
	 * Size -> 0x0060
	 */
	struct FAnimationActiveTransitionEntry
	{
	public:
		unsigned char                                              UnknownData_04WW[0x60];                                  // 0x0000(0x0060) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.AnimationPotentialTransition
	 * Size -> 0x0010
	 */
	struct FAnimationPotentialTransition
	{
	public:
		unsigned char                                              UnknownData_P8QA[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.AnimNode_StateMachine
	 * Size -> 0x0050 (FullSize[0x0080] - InheritedSize[0x0030])
	 */
	struct FAnimNode_StateMachine : public FAnimNode_Base
	{
	public:
		int32_t                                                    StateMachineIndexInClass;                                // 0x0030(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		int32_t                                                    MaxTransitionsPerFrame;                                  // 0x0034(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_LE0O[0x8];                                   // 0x0038(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    CurrentState;                                            // 0x0040(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, Protected
		float                                                      ElapsedTime;                                             // 0x0044(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, Protected
		unsigned char                                              UnknownData_3NPC[0x38];                                  // 0x0048(0x0038) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.AnimNode_Trail
	 * Size -> 0x0088 (FullSize[0x00E0] - InheritedSize[0x0058])
	 */
	struct FAnimNode_Trail : public FAnimNode_SkeletalControlBase
	{
	public:
		struct FBoneReference                                      TrailBone;                                               // 0x0058(0x000C) Edit, BlueprintVisible
		int32_t                                                    ChainLength;                                             // 0x0064(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		EAxis                                                      ChainBoneAxis;                                           // 0x0068(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bInvertChainBoneAxis;                                    // 0x0069(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bLimitStretch;                                           // 0x006A(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_DVQQ[0x1];                                   // 0x006B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      TrailRelaxation;                                         // 0x006C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      StretchLimit;                                            // 0x0070(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector                                             FakeVelocity;                                            // 0x0074(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bActorSpaceFakeVel;                                      // 0x0080(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_ETCA[0x5F];                                  // 0x0081(0x005F) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.AnimNode_TransitionPoseEvaluator
	 * Size -> 0x0020 (FullSize[0x0050] - InheritedSize[0x0030])
	 */
	struct FAnimNode_TransitionPoseEvaluator : public FAnimNode_Base
	{
	public:
		EEvaluatorDataSource                                       DataSource;                                              // 0x0030(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		EEvaluatorMode                                             EvaluatorMode;                                           // 0x0031(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_GMBM[0x2];                                   // 0x0032(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    FramesToCachePose;                                       // 0x0034(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FA2Pose                                             CachedPose;                                              // 0x0038(0x0010) Transient
		int32_t                                                    CacheFramesRemaining;                                    // 0x0048(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_PDVY[0x4];                                   // 0x004C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.AnimNode_TransitionResult
	 * Size -> 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
	 */
	struct FAnimNode_TransitionResult : public FAnimNode_Base
	{
	public:
		bool                                                       bCanEnterTransition;                                     // 0x0030(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_NQJZ[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.AnimNode_TwoBoneIK
	 * Size -> 0x0048 (FullSize[0x00A0] - InheritedSize[0x0058])
	 */
	struct FAnimNode_TwoBoneIK : public FAnimNode_SkeletalControlBase
	{
	public:
		struct FBoneReference                                      IKBone;                                                  // 0x0058(0x000C) Edit, BlueprintVisible
		struct FVector                                             EffectorLocation;                                        // 0x0064(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector                                             JointTargetLocation;                                     // 0x0070(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector2D                                           StretchLimits;                                           // 0x007C(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class FName                                                EffectorSpaceBoneName;                                   // 0x0084(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bTakeRotationFromEffectorSpace : 1;                      // 0x008C(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor
		bool                                                       bMaintainEffectorRelRot : 1;                             // 0x008C(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor
		bool                                                       bAllowStretching : 1;                                    // 0x008C(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor
		unsigned char                                              UnknownData_PT7T[0x3];                                   // 0x008D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		EBoneControlSpace                                          EffectorLocationSpace;                                   // 0x0090(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		EBoneControlSpace                                          JointTargetLocationSpace;                                // 0x0091(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_3LH6[0x2];                                   // 0x0092(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                JointTargetSpaceBoneName;                                // 0x0094(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_S1CM[0x4];                                   // 0x009C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.AnimationNode_TwoWayBlend
	 * Size -> 0x0040 (FullSize[0x0070] - InheritedSize[0x0030])
	 */
	struct FAnimationNode_TwoWayBlend : public FAnimNode_Base
	{
	public:
		struct FPoseLink                                           A;                                                       // 0x0030(0x0018) Edit, BlueprintVisible
		struct FPoseLink                                           B;                                                       // 0x0048(0x0018) Edit, BlueprintVisible
		float                                                      Alpha;                                                   // 0x0060(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FInputScaleBias                                     AlphaScaleBias;                                          // 0x0064(0x0008) Edit, BlueprintVisible
		unsigned char                                              UnknownData_AEP5[0x4];                                   // 0x006C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.AnimNode_UseCachedPose
	 * Size -> 0x0018 (FullSize[0x0048] - InheritedSize[0x0030])
	 */
	struct FAnimNode_UseCachedPose : public FAnimNode_Base
	{
	public:
		struct FPoseLink                                           LinkToCachingNode;                                       // 0x0030(0x0018)
	};

	/**
	 * ScriptStruct Engine.AnimNode_WheelHandler
	 * Size -> 0x0018 (FullSize[0x0070] - InheritedSize[0x0058])
	 */
	struct FAnimNode_WheelHandler : public FAnimNode_SkeletalControlBase
	{
	public:
		class UWheeledVehicleMovementComponent*                    VehicleSimComponent;                                     // 0x0058(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_6WMV[0x10];                                  // 0x0060(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.AnimNode_ConvertComponentToLocalSpace
	 * Size -> 0x0018 (FullSize[0x0048] - InheritedSize[0x0030])
	 */
	struct FAnimNode_ConvertComponentToLocalSpace : public FAnimNode_Base
	{
	public:
		struct FComponentSpacePoseLink                             ComponentPose;                                           // 0x0030(0x0018) Edit, BlueprintVisible
	};

	/**
	 * ScriptStruct Engine.AnimNode_ConvertLocalToComponentSpace
	 * Size -> 0x0018 (FullSize[0x0048] - InheritedSize[0x0030])
	 */
	struct FAnimNode_ConvertLocalToComponentSpace : public FAnimNode_Base
	{
	public:
		struct FPoseLink                                           LocalPose;                                               // 0x0030(0x0018) Edit, BlueprintVisible
	};

	/**
	 * ScriptStruct Engine.DummySpacerCameraTypes
	 * Size -> 0x0001
	 */
	struct FDummySpacerCameraTypes
	{
	public:
		unsigned char                                              UnknownData_2YWV[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Engine.StreamableManager
	 * Size -> 0x00A0
	 */
	struct FStreamableManager
	{
	public:
		unsigned char                                              UnknownData_XLPR[0xA0];                                  // 0x0000(0x00A0) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
