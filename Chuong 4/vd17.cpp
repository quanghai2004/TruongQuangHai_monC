#include <iostream>
using namespace std;

int main()
{
    const double MIN_INCOME = 35000.0;
    const int MIN_YEARS =5;

    double income;
    int years;

    cout <<"What is your annual income?";
    cin >> income;

    cout << "How many years have you Worked at"
        << "your current job?" << endl;
    cin >> years;
    //Xác định trình độ cho vay của người dùng.
    if (!(income >= MIN_INCOME || years > MIN_INCOME))
    {
        cout << "you must earn at least $"
            << MIN_INCOME << "or have been"
            << "employed more than" <<MIN_YEARS
            << "years.\n";
    }
    else
        cout <<"You qualify.\n";
    return 0;    
}