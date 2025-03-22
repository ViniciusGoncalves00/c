#include "unity.h"
#include "mathlib.h"

void setUp() {}
void tearDown() {}

void test_absolute() {
    TEST_ASSERT_EQUAL(2, custom_absolute(2));
    TEST_ASSERT_EQUAL(0, custom_absolute(0));
    TEST_ASSERT_EQUAL(2, custom_absolute(-2));
}

void test_round() {
    TEST_ASSERT_EQUAL_INT(-1, custom_round(-1.4));
    TEST_ASSERT_EQUAL_INT(0, custom_round(0.4));
    TEST_ASSERT_EQUAL_INT(2, custom_round(1.5));
    TEST_ASSERT_EQUAL_INT(0, custom_round(0.4));
}

int main() {
    UNITY_BEGIN();
    RUN_TEST(test_absolute);
    RUN_TEST(test_round);
    return UNITY_END();
}
