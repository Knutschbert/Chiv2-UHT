#include "MoviePlayerSettings.h"

UMoviePlayerSettings::UMoviePlayerSettings() {
    this->bWaitForMoviesToComplete = true;
    this->bMoviesAreSkippable = true;
    this->StartupMovies.AddDefaulted(2);
}

