#include "MovieSceneSubSection.h"

void UMovieSceneSubSection::SetSequence(UMovieSceneSequence* Sequence) {
}

UMovieSceneSequence* UMovieSceneSubSection::GetSequence() const {
    return NULL;
}

UMovieSceneSubSection::UMovieSceneSubSection() {
    this->StartOffset = -340282346638528859811704183484516925440.00f;
    this->TimeScale = -340282346638528859811704183484516925440.00f;
    this->PrerollTime = -340282346638528859811704183484516925440.00f;
    this->SubSequence = NULL;
}

