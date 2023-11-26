#include <iostream>
using namespace std;

int main() {
    int num;
    int sum = 0;

    // Yêu cầu người dùng nhập một số nguyên dương
    cout << "Nhap mot so nguyen duong: ";
    cin >> num;

    // Kiểm tra nếu số nhập vào là số nguyên dương
    if (num <= 0) {
        cout << "Loi: Vui long nhap mot so nguyen duong." << endl;
    } else {
        // Tính tổng các số từ 1 đến num
        for (int i = 1; i <= num; i++) {
            sum += i;
        }

        // In ra tổng
        cout << "Tong cac so tu 1 den " << num << " la: " << sum << endl;
    }

    return 0;
}
