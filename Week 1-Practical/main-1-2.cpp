#include <iostream>

//using namespace std;

extern double array_mean(int array[], int n);

int main(){
	int array[] = {1, 2, 3, 4, 5, 6, 7, 8};
	double avg;
	//avg = array_mean(array, sizeof(array) / sizeof(int));
	avg = array_mean(array, 0);
	std::cout << "The average of all elements is: " << avg << std::endl;
	
	return 0;
}