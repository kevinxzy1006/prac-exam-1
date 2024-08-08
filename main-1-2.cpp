#include <iostream>
using namespace std;
extern void modifyArray(double *array, int size, double value);

int main()
{
    double array[5] = {1.1, 2.2, 3.3, 4.4, 1.0};
    int size = sizeof(array) / sizeof(array[0]);
    double value = 1.1;

    modifyArray(array, size, value);
}