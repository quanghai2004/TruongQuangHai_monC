#include <iostream>
#include <string>
using namespace std;

int main()
{
    string names[5] = {"Nhẹ", "Vừa", "Ngọt", "Cay", "Hăng"}; // khai báo mảng names để lưu trữ tên của năm loại xốt
    int sales[5]; // khai báo mảng sales để lưu trữ số lượng hũ bán được trong tháng qua cho mỗi loại xốt
    int total = 0; // khai báo biến total để lưu trữ tổng số lượng hũ bán được
    int max, min; // khai báo biến max và min để lưu trữ số lượng hũ bán được cao nhất và thấp nhất
    int max_index, min_index; // khai báo biến max_index và min_index để lưu trữ chỉ số của loại xốt có số lượng hũ bán được cao nhất và thấp nhất
    for (int i = 0; i < 5; i++) // vòng lặp for từ 0 đến 4
    {
        cout << "Nhap so luong hu ban duoc cua loai xot " << names[i] << ": "; // in ra man hinh yêu cầu nhập số lượng hũ bán được của từng loại xốt
        cin >> sales[i]; // nhập số lượng hũ bán được từ bàn phím
        while (sales[i] < 0) // vòng lặp while cho đến khi số lượng hũ bán được là số không âm
        {
            cout << "So luong hu ban duoc nhap vao khong hop le. Vui long nhap mot so khong am.\n"; // in ra man hinh thông báo lỗi
            cout << "Nhap lai so luong hu ban duoc cua loai xot " << names[i] << ": "; // in ra man hinh yêu cầu nhập lại số lượng hũ bán được của từng loại xốt
            cin >> sales[i]; // nhập lại số lượng hũ bán được từ bàn phím
        }
        total += sales[i]; // cộng dồn số lượng hũ bán được vào tổng số lượng hũ bán được
        if (i == 0) // nếu đây là loại xốt đầu tiên được nhập
        {
            max = min = sales[i]; // gán max và min bằng sales[i]
            max_index = min_index = i; // gán max_index và min_index bằng i
        }
        else // nếu đây không phải là loại xốt đầu tiên được nhập
        {
            if (sales[i] > max) // nếu sales[i] lớn hơn max
            {
                max = sales[i]; // gán max bằng sales[i]
                max_index = i; // gán max_index bằng i
            }
            if (sales[i] < min) // nếu sales[i] nhỏ hơn min
            {
                min = sales[i]; // gán min bằng sales[i]
                min_index = i; // gán min_index bằng i
            }
        }
    }
    cout << "Bao cao doanh so cua cac loai xot:\n"; // in ra man hinh tiêu đề của báo cáo
    for (int i = 0; i < 5; i++) // vòng lặp for từ 0 đến 4
    {
        cout << "Loai xot " << names[i] << ": " << sales[i] << " hu\n"; // in ra man hinh tên và số lượng hũ bán được của từng loại xốt
    }
    cout << "Tong so luong hu ban duoc: " << total << " hu\n"; // in ra man hinh tổng số lượng hũ bán được
    cout << "Loai xot co so luong hu ban duoc cao nhat la: " << names[max_index] << " voi " << max << " hu\n"; // in ra man hinh loại xốt có số lượng hũ bán được cao nhất và số lượng hũ bán được của loại đó
    cout << "Loai xot co so luong hu ban duoc thap nhat la: " << names[min_index] << " voi " << min << " hu\n"; // in ra man hinh loại xốt có số lượng hũ bán được thấp nhất và số lượng hũ bán được của loại đó
    return 0;
}