#include <iostream>
#include <cstdlib> // Để sử dụng hàm rand và srand
#include <ctime>   // Để sử dụng hàm time
using namespace std;

int main() {
    srand(static_cast<unsigned>(time(0))); // Khởi tạo seed ngẫu nhiên

    int choice;
    int num1, num2;
    int correctAnswer;
    int userAnswer;

    do {
        cout << "Chuong trinh Math Tutor\n";
        cout << "-------------------------\n";
        cout << "Chọn phép tính hoặc nhập 5 để thoát:\n";
        cout << "1. Phep Cong\n";
        cout << "2. Phep Tru\n";
        cout << "3. Phep Nhan\n";
        cout << "4. Phep Chia\n";
        cout << "5. Out\n";
        cout << "Lua Chon cua ban: ";
        cin >> choice;

        if (choice == 5) {
            cout << "Bye!\n";
            break;
        }

        if (choice < 1 || choice > 4) {
            cout << "Lua chon khong hop le.Vui long chon lai\n";
            continue;
        }

        num1 = rand() % 100; // Số ngẫu nhiên từ 0 đến 99
        num2 = rand() % 100; // Số ngẫu nhiên từ 0 đến 99

        switch (choice) {
            case 1:
                correctAnswer = num1 + num2;
                cout << "Bai toan cong: " << num1 << " + " << num2 << " = ?\n";
                break;
            case 2:
                correctAnswer = num1 - num2;
                cout << "Bai Toan Tru: " << num1 << " - " << num2 << " = ?\n";
                break;
            case 3:
                correctAnswer = num1 * num2;
                cout << "Bai Toan Nhan: " << num1 << " * " << num2 << " = ?\n";
                break;
            case 4:
                if (num2 == 0) {
                    cout << "so chia khong the la 0. Vui long chon lai.\n";
                    continue;
                }
                correctAnswer = num1 / num2;
                cout << "Bai toan chia: " << num1 << " / " << num2 << " = ?\n";
                break;
        }

        cout << "Nhap cau hoi cua ban: ";
        cin >> userAnswer;

        if (userAnswer == correctAnswer) {
            cout << "Chuc mung! Ban da tra loi dung.\n";
        } else {
            cout << "Sai roi, dap an la : " << correctAnswer << endl;
        }

        cout << "-------------------------\n";
    } while (true);

    return 0;
}
