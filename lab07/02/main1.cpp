#include <iostream>

int main(){
	int x = 1, y = 2, z = 3;

	x+=1, z += x * 2, z += y * 3, y += 1;

	std::cout << "x = " << x << ", y = " << y << ", z = " << z << std::endl;
}