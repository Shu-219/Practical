#include <iostream>

extern int num_count(int array[], int n, int number);

int main(){
	int array[] = {8, 1, 2, 3, 4, 8, 5, 6, 7, 8};
	int count;
    //count = num_count(array, 0, 8)
	count = num_count(array, sizeof(array) / sizeof(int), 8);
	
	std::cout << "The number of the given number is: " << count << std::endl;
	
	return 0;
}