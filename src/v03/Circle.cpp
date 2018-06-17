#include "Circle.h"

bool Circle::containsPoint(double x, double y) const {
    const auto dx = x - centerX;
    const auto dy = y - centerY;
    return dx*dx + dy*dy <= radius*radius;
}

float Circle::circumference() const {
    return 2.0f*PI*radius;
}