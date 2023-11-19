#include "MovieSceneCapture.h"
#include "Templates/SubclassOf.h"

void UMovieSceneCapture::SetImageCaptureProtocolType(TSubclassOf<UMovieSceneCaptureProtocolBase> ProtocolType) {
}

void UMovieSceneCapture::SetAudioCaptureProtocolType(TSubclassOf<UMovieSceneCaptureProtocolBase> ProtocolType) {
}

UMovieSceneCaptureProtocolBase* UMovieSceneCapture::GetImageCaptureProtocol() {
    return NULL;
}

UMovieSceneCaptureProtocolBase* UMovieSceneCapture::GetAudioCaptureProtocol() {
    return NULL;
}

UMovieSceneCapture::UMovieSceneCapture() {
    this->ImageCaptureProtocol = NULL;
    this->AudioCaptureProtocol = NULL;
    this->bUseSeparateProcess = false;
    this->bCloseEditorWhenCaptureStarts = false;
    this->AdditionalCommandLineArguments = TEXT("-NOSCREENMESSAGES");
    this->InheritedCommandLineArguments = TEXT("--next-map-mod-actors --all-mod-actors -NotInstalled -AUTH_LOGIN=unused -AUTH_PASSWORD=40de7309a0ac437582c4fa5492cdc067 -AUTH_TYPE=exchangecode -epicapp=Peppermint -epicenv=Prod -EpicPortal -epicusername=Argon -epicuserid=aa9f2729093e40fb8a1f664a164fca2c -epiclocale=en -epicsandboxid=bd46d4ce259349e5bd8b3ded20274737 --server-browser-backend ");
}

