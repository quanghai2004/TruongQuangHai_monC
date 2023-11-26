#include <iostream>
using namespace std;

int main(){
    const double PHI_HANG_THANG = 10;
    const double PHI_SAU_DIEU_KIEN = 15;
    const double PHI_1 = 0.10;
    const double PHI_2 = 0.08;
    const double PHI_3 = 0.06;
    const double PHI_4 = 0.04;
    double soDuTaiKhoan;
    int soSecDADUNG;
    double phiDichVu;

    cout << "Nhap so du tai khoan cua ban: ";
    cin >> soDuTaiKhoan;
    cout << "Nhap so to sec ban da dung: ";
    cin >> soSecDADUNG;
    if (soSecDADUNG < 0 || soDuTaiKhoan < 0)
    {
        cout << "Vui long nhap lai khong the la gia tri am";
        return 1;
    }
    phiDichVu += PHI_HANG_THANG;
    if (soSecDADUNG < 20){
        phiDichVu += soSecDADUNG * PHI_1;
    }
    else if (soSecDADUNG >= 20 && soSecDADUNG <= 39){
        phiDichVu += soSecDADUNG * PHI_2;
    }
    else if (soSecDADUNG >= 40 && soSecDADUNG <= 59){
        phiDichVu += soSecDADUNG * PHI_3;
    }
    else {
        phiDichVu += soSecDADUNG * PHI_4;
    }
    if (soDuTaiKhoan < 400)
    {
        phiDichVu += PHI_SAU_DIEU_KIEN;
    }
    cout << "Phi dich vu hang thang: $" << phiDichVu << endl;
    return 0;
}