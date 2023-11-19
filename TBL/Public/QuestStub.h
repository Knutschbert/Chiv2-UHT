#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Timespan -FallbackName=Timespan
#include "EQuestDifficulty.h"
#include "OnQuestCompleteChangedDelegate.h"
#include "OnQuestProgressChangedDelegate.h"
#include "OnTimedQuestStatusChangedDelegate.h"
#include "Quest.h"
#include "QuestDisplayable.h"
#include "QuestReward.h"
#include "QuestStub.generated.h"

class UTexture2D;

UCLASS(Blueprintable)
class UQuestStub : public UObject, public IQuest, public IQuestDisplayable {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Progress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Title;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Description;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ShortDescription;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText GoalText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> Icon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> BannerImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> TitleImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EQuestDifficulty Difficulty;
    
public:
    UQuestStub();
    
    // Fix for true pure virtual functions not being implemented
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

