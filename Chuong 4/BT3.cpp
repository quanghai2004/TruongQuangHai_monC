#include <iostream>
using namespace std;

int main(){
    int Day,Thang,Nam;
    cout << "Nhay so ngay: ";
    cin >> Day;
    cout << "Nhap so Thang: ";
    cin >> Thang;
    cout << "Nhap so Nam: ";
    cin >> Nam;
    if (Nam == Thang*Day){
        cout <<"ngay ki dieu";
    }
    else{
        cout << "Ngay Thang Nam khong dep";
    }
    return 0;
}