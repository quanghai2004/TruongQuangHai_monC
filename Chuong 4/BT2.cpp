#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Nhap so n: ";
    cin >> n;
    switch (n) {
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        case 10:
            cout << "ban da nhap dung so! " << endl;
        break;
        default:
            cout << "ban da nhap sai so! " << endl;
    }
    return 0;
}