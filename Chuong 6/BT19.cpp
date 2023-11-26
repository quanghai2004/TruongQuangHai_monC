#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double budget, expense, total = 0; // khai báo biến budget, expense, total để lưu trữ số tiền dự toán, chi tiêu và tổng chi tiêu
    char choice; // khai báo biến choice để lưu trữ lựa chọn của người dùng
    cout << "Nhap so tien du toan cho mot thang: "; // in ra man hinh yêu cầu nhập số tiền dự toán
    cin >> budget; // nhập số tiền dự toán từ bàn phím
    do // vòng lặp do-while
    {
        cout << "Nhap so tien chi tieu: "; // in ra man hinh yêu cầu nhập số tiền chi tiêu
        cin >> expense; // nhập số tiền chi tiêu từ bàn phím
        total += expense; // cộng dồn số tiền chi tiêu vào tổng chi tiêu
        cout << "Ban co muon nhap them so tien chi tieu khong? (y/n): "; // in ra man hinh yêu cầu nhập lựa chọn
        cin >> choice; // nhập lựa chọn từ bàn phím
    } while (choice == 'y' || choice == 'Y'); // lặp lại cho đến khi lựa chọn là n hoặc N
    
    cout << fixed << setprecision(2); // định dạng số thập phân
    cout << "So tien du toan cua ban la: " << budget << " dong\n"; // in ra man hinh số tiền dự toán của người dùng
    cout << "Tong so tien chi tieu cua ban la: " << total << " dong\n"; // in ra man hinh tổng số tiền chi tiêu của người dùng
    if (total > budget) // nếu tổng chi tiêu lớn hơn số tiền dự toán
    {
        cout << "Ban da vuot qua so tien du toan " << total - budget << " dong\n"; // in ra man hinh số tiền vượt quá
    }
    else if (total < budget) // nếu tổng chi tiêu nhỏ hơn số tiền dự toán
    {
        cout << "Ban da tiet kiem duoc " << budget - total << " dong\n"; // in ra man hinh số tiền tiết kiệm được
    }
    else // nếu tổng chi tiêu bằng số tiền dự toán
    {
        cout << "Ban da su dung het so tien du toan\n"; // in ra man hinh thông báo sử dụng hết số tiền dự toán
    }
    return 0;
}
