#include <iostream>
using namespace std;

int main() {
    int numYears;

    cout << "Nhap so nam: ";
    cin >> numYears;

    while (numYears < 1) {
        cout << "So nam khong hop le. Vui long nhap lai: ";
        cin >> numYears;
    }

    double totalRainfall = 0.0;
    int totalMonths = numYears * 12;

    for (int year = 1; year <= numYears; year++) {
        for (int month = 1; month <= 12; month++) {
            double monthlyRainfall;

            cout << "Nhap so luong mua (inch) Cho thang " << month << " nam " << year << ": ";
            cin >> monthlyRainfall;

            while (monthlyRainfall < 0) {
                cout << "Luong mua khong the la so am. Vui long nhap lai: ";
                cin >> monthlyRainfall;
            }

            totalRainfall += monthlyRainfall;
        }
    }

    double averageRainfall = totalRainfall / totalMonths;

    cout << "Tong so thang: " << totalMonths << endl;
    cout << "Tong luong mua (inch): " << totalRainfall << endl;
    cout << "Luong mua trung binh moi thang: " << averageRainfall << " inch" << endl;

    return 0;
}
