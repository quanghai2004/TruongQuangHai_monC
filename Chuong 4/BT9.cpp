#include <iostream>
using namespace std;

int main(){
    int xu,niken,Dongxu ,sododal;
    double tongGiaTri;
    cout << "Nhap so xu: ";
    cin >> xu;
    cout << "Nhap so niken: ";
    cin >> niken;
    cout << "Nhap so dong xu: ";
    cin >> Dongxu;
    cout << "Nhap so dong tien: ";
    cin >> sododal;

    tongGiaTri = xu * 0.01 + niken * 0.05 + Dongxu * 0.1 + sododal;
    if (tongGiaTri == 1){
        cout << "chuc mung! ban da kiem duoc mot dola" << endl;
    }
    else if (tongGiaTri > 1){
        cout << "Ban da kiem nhieu hon mot dola" << endl;
    }else{
        cout << "Ban da kiem it hon mot dola"<< endl;
    }
    return 0;
}