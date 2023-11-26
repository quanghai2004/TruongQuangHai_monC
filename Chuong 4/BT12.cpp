#include <iostream>
using namespace std;

int main(){
    const double goiPhanMen = 99;
    double TongChiPhi;
    int soLuongban;
    cout << "Nhap so luong da ban:";
    cin >> soLuongban;
    if (soLuongban <= 0){
        cout << "so luong khong hop len, vui long nhap lai!";
        return 1;
    }
    if (10>=soLuongban && soLuongban <= 19)
    {   
        TongChiPhi = soLuongban * goiPhanMen *0.8;
    }
    else if (20>=soLuongban && soLuongban <= 49){
        TongChiPhi = soLuongban * goiPhanMen *0.7;
    }
    else if (50>=soLuongban && soLuongban <= 99){
        TongChiPhi = soLuongban * goiPhanMen *0.6;
    }
    else{
        TongChiPhi = soLuongban * goiPhanMen *0.5;
    }
    cout << "Tong chi phi:$ " << TongChiPhi << endl;
    return 0;
}