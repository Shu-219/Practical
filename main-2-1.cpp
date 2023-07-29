#include <iostream>

extern int min_element(int array[], int n);

int main(){
	int array[] = {7, 8, 9, 11, 2, 3, 4, 5};
	int min;
    //min = min_element(array, 0)
	min = min_element(array, sizeof(array) / sizeof(int));
	
	std::cout << "The minimum of the array is: " << min << std::endl;
	
	return 0;
}