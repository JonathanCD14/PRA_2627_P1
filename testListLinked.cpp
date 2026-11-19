#include <iostream>
#include <stdexcept>
#include "ListLinked.h"

int main() {
    ListLinked<int> l;

    std::cout << l << '\n';
    std::cout << "size(): " << l.size() << '\n';
    std::cout << "empty(): " << (l.empty() ? "true" : "false") << "\n\n";

    l.append(5);
    l.prepend(-5);
    l.append(10);
    l.insert(2, 0);

    std::cout << l << '\n';
    std::cout << "size(): " << l.size() << '\n';
    std::cout << "empty(): " << (l.empty() ? "true" : "false") << "\n\n";

    std::cout << "l.get(0) => " << l.get(0)
              << "; l[0] => " << l[0] << '\n';
    std::cout << "l.get(3) => " << l.get(3)
              << "; l[3] => " << l[3] << "\n\n";

    std::cout << "l.remove(3) => " << l.remove(3) << ": \n";
    std::cout << "l.remove(1) => " << l.remove(1) << ": \n";
    std::cout << "l.remove(0) => " << l.remove(0) << ": \n\n";

    std::cout << l << '\n';
    std::cout << "size(): " << l.size() << '\n';
    std::cout << "empty(): " << (l.empty() ? "true" : "false") << "\n\n";

    l.prepend(33);
    l.append(14);
    l.insert(1, 5);

    std::cout << l << '\n';
    std::cout << "size(): " << l.size() << '\n';
    std::cout << "empty(): " << (l.empty() ? "true" : "false") << "\n\n";

    std::cout << "l.search(14) => " << l.search(14) << '\n';
    std::cout << "l.search(55) => " << l.search(55) << '\n';

    try { l.insert(-1, 99); }
    catch (const std::out_of_range& e) {
        std::cout << "l.insert(-1, 99) => std::out_of_range: " << e.what() << '\n';
    }
    try { l.insert(4, 99); }
    catch (const std::out_of_range& e) {
        std::cout << "l.insert(4, 99) => std::out_of_range: " << e.what() << '\n';
    }
    try { l.get(-1); }
    catch (const std::out_of_range& e) {
        std::cout << "l.get(-1) => std::out_of_range: " << e.what() << '\n';
    }
    try { l.get(3); }
    catch (const std::out_of_range& e) {
        std::cout << "l.get(3) => std::out_of_range: " << e.what() << '\n';
    }
    try { l.remove(-1); }
    catch (const std::out_of_range& e) {
        std::cout << "l.remove(-1) => std::out_of_range: " << e.what() << '\n';
    }
    try { l.remove(3); }
    catch (const std::out_of_range& e) {
        std::cout << "l.remove(3) => std::out_of_range: " << e.what() << '\n';
    }

    return 0;
}
