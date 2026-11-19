PARTE 2 - Jerarquía de dibujo 2D

Archivos incluidos:
Point2D.h/.cpp, Shape.h/.cpp, Circle.h/.cpp, Rectangle.h/.cpp,
Square.h/.cpp, Drawing.h/.cpp y programas test.

Dependencia:
Drawing utiliza ListArray<Shape*> de la Parte 1. Por tanto, para compilar
Drawing deben estar disponibles List.h y ListArray.h en el mismo directorio.

Makefile:
Las reglas nuevas están en Makefile.parte2. Incorpóralas al Makefile de la
Parte 1; no reemplaces las reglas anteriores. Deben existir CXX=g++ y
CXXFLAGS=-Wall -Wextra -std=c++17, como en el Makefile preparado antes.

Decisión de propiedad:
Drawing libera el objeto lista, pero no elimina las figuras Shape* almacenadas.
El testDrawing libera explícitamente las figuras. Así se evita asumir una
propiedad de los objetos que no está especificada en la descripción de Drawing.

Nota sobre testSquare:
El código de test descargable de GitBook no estaba incluido en el texto
compartido, por lo que se ha preparado un test equivalente para comprobar
los resultados y la excepción descritos en la documentación.
