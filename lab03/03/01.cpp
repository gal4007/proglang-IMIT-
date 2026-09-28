#include <iostream>

int main() {
    int x = 5;
    if (x) { // Неявное приведение int к bool (5 => true)
        std::cout << "true" << std::endl;
    }
    return 0;
}