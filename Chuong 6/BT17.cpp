#include <iostream>
using namespace std;

int main()
{
    int sales[5]; // khai báo mảng sales để lưu trữ doanh số của năm cửa hàng
    for (int i = 0; i < 5; i++) // vòng lặp for từ 0 đến 4
    {
        cout << "Nhap doanh so cua cua hang " << i + 1 << ": "; // in ra man hinh yêu cầu nhập doanh số của từng cửa hàng
        cin >> sales[i]; // nhập doanh số từ bàn phím
    }
    cout << "BIEN DO COT DOANH SO\n"; // in ra man hinh tiêu đề của biểu đồ
    cout << "(Moi * = 100 dong)\n"; // in ra man hinh quy tắc của biểu đồ
    for (int i = 0; i < 5; i++) // vòng lặp for từ 0 đến 4
    {
        cout << "Cua hang " << i + 1 << ": "; // in ra man hinh tên của từng cửa hàng
        for (int j = 0; j < sales[i] / 100; j++) // vòng lặp for từ 0 đến sales[i] / 100
        {
            cout << "*"; // in ra một ký tự *
        }
        cout << endl; // xuống dòng
    }
    return 0;
}
