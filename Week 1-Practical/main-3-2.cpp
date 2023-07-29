#include <iostream>

extern int median_array(int array[], int n);

int main(){
	int array[] = {9, 7, 20, 10, 1};
	int median;
    
	median = median_array(array, sizeof(array) / sizeof(int));
	
	std::cout << "The median of this array is: " << median << std::endl;
	return 0;
}