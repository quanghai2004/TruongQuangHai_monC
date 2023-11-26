#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    int number, guess, count = 0; // khai báo biến number, guess, count để lưu trữ số ngẫu nhiên, số đoán và số lần đoán
    bool done = false; // khai báo biến done để kiểm tra xem người dùng đã đoán đúng hay chưa
    srand(time(0)); // khởi tạo bộ sinh số ngẫu nhiên
    number = rand() % 100 + 1; // sinh ra một số ngẫu nhiên từ 1 đến 100
    cout << "Chao mung ban den voi tro choi doan so ngau nhien!\n"; // in ra man hinh lời chào
    cout << "Ban hay doan mot so tu 1 den 100.\n"; // in ra man hinh hướng dẫn chơi
    while (!done) // vòng lặp while cho đến khi done là true
    {
        cout << "Nhap so ban doan: "; // in ra man hinh yêu cầu nhập số đoán
        cin >> guess; // nhập số đoán từ bàn phím
        count++; // tăng biến đếm lên 1
        if (guess == number) // nếu số đoán bằng số ngẫu nhiên
        {
            cout << "Chuc mung ban da doan dung!\n"; // in ra man hinh thông báo chiến thắng
            cout << "Ban da doan duoc sau " << count << " lan.\n"; // in ra man hinh số lần đoán của người dùng
            done = true; // đặt done bằng true để kết thúc vòng lặp
        }
        else if (guess > number) // nếu số đoán lớn hơn số ngẫu nhiên
        {
            cout << "So ban doan qua cao, hay thu lai.\n"; // in ra man hinh gợi ý
        }
        else // nếu số đoán nhỏ hơn số ngẫu nhiên
        {
            cout << "So ban doan qua thap, hay thu lai.\n"; // in ra man hinh gợi ý
        }
    }
    return 0;
}
