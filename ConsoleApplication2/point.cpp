#include "PointH.h"
#include <iostream>


Point::Point() {
    x = 0;
    y = 0;
}

Point::Point(int X, int Y) {
    x = X;
    y = Y;
}

int Point::GetX() const {
    return x;
}

int Point::GetY() const {
    return y;
}

void Point::print() const {
    std::cout << "X: " << x << "\t" << "Y: " << y << std::endl;
}

std::ostream& operator<<(std::ostream& os, const Point& point) {
    os << "(" << point.x << ", " << point.y << ")";
    return os;
}
