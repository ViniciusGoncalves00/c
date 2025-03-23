#include "unity.h"
#include "geometry.h"

void test_triangle_rectangle_area() {
    float p1[] = {0, 0};
    float p2[] = {0, 2};
    float p3[] = {2, 0};

    TEST_ASSERT_EQUAL_FLOAT(2, triangle_rectangle_area(p1, p2, p3));

    p1[0] = 0;
    p1[1] = 0;
    p2[0] = 0;
    p2[1] = 2;
    p3[0] = -4;
    p3[1] = 0;
    TEST_ASSERT_EQUAL_FLOAT(4, triangle_rectangle_area(p1, p2, p3));
}