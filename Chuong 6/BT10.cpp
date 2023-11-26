#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int years, months; // khai báo biến years và months để lưu trữ số năm và số tháng
    double rainfall, total = 0; // khai báo biến rainfall và total để lưu trữ lượng mưa và tổng lượng mưa
    double average; // khai báo biến average để lưu trữ trung bình lượng mưa
    cout << "Nhap so nam: "; // in ra man hinh yeu cau nhap so nam
    cin >> years; // nhap so nam tu ban phim
    if (years >= 1) // kiem tra dieu kien so nam phai lon hon hoac bang 1
    {
        for (int i = 1; i <= years; i++) // vòng lặp for từ 1 đến years
        {
            for (int j = 1; j <= 12; j++) // vòng lặp for từ 1 đến 12
            {
                cout << "Nhap luong mua (inch) cua thang " << j << " nam " << i << ": "; // in ra man hinh yeu cau nhap luong mua cua tung thang trong tung nam
                cin >> rainfall; // nhap luong mua tu ban phim
                if (rainfall >= 0) // kiem tra dieu kien luong mua phai khong am
                {
                    total += rainfall; // cộng dồn luong mua vào total
                }
                else // nếu luong mua không thỏa mãn điều kiện
                {
                    cout << "Luong mua nhap vao khong hop le. Vui long nhap mot so khong am." << endl; // in ra man hinh thong bao loi
                    j--; // giảm biến đếm của vòng lặp đi 1 để nhập lại
                }
            }
        }
        months = years * 12; // tính số tháng bằng cách nhân số năm với 12
        average = total / months; // tính trung bình luong mua bằng cách chia tổng luong mua cho số tháng
        cout << "So thang la: " << months << endl; // in ra man hinh so thang
        cout << "Tong luong mua la: " << total << " inch" << endl; // in ra man hinh tong luong mua
        cout << fixed << setprecision(2); // định dạng số thập phân
        cout << "Trung binh luong mua la: " << average << " inch/thang" << endl; // in ra man hinh trung binh luong mua
    }
    else // nếu số năm không thỏa mãn điều kiện
    {
        cout << "So nam nhap vao khong hop le. Vui long nhap mot so lon hon hoac bang 1." << endl; // in ra man hinh thong bao loi
    }
    return 0;
}
