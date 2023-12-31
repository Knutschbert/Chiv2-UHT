#pragma once
#include "CoreMinimal.h"
#include "EWeaponAbilitySlotKey.generated.h"

UENUM(BlueprintType)
enum class EWeaponAbilitySlotKey : uint8 {
    Slash,
    Stab,
    Overhead,
    Parry,
    Special,
    Shove,
    KickLow,
    SprintAttack,
    SprintCharge,
    SprintShove,
    SprintJump,
    Jab,
    Headbutt,
    Throw,
    QuickThrow,
    Flourish,
    Emote,
    DashLeft,
    DashRight,
    DashBack,
    Jump,
    SwitchInventoryItem,
    LoadItem,
    UseItem,
    HorseFrontKick,
    HorseRearKick,
    HorseEmote,
    HorseSpecial,
    HorseJump,
    HorseDashForward,
    HorseDashForwardRight,
    HorseDashRight,
    HorseDashBackRight,
    HorseDashBack,
    HorseDashBackLeft,
    HorseDashLeft,
    HorseDashForwardLeft,
    HorseCharge,
    LanceCharge,
    EmoteHeld,
    UseBandage,
    None,
};

