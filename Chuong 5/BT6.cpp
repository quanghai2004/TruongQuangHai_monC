#include <iostream>
using namespace std;

int main() {
    int speed, hours;

    cout << "Nhap toc do cua phuong tien (mph): ";
    cin >> speed;

    cout << "Nhap so gio da di chuyen : ";
    cin >> hours;

    if (speed < 0 || hours < 1) {
        cout << "Du lieu khong hop le. Vui long nhap lai toc do va so gio di chuyen." << endl;
    } else {
        cout << "Gio Khoang cach da di qua (miles)\n";
        cout << "---------------------------------\n";

        for (int hour = 1; hour <= hours; hour++) {
            int distance = speed * hour;
            cout << hour << "      " << distance << endl;
        }
    }

    return 0;
}
