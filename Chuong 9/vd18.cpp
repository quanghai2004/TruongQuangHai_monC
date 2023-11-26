#include <iostream>
#include <memory>
using namespace std;
int main()
{
    int max;
    cout << "How many numbers do you want to enter?";
    cin >> max;
    unique_ptr<int[]> ptr( new int[max]);
    for (int index =0; index < max; index++)
    {
        cout << "Enter an integer number: ";
        cin >> ptr[index];
    }
    cout << "Here are the values you entered: " << endl;
    for (int index = 0; index < max; index++)
        cout << ptr[index] << endl;
    return 0;
}