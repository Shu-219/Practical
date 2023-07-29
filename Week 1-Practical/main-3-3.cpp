#include <iostream>

extern double weighted_average(int array[], int n);

int main(){
	int array[] = {1, 2, 1, 4, 1, 3};
	double avg;
    
	avg = weighted_average(array, sizeof(array) / sizeof(int));
	
	std::cout << "The weighted average of this array is: " << avg << std::endl;
	return 0;
}