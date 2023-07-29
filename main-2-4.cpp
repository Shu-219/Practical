#include <iostream>

extern bool is_ascending(int array[], int n);

int main(){
	int array[] = {2, 3, 4, 5, 9};
	bool is_asc;
    
	is_asc = is_ascending(array, sizeof(array) / sizeof(int));
	
	std::cout << "The array is ascending order? " << std::boolalpha << is_asc << std::endl;
	return 0;
}