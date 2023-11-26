#include <iostream>
using namespace std;

int main()
{
    int speed, time; // khai báo biến speed và time6
    cout << "Nhap toc do cua phuong tien (mph): "; // in ra man hinh yeu cau nhap toc do
    cin >> speed; // nhap toc do tu ban phim
    if (speed >= 0) // kiem tra dieu kien toc do phai khong am
    {
        cout << "Nhap so gio di chuyen: "; // in ra man hinh yeu cau nhap so gio
        cin >> time; // nhap so gio tu ban phim
        if (time >= 1) // kiem tra dieu kien so gio phai lon hon hoac bang 1
        {
            cout << "Gio\tQuang duong di chuyen (mile)" << endl; // in ra tiêu đề của bảng
            cout << "--------------------------------" << endl; // in ra dấu gạch ngang để phân cách
            for (int hour = 1; hour <= time; hour++) // vòng lặp for từ 1 đến time
            {
                int distance = speed * hour; // tính quãng đường theo công thức distance = speed * hour
                cout << hour << "\t" << distance << endl; // in ra số giờ và quãng đường
            }
        }
        else // nếu số giờ không thỏa mãn điều kiện
        {
            cout << "So gio nhap vao khong hop le. Vui long nhap mot so lon hon hoac bang 1." << endl; // in ra man hinh thong bao loi
        }
    }
    else // nếu tốc độ không thỏa mãn điều kiện
    {
        cout << "Toc do nhap vao khong hop le. Vui long nhap mot so khong am." << endl; // in ra man hinh thong bao loi
    }
    return 0;
}
