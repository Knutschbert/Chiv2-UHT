#include "ControlRig.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AnimationCore -ObjectName=AnimationDataSourceRegistry -FallbackName=AnimationDataSourceRegistry
//CROSS-MODULE INCLUDE V2: -ModuleName=RigVM -ObjectName=RigVM -FallbackName=RigVM

UControlRig::UControlRig() {
    this->ExecutionType = ERigExecutionType::Runtime;
    this->VM = CreateDefaultSubobject<URigVM>(TEXT("VM"));
    this->DataSourceRegistry = CreateDefaultSubobject<UAnimationDataSourceRegistry>(TEXT("DataSourceRegistry"));
}

