#include <iostream>

double *duplicateArray(double *array, int size)
{
    double *arr = new double[size];

    // Initialise the array with values (for example, using the array index)
    for (int i = 0; i < size; i++)
    {
        arr[i] = static_cast<double>(i); // Or use another initialization method
    }

    // Return the pointer to the array
    return arr;
}
