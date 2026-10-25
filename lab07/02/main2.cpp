#include <iostream>

int main(){
	int x = 1, y = 2, z = 3;

	++x, z += x * 2 + 3 * y, ++y;

std::cout << "x = " << x << ", y = " << y << ", z = " << z << std::endl;
}