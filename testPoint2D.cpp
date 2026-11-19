#include <iostream>
#include "Point2D.h"

int main() {
    Point2D a(0, 0), b(3, 4);
    std::cout << "a = " << a << '\n';
    std::cout << "b = " << b << '\n';
    std::cout << "distance(a,b) = " << Point2D::distance(a, b) << '\n';
    std::cout << std::boolalpha << "a == b: " << (a == b) << '\n';
    return 0;
}
