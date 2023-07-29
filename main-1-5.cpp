#include <iostream>

extern int count_evens(int number);

int main(){
	int number = 90;
	int count;
    //count = count_evens(0)
	count = count_evens(number);
	
	std::cout << "The number of evens is: " << count << std::endl;
	
	return 0;
}