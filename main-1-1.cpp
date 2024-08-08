#include <iostream>
using namespace std;
extern double arrayMin(double *array, int size);

int main()
{
    double array[5] = {1.1, 2.2, 3.3, 4.4, 0.1};
    int size = sizeof(array) / sizeof(array[0]);
    double min = arrayMin(array, size);

    cout << min << endl;

    return 0;
}