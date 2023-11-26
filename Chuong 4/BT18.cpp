#include <iostream>
using namespace std;

int main(){
    double caloThucPham, gramChatBeo;
    cout << "Nhap tong so calo trong thuc pham: ";
    cin >> caloThucPham;
    cout << "Nhap so gam chat beo trong thuc pham: ";
    cin >> gramChatBeo;
    if ( caloThucPham < 0 || gramChatBeo < 0 || gramChatBeo * 9 > caloThucPham ){
        cout << "Luong calo hoac gram chat beo da duoc nhap khong chinh xac."<< endl;
        return 1;
    }
    double phanTramCaloChatBeo = (gramChatBeo * 9 / caloThucPham) * 100;
    cout << "Phan tram calo den tu chat beo: " << phanTramCaloChatBeo << "% " << endl;
    if (phanTramCaloChatBeo < 30){
        cout << "Thuc Pham co it chat beo" << endl;
    }
    return 0;
}