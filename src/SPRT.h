#include "engine.h"

/* struct of data used in an SPRT */
struct SPRT{
    struct engine engine_1;
    struct engine engine_2;
    int results[3]; /* the number of Wins, Draws, & Losses in respect to engine_1 */
    
    double draw_elo; /* represents the tendency to draw in the Rao-Kupper model for elo with draws */
    double elo_advantage; /* represents the advantage white has from moving first */
    
    double elo_0; /* This represents our null hypothesis that the elo difference is exactly elo_0. */
    double elo_1; /* This represents our alternative hypothesis that the elo difference is exactly elo_1. */
    double alpha; /* This represents our tolerated type I (false positive) error rate. */
    double beta; /* This represents our tolerated type II (false negative) error rate. */
    
    double a; /* the lower stopping threshold */
    double b; /* the upper stopping threshold */
};

/* calculates and sets the lower and upper thresholds for an SPRT test based on alpha and beta */
static void setThresholds(struct SPRT *sprt);

/* calculates the current LLR */
static double calculateLLR(struct SPRT sprt);

/* calculates the expected win chance based on elo formula */
static double calculateWinExpectancy(double diff);
