#include <iostream>
using namespace std;

int main()
{
    int n, sum = 0; // khai báo biến n và sum
    cout << "Nhap mot so nguyen duong: "; // in ra man hinh yeu cau nhap so
    cin >> n; // nhap so tu ban phim
    if (n > 0) // kiem tra dieu kien so nhap vao phai lon hon 0
    {
        for (int i = 1; i <= n; i++) // vong lap for tu 1 den n
        {
            sum += i; // cong don gia tri cua i vao sum
        }
        cout << "Tong cac so tu 1 den " << n << " la: " << sum << endl; // in ra man hinh ket qua
    }
    else // neu so nhap vao khong thoa man dieu kien
    {
        cout << "So nhap vao khong hop le. Vui long nhap mot so nguyen duong." << endl; // in ra man hinh thong bao loi
    }
    return 0;
}
