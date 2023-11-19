#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Timespan -FallbackName=Timespan
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=InputActionKeyMapping -FallbackName=InputActionKeyMapping
//CROSS-MODULE INCLUDE V2: -ModuleName=InputCore -ObjectName=Key -FallbackName=Key
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=AnalogInputEvent -FallbackName=AnalogInputEvent
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=CharacterEvent -FallbackName=CharacterEvent
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=EUINavigation -FallbackName=EUINavigation
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=Geometry -FallbackName=Geometry
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=KeyEvent -FallbackName=KeyEvent
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=EventReply -FallbackName=EventReply
#include "ButtonCallout.h"
#include "EFaction.h"
#include "EFrameThrottleBranch.h"
#include "EGamepadInputMode.h"
#include "EGlobalGameNotificationCategory.h"
#include "EInputActionMode.h"
#include "ETeamUIColorType.h"
#include "KeyDisplayInfo.h"
#include "Templates/SubclassOf.h"
#include "UIBlueprintLibrary.generated.h"

class AActor;
class APlayerController;
class ATBLPlayerController;
class ATBLTeam;
class IDisplayComponentInterface;
class UDisplayComponentInterface;
class UDataTable;
class UHudMarkerDisplayComponent;
class UObject;
class UTBLLocalPlayer;
class UTBLScreenManager;
class UUserWidget;
class UWidget;

UCLASS(Blueprintable, MinimalAPI)
class UUIBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<EFaction, TSubclassOf<ATBLTeam>> FactionMap;
    
public:
    UUIBlueprintLibrary();
    UFUNCTION(BlueprintCallable)
    static void UnregisterDisplayComponent(const TScriptInterface<IDisplayComponentInterface>& DisplayComponent);
    
    UFUNCTION(BlueprintCallable)
    static void StopListeningForKeybindings();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool ShouldDisableWorkInProgressFeatures();
    
    UFUNCTION(BlueprintCallable)
    static void SetInputActionMode(APlayerController* InPlayerController, EInputActionMode InInputActionMode);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SendGlobalGameNotification(EGlobalGameNotificationCategory Category, FText Title, FText Body, FName Subcategory, UObject* Data, UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static FEventReply RouteOnPreviewKeyDownToWidget(UWidget* Widget, const FGeometry& MyGeometry, const FKeyEvent& InKeyEvent);
    
    UFUNCTION(BlueprintCallable)
    static FEventReply RouteOnKeyUpToWidget(UWidget* Widget, const FGeometry& MyGeometry, const FKeyEvent& InKeyEvent);
    
    UFUNCTION(BlueprintCallable)
    static FEventReply RouteOnKeyDownToWidget(UWidget* Widget, const FGeometry& MyGeometry, const FKeyEvent& InKeyEvent);
    
    UFUNCTION(BlueprintCallable)
    static FEventReply RouteOnKeyCharToWidget(UWidget* Widget, const FGeometry& MyGeometry, const FCharacterEvent& InCharEvent);
    
    UFUNCTION(BlueprintCallable)
    static FEventReply RouteOnAnalogValueChanged(UWidget* Widget, const FGeometry& MyGeometry, const FAnalogInputEvent& InAnalogInputEvent);
    
    UFUNCTION(BlueprintCallable)
    static void ResetAllAnimations(UUserWidget* Widget);
    
    UFUNCTION(BlueprintCallable)
    static void RegisterDisplayComponent(const TScriptInterface<IDisplayComponentInterface>& DisplayComponent);
    
    UFUNCTION(BlueprintCallable)
    static FLinearColor RandomLinearColorFromHsluv(float h_min, float h_max, float s_min, float s_max, float l_min, float l_max);
    
    UFUNCTION(BlueprintCallable)
    static void ListenForKeybindings();
    
    UFUNCTION(BlueprintCallable)
    static FLinearColor LinearColorFromHsluv(float H, float S, float L);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText Key_GetShortDisplayName(const FKey& Key);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName Key_GetFName(const FKey& Key);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsHandled(const FEventReply& EventReply);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ATBLPlayerController* GetOwningTBLPlayerController(UObject* Target);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UTBLLocalPlayer* GetOwningTBLLocalPlayer(UObject* Target);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EUINavigation GetNavigationDirectionFromKey(const FKeyEvent& InKeyEvent, bool& bInvalid);
    
    UFUNCTION(BlueprintCallable)
    static EUINavigation GetNavigationDirectionFromAnalog(const FAnalogInputEvent& InAnalogEvent, bool& bInvalid);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static FText GetKeyTextFromActionBindingName(const FString& ActionName, FInputActionKeyMapping& ActionMappingOut, bool bLongDisplayName, EGamepadInputMode InputMode, UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static FKey GetKeyFromButtonCallout(FButtonCallout Callout, UWidget* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FKey GetKeyFromAxisBindingName(const FString& ActionName, UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FKey GetKeyFromActionBindingName(const FString& ActionName, UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FKeyDisplayInfo GetKeyDisplayInfoFromTable(FKey Key, UDataTable* Table);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FKey GetGamepadBackButton();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FKey GetGamepadAcceptButton();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<EFaction> GetFactionOrder(EFaction A, EFaction B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText GetFactionName(EFaction Faction);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FLinearColor GetFactionColor(EFaction Faction, ETeamUIColorType ColorType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FButtonCallout> GetButtonCallouts(UWidget* Target);
    
    UFUNCTION(BlueprintCallable)
    static void GetAllMapNames(TArray<FName>& OutAssetNames, const FString& MapPath);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void GetAllKeysFromActionBindingName(const FString& ActionName, TArray<FKey>& NonGamePad, TArray<FKey>& Gamepad, UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UTBLScreenManager* GetActiveScreenManagerImpure(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UTBLScreenManager* GetActiveScreenManager(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static FInputActionKeyMapping GetActionBindingFromName(FName ActionName, UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void FocusOnBestWidgetOrChild(UWidget* Widget);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText ConvertTimespanToText(FTimespan Timespan);
    
    UFUNCTION(BlueprintCallable)
    static void AttemptThrottledOnKilledUIActions(EFrameThrottleBranch& Branches);
    
    UFUNCTION(BlueprintCallable)
    static UHudMarkerDisplayComponent* AddHudMarkerComponentToActor(AActor* Actor, EFaction VisibleToFaction, TSubclassOf<UHudMarkerDisplayComponent> Class, bool bReplicates);
    
};

