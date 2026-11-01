#include <iostream>
#include <vector>

void f(std::vector <int> v){
	bool flag = false;
	
	for(int i = 0; i < v.size(); i++){
		if(v[i] < 0){
			std::cout << v[i] << std::endl;
			
			flag = true;

			break;
		}
	}
	if (!flag){
		std::cout << "no negative numbers" << std::endl;
	}
}
		
int main(){
	std::vector<int> a = {1,2,3,-5,6,7};
	f(a);
	std::vector<int> b = {1,2,3,4,5,6,7};
	f(b);	
}