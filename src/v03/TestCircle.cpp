#include <gtest/gtest.h>
#include "Circle.h"

#include <math.h>
#include <vector>

// straight from the docs
::testing::AssertionResult IsEven(int n) {
    if ((n % 2) == 0) {
        return ::testing::AssertionSuccess();
    }
    return ::testing::AssertionFailure() << n << " is odd";
}

TEST(Circle, DiameterOfUnitCircleIsEven) {
    Circle circle;
    ASSERT_TRUE(IsEven((int)circle.radius*2));
}

class CircleTest : public ::testing::TestWithParam<Circle> {

};

TEST_F(CircleTest, foo) {

}

TEST_P(CircleTest, Inside) {
    auto circle = GetParam();
    ASSERT_TRUE(circle.containsPoint(2, circle.centerY));
}
std::vector<Circle> someCircles = {Circle(0.0,2.0,-3.0), Circle(-1.0,2.0,-3.0), Circle(1.0,2.0,0.0)};
INSTANTIATE_TEST_CASE_P(Inside, CircleTest, ::testing::ValuesIn(someCircles));

TEST (Bla, Foo) {
    std::vector<int> foo{1,5,9};
    for (int i = 1; i <= 3; ++i) {
        ASSERT_EQ(i*i, foo[i-1]) << "yo: " << i;
    }
}