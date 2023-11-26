#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
    srand(time(0));
    int so1 = rand() %1000;
    int so2 = rand() %1000;
    double tong = so1 + so2;
    cout << "  " << so1 << endl;
    cout << "+ " << so2 << endl;
    cout << "----" << endl;
    int Traloi;
    cout << "Nhap cau tra loi cua ban: ";
    cin >> Traloi;
    if (tong == Traloi)
    {
        cout << "Cau tra loi cua ban dung!:" << endl;
        cout << "chuc mung ban" << endl;
        cout << "Dap so la: " << tong << endl;
    }
    else
    {
        cout << "CaU tra loi cua ban sai: " << endl;
        cout << "Vui long tinh lai va dap an chinh sat la" << tong << endl;
    }
    return 0;
}