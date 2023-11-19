#include "CollisionProfile.h"

UCollisionProfile::UCollisionProfile() {
    this->Profiles.AddDefaulted(38);
    this->DefaultChannelResponses.AddDefaulted(10);
    this->EditProfiles.AddDefaulted(14);
    this->ProfileRedirects.AddDefaulted(7);
    this->CollisionChannelRedirects.AddDefaulted(5);
}

