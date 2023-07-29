#include <iostream>

extern bool is_fanarray(int array[], int n);

int main() {
    int array[] = {1,2,1,2,1};
    int n = 5;

    std::cout << is_fanarray(array, n) << std::endl;
    return 0;
}