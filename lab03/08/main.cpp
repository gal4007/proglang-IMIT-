#include <iostream>

int main(){
	int x = 1;	
	int y = 1;
	int z = 1;

	if((x == y) + (x == z) == true){
		std::cout << "true";
	}else{
		std:: cout << "false";
	}
}