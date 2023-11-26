#include <iostream>
using namespace std;

int main()
{
    int array[10]; // khai báo mảng array để lưu trữ 10 giá trị
    int max, min; // khai báo biến max và min để lưu trữ giá trị lớn nhất và nhỏ nhất
    for (int i = 0; i < 10; i++) // vòng lặp for từ 0 đến 96
    {
        cout << "Nhap gia tri thu " << i + 1 << ": "; // in ra man hinh yêu cầu nhập giá trị thứ i + 1
        cin >> array[i]; // nhập giá trị từ bàn phím
        if (i == 0) // nếu đây là giá trị đầu tiên được nhập
        {
            max = min = array[i]; // gán max và min bằng array[i]
        }
        else // nếu đây không phải là giá trị đầu tiên được nhập
        {
            if (array[i] > max) // nếu array[i] lớn hơn max
            {
                max = array[i]; // gán max bằng array[i]
            }
            if (array[i] < min) // nếu array[i] nhỏ hơn min
            {
                min = array[i]; // gán min bằng array[i]
            }
        }
    }
    cout << "Gia tri lon nhat trong mang la: " << max << endl; // in ra man hinh giá trị lớn nhất trong mảng
    cout << "Gia tri nho nhat trong mang la: " << min << endl; // in ra man hinh giá trị nhỏ nhất trong mảng
    return 0;
}