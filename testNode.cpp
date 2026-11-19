#include <iostream>
#include "Node.h"

int main() {
    Node<char>* first = new Node<char>('A');
    first = new Node<char>('R', first);
    first = new Node<char>('P', first);

    std::cout << "Secuencia: ";
    Node<char>* aux = first;
    while (aux != nullptr) {
        std::cout << aux->data << " ";
        aux = aux->next;
    }
    std::cout << std::endl;

    // Liberar todos los nodos reservados dinámicamente.
    while (first != nullptr) {
        aux = first->next;
        delete first;
        first = aux;
    }

    return 0;
}
