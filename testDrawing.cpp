#include <iostream>
#include "Drawing.h"
#include "Circle.h"
#include "Rectangle.h"
#include "Square.h"

int main() {
    Drawing drawing;

    Point2D square_vertices[4] = {
        Point2D(-1, 1), Point2D(1, 1),
        Point2D(1, -1), Point2D(-1, -1)
    };

    Circle* c = new Circle("blue", Point2D(2, 2), 2);
    Rectangle* r = new Rectangle();
    Square* s = new Square("green", square_vertices);

    drawing.add_back(c);
    drawing.add_front(r);
    drawing.add_back(s);

    std::cout << "Figuras del dibujo:\n";
    drawing.print_all();
    std::cout << "Área total de círculos: "
              << drawing.get_area_all_circles() << '\n';

    drawing.move_squares(2, 3);
    std::cout << "Después de mover los cuadrados:\n";
    drawing.print_all();

    // Drawing no es propietario de las figuras; se liberan aquí.
    delete c;
    delete r;
    delete s;
    return 0;
}
