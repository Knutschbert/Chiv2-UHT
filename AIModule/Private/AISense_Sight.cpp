#include "AISense_Sight.h"

UAISense_Sight::UAISense_Sight() {
    this->MaxTracesPerTick = 30;
    this->MinQueriesPerTimeSliceCheck = 10;
    this->MaxTimeSlicePerTick = 0.00f;
    this->HighImportanceQueryDistanceThreshold = 300.00f;
    this->MaxQueryImportance = 60.00f;
    this->SightLimitQueryImportance = 10.00f;
}

