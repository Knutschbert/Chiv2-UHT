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
}

