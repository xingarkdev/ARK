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
	 * Enum OnlineSubsystem.EInAppPurchaseState
	 */
	enum class EInAppPurchaseState : uint8_t
	{
		Success    = 0,
		Failed     = 1,
		Cancelled  = 2,
		Invalid    = 3,
		NotAllowed = 4,
		Unknown    = 5,
		MAX        = 6
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct OnlineSubsystem.NamedInterfaces.NamedInterface
	 * Size -> 0x0010
	 */
	struct FNamedInterface
	{
	public:
		class FName                                                InterfaceName;                                           // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor
		class UObject*                                             InterfaceObject;                                         // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct OnlineSubsystem.NamedInterfaces.NamedInterfaceDef
	 * Size -> 0x0018
	 */
	struct FNamedInterfaceDef
	{
	public:
		class FName                                                InterfaceName;                                           // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor
		class FString                                              InterfaceClassName;                                      // 0x0008(0x0010) ZeroConstructor
	};

	/**
	 * ScriptStruct OnlineSubsystem.InAppPurchaseProductInfo
	 * Size -> 0x0040
	 */
	struct FInAppPurchaseProductInfo
	{
	public:
		class FString                                              Identifier;                                              // 0x0000(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor
		class FString                                              DisplayName;                                             // 0x0010(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor
		class FString                                              DisplayDescription;                                      // 0x0020(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor
		class FString                                              DisplayPrice;                                            // 0x0030(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
