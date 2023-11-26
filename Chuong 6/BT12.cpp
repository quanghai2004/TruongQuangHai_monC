#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double fahrenheit; // khai báo biến fahrenheit để lưu trữ nhiệt độ Fahrenheit
    cout << "Celsius\tFahrenheit" << endl; // in ra tiêu đề của bảng
    cout << "------------------" << endl; // in ra dấu gạch ngang để phân cách
    for (int celsius = 0; celsius <= 20; celsius++) // vòng lặp for từ 0 đến 20
    {
        fahrenheit = celsius * 9.0 / 5.0 + 32.0; // chuyển đổi nhiệt độ Celsius sang Fahrenheit theo công thức fahrenheit = celsius * 9.0 / 5.0 + 32.0
        cout << celsius << "\t" << fixed << setprecision(1) << fahrenheit << endl; // in ra nhiệt độ Celsius và Fahrenheit
    }
    return 0;
}
