
#include <iostream>
#include <string>
using namespace std;

int main(){
    string tenvdv1,tenvdv2,tenvdv3;
    double thoiGianvdv1,thoiGianvdv2,thoiGianvdv3;

    cout << "Nhap ten cua van dong vien1\n";
    cin >>tenvdv1;
    cout << "Nhap thoi gian cua van dong vien1: \n";
    cin >> thoiGianvdv1;
    cout << "Nhap ten cua van dong vien2\n";
    cin >> tenvdv2;
    cout << "Nhap thoi gian cua van dong vien2\n ";
    cin >> thoiGianvdv2;
    cout << "Nhap ten cua van dong vien3\n";
    cin >> tenvdv3;
    cout << "Nhap thoi gian cua van dong vien2\n ";
    cin >> thoiGianvdv3;
    if (thoiGianvdv1 <= 0 || thoiGianvdv2 <= 0 || thoiGianvdv3 <= 0){
        cout << "thoi gian phai la so duong " << endl;
        return 1;
    }
    string VDV_venhat,VDV_venhi,VDV_veba;
    double thoiGianVNB, thoiGianVN, thoiGianVTB;
    if (thoiGianvdv1 <= thoiGianvdv2 && thoiGianvdv1 <= thoiGianvdv3){
        VDV_venhat = tenvdv1;
        thoiGianVNB = thoiGianvdv1;
        if (thoiGianvdv2 <= thoiGianvdv3){
            VDV_venhi = tenvdv2;
            VDV_veba = tenvdv3;
            thoiGianVN = thoiGianvdv2;
            thoiGianVTB = thoiGianvdv3;
        } else {
            VDV_venhi = tenvdv3;
            VDV_veba = tenvdv2;
            thoiGianVN = thoiGianvdv3;
            thoiGianVTB =thoiGianvdv2;
        }
    }
    else if( thoiGianvdv2 <= thoiGianvdv1 && thoiGianvdv2 <= thoiGianvdv3){
        VDV_venhat = tenvdv2;
        thoiGianVNB = thoiGianvdv2;
        if (thoiGianvdv1 <= thoiGianvdv3){
            VDV_venhi = tenvdv1;
            VDV_veba = tenvdv3;
            thoiGianVN = thoiGianvdv1;
            thoiGianVTB = thoiGianvdv3;
        } else {
            VDV_venhi = tenvdv3;
            VDV_veba = tenvdv1;
            thoiGianVN = thoiGianvdv3;
            thoiGianVTB = thoiGianvdv1;
        } 
    }
    else {
            VDV_venhat = tenvdv3;
            thoiGianVNB = thoiGianvdv3;
            if (thoiGianvdv1 <= thoiGianvdv2){
                VDV_venhi = tenvdv1;
                VDV_veba = tenvdv2;
                thoiGianVN = thoiGianvdv1;
                thoiGianVTB = thoiGianvdv2;
            } else{
                VDV_venhi = tenvdv2;
                VDV_veba = tenvdv1;
                thoiGianVN = thoiGianvdv2;
                thoiGianVTB = thoiGianvdv1;
            }
        }
        cout << "Van dong vien ve thu nhat: " << VDV_venhat << " voi thoi gian " << thoiGianVNB /60 << "phut" << endl;
        cout << "Van dong vien ve nhi: " << VDV_venhi << " voi thoi gian " << thoiGianVN / 60 << "Phut " << endl;
        cout << "Van dong vien ve ba: " << VDV_veba << " voi thoi gian " << thoiGianVTB / 60 << "Phut" << endl;
        return 0;
}