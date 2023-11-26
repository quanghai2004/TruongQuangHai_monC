#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    const double INITIAL_FEE = 2500.0; // Mức phí ban đầu (năm 1)
    const double INCREASE_RATE = 0.04; // Tỷ lệ tăng mức phí hàng năm
    int years = 6; // Số năm dự kiến tăng mức phí
    double membershipFee = INITIAL_FEE;

    cout << "Năm\tMức phí hội viên" << endl;
    cout << "------------------------" << endl;

    for (int year = 1; year <= years; year++) {
        cout << year << "\t$" << fixed << setprecision(2) << membershipFee << endl;
        membershipFee += membershipFee * INCREASE_RATE; // Tính mức phí cho năm tiếp theo
    }

    return 0;
}
