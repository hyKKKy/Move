#include <iostream>

class Point {
private:
    int x;
    int y;

public:
    Point();

    Point(int X, int Y);

    int GetX() const;

    int GetY() const;

    void print() const;

    friend std::ostream& operator<<(std::ostream& os, const Point& point);
};