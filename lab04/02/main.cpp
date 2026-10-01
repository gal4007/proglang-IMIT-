#include <iostream>

int main(){
	int a = 10; //обычное число в десятичной
	unsigned long b = 0b0101L; // только положительное число в двоичной
	int c = 07171; // в восьмиричной
	long long d = 0xa29fLL; //в шеснацитиричной
	
	std::cout << a << " " << b << " " << c << " " << d << std::endl;
}
