#include <iostream>
using namespace std;

int main() {
    const double RISE_RATE = 1.5; // Tốc độ tăng mực nước biển (milimét/năm)
    int years = 25; // Số năm
    double totalRise = 0.0; // Tổng tăng mực nước biển (milimét)

    cout << "Năm\tTăng mực nước (mm)" << endl;
    cout << "-------------------------" << endl;

    for (int year = 1; year <= years; year++) {
        totalRise += RISE_RATE;
        cout << year << "\t" << totalRise << endl;
    }

    return 0;
}
