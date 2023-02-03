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
	 * Enum CoreUObject.Object.ERangeBoundTypes
	 */
	enum class ERangeBoundTypes : uint8_t
	{
		Exclusive = 0,
		Inclusive = 1,
		Open = 2,
		MAX = 3
	};

	/**
	 * Enum CoreUObject.Object.EMouseCursor
	 */
	enum class EMouseCursor : uint8_t
	{
		None = 0,
		Default = 1,
		TextEditBeam = 2,
		ResizeLeftRight = 3,
		ResizeUpDown = 4,
		ResizeSouthEast = 5,
		ResizeSouthWest = 6,
		CardinalCross = 7,
		Crosshairs = 8,
		Hand = 9,
		GrabHand = 10,
		GrabHandClosed = 11,
		SlashedCircle = 12,
		EyeDropper = 13,
		MAX = 14
	};

	/**
	 * Enum CoreUObject.Object.EPixelFormat
	 */
	enum class EPixelFormat : uint8_t
	{
		PF_Unknown = 0,
		PF_A32B32G32R32F = 1,
		PF_B8G8R8A8 = 2,
		PF_G8 = 3,
		PF_G16 = 4,
		PF_DXT1 = 5,
		PF_DXT3 = 6,
		PF_DXT5 = 7,
		PF_UYVY = 8,
		PF_FloatRGB = 9,
		PF_FloatRGBA = 10,
		PF_DepthStencil = 11,
		PF_ShadowDepth = 12,
		PF_R32_FLOAT = 13,
		PF_G16R16 = 14,
		PF_G16R16F = 15,
		PF_G16R16F_FILTER = 16,
		PF_G32R32F = 17,
		PF_A2B10G10R10 = 18,
		PF_A16B16G16R16 = 19,
		PF_D24 = 20,
		PF_R16F = 21,
		PF_R16F_FILTER = 22,
		PF_BC5 = 23,
		PF_V8U8 = 24,
		PF_A1 = 25,
		PF_FloatR11G11B10 = 26,
		PF_A8 = 27,
		PF_R32_UINT = 28,
		PF_R32_SINT = 29,
		PF_PVRTC2 = 30,
		PF_PVRTC4 = 31,
		PF_R16_UINT = 32,
		PF_R16_SINT = 33,
		PF_R16G16B16A16_UINT = 34,
		PF_R16G16B16A16_SINT = 35,
		PF_R5G6B5_UNORM = 36,
		PF_R8G8B8A8 = 37,
		PF_A8R8G8B8 = 38,
		PF_BC4 = 39,
		PF_R8G8 = 40,
		PF_ATC_RGB = 41,
		PF_ATC_RGBA_E = 42,
		PF_ATC_RGBA_I = 43,
		PF_X24_G8 = 44,
		PF_ETC1 = 45,
		PF_ETC2_RGB = 46,
		PF_ETC2_RGBA = 47,
		PF_R32G32B32A32_UINT = 48,
		PF_R16G16_UINT = 49,
		PF_ASTC_4x4 = 50,
		PF_ASTC_6x6 = 51,
		PF_ASTC_8x8 = 52,
		PF_ASTC_10x10 = 53,
		PF_ASTC_12x12 = 54,
		_PF_MAX_ = 55
	};

	/**
	 * Enum CoreUObject.Object.EInterpCurveMode
	 */
	enum class EInterpCurveMode : uint8_t
	{
		CIM_Linear = 0,
		CIM_CurveAuto = 1,
		CIM_Constant = 2,
		CIM_CurveUser = 3,
		CIM_CurveBreak = 4,
		CIM_CurveAutoClamped = 5,
		CIM_MAX = 6
	};

	/**
	 * Enum CoreUObject.Object.EAxis
	 */
	enum class EAxis : uint8_t
	{
		None = 0,
		X = 1,
		Y = 2,
		Z = 3,
		MAX = 4
	};

	/**
	 * Enum CoreUObject.Object.ESearchDir
	 */
	enum class ESearchDir : uint8_t
	{
		FromStart = 0,
		FromEnd = 1,
		MAX = 2
	};

	/**
	 * Enum CoreUObject.Object.ESearchCase
	 */
	enum class ESearchCase : uint8_t
	{
		CaseSensitive = 0,
		IgnoreCase = 1,
		MAX = 2
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct CoreUObject.Object.Int32RangeBound
	 * Size -> 0x0008
	 */
	struct FInt32RangeBound
	{
	public:
		ERangeBoundTypes                                           Type;                                                    // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_7PJF[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    Value;                                                   // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct CoreUObject.Object.Int32Range
	 * Size -> 0x0010
	 */
	struct FInt32Range
	{
	public:
		struct FInt32RangeBound                                    LowerBound;                                              // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FInt32RangeBound                                    UpperBound;                                              // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct CoreUObject.Object.FloatRangeBound
	 * Size -> 0x0008
	 */
	struct FFloatRangeBound
	{
	public:
		ERangeBoundTypes                                           Type;                                                    // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_ZJZ5[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Value;                                                   // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct CoreUObject.Object.FloatRange
	 * Size -> 0x0010
	 */
	struct FFloatRange
	{
	public:
		struct FFloatRangeBound                                    LowerBound;                                              // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FFloatRangeBound                                    UpperBound;                                              // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct CoreUObject.Object.FallbackStruct
	 * Size -> 0x0001
	 */
	struct FFallbackStruct
	{
	public:
		unsigned char                                              UnknownData_UM4G[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct CoreUObject.Object.StringAssetReference
	 * Size -> 0x0010
	 */
	struct FStringAssetReference
	{
	public:
		class FString                                              AssetLongPathname;                                       // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor
	};

	/**
	 * ScriptStruct CoreUObject.Object.StringClassReference
	 * Size -> 0x0000 (FullSize[0x0010] - InheritedSize[0x0010])
	 */
	struct FStringClassReference : public FStringAssetReference
	{	};

	/**
	 * ScriptStruct CoreUObject.Object.Timespan
	 * Size -> 0x0008
	 */
	struct FTimespan
	{
	public:
		unsigned char                                              UnknownData_176S[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct CoreUObject.Object.DateTime
	 * Size -> 0x0008
	 */
	struct FDateTime
	{
	public:
		unsigned char                                              UnknownData_NFED[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct CoreUObject.Object.RandomStream
	 * Size -> 0x0008
	 */
	struct FRandomStream
	{
	public:
		int32_t                                                    InitialSeed;                                             // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_68AE[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct CoreUObject.Object.Quat
	 * Size -> 0x0010
	 */
	struct FQuat
	{
	public:
		float                                                      X;                                                       // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor
		float                                                      Y;                                                       // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor
		float                                                      Z;                                                       // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor
		float                                                      W;                                                       // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct CoreUObject.Object.Vector
	 * Size -> 0x000C
	 */
	struct FVector
	{
	public:
		float                                                      X;                                                       // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor
		float                                                      Y;                                                       // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor
		float                                                      Z;                                                       // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor
		float Dot(const FVector& v) const
		{
			if (v.X == 0 && v.Y == 0 && v.Z == 0)
				return 0.0f;

			return (X * v.X + Y * v.Y + Z * v.Z);
		}
		//FVector(float x, float y, float z) { X = x; Y = y; Z = z; };

		FVector() : X(0.f), Y(0.f), Z(0.f) {}
		FVector(float floats[4]) : X(floats[0]), Y(floats[1]), Z(floats[2]) {}
		FVector(float x, float y, float z) : X(x), Y(y), Z(z) {}

		FVector operator+(const FVector& other) const { return FVector(X + other.X, Y + other.Y, Z + other.Z); }

		FVector operator-(const FVector& other) const { return FVector(X - other.X, Y - other.Y, Z - other.Z); }

		FVector operator*(const FVector& V) const { return FVector(X * V.X, Y * V.Y, Z * V.Z); }

		FVector operator/(const FVector& V) const { return FVector(X / V.X, Y / V.Y, Z / V.Z); }

		bool operator==(const FVector& V) const { return X == V.X && Y == V.Y && Z == V.Z; }

		bool operator!=(const FVector& V) const { return X != V.X || Y != V.Y || Z != V.Z; }

		FVector operator-() const { return FVector(-X, -Y, -Z); }

		FVector operator+(float Bias) const { return FVector(X + Bias, Y + Bias, Z + Bias); }

		FVector operator-(float Bias) const { return FVector(X - Bias, Y - Bias, Z - Bias); }

		FVector operator*(float Scale) const { return FVector(X * Scale, Y * Scale, Z * Scale); } const

			FVector operator/(float Scale) const { const float RScale = 1.f / Scale; return FVector(X * RScale, Y * RScale, Z * RScale); }

		FVector operator=(const FVector& V) { X = V.X; Y = V.Y; Z = V.Z; return *this; }

		FVector operator+=(const FVector& V) { X += V.X; Y += V.Y; Z += V.Z; return *this; }

		FVector operator-=(const FVector& V) { X -= V.X; Y -= V.Y; Z -= V.Z; return *this; }

		FVector operator*=(const FVector& V) { X *= V.X; Y *= V.Y; Z *= V.Z; return *this; }

		FVector operator/=(const FVector& V) { X /= V.X; Y /= V.Y; Z /= V.Z; return *this; }

		FVector operator*=(float Scale) { X *= Scale; Y *= Scale; Z *= Scale; return *this; }

		FVector operator/=(float V) { const float RV = 1.f / V; X *= RV; Y *= RV; Z *= RV; return *this; }

		float operator|(const FVector& V) const { return X * V.X + Y * V.Y + Z * V.Z; }

		FVector operator^(const FVector& V) const { return FVector(Y * V.Z - Z * V.Y, Z * V.X - X * V.Z, X * V.Y - Y * V.X); }
	};

	/**
	 * ScriptStruct CoreUObject.Object.Transform
	 * Size -> 0x0030
	 */
	struct FTransform
	{
	public:
		struct FQuat                                               Rotation;                                                // 0x0000(0x0010) Edit, BlueprintVisible, SaveGame, IsPlainOldData, NoDestructor
		struct FVector                                             Translation;                                             // 0x0010(0x000C) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_DOK6[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             Scale3D;                                                 // 0x0020(0x000C) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_D1E7[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct CoreUObject.Object.LinearColor
	 * Size -> 0x0010
	 */
	struct FLinearColor
	{
	public:
		float                                                      R;                                                       // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor
		float                                                      G;                                                       // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor
		float                                                      B;                                                       // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor
		float                                                      A;                                                       // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor

		//added manually
		FLinearColor() : R(0.f), G(0.f), B(0.f), A(0.f) {}
		FLinearColor(float color[4]) : R(color[0]), G(color[1]), B(color[2]), A(color[3]) {}
		FLinearColor(float r, float g, float b, float a) : R(r), G(g), B(b), A(a) {}

	};

	/**
	 * ScriptStruct CoreUObject.Object.InterpCurvePointLinearColor
	 * Size -> 0x0038
	 */
	struct FInterpCurvePointLinearColor
	{
	public:
		float                                                      InVal;                                                   // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FLinearColor                                        OutVal;                                                  // 0x0004(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FLinearColor                                        ArriveTangent;                                           // 0x0014(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FLinearColor                                        LeaveTangent;                                            // 0x0024(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		EInterpCurveMode                                           InterpMode;                                              // 0x0034(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_T8PY[0x3];                                   // 0x0035(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct CoreUObject.Object.InterpCurveLinearColor
	 * Size -> 0x0010
	 */
	struct FInterpCurveLinearColor
	{
	public:
		TArray<struct FInterpCurvePointLinearColor>                Points;                                                  // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor
	};

	/**
	 * ScriptStruct CoreUObject.Object.TwoVectors
	 * Size -> 0x0018
	 */
	struct FTwoVectors
	{
	public:
		struct FVector                                             v1;                                                      // 0x0000(0x000C) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor
		struct FVector                                             v2;                                                      // 0x000C(0x000C) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct CoreUObject.Object.InterpCurvePointTwoVectors
	 * Size -> 0x0050
	 */
	struct FInterpCurvePointTwoVectors
	{
	public:
		float                                                      InVal;                                                   // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FTwoVectors                                         OutVal;                                                  // 0x0004(0x0018) Edit, BlueprintVisible, ZeroConstructor
		struct FTwoVectors                                         ArriveTangent;                                           // 0x001C(0x0018) Edit, BlueprintVisible, ZeroConstructor
		struct FTwoVectors                                         LeaveTangent;                                            // 0x0034(0x0018) Edit, BlueprintVisible, ZeroConstructor
		EInterpCurveMode                                           InterpMode;                                              // 0x004C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_H85P[0x3];                                   // 0x004D(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct CoreUObject.Object.InterpCurveTwoVectors
	 * Size -> 0x0010
	 */
	struct FInterpCurveTwoVectors
	{
	public:
		TArray<struct FInterpCurvePointTwoVectors>                 Points;                                                  // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor
	};

	/**
	 * ScriptStruct CoreUObject.Object.InterpCurvePointVector
	 * Size -> 0x002C
	 */
	struct FInterpCurvePointVector
	{
	public:
		float                                                      InVal;                                                   // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector                                             OutVal;                                                  // 0x0004(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector                                             ArriveTangent;                                           // 0x0010(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector                                             LeaveTangent;                                            // 0x001C(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		EInterpCurveMode                                           InterpMode;                                              // 0x0028(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_OS0J[0x3];                                   // 0x0029(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct CoreUObject.Object.InterpCurveVector
	 * Size -> 0x0010
	 */
	struct FInterpCurveVector
	{
	public:
		TArray<struct FInterpCurvePointVector>                     Points;                                                  // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor
	};

	/**
	 * ScriptStruct CoreUObject.Object.Vector2D
	 * Size -> 0x0008
	 */
	struct FVector2D
	{
	public:
		float                                                      X;                                                       // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor
		float                                                      Y;                                                       // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor
	
	};

	/**
	 * ScriptStruct CoreUObject.Object.InterpCurvePointVector2D
	 * Size -> 0x0020
	 */
	struct FInterpCurvePointVector2D
	{
	public:
		float                                                      InVal;                                                   // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector2D                                           OutVal;                                                  // 0x0004(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector2D                                           ArriveTangent;                                           // 0x000C(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector2D                                           LeaveTangent;                                            // 0x0014(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		EInterpCurveMode                                           InterpMode;                                              // 0x001C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_MRF5[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct CoreUObject.Object.InterpCurveVector2D
	 * Size -> 0x0010
	 */
	struct FInterpCurveVector2D
	{
	public:
		TArray<struct FInterpCurvePointVector2D>                   Points;                                                  // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor
	};

	/**
	 * ScriptStruct CoreUObject.Object.InterpCurvePointFloat
	 * Size -> 0x0014
	 */
	struct FInterpCurvePointFloat
	{
	public:
		float                                                      InVal;                                                   // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      OutVal;                                                  // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      ArriveTangent;                                           // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      LeaveTangent;                                            // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		EInterpCurveMode                                           InterpMode;                                              // 0x0010(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_41X9[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct CoreUObject.Object.InterpCurveFloat
	 * Size -> 0x0010
	 */
	struct FInterpCurveFloat
	{
	public:
		TArray<struct FInterpCurvePointFloat>                      Points;                                                  // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor
	};

	/**
	 * ScriptStruct CoreUObject.Object.Plane
	 * Size -> 0x0004 (FullSize[0x0010] - InheritedSize[0x000C])
	 */
	struct FPlane : public FVector
	{
	public:
		float                                                      W;                                                       // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct CoreUObject.Object.Matrix
	 * Size -> 0x0040
	 */
	struct FMatrix
	{
	public:
		struct FPlane                                              XPlane;                                                  // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor
		struct FPlane                                              YPlane;                                                  // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor
		struct FPlane                                              ZPlane;                                                  // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor
		struct FPlane                                              WPlane;                                                  // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct CoreUObject.Object.OrientedBox
	 * Size -> 0x003C
	 */
	struct FOrientedBox
	{
	public:
		struct FVector                                             Center;                                                  // 0x0000(0x000C) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor
		struct FVector                                             AxisX;                                                   // 0x000C(0x000C) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor
		struct FVector                                             AxisY;                                                   // 0x0018(0x000C) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor
		struct FVector                                             AxisZ;                                                   // 0x0024(0x000C) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor
		float                                                      ExtentX;                                                 // 0x0030(0x0004) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor
		float                                                      ExtentY;                                                 // 0x0034(0x0004) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor
		float                                                      ExtentZ;                                                 // 0x0038(0x0004) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct CoreUObject.Object.BoxSphereBounds
	 * Size -> 0x001C
	 */
	struct FBoxSphereBounds
	{
	public:
		struct FVector                                             Origin;                                                  // 0x0000(0x000C) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor
		struct FVector                                             BoxExtent;                                               // 0x000C(0x000C) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor
		float                                                      SphereRadius;                                            // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct CoreUObject.Object.Box
	 * Size -> 0x001C
	 */
	struct FBox
	{
	public:
		struct FVector                                             Min;                                                     // 0x0000(0x000C) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor
		struct FVector                                             Max;                                                     // 0x000C(0x000C) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor
		unsigned char                                              IsValid;                                                 // 0x0018(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_TNUJ[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct CoreUObject.Object.Color
	 * Size -> 0x0004
	 */
	struct FColor
	{
	public:
		unsigned char                                              B;                                                       // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor
		unsigned char                                              G;                                                       // 0x0001(0x0001) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor
		unsigned char                                              R;                                                       // 0x0002(0x0001) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor
		unsigned char                                              A;                                                       // 0x0003(0x0001) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct CoreUObject.Object.IntVector
	 * Size -> 0x000C
	 */
	struct FIntVector
	{
	public:
		int32_t                                                    X;                                                       // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor
		int32_t                                                    Y;                                                       // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor
		int32_t                                                    Z;                                                       // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct CoreUObject.Object.IntPoint
	 * Size -> 0x0008
	 */
	struct FIntPoint
	{
	public:
		int32_t                                                    X;                                                       // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor
		int32_t                                                    Y;                                                       // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct CoreUObject.Object.PackedNormal
	 * Size -> 0x0004
	 */
	struct FPackedNormal
	{
	public:
		unsigned char                                              X;                                                       // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor
		unsigned char                                              Y;                                                       // 0x0001(0x0001) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor
		unsigned char                                              Z;                                                       // 0x0002(0x0001) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor
		unsigned char                                              W;                                                       // 0x0003(0x0001) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct CoreUObject.Object.Rotator
	 * Size -> 0x000C
	 */
	struct FRotator
	{
	public:
		float                                                      Pitch;                                                   // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor
		float                                                      Yaw;                                                     // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor
		float                                                      Roll;                                                    // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct CoreUObject.Object.Vector4
	 * Size -> 0x0010
	 */
	struct FVector4
	{
	public:
		float                                                      X;                                                       // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor
		float                                                      Y;                                                       // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor
		float                                                      Z;                                                       // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor
		float                                                      W;                                                       // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct CoreUObject.Object.NetworkGUID
	 * Size -> 0x0004
	 */
	struct FNetworkGUID
	{
	public:
		uint32_t                                                   Value;                                                   // 0x0000(0x0004) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct CoreUObject.Object.Guid
	 * Size -> 0x0010
	 */
	struct FGuid
	{
	public:
		int32_t                                                    A;                                                       // 0x0000(0x0004) Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor
		int32_t                                                    B;                                                       // 0x0004(0x0004) Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor
		int32_t                                                    C;                                                       // 0x0008(0x0004) Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor
		int32_t                                                    D;                                                       // 0x000C(0x0004) Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor
	};

}

#ifdef _MSC_VER
#pragma pack(pop)
#endif
