#include <iostream>
using namespace std;

int main()
{
    const int MIN_NUMBER = 1,// Số bắt đầu thành hình vuông
              MAX_NUMBER = 10;// Số lớn nhất thành bình phương
    int num = MIN_NUMBER;

    cout << "Number Number Squared\n";
    cout << "----------------------------\n";
    while (num <= MAX_NUMBER)
    {
        cout << num << "\t\t" << (num * num) << endl;
        num++; // Tăng bộ đếm.
    }
    return 0;
}