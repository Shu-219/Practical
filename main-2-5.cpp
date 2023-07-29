#include <iostream>

extern bool is_descending(int array[], int n);

int main(){
	int array[] = {9, 7, 6, 3, 1};
	bool is_des;
    
	is_des = is_descending(array, sizeof(array) / sizeof(int));
	
	std::cout << "The array is descending order? " << std::boolalpha << is_des << std::endl;
	return 0;
}