#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "DirectoryPath.h"
#include "HierarchicalSimplification.h"
#include "HierarchicalLODSetup.generated.h"

class UMaterialInterface;

UCLASS(Blueprintable)
class ENGINE_API UHierarchicalLODSetup : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHierarchicalSimplification> HierarchicalLODSetup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMaterialInterface> OverrideBaseMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDirectoryPath HoudiniBakeFolder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> ActorTagsToInclude;
    
    UHierarchicalLODSetup();
};

