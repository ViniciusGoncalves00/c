#include "unity.h"
#include "math.h"

void setUp() {}
void tearDown() {}

void test_absolute() {
    TEST_ASSERT_EQUAL(2, absolute(2));
    TEST_ASSERT_EQUAL(0, absolute(0));
    TEST_ASSERT_EQUAL(2, absolute(-2));
}

int main() {
    UNITY_BEGIN();
    RUN_TEST(test_absolute);
    return UNITY_END();
}
