#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int set[8] = {5, 10, 15, 20, 25, 30, 35, 40};
    int *nums = set;
    cout << "The numbers in set are:\n";
    cout << *nums << setw(4);
    while (nums < &set[7])
    {
        nums++;
        cout << *nums<< setw(4);
    }
    cout << "\nThe numbes in set backward are:\n";
    cout << *nums << setw(4);
    while (nums > set)
    {
        nums--;
        cout << *nums << setw(4);
    }
    return 0;
}