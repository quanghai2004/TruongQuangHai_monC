#include <iostream>
using namespace std;

int main()
{
    double num1,num2, quotient;

    cout << "Enter a number:";
    cin >> num1;
    cout << "Enter another number:";
    cin >> num2;
    
    if(num2 == 0)
    {
        cout <<"Division by zero is not possible.\n";
        cout <<"Please run the program again and enter\n";
        cout << "a number other than zero.\n";
    }
    else
    {
        quotient = num1 /num2;
        cout <<"The quotient of" << num1 << " divided by";
        cout << num2 << "is" << quotient << ".\n";
    }
    return 0;
}