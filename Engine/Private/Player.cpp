#include "Player.h"

UPlayer::UPlayer() {
    this->PlayerController = NULL;
    this->CurrentNetSpeed = 0;
    this->ConfiguredInternetSpeed = 1000000;
    this->ConfiguredLanSpeed = 1000000;
}

