#include <iostream>
using namespace std;

int main() {
    int numberOfFloors;
    int totalRooms = 0;
    int totalOccupiedRooms = 0;

    cout << "Nhap so tang cua khach san: ";
    cin >> numberOfFloors;

    while (numberOfFloors < 1) {
        cout << "So tan khong hop le. Vui long nhap lai: ";
        cin >> numberOfFloors;
    }

    for (int floor = 1; floor <= numberOfFloors; floor++) {
        int roomsOnFloor;
        int occupiedRooms;

        cout << "Nhap so phong tren tang " << floor << ": ";
        cin >> roomsOnFloor;

        while (roomsOnFloor < 10) {
            cout << "So phong tren tang it nhat la 10. Vui long nhap lai: ";
            cin >> roomsOnFloor;
        }

        cout << "Nhap so phong da duoc su dung tren tang " << floor << ": ";
        cin >> occupiedRooms;

        totalRooms += roomsOnFloor;
        totalOccupiedRooms += occupiedRooms;
    }

    double occupancyRate = static_cast<double>(totalOccupiedRooms) / totalRooms * 100.0;

    cout << "Tong so phong trong khach san: " << totalRooms << endl;
    cout << "So phong da duoc su dung: " << totalOccupiedRooms << endl;
    cout << "So phong con trong: " << totalRooms - totalOccupiedRooms << endl;
    cout << "Ty le phan tram so pham da su dung: " << occupancyRate << "%" << endl;

    return 0;
}
