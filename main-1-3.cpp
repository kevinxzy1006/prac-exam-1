#include <iostream>

extern double *duplicateArray(double *array, int size);

int main()
{
    double originalArray[] = {1.1, 2.2, 3.3, 4.4, 5.5};
    int size = sizeof(originalArray) / sizeof(originalArray[0]);

    double *copiedArray = duplicateArray(originalArray, size);

    std::cout << "Original array: ";
    for (int i = 0; i < size; ++i)
    {
        std::cout << originalArray[i] << " ";
    }
    std::cout << std::endl;

    std::cout << "Copied array: ";
    for (int i = 0; i < size; ++i)
    {
        std::cout << copiedArray[i] << " ";
    }
    std::cout << std::endl;

    delete[] copiedArray;

    return 0;
}
