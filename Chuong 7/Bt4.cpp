#include <iostream>
using namespace std;

// khai báo hàm largerThanN với ba đối số: array, size và n
void largerThanN(int array[], int size, int n)
{
    cout << "Cac so trong mang lon hon " << n << " la: "; // in ra man hinh thông báo
    for (int i = 0; i < size; i++) // vòng lặp for từ 0 đến size - 1
    {
        if (array[i] > n) // nếu phần tử thứ i của mảng lớn hơn n
        {
            cout << array[i] << " "; // in ra phần tử thứ i của mảng
        }
    }
    cout << endl; // xuống dòng
}

int main()
{
    int myArray[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; // khai báo và khởi tạo mảng myArray với 10 phần tử
    int myNumber = 5; // khai báo và gán biến myNumber bằng 5
    largerThanN(myArray, 10, myNumber); // gọi hàm largerThanN với đối số là myArray, 10 và myNumber
    return 0;
}