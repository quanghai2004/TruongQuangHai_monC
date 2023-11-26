#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    double rainfall[12]; // khai báo mảng rainfall để lưu trữ lượng mưa của 12 tháng
    double total = 0, average; // khai báo biến total và average để lưu trữ tổng lượng mưa và lượng mưa trung bình
    double max, min; // khai báo biến max và min để lưu trữ lượng mưa cao nhất và thấp nhất
    int max_month, min_month; // khai báo biến max_month và min_month để lưu trữ tháng có lượng mưa cao nhất và thấp nhất
    string months[12] = {"Thang 1", "Thang 2", "Thang 3", "Thang 4", "Thang 5", "Thang 6", "Thang 7", "Thang 8", "Thang 9", "Thang 10", "Thang 11", "Thang 12"}; // khai báo mảng months để lưu trữ tên của các tháng
    for (int i = 0; i < 12; i++) // vòng lặp for từ 0 đến 11
    {
        cout << "Nhap luong mua cua " << months[i] << ": "; // in ra man hinh yêu cầu nhập lượng mưa của từng tháng
        cin >> rainfall[i]; // nhập lượng mưa từ bàn phím
        while (rainfall[i] < 0) // vòng lặp while cho đến khi lượng mưa là số không âm
        {
            cout << "Luong mua nhap vao khong hop le. Vui long nhap mot so khong am.\n"; // in ra man hinh thông báo lỗi
            cout << "Nhap lai luong mua cua " << months[i] << ": "; // in ra man hinh yêu cầu nhập lại lượng mưa của từng tháng
            cin >> rainfall[i]; // nhập lại lượng mưa từ bàn phím
        }
        total += rainfall[i]; // cộng dồn lượng mưa vào tổng lượng mưa
        if (i == 0) // nếu đây là tháng đầu tiên được nhập
        {
            max = min = rainfall[i]; // gán max và min bằng rainfall[i]
            max_month = min_month = i; // gán max_month và min_month bằng i
        }
        else // nếu đây không phải là tháng đầu tiên được nhập
        {
            if (rainfall[i] > max) // nếu rainfall[i] lớn hơn max
            {
                max = rainfall[i]; // gán max bằng rainfall[i]
                max_month = i; // gán max_month bằng i
            }
            if (rainfall[i] < min) // nếu rainfall[i] nhỏ hơn min
            {
                min = rainfall[i]; // gán min bằng rainfall[i]
                min_month = i; // gán min_month bằng i
            }
        }
    }
    average = total / 12; // tính lượng mưa trung bình theo công thức average = total / 12
    cout << fixed << setprecision(2); // định dạng số thập phân
    cout << "Tong luong mua trong nam la: " << total << " mm\n"; // in ra man hinh tổng lượng mưa trong năm
    cout << "Luong mua trung binh moi thang la: " << average << " mm\n"; // in ra man hinh lượng mưa trung bình mỗi tháng
    cout << "Thang co luong mua cao nhat la: " << months[max_month] << " voi " << max << " mm\n"; // in ra man hinh tháng có lượng mưa cao nhất và lượng mưa của tháng đó
    cout << "Thang co luong mua thap nhat la: " << months[min_month] << " voi " << min << " mm\n"; // in ra man hinh tháng có lượng mưa thấp nhất và lượng mưa của tháng đó
    return 0;
}