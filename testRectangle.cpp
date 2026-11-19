#include <iostream>
#include "Rectangle.h"

int main() {
    Point2D vertices[4] = {
        Point2D(0, 2), Point2D(4, 2),
        Point2D(4, 0), Point2D(0, 0)
    };
    Rectangle r("green", vertices);
    std::cout << r << '\n';
    std::cout << "area = " << r.area()
              << "; perimeter = " << r.perimeter() << '\n';
    r.translate(1, -1);
    r.print();
    return 0;
}
