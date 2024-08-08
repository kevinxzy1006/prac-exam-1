#include <iostream>
using namespace std;
extern void modifyArray(double *array, int size, double value);

int main() {
    double myArray[] = {1.0, 2.0, 3.0, 4.0, 5.0};
    int size = sizeof(myArray) / sizeof(myArray[0]);
    double addValue = 1.5;
    modifyArray(myArray, size, addValue);

    for (int i = 0; i < size; ++i) {
        std::cout << myArray[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
