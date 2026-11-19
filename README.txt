PRA_2627_P1 - Parte 1: EDL Lista genérica

Contenido:
- List.h: interfaz abstracta genérica.
- ListArray.h: implementación con array dinámico.
- Node.h: nodo genérico enlazado.
- ListLinked.h: implementación mediante nodos enlazados.
- testListArray.cpp, testNode.cpp, testListLinked.cpp: programas de prueba.
- Makefile: reglas de compilación.

Compilar todos los tests:
    make bin/testListArray
    make bin/testNode
    make bin/testListLinked

Ejecutarlos:
    ./bin/testListArray
    ./bin/testNode
    ./bin/testListLinked

Limpiar:
    make clean

Nota:
El testListArray.cpp se ha preparado como test equivalente a la salida de referencia
incluida en la documentación compartida, ya que el código original enlazado desde
GitBook no estaba incluido en el texto pegado.
