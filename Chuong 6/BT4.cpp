#include <iostream>
using namespace std;

int main()
{
    double rate = 3.6; // khai báo biến rate để lưu trữ tỷ lệ tiêu hao calo
    cout << "Phut\tCalo" << endl; // in ra tiêu đề của bảng
    for (int minute = 5; minute <= 30; minute += 5) // vòng lặp for từ 5 đến 30 với bước nhảy là 5
    {
        double calorie = rate * minute; // tính số calo tiêu hao theo công thức calorie = rate * minute
        cout << minute << "\t" << calorie << endl; // in ra số phút và số calo
    }
    return 0;
}
