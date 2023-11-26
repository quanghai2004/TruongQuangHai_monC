#include <iostream>
using namespace std;

int main(){
    
    const double PHI_1 = 1.10;
    const double PhI_2 = 2.20;
    const double PhI_3 = 3.70;
    const double PhI_4 = 4.80;
    const double DON_VI_KHOANG_CACH = 500.0;
    double Miles, Kilogam, cuocPhi;
    cout << "Nhap khoang cach van chuyen (Miles) ";
    cin >> Miles;
    cout << "Nhap Trong luong cu goi hang(Kg)";
    cin >> Kilogam;
    if (Kilogam <= 0 || Kilogam > 20 || Miles < 10 || Kilogam > 3000){
        cout << "Du lieu dau vao khong hop le." << endl;
        return 1;
    }
    if (Kilogam <= 2){
        cuocPhi = (Miles / DON_VI_KHOANG_CACH ) * PHI_1;
    }
    else if (Kilogam > 2 && Kilogam <= 6){
        cuocPhi = (Miles / DON_VI_KHOANG_CACH ) * PhI_2;
    }
    else if (Kilogam > 6 && Kilogam <= 10 ){
        cuocPhi = (Miles / DON_VI_KHOANG_CACH ) * PhI_3;
    }
    else {
        cuocPhi = (Miles / DON_VI_KHOANG_CACH ) * PhI_4;
    }
    cout << "Cuoc phi van chuyen : $" << cuocPhi << endl;
    return 0;
}