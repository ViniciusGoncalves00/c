#include "unity.h"
#include "test_mathlib.h"
#include "test_geometry.h"

void setUp() {}
void tearDown() {}

int main() {
    UNITY_BEGIN();

    RUN_TEST(test_absolute);
    RUN_TEST(test_round);
    RUN_TEST(test_floor);
    RUN_TEST(test_ceiling);
    RUN_TEST(test_sign);
    RUN_TEST(test_min);
    RUN_TEST(test_max);

    RUN_TEST(test_triangle_rectangle_area);

    return UNITY_END();
}
