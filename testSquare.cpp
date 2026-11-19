#include <iostream>
#include <stdexcept>
#include "Square.h"

int main() {
    Square r1;
    Point2D vertices[4] = {
        Point2D(-2, 2), Point2D(2, 2),
        Point2D(2, -2), Point2D(-2, -2)
    };
    Square r2("green", vertices);

    std::cout << "r1 = " << r1 << '\n';
    std::cout << "r1.area() => " << r1.area()
              << "; r1.perimeter() => " << r1.perimeter() << "\n\n";

    std::cout << "r2 = " << r2 << '\n';
    std::cout << "r2.area() => " << r2.area()
              << "; r2.perimeter() => " << r2.perimeter() << "\n\n";

    Point2D invalid[4] = {
        Point2D(0, 0), Point2D(3, 0),
        Point2D(3, 2), Point2D(0, 2)
    };
    try {
        r2.set_vertices(invalid);
    } catch (const std::invalid_argument& e) {
        std::cout << "r2.set_vertices(...) => std::invalid_argument: "
                  << e.what() << '\n';
    }
    return 0;
}
