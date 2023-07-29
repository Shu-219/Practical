#include <iostream>

extern int max_element(int array[], int n);

int main(){
	int array[] = {7, 8, 9, 11, 2, 3, 4, 5};
	int max;
    //max = max_element(array, 0)
	max = max_element(array, sizeof(array) / sizeof(int));
	
	std::cout << "The maximum of the array is: " << max << std::endl;
	
	return 0;
}