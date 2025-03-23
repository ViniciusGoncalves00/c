#include "mathlib.h"

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