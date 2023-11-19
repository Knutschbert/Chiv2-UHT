#include "ReplicationGraphDebugActor.h"

void AReplicationGraphDebugActor::ServerStopDebugging_Implementation() {
}

void AReplicationGraphDebugActor::ServerStartDebugging_Implementation() {
}

void AReplicationGraphDebugActor::ServerSetPeriodFrameForClass_Implementation(UClass* Class, int32 PeriodFrame) {
}

void AReplicationGraphDebugActor::ServerSetCullDistanceForClass_Implementation(UClass* Class, float CullDistance) {
}

void AReplicationGraphDebugActor::ServerSetConditionalActorBreakpoint_Implementation(AActor* Actor) {
}

void AReplicationGraphDebugActor::ServerPrintCullDistances_Implementation() {
}

void AReplicationGraphDebugActor::ServerPrintAllActorInfo_Implementation(const FString& Str) {
}

void AReplicationGraphDebugActor::ServerCellInfo_Implementation() {
}

void AReplicationGraphDebugActor::ClientCellInfo_Implementation(FVector CellLocation, FVector CellExtent, const TArray<AActor*>& Actors) {
}

AReplicationGraphDebugActor::AReplicationGraphDebugActor() {
    this->ReplicationGraph = NULL;
    this->ConnectionManager = NULL;
}

