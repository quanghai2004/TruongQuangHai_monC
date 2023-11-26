#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    string filename; // khai báo biến filename để lưu trữ tên file
    double number; // khai báo biến number để lưu trữ số đọc được từ file
    double array[100]; // khai báo mảng array để lưu trữ các số đọc được từ file
    int count = 0; // khai báo biến count để lưu trữ số lượng các số đọc được từ file
    double min, max, total = 0, average; // khai báo biến min, max, total và average để lưu trữ số nhỏ nhất, lớn nhất, tổng và trung bình của các số trong mảng
    ifstream inputFile; // khai báo biến inputFile để đọc dữ liệu từ file
    cout << "Nhap ten file: "; // in ra man hinh yêu cầu nhập tên file
    cin >> filename; // nhập tên file từ bàn phím
    inputFile.open(filename); // mở file với tên đã nhập
    if (inputFile) // kiểm tra xem file có được mở thành công hay không
    {
        while (inputFile >> number) // vòng lặp while cho đến khi không thể đọc được số từ file
        {
            array[count] = number; // gán phần tử thứ count của mảng array bằng number
            count++; // tăng biến đếm lên 1
        }
        inputFile.close(); // đóng file
        if (count > 0) // kiểm tra xem có đọc được số nào từ file hay không
        {
            min = max = array[0]; // gán min và max bằng phần tử đầu tiên của mảng array
            for (int i = 0; i < count; i++) // vòng lặp for từ 0 đến count - 1
            {
                total += array[i]; // cộng dồn phần tử thứ i của mảng array vào total
                if (array[i] < min) // nếu phần tử thứ i của mảng array nhỏ hơn min
                {
                    min = array[i]; // gán min bằng array[i]
                }
                if (array[i] > max) // nếu phần tử thứ i của mảng array lớn hơn max
                {
                    max = array[i]; // gán max bằng array[i]
                }
            }
            average = total / count; // tính trung bình theo công thức average = total / count
            cout << "So nho nhat trong mang la: " << min << endl; // in ra man hinh số nhỏ nhất trong mảng
            cout << "So lon nhat trong mang la: " << max << endl; // in ra man hinh số lớn nhất trong mảng
            cout << "Tong cua cac so trong mang la: " << total << endl; // in ra man hinh tổng của các số trong mảng
            cout << "Trung binh cua cac so trong mang la: " << average << endl; // in ra man hinh trung bình của các số trong mảng
        }
        else // nếu không đọc được số nào từ file
        {
            cout << "File khong chua so nao.\n"; // in ra man hinh thông báo lỗi
        }
    }
    else // nếu file không được mở thành công
    {
        cout << "Khong the mo file " << filename << ".\n"; // in ra man hinh thông báo lỗi
    }
    return 0;
}