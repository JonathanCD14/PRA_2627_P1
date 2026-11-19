#include "Square.h"
#include <stdexcept>

bool Square::check(Point2D* vertices) {
    if (vertices == nullptr) {
        return false;
    }

    const double side = Point2D::distance(vertices[0], vertices[1]);
    for (int i = 1; i < 4; ++i) {
        if (Point2D::distance(vertices[i], vertices[(i + 1) % 4]) != side) {
            return false;
        }
    }
    return true;
}

Square::Square() : Rectangle() {}

Square::Square(std::string color, Point2D* vertices)
    : Rectangle(color, vertices) {
    if (!check(vertices)) {
        throw std::invalid_argument("Provided vertices do not build a valid square!");
    }
}

void Square::set_vertices(Point2D* vertices) {
    if (!check(vertices)) {
        throw std::invalid_argument("Provided vertices do not build a valid square!");
    }
    Rectangle::set_vertices(vertices);
}

void Square::print() {
    std::cout << *this << std::endl;
}

std::ostream& operator<<(std::ostream& out, const Square& square) {
    out << "[Square: color = " << square.get_color()
        << "; v0 = " << square[0]
        << "; v1 = " << square[1]
        << "; v2 = " << square[2]
        << "; v3 = " << square[3] << "]";
    return out;
}
