#include <iostream>

int main(){
	int a = 9, b = 6;
	std::cout << a << " " << b << std::endl;

	a, b = b, a;
	std:: cout << a << " " << b << std:: endl;
}