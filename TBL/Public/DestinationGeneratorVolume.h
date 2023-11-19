#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Volume -FallbackName=Volume
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
#include "EGenerationMode.h"
#include "DestinationGeneratorVolume.generated.h"

UCLASS(Blueprintable)
class TBL_API ADestinationGeneratorVolume : public AVolume {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer AITagsToAddWhenActivated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DestinationDensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DestinationVariance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGenerationMode GenerationMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NavMeshProjectionDepenetrationDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FVector> DestinationList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector> DestinationListRelative;
    
public:
    ADestinationGeneratorVolume();
    UFUNCTION(BlueprintCallable)
    void ProjectDestinationListToNavMesh();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetRandomDestination() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FVector> GetDestinationsInGridDistance(const FVector& QueryLocation, int32 GridDistance) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FVector> GetDestinationList() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetDestinationByIndex(int32 Index) const;
    
    UFUNCTION(BlueprintCallable)
    void GeneratePoints();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void Deactivate();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void Activate();
    
};

