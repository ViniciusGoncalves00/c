#include "unity.h"
#include "mathlib.h"

void test_absolute() {
    TEST_ASSERT_EQUAL(2, custom_absolute(2));
    TEST_ASSERT_EQUAL(0, custom_absolute(0));
    TEST_ASSERT_EQUAL(2, custom_absolute(-2));
    TEST_ASSERT_EQUAL(2.2, custom_absolute(2.2));
    TEST_ASSERT_EQUAL(2.2, custom_absolute(-2.2));
}

void test_round() {
    TEST_ASSERT_EQUAL_INT(-1, custom_round(-1.4));
    TEST_ASSERT_EQUAL_INT(0, custom_round(0.4));
    TEST_ASSERT_EQUAL_INT(2, custom_round(1.5));
    TEST_ASSERT_EQUAL_INT(0, custom_round(0.4));
}

void test_floor() {
    TEST_ASSERT_EQUAL_INT(-2, custom_floor(-1.4));
    TEST_ASSERT_EQUAL_INT(0, custom_floor(0.4));
    TEST_ASSERT_EQUAL_INT(1, custom_floor(1.9999999));
    TEST_ASSERT_EQUAL_INT(2, custom_floor(2));
    TEST_ASSERT_EQUAL_INT(-3, custom_floor(-3));
}

void test_ceiling() {
    TEST_ASSERT_EQUAL_INT(-1, custom_ceiling(-1.4));
    TEST_ASSERT_EQUAL_INT(1, custom_ceiling(0.4));
    TEST_ASSERT_EQUAL_INT(2, custom_ceiling(1.9999999));
    TEST_ASSERT_EQUAL_INT(2, custom_ceiling(2));
    TEST_ASSERT_EQUAL_INT(-3, custom_ceiling(-3));
}

void test_sign() {
    TEST_ASSERT_EQUAL_INT(1, custom_sign(10));
    TEST_ASSERT_EQUAL_INT(0, custom_sign(0));
    TEST_ASSERT_EQUAL_INT(-1, custom_sign(-10));
    TEST_ASSERT_EQUAL_INT(1, custom_sign(INFINITY_POSITIVE));
    TEST_ASSERT_EQUAL_INT(-1, custom_sign(INFINITY_NEGATIVE));
}

void test_min() {
    TEST_ASSERT_EQUAL_FLOAT(0, custom_min(0, 10));
    TEST_ASSERT_EQUAL_FLOAT(-1, custom_min(-1, 0));
    TEST_ASSERT_EQUAL_FLOAT(-5, custom_min(-5, -2));
    TEST_ASSERT_EQUAL_FLOAT(INFINITY_NEGATIVE, custom_min(INFINITY_POSITIVE, INFINITY_NEGATIVE));
}

void test_max() {
    TEST_ASSERT_EQUAL_FLOAT(10, custom_max(0, 10));
    TEST_ASSERT_EQUAL_FLOAT(0, custom_max(-1, 0));
    TEST_ASSERT_EQUAL_FLOAT(-2, custom_max(-5, -2));
    TEST_ASSERT_EQUAL_FLOAT(INFINITY_POSITIVE, custom_max(INFINITY_POSITIVE, INFINITY_NEGATIVE));
}