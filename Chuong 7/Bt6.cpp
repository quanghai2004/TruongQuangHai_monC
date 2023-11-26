#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    char weather[3][30]; // khai báo mảng hai chiều weather để lưu trữ điều kiện thời tiết của ba tháng trong 30 ngày
    int rainy[3] = {0, 0, 0}; // khai báo mảng rainy để lưu trữ số ngày mưa của ba tháng
    int cloudy[3] = {0, 0, 0}; // khai báo mảng cloudy để lưu trữ số ngày nhiều mây của ba tháng
    int sunny[3] = {0, 0, 0}; // khai báo mảng sunny để lưu trữ số ngày nắng của ba tháng
    int total_rainy = 0; // khai báo biến total_rainy để lưu trữ tổng số ngày mưa của cả ba tháng
    int total_cloudy = 0; // khai báo biến total_cloudy để lưu trữ tổng số ngày nhiều mây của cả ba tháng
    int total_sunny = 0; // khai báo biến total_sunny để lưu trữ tổng số ngày nắng của cả ba tháng
    int max_rainy = 0; // khai báo biến max_rainy để lưu trữ số ngày mưa cao nhất của ba tháng
    int max_rainy_month; // khai báo biến max_rainy_month để lưu trữ chỉ số của tháng có số ngày mưa cao nhất
    string months[3] = {"Thang 6", "Thang 7", "Thang 8"}; // khai báo mảng months để lưu trữ tên của các tháng trong mùa hè
    ifstream inputFile; // khai báo biến inputFile để đọc dữ liệu từ file
    inputFile.open("RainOrShine.txt"); // mở file RainOrShine.txt
    if (inputFile) // kiểm tra xem file có được mở thành công hay không
    {
        for (int i = 0; i < 3; i++) // vòng lặp for từ 0 đến 2
        {
            for (int j = 0; j < 30; j++) // vòng lặp for từ 0 đến 29
            {
                inputFile >> weather[i][j]; // đọc dữ liệu từ file vào phần tử thứ i, j của mảng weather
                switch (weather[i][j]) // kiểm tra giá trị của phần tử thứ i, j của mảng weather
                {
                    case 'R': // nếu là 'R'
                        rainy[i]++; // tăng biến đếm số ngày mưa của tháng i lên 1
                        break; // thoát khỏi switch
                    case 'C': // nếu là 'C'
                        cloudy[i]++; // tăng biến đếm số ngày nhiều mây của tháng i lên 1
                        break; // thoát khỏi switch
                    case 'S': // nếu là 'S'
                        sunny[i]++; // tăng biến đếm số ngày nắng của tháng i lên 1
                        break; // thoát khỏi switch
                }
            }
        }
        inputFile.close(); // đóng file
        for (int i = 0; i < 3; i++) // vòng lặp for từ 0 đến 2
        {
            total_rainy += rainy[i]; // cộng dồn số ngày mưa của tháng i vào tổng số ngày mưa
            total_cloudy += cloudy[i]; // cộng dồn số ngày nhiều mây của tháng i vào tổng số ngày nhiều mây
            total_sunny += sunny[i]; // cộng dồn số ngày nắng của tháng i vào tổng số ngày nắng
            if (rainy[i] > max_rainy) // nếu số ngày mưa của tháng i lớn hơn max_rainy
            {
                max_rainy = rainy[i]; // gán max_rainy bằng rainy[i]
                max_rainy_month = i; // gán max_rainy_month bằng i
            }
        }
        cout << "Bao cao dieu kien thoi tiet trong ba thang mua he:\n"; // in ra man hinh tiêu đề của báo cáo
        for (int i = 0; i < 3; i++) // vòng lặp for từ 0 đến 2
        {
            cout << months[i] << ":\n"; // in ra man hinh tên của tháng i
            cout << "So ngay mua: " << rainy[i] << endl; // in ra man hinh số ngày mưa của tháng i
            cout << "So ngay nhieu may: " << cloudy[i] << endl; // in ra man hinh số ngày nhiều mây của tháng i
            cout << "So ngay nang: " << sunny[i] << endl; // in ra man hinh số ngày nắng của tháng i
        }
        cout << "Tong cong:\n"; // in ra man hinh tiêu đề của tổng kết
        cout << "So ngay mua: " << total_rainy << endl; // in ra man hinh tổng số ngày mưa
        cout << "So ngay nhieu may: " << total_cloudy << endl; // in ra man hinh tổng số ngày nhiều mây
        cout << "So ngay nang: " << total_sunny << endl; // in ra man hinh tổng số ngày nắng
        cout << "Thang co so ngay mua cao nhat la: " << months[max_rainy_month] << " voi " << max_rainy << " ngay\n"; // in ra man hinh tháng có số ngày mưa cao nhất và số ngày mưa của tháng đó
    }
    else // nếu file không được mở thành công
    {
        cout << "Khong the mo file RainOrShine.txt.\n"; // in ra man hinh thông báo lỗi
    }
    return 0;
}
