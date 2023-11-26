#include <iostream>
using namespace std;

int main(){
    double Chieudai1, chieurong1, Chieudai2, chieurong2;
    cout << "Nhap chieu dai hinh chu nhat: ";
    cin >> Chieudai1;
    cout << "Nhap chieu rong hinh chu nhat: ";
    cin >> chieurong1;
    cout << "Nhap chieu dai hinh chu nhat: ";
    cin >> Chieudai2;
    cout << "Nhap chieu rong hinh chu nhat: ";
    cin >> chieurong2;
    double DienTich1 = Chieudai1 * chieurong1;
    double DienTich2 = Chieudai2 * chieurong2;
    if (DienTich1 == DienTich2){
        cout << "Dien tich hai hinh chu nhat bang nhau!";
    }
    else if (DienTich1 > DienTich2){
        cout << "Dien tich hinh chu nhat1 lon hon hinh chu nhat 2!";
    }
    else
        cout << "Dien tich hinh chu nhat2 lon hon hinh chu nhat 1!";
}