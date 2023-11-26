#include <iostream>
using namespace std;

int main(){
    int Thang,Nam;
    
    cout << "Nhap thang: ";
    cin >> Thang;
    cout << "Nhap so nam: ";
    cin >> Nam;
    switch (Thang){
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            cout << "Thang nay co 31 ngay!";
        break;
        case 4:
        case 6:
        case 9:
        case 11:
            cout << "Thang nay co 30 ngay!";
        break;
        case 2:
            if (Nam % 400 == 0)
                cout << "Nam nay nam nhuan co 29 ngay";
            else if (Nam % 400 == 0 && Nam % 100 != 0)
                cout << "Nam nay khong la nam nhuan co 28 ngay";
            else
                cout << "Nam nay khong la nam nhuan co 28 ngay";

        }
        return 0;
}   