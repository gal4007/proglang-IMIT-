#include <iostream>

int main() {
    double d = 9.99;
    int i = d; // Ќе€вное сужающее приведение: i станет равным 9
    std::cout << i << std::endl;
    return 0;
}