#include <iostream>
using namespace std;

int main() {
    int count = 0;

    // Sử dụng vòng lặp để duyệt qua các mã ASCII từ 0 đến 127
    for (int i = 0; i <= 127; i++) {
        // In ra ký tự tương ứng với mã ASCII
        cout << static_cast<char>(i) << " ";

        // Tăng biến đếm
        count++;

        // Nếu đã in đủ 16 ký tự trên dòng, xuống dòng mới
        if (count == 16) {
            cout << endl;
            count = 0;
        }
    }

    return 0;
}
