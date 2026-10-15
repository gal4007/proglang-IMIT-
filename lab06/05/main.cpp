#include <iostream>

namespace Ben{
	void hello(){
		std::cout <<"hello, i am Ben" << std::endl;
	}
}

namespace Jonny{
	void hello(){
		std::cout <<"hello, i am Jonny" << std:: endl;
	}
}

int main(){
	Ben::hello();
	Jonny::hello();
}