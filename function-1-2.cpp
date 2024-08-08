#include <iostream>
using namespace std;

void modifyArray(double *array, int size, double value)
{
    double arraymod[5] = {};
    for (int i = 0; i < size; i++)
    {
        arraymod[i] = array[i] + value;

        cout << arraymod[i] << " ";
    }
    cout << endl;
}
