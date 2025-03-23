#include "geometry.h"
#include "mathlib.h"

float triangle_rectangle_area(float a[2], float b[2], float c[2]) {
    float minX = custom_min(a[0], b[0]);
    minX = custom_min(minX, c[0]);

    float maxX = custom_max(a[0], b[0]);
    maxX = custom_max(maxX, c[0]);

    float minY = custom_min(a[1], b[1]);
    minY = custom_min(minY, c[1]);

    float maxY = custom_max(a[1], b[1]);
    maxY = custom_max(maxY, c[1]);

    float deltaX = maxX - minX;
    float deltaY = maxY - minY;

    return (deltaX * deltaY) / 2;
}