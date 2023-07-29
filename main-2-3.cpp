#include <iostream>

extern void two_five_nine(int array[], int n);

int main(){
	int array[] = {7, 8, 9, 11, 2, 3, 4, 5, 2, 9};
	two_five_nine(array, 0);
	two_five_nine(array, sizeof(array) / sizeof(int));
	
	return 0;
}