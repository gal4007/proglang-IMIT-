#include <iostream>
#include <vector>

int main(){
	std::vector <int> v(10,1);

	{	
		for(int i =0; i < v.size()  && i < 20; i++){ //цикл не заканчивался решил добавить условие чтобы ограничить выполнение
			std::cout << i << " ";
			v.push_back(i);
		}
	}
	return 0;
}
