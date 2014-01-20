#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>

inline int min(int p1, int p2) {
	return (p1 < p2 ? p1:p2);
}

int &get_val( vector<int> &vi, int ix ) {
	return vi[ix];
}

int ai[4] = {0,1,2,3};
vector<int> vec( ai, ai + 4);


int main () {
	
	std::cout<<"asdf"<<std::endl;
	int a = 12;
	int b = 13;
	int minn = min(12,13);
	std::cout<< minn;
	std::cout<< ai;

	int i;
	std::cin >>i; 
	if (!std::cin) {
		std::cerr<<"Ooops: input error!";
	}
return 0;
} 
