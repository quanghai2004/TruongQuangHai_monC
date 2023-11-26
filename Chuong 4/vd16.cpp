#include <iostream>
using namespace std;

int main()
{
     // Các hằng số cho thu nhập tối thiểu và số năm
    const double MIN_INCOME = 35000.0;
    const int MIN_YEAR = 5;
    
    double income;// Thu nhập hàng năm
    int years;// Số năm làm công việc hiện tại
    // Lấy thu nhập hàng năm
    cout << "What is your annual income?";
    cin >> income;
    // Lấy số năm làm công việc hiện tại.
    cout << "How many years have yo worked at " 
        << "your current job?";
    cin >> years;
    // Xác định điều kiện vay vốn của người dùng.
    if (income >= MIN_INCOME || years > MIN_INCOME)
        cout << "You qualify.\n";
    else
    {
        cout << "You must earn at least $"
            << MIN_INCOME << "or have been"
            << "employed more than " << MIN_INCOME 
            << "years.\n"; 
    }
    return 0;
}