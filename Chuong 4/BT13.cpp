#include <iostream>
using namespace std;

int main(){
    int Cuonsach;
    cout << "Hay nhap so cuon sach ban da mua: ";
    cin >> Cuonsach;

    if(Cuonsach == 1){
        cout << "So diem cua ban duoc tich them la 5";
    }
    else if(Cuonsach == 2){
        cout << "So diem cua ban duoc tich them la 15";
    }
    else if(Cuonsach == 3){
        cout << "So diem cua ban duoc tich them la 30";
    }
    else if (Cuonsach >= 4){
        cout << "So diem cua ban duoc tich them la 60";
    }
    else{
        cout << "ban khong mua sach so diem =0 ";
    }
    return 0;
}