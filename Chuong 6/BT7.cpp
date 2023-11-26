#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int days; // khai báo biến days để lưu trữ số ngày
    long long pennies = 1; // khai báo biến pennies để lưu trữ số xu
    double total = 0; // khai báo biến total để lưu trữ tổng số tiền
    cout << "Nhap so ngay lam viec: "; // in ra man hinh yeu cau nhap so ngay
    cin >> days; // nhap so ngay tu ban phim
    if (days >= 1) // kiem tra dieu kien so ngay phai lon hon hoac bang 1
    {
        cout << "Ngay\tLuong (USD)" << endl; // in ra tiêu đề của bảng
        cout << "---------------------" << endl; // in ra dấu gạch ngang để phân cách
        for (int day = 1; day <= days; day++) // vòng lặp for từ 1 đến days
        {
            double salary = pennies / 100.0; // chuyển đổi số xu sang số tiền theo công thức salary = pennies / 100.0
            cout << day << "\t" << fixed << setprecision(2) << salary << endl; // in ra số ngày và số tiền
            total += salary; // cộng dồn số tiền vào total
            pennies *= 2; // nhân đôi số xu
        }
        cout << "Tong so tien kiem duoc sau " << days << " ngay la: " << total << " USD" << endl; // in ra tổng số tiền kiếm được
    }
    else // nếu số ngày không thỏa mãn điều kiện
    {
        cout << "So ngay nhap vao khong hop le. Vui long nhap mot so lon hon hoac bang 1." << endl; // in ra man hinh thong bao loi
    }
    return 0;
}
