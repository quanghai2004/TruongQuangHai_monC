#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int start, days; // khai báo biến start và days để lưu trữ số lượng ban đầu và số ngày sinh sôi
    double rate, size; // khai báo biến rate và size để lưu trữ tỷ lệ tăng trưởng và kích thước quần thể
    cout << "Nhap so luong ban dau cua quan the: "; // in ra man hinh yeu cau nhap so luong ban dau
    cin >> start; // nhap so luong ban dau tu ban phim
    if (start >= 2) // kiem tra dieu kien so luong ban dau phai lon hon hoac bang 2
    {
        cout << "Nhap ty le tang truong trung binh hang ngay (%): "; // in ra man hinh yeu cau nhap ty le tang truong
        cin >> rate; // nhap ty le tang truong tu ban phim
        if (rate >= 0) // kiem tra dieu kien ty le tang truong phai khong am
        {
            cout << "Nhap so ngay sinh soi: "; // in ra man hinh yeu cau nhap so ngay sinh soi
            cin >> days; // nhap so ngay sinh soi tu ban phim
            if (days >= 1) // kiem tra dieu kien so ngay sinh soi phai lon hon hoac bang 1
            {
                size = start; // gan size bang start
                rate = rate / 100; // chuyen doi ty le tang truong sang dang thap phan
                cout << "Ngay\tKich thuoc quan the" << endl; // in ra tiêu đề của bảng
                cout << "------------------------" << endl; // in ra dấu gạch ngang để phân cách
                for (int i = 1; i <= days; i++) // vòng lặp for từ 1 đến days
                {
                    cout << i << "\t" << fixed << setprecision(0) << size << endl; // in ra số ngày và kích thước quần thể
                    size += size * rate; // cập nhật kích thước quần thể theo công thức size = size + size * rate
                }
            }
            else // nếu số ngày sinh sôi không thỏa mãn điều kiện
            {
                cout << "So ngay nhap vao khong hop le. Vui long nhap mot so lon hon hoac bang 1." << endl; // in ra man hinh thong bao loi
            }
        }
        else // nếu tỷ lệ tăng trưởng không thỏa mãn điều kiện
        {
            cout << "Ty le tang truong nhap vao khong hop le. Vui long nhap mot so khong am." << endl; // in ra man hinh thong bao loi
        }
    }
    else // nếu số lượng ban đầu không thỏa mãn điều kiện
    {
        cout << "So luong ban dau nhap vao khong hop le. Vui long nhap mot so lon hon hoac bang 2." << endl; // in ra man hinh thong bao loi
    }
    return 0;
}
