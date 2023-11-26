#include <iostream>
#include <string>
using namespace std;

int main()
{
    int num; // khai báo biến num để lưu trữ số học sinh
    string name, first, last; // khai báo các biến name, first, last để lưu trữ tên của học sinh, học sinh đầu và cuối hàng
    cout << "Nhap so hoc sinh trong lop: "; // in ra man hình yêu cầu nhập số học sinh
    cin >> num; // nhập số học sinh từ bàn phím
    if (num >= 1 && num <= 25) // kiểm tra điều kiện số học sinh phải từ 1 đến 25
    {
        cin.ignore(); // bỏ qua ký tự xuống dòng sau số học sinh
        for (int i = 1; i <= num; i++) // vòng lặp for từ 1 đến num
        {
            cout << "Nhap ten cua hoc sinh thu " << i << ": "; // in ra man hình yêu cầu nhập tên của từng học sinh
            getline(cin, name); // nhập tên của học sinh từ bàn phím
            if (i == 1) // nếu đây là học sinh đầu tiên được nhập
            {
                first = last = name; // gán first và last bằng name
            }
            else // nếu đây không phải là học sinh đầu tiên được nhập
            {
                if (name < first) // nếu name nhỏ hơn first theo thứ tự từ điển
                {
                    first = name; // gán first bằng name
                }
                if (name > last) // nếu name lớn hơn last theo thứ tự từ điển
                {
                    last = name; // gán last bằng name
                }
            }
        }
        cout << "Hoc sinh dung dau hang la: " << first << endl; // in ra man hình tên của học sinh đầu hàng
        cout << "Hoc sinh dung cuoi hang la: " << last << endl; // in ra man hình tên của học sinh cuối hàng
    }
    else // nếu số học sinh không thỏa mãn điều kiện
    {
        cout << "So hoc sinh nhap vao khong hop le. Vui long nhap mot so tu 1 den 25." << endl; // in ra man hình thông báo lỗi
    }
    return 0;
}
