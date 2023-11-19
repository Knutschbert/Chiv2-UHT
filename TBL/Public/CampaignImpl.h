#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=DateTime -FallbackName=DateTime
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=PrimaryAssetId -FallbackName=PrimaryAssetId
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Timespan -FallbackName=Timespan
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TimerHandle -FallbackName=TimerHandle
#include "Campaign.h"
#include "CampaignImplSpecData.h"
#include "CampaignLevel.h"
#include "CampaignPurchasable.h"
#include "EOnlineStat.h"
#include "EQuestDifficulty.h"
#include "OnCampaignLevelChangedDelegate.h"
#include "OnCampaignPurchasedChangedDelegate.h"
#include "OnCampaignXpChangedDelegate.h"
#include "OnQuestCompleteChangedDelegate.h"
#include "OnQuestProgressChangedDelegate.h"
#include "OnTimedQuestStatusChangedDelegate.h"
#include "Quest.h"
#include "QuestDisplayable.h"
#include "QuestReward.h"
#include "ReplicatedSubobject.h"
#include "StoreOfferItem.h"
#include "CampaignImpl.generated.h"

class ATBLPlayerState;
class UCampaignList;
class UTexture2D;
class UVirtualGoodCampaign;

UCLASS(Blueprintable, Config=Game)
class UCampaignImpl : public UReplicatedSubobject, public ICampaign, public ICampaignPurchasable, public IQuest, public IQuestDisplayable {
    GENERATED_BODY()
public:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUploadToBackend;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle TimedCampaignStatusChangeTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCampaignImplSpecData SpecData;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EQuestDifficulty Difficulty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Xp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 RevisionXp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FPrimaryAssetId, int32> LevelRewardItemMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsPurchased;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_AttachedPlayerState, meta=(AllowPrivateAccess=true))
    ATBLPlayerState* AttachedPlayerState;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_BackendId, meta=(AllowPrivateAccess=true))
    FString BackendId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_AccumulatedXp, meta=(AllowPrivateAccess=true))
    int32 AccumulatedXp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCampaignList* OwningCampaignList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Title;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Description;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString FriendlyName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ShortDescription;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDateTime AvailableSince;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> Icon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDateTime AvailableUntil;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> BannerImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> TitleImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UVirtualGoodCampaign> PremiumCampaignVirtualGood;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCampaignLevel> Levels;
    
public:
    UCampaignImpl();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
private:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerPushRevisionXp(int32 ClientRevisionXp);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerMakeInactive();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerMakeActive();
    
    UFUNCTION(BlueprintCallable)
    void OnStatChanged(EOnlineStat Stat, int32 OldValue, int32 NewValue);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnRep_BackendId(const FString& PreviousBackendId);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_AttachedPlayerState(const ATBLPlayerState* PreviousAttachedPlayerState);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_AccumulatedXp(int32 PreviousAccumulatedXp);
    
    
    // Fix for true pure virtual functions not being implemented
public:
    UFUNCTION(BlueprintCallable)
    void UnbindOnXpChanged(const FOnCampaignXpChanged& Delegate) override PURE_VIRTUAL(UnbindOnXpChanged,);
    
    UFUNCTION(BlueprintCallable)
    void UnbindOnLevelChanged(const FOnCampaignLevelChanged& Delegate) override PURE_VIRTUAL(UnbindOnLevelChanged,);
    
    UFUNCTION(BlueprintCallable)
    bool HasPremiumRewards() const override PURE_VIRTUAL(HasPremiumRewards, return false;);
    
    UFUNCTION(BlueprintCallable)
    int32 GetTotalXp() const override PURE_VIRTUAL(GetTotalXp, return 0;);
    
    UFUNCTION(BlueprintCallable)
    int32 GetTotalMaxXp() const override PURE_VIRTUAL(GetTotalMaxXp, return 0;);
    
    UFUNCTION(BlueprintCallable)
    int32 GetNumLevels() const override PURE_VIRTUAL(GetNumLevels, return 0;);
    
    UFUNCTION(BlueprintCallable)
    int32 GetLevelFromItemId(const FPrimaryAssetId& ItemId) override PURE_VIRTUAL(GetLevelFromItemId, return 0;);
    
    UFUNCTION(BlueprintCallable)
    FCampaignLevel GetLevelDetails() const override PURE_VIRTUAL(GetLevelDetails, return FCampaignLevel{};);
    
    UFUNCTION(BlueprintCallable)
    int32 GetLevel() const override PURE_VIRTUAL(GetLevel, return 0;);
    
    UFUNCTION(BlueprintCallable)
    int32 GetGatedMaxLevel() const override PURE_VIRTUAL(GetGatedMaxLevel, return 0;);
    
    UFUNCTION(BlueprintCallable)
    FString GetFriendlyName() const override PURE_VIRTUAL(GetFriendlyName, return TEXT(""););
    
    UFUNCTION(BlueprintCallable)
    int32 GetCurrentLevelXp() const override PURE_VIRTUAL(GetCurrentLevelXp, return 0;);
    
    UFUNCTION(BlueprintCallable)
    int32 GetCurrentLevelMaxXp() const override PURE_VIRTUAL(GetCurrentLevelMaxXp, return 0;);
    
    UFUNCTION(BlueprintCallable)
    TArray<FCampaignLevel> GetAllLevelDetails() const override PURE_VIRTUAL(GetAllLevelDetails, return TArray<FCampaignLevel>(););
    
    UFUNCTION(BlueprintCallable)
    TScriptInterface<IQuest> GetActiveQuest() const override PURE_VIRTUAL(GetActiveQuest, return NULL;);
    
    UFUNCTION(BlueprintCallable)
    void BindOnXpChanged(const FOnCampaignXpChanged& Delegate) override PURE_VIRTUAL(BindOnXpChanged,);
    
    UFUNCTION(BlueprintCallable)
    void BindOnLevelChanged(const FOnCampaignLevelChanged& Delegate) override PURE_VIRTUAL(BindOnLevelChanged,);
    
    UFUNCTION(BlueprintCallable)
    void UnbindOnPurchasedChanged(const FOnCampaignPurchasedChanged& Delegate) override PURE_VIRTUAL(UnbindOnPurchasedChanged,);
    
    UFUNCTION(BlueprintCallable)
    void SetPurchased() override PURE_VIRTUAL(SetPurchased,);
    
    UFUNCTION(BlueprintCallable)
    bool IsPurchased() const override PURE_VIRTUAL(IsPurchased, return false;);
    
    UFUNCTION(BlueprintCallable)
    FStoreOfferItem GetStoreOfferItem() const override PURE_VIRTUAL(GetStoreOfferItem, return FStoreOfferItem{};);
    
    UFUNCTION(BlueprintCallable)
    FString GetStoreOfferId() const override PURE_VIRTUAL(GetStoreOfferId, return TEXT(""););
    
    UFUNCTION(BlueprintCallable)
    void BindOnPurchasedChanged(const FOnCampaignPurchasedChanged& Delegate) override PURE_VIRTUAL(BindOnPurchasedChanged,);
    
    UFUNCTION(BlueprintCallable)
    void UnbindOnTimedQuestStatusChanged(const FOnTimedQuestStatusChanged& Delegate) override PURE_VIRTUAL(UnbindOnTimedQuestStatusChanged,);
    
    UFUNCTION(BlueprintCallable)
    void UnbindOnProgressChanged(const FOnQuestProgressChanged& Delegate) override PURE_VIRTUAL(UnbindOnProgressChanged,);
    
    UFUNCTION(BlueprintCallable)
    void UnbindOnCompleted(const FOnQuestCompleteChanged& Delegate) override PURE_VIRTUAL(UnbindOnCompleted,);
    
    UFUNCTION(BlueprintCallable)
    bool IsUpcoming() const override PURE_VIRTUAL(IsUpcoming, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool IsTimed() const override PURE_VIRTUAL(IsTimed, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool IsTimeAvailable() const override PURE_VIRTUAL(IsTimeAvailable, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool IsExpired() const override PURE_VIRTUAL(IsExpired, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool IsComplete() const override PURE_VIRTUAL(IsComplete, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool IsClientAuthoritative() const override PURE_VIRTUAL(IsClientAuthoritative, return false;);
    
    UFUNCTION(BlueprintCallable)
    FTimespan GetTimeRemaining() const override PURE_VIRTUAL(GetTimeRemaining, return FTimespan{};);
    
    UFUNCTION(BlueprintCallable)
    TArray<FQuestReward> GetRewards() const override PURE_VIRTUAL(GetRewards, return TArray<FQuestReward>(););
    
    UFUNCTION(BlueprintCallable)
    float GetProgress() const override PURE_VIRTUAL(GetProgress, return 0.0f;);
    
    UFUNCTION(BlueprintCallable)
    void BindOnTimedQuestStatusChanged(const FOnTimedQuestStatusChanged& Delegate) override PURE_VIRTUAL(BindOnTimedQuestStatusChanged,);
    
    UFUNCTION(BlueprintCallable)
    void BindOnProgressChanged(const FOnQuestProgressChanged& Delegate) override PURE_VIRTUAL(BindOnProgressChanged,);
    
    UFUNCTION(BlueprintCallable)
    void BindOnCompleted(const FOnQuestCompleteChanged& Delegate) override PURE_VIRTUAL(BindOnCompleted,);
    
    UFUNCTION(BlueprintCallable)
    TSoftObjectPtr<UTexture2D> GetTitleImage() const override PURE_VIRTUAL(GetTitleImage, return NULL;);
    
    UFUNCTION(BlueprintCallable)
    FText GetTitle() const override PURE_VIRTUAL(GetTitle, return FText::GetEmpty(););
    
    UFUNCTION(BlueprintCallable)
    FText GetShortDescription() const override PURE_VIRTUAL(GetShortDescription, return FText::GetEmpty(););
    
    UFUNCTION(BlueprintCallable)
    FText GetScoreText() const override PURE_VIRTUAL(GetScoreText, return FText::GetEmpty(););
    
    UFUNCTION(BlueprintCallable)
    FText GetMaxScoreText() const override PURE_VIRTUAL(GetMaxScoreText, return FText::GetEmpty(););
    
    UFUNCTION(BlueprintCallable)
    TSoftObjectPtr<UTexture2D> GetIcon() const override PURE_VIRTUAL(GetIcon, return NULL;);
    
    UFUNCTION(BlueprintCallable)
    FText GetGoalText() const override PURE_VIRTUAL(GetGoalText, return FText::GetEmpty(););
    
    UFUNCTION(BlueprintCallable)
    EQuestDifficulty GetDifficulty() const override PURE_VIRTUAL(GetDifficulty, return EQuestDifficulty::Easy;);
    
    UFUNCTION(BlueprintCallable)
    FText GetDescription() const override PURE_VIRTUAL(GetDescription, return FText::GetEmpty(););
    
    UFUNCTION(BlueprintCallable)
    TSoftObjectPtr<UTexture2D> GetBannerImage() const override PURE_VIRTUAL(GetBannerImage, return NULL;);
    
};

