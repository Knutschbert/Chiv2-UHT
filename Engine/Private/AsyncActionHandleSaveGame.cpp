#include "AsyncActionHandleSaveGame.h"

UAsyncActionHandleSaveGame* UAsyncActionHandleSaveGame::AsyncSaveGameToSlot(UObject* WorldContextObject, USaveGame* NewSaveGameObject, const FString& SlotName, const int32 UserIndex) {
    return NULL;
}

UAsyncActionHandleSaveGame* UAsyncActionHandleSaveGame::AsyncLoadGameFromSlot(UObject* WorldContextObject, const FString& SlotName, const int32 UserIndex) {
    return NULL;
}

UAsyncActionHandleSaveGame::UAsyncActionHandleSaveGame() {
    this->SaveGameObject = NULL;
}

