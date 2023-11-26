#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double level = 0; // khai báo biến level để lưu trữ mực nước biển
    cout << "Nam\tMuc nuoc bien (mm)" << endl; // in ra tiêu đề của bảng
    cout << fixed << setprecision(1); // định dạng số thập phân
    for (int year = 1; year <= 25; year++) // vòng lặp for từ 1 đến 25
    {
        level += 1.5; // cộng dồn 1.5 vào level
        cout << year << "\t" << level << endl; // in ra năm và level
    }
    return 0;
}
