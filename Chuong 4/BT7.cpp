#include <iostream>
using namespace std;

int main(){
    int Sogiay;
    cout << "Nhap so giay: ";
    cin >> Sogiay;
    int Sophut = Sogiay/ 60;
    int Sogio = Sogiay/3600;
    int Motngay = Sogiay / 86400;
    if (Motngay > 0) {
        cout << "so ngay: " << Motngay <<endl;
    }
    if (Sogio > 0) {
        cout << "So gio: " << Sogio << endl;
    }
    if (Sophut > 0) {
        cout << "So phut: " << Sophut << endl;
    }
    cout << "So giay: " << Sogiay % 60 << endl;

}