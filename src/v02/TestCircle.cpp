#include <gtest/gtest.h>
#include "Circle.h"

#include <math.h>

TEST(Circle, DefaultConstructedCircleIsAUnitCircleAtOrigin) {
    Circle circle;
    ASSERT_DOUBLE_EQ(circle.centerX, 0.0);
    ASSERT_NEAR(circle.centerY, 0.0, 0.0);
    ASSERT_EQ(circle.radius, 1.0);
}

TEST(Circle, UnitCircleContainsCenter) {
    Circle circle;
    ASSERT_TRUE(circle.containsPoint(circle.centerX, circle.centerY));
}

TEST(Circle, UnitCircleContainsPointOnEdge) {
    Circle circle;
    ASSERT_TRUE(circle.containsPoint(circle.centerX, circle.centerX + circle.radius));
}

TEST(Circle, CircumferenceOfUnitcircleIs2Pi) {
    Circle circle;
    EXPECT_PRED_FORMAT2(::testing::FloatLE, circle.circumference(), 2.0f*M_PI);
    ASSERT_FLOAT_EQ(circle.circumference(), 2*circle.PI);
}