#include <iostream>
using namespace std;

int main(){
    double KhoiLuong,Trongluong;
    cout << "Khoi luong cua vat: ";
    cin >> KhoiLuong;
    Trongluong = KhoiLuong *9.8;
    cout << "Khoi Luong cua vat bang: " << Trongluong << " Newton" << endl;
    if (Trongluong > 1000)
    {
        cout << "Trong luong cua no qua nang: ";
    }
    else if (Trongluong < 10)
    {
        cout << "Trong luong cua no qua nhe: ";
    }
    else
        cout << "Du trong luong!";
    return 0;

}