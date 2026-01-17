#include <math.h>
#include "SPRT.h"

/* calculates and sets the lower and upper thresholds for an SPRT test based on alpha and beta */
static void setThresholds(struct SPRT *sprt){
    sprt->a = log( sprt->beta / ( 1 - sprt->alpha ));
    sprt->b = log( sprt->alpha / ( 1 - sprt->beta ));
}

/* calculates the current LLR */
static double calculateLLR(struct SPRT sprt){
    return 0.0; /* placeholder value */
}

/* calculates the expected win chance based on elo formula */
static double calculateWinExpectancy(double diff){
    return 1.0 / ( 1.0 - pow(10.0, -diff/400.0) );
}
