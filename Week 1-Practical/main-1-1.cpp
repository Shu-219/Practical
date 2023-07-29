#include <iostream>

extern int array_sum(int array[], int n);

int main(){
	int array[] = {1, 2, 3, 4, 5, 6, 7};
	int sum;
	//sum = array_sum(array, sizeof(array) / sizeof(int));
	sum = array_sum(array, 0);
	std::cout << "The sum of all elements is: " << sum << std::endl;
	
	return 0;
}