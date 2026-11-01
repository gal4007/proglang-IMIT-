#include <iostream>
#include <vector>

int main(){
	int n;
	std::cin >> n;

	std :: vector<int> v(n);
	for (int &x : v){
		std:: cin >> x;
	}
	
	for (int &x : v){
		x+=v.back();
	}

	int count = 0;
	int count1 = 0;
	for(int x : v){
		if (x > 0){
			count++;
		}
		else if (x < 0) {
			count1++;
		}		
	}	
	
	std :: cout << count << " " << count1 << std :: endl;		
}