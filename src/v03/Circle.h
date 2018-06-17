#ifndef CIRCLE_H
#define CIRCLE_H

struct Circle {
    const double PI = 3.1415926535897f;
    double centerX = 0.0;
    double centerY = 0.0;
    double radius = 1.0;

    Circle() = default;
    Circle(double x, double y, double r) : centerX(x), centerY(y), radius(r){}
    bool containsPoint(double x, double y) const;
    float circumference() const;

};

#endif