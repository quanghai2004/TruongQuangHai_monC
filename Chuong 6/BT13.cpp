#include <iostream>
using namespace std;

int main()
{
    int num, max, min; // khai báo biến num, max, min để lưu trữ số nhập vào, số lớn nhất và số nhỏ nhất
    bool first = true; // khai báo biến first để kiểm tra xem đây có phải là số đầu tiên được nhập hay không
    cout << "Nhap mot day cac so nguyen. Nhap -99 de ket thuc.\n"; // in ra man hinh hướng dẫn nhập số
    do // vòng lặp do-while
    {
        cout << "Nhap mot so: "; // in ra man hinh yêu cầu nhập số
        cin >> num; // nhập số từ bàn phím
        if (num != -99) // kiểm tra xem số nhập vào có phải là -99 hay không
        {
            if (first) // nếu đây là số đầu tiên được nhập
            {
                max = min = num; // gán max và min bằng num
                first = false; // đặt first bằng false
            }
            else // nếu đây không phải là số đầu tiên được nhập
            {
                if (num > max) // nếu num lớn hơn max
                {
                    max = num; // gán max bằng num
                }
                if (num < min) // nếu num nhỏ hơn min
                {
                    min = num; // gán min bằng num
                }
            }
        }
    } while (num != -99); // lặp lại cho đến khi số nhập vào là -99
    
    if (!first) // nếu đã có ít nhất một số được nhập
    {
        cout << "So lon nhat trong day la: " << max << endl; // in ra man hinh số lớn nhất trong dãy
        cout << "So nho nhat trong day la: " << min << endl; // in ra man hinh số nhỏ nhất trong dãy
    }
    else // nếu không có số nào được nhập
    {
        cout << "Ban chua nhap bat ky so nao.\n"; // in ra man hinh thông báo
    }
    return 0;
}
