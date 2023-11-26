#include <iostream>
using namespace std;

int main()
{
    int count = 0; // khai báo biến đếm số ký tự
    for (int i = 0; i <= 127; i++) // vòng lặp for từ 0 đến 127
    {
        cout << char(i) << " "; // in ra ký tự tương ứng với mã ASCII i
        count++; // tăng biến đếm lên 1
        if (count % 16 == 0) // nếu biến đếm chia hết cho 16
        {
            cout << endl; // xuống dòng mới
        }
    }
    return 0;
}
