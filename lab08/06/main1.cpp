#include <iostream>
#include <vector>

int main(){
	std::vector <int> v(10,1);
	{
		int __i = 0, __n = v.size();
		for(const int& i = __i; i < __n; __i++){
			std:: cout << v[i] << " ";
			v.push_back(i);
		}
	}
	return 0;
}