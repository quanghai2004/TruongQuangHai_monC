#include <iostream>
#include <string>
using namespace std;

int main(){
    string tenVDV;
    double chieuCao1, chieuCao2, chieuCao3;
    string ngayXayDung1, ngayXayDung2, ngayXayDung3;
    cout << "Nhap ten cua van dong vien: "; 
    cin >> tenVDV;
    cout << "Nhap chieu cao cua thah tich tot nhat: ";
    cin >> chieuCao1;
    cout << "Nhap ngay xay dung thanh tich tot nhat: ";
    cin >> ngayXayDung1;
    cout << "Nhap chieu cao cua thah tich thu hai: ";
    cin >> chieuCao2;
    cout << "Nhap ngay xay dung thanh tich thu hai ";
    cin >> ngayXayDung2;
    cout << "Nhap chieu cao cua thah tich thu ba";
    cin >> chieuCao3;
    cout << "Nhap ngay xay dung thanh tich thu ba";
    cin >> ngayXayDung3;
    if (chieuCao1 < 2.0 || chieuCao1 > 5.0 || chieuCao2 < 2.0 || chieuCao2 > 5.0 || chieuCao3 < 2.0 || chieuCao3 > 5.0) {
        cout << "chieu cao phai nam trong khoang tu 2.0 den 5.0 met" << endl;
        return 1;
    double maxChieuCao = max(max(chieuCao1, chieuCao2), chieuCao3);
    double minChieuCao = min(min(chieuCao1, chieuCao2), chieuCao3);
    double giuaChieuCao = (chieuCao1 + chieuCao2 + chieuCao3) - maxChieuCao - minChieuCao;
    string first, second, third;
    double firstChieuCao, secondChieuCao, thirdChieuCao;
    string firstNgayXayDung, secondNgayXayDung, thirdNgayXayDung;
    if (chieuCao1 == maxChieuCao) {
        first = tenVDV;
        firstChieuCao = chieuCao1;
        firstNgayXayDung = ngayXayDung1;
        if (chieuCao2 == giuaChieuCao) {
            second = tenVDV;
            secondChieuCao = chieuCao2;
            secondNgayXayDung = ngayXayDung2;
            third = tenVDV;
            thirdChieuCao = chieuCao3;
            thirdNgayXayDung = ngayXayDung3;
        } else {
            second = tenVDV;
            secondChieuCao = chieuCao3;
            secondNgayXayDung = ngayXayDung3;
            third = tenVDV;
            thirdChieuCao = chieuCao2;
            thirdNgayXayDung = ngayXayDung2;
        }
    } else if (chieuCao2 == maxChieuCao) {
        first = tenVDV;
        firstChieuCao = chieuCao2;
        firstNgayXayDung = ngayXayDung2;
        if (chieuCao1 == giuaChieuCao) {
            second = tenVDV;
            secondChieuCao = chieuCao1;
            secondNgayXayDung = ngayXayDung1;
            third = tenVDV;
            thirdChieuCao = chieuCao3;
            thirdNgayXayDung = ngayXayDung3;
        } else {
            second = tenVDV;
            secondChieuCao = chieuCao3;
            secondNgayXayDung = ngayXayDung3;
            third = tenVDV;
            thirdChieuCao = chieuCao1;
            thirdNgayXayDung = ngayXayDung1;
        }
    } else {
        first = tenVDV;
        firstChieuCao = chieuCao3;
        firstNgayXayDung = ngayXayDung3;
        if (chieuCao1 == giuaChieuCao) {
            second = tenVDV;
            secondChieuCao = chieuCao1;
            secondNgayXayDung = ngayXayDung1;
            third = tenVDV;
            thirdChieuCao = chieuCao2;
            thirdNgayXayDung = ngayXayDung2;
        } else {
            second = tenVDV;
            secondChieuCao = chieuCao2;
            secondNgayXayDung = ngayXayDung2;
            third = tenVDV;
            thirdChieuCao = chieuCao1;
            thirdNgayXayDung = ngayXayDung1;
        }
    }
    cout << "Van dong vien xuat sac nhat: " << first << " voi chieu cao" << firstChieuCao << "met, ngay xay dung " << firstNgayXayDung << endl;
    cout << "Van dong vien thu hai: " << second << " voi chieu cao" << secondChieuCao << "met, ngay xay dung " << secondNgayXayDung << endl;
    cout << "van dong vien thu ba: " << third << " voi chieu cao" << thirdChieuCao  << "met, ngay xay dung " << thirdNgayXayDung << endl;
    return 0;

    }
}
