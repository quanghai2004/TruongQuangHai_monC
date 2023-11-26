#include <iostream>
using namespace std;

int main(){
    string mau1, mau2;
    cout << "Nhap ten mau co ban 1 (do, xanh hoac vang):";
    cin >> mau1;
    cout << "Nhap te mau co ban 2 (do, xanh hoac vang):";
    cin >> mau2;
    if ((mau1 == "do" || mau1 == "xanh" || mau1 == "vang") && (mau2 == "do" || mau2 == "xanh" || mau2 == "vang")) {
            if ((mau1 == "đỏ" && mau2 == "xanh") || (mau1 == "xanh" && mau2 == "đỏ")) {
                cout << "Mau thu cap : tim" << endl;
        }   else if (( mau1 == "do" && mau2 == "vang") || (mau1 == "vang" && mau2 == "do")){
            cout << "Mau thu cap :  cam" << endl;
        }   else if ((mau1 == "xanh" && mau2 == "vang") || (mau1 == "vang" && mau2 == "mau")){
            cout << "Mau thu cap : xanh la cay" << endl;
        }   else {
            cout << "Khong co ket qua tron mau." << endl;
        }
    } else {
        cout << "Loi: vui long nhap ten mau co ban (do, xanh hoac vang)";
    }
    return 0;
}