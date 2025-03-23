#include "mathlib.h"

double const INFINITY_POSITIVE = 1.0 / 0.0;
double const INFINITY_NEGATIVE = -1.0 / 0.0;

int custom_absolute(int a) {
    if(a < 0) {
        a *= -1;
    }

    return a;
}

int custom_round(float a) {
    if (a - (int)a >= 0.5) {
        return (int)a + 1;
    } else if (a - (int)a <= -0.5) {
        return (int)a - 1;
    } else {
        return (int)a;
    }
}

int custom_floor(float a) {
    if (a - (int)a < 0) {
        return (int)a - 1;
    } else {
        return (int)a;
    }
}

int custom_ceiling(float a) {
    if (a - (int)a > 0) {
        return (int)a + 1;
    } else {
        return (int)a;
    }
}

int custom_sign(float a) {
    if (a > 0.0) {
        return 1;
    } else if (a < 0.0) {
        return -1;
    } else {
        return 0;
    }
}

float custom_min(float a, float b) {
    if(a < b) {
        return a;
    }
    else {
        return b;
    }
}

float custom_max(float a, float b) {
    if(a > b) {
        return a;
    }
    else {
        return b;
    }
}