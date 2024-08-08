#include <iostream>
extern double *duplicateArray(double *array, int size);
using namespace std;

int main()
{
    double array[5] = {1.1, 2.2, 3.3, 4.4, 1.0};
    int size = sizeof(array) / sizeof(array[0]);
    double *arr = duplicateArray(array, size);

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
        cout << endl;
    }
    return 0;
}