#include "PartyBeaconHost.h"

APartyBeaconHost::APartyBeaconHost() {
    this->State = NULL;
    this->bLogoutOnSessionTimeout = true;
    this->SessionTimeoutSecs = 10.00f;
    this->TravelSessionTimeoutSecs = 45.00f;
}

