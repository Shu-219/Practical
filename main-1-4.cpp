#include <iostream>

extern int sum_two_arrays(int array[], int secondarray[], int n);

int main(){
	int array[] = {1, 2, 3, 4, 5};
	int secondarray[] = {6, 7, 8, 9, 10};
	int sum;
    
	sum = sum_two_arrays(array, secondarray, sizeof(array) / sizeof(int));

	std::cout << "The sum of two arrays is: " << sum << std::endl;
	
	return 0;
}