#include "GeneralProjectSettings.h"

UGeneralProjectSettings::UGeneralProjectSettings() {
    this->CompanyName = TEXT("Torn Banner Studios");
    this->CompanyDistinguishedName = TEXT("Torn Banner Studios");
    this->CopyrightNotice = TEXT("Copyright 2017-2018 Torn Banner Studios Inc. All Rights Reserved.");
    this->Homepage = TEXT("tornbanner.com");
    this->ProjectName = TEXT("Chivalry 2");
    this->ProjectVersion = TEXT("1.0.1.37");
    this->SupportContact = TEXT("contact@tornbanner.com");
    this->ProjectDisplayedTitle = FText::FromString(TEXT("Chivalry 2"));
    this->bShouldWindowPreserveAspectRatio = true;
    this->bUseBorderlessWindow = false;
    this->bStartInVR = false;
    this->bStartInAR = false;
    this->bSupportAR = false;
    this->bAllowWindowResize = true;
    this->bAllowClose = true;
    this->bAllowMaximize = true;
    this->bAllowMinimize = true;
}

