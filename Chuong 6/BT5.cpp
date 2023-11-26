#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double fee = 2500; // khai báo biến fee để lưu trữ phí thành viên
    double rate = 0.04; // khai báo biến rate để lưu trữ tỷ lệ tăng phí
    cout << "Nam\tPhi thanh vien (USD)" << endl; // in ra tiêu đề của bảng
    cout << fixed << setprecision(2); // định dạng số thập phân
    for (int year = 1; year <= 6; year++) // vòng lặp for từ 1 đến 6
    {
        fee += fee * rate; // cập nhật phí thành viên theo công thức fee = fee + fee * rate
        cout << year << "\t" << fee << endl; // in ra năm và phí thành viên
    }
    return 0;
}
