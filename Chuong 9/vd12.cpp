#include <iostream>
#include <iomanip>
using namespace std;

void displayValue(const int *, int);

int main()
{
    const int SIZE = 6;
    const int array1[SIZE] = {1, 2, 3, 4, 5, 6};
    int array2[SIZE] = {2, 4, 6, 8, 10, 12};
    displayValue(array1, SIZE);
    displayValue(array2, SIZE);
    return 0;
}
void displayValue(const int *numbers, int size)
{
    for (int count = 0; count < size; count++)
    {
        cout << *(numbers + count) << setw(4);
    }
    cout << endl;
}