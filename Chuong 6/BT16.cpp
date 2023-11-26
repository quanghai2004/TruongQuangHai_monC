#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double rate, balance, interest; // khai báo biến rate, balance, interest để lưu trữ lãi suất hàng năm, số dư ban đầu và lãi suất hàng tháng
    int months; // khai báo biến months để lưu trữ số tháng
    double deposit, withdrawal; // khai báo biến deposit, withdrawal để lưu trữ số tiền gửi và rút trong mỗi tháng
    double total_deposit = 0, total_withdrawal = 0, total_interest = 0; // khai báo biến total_deposit, total_withdrawal, total_interest để lưu trữ tổng số tiền gửi, rút và lãi suất
    cout << "Nhap lai suat hang nam (%): "; // in ra man hinh yêu cầu nhập lãi suất hàng năm
    cin >> rate; // nhập lãi suất từ bàn phím
    cout << "Nhap so du ban dau: "; // in ra man hinh yêu cầu nhập số dư ban đầu
    cin >> balance; // nhập số dư từ bàn phím
    cout << "Nhap so thang: "; // in ra man hinh yêu cầu nhập số tháng
    cin >> months; // nhập số tháng từ bàn phím
    for (int i = 1; i <= months; i++) // vòng lặp for từ 1 đến months
    {
        cout << "Nhap so tien gui vao tai khoan trong thang " << i << ": "; // in ra man hinh yêu cầu nhập số tiền gửi trong mỗi tháng
        cin >> deposit; // nhập số tiền gửi từ bàn phím
        if (deposit >= 0) // kiểm tra xem số tiền gửi có phải là số không âm hay không
        {
            balance += deposit; // cộng dồn số tiền gửi vào số dư
            total_deposit += deposit; // cộng dồn số tiền gửi vào tổng số tiền gửi
            cout << "Nhap so tien rut tu tai khoan trong thang " << i << ": "; // in ra man hinh yêu cầu nhập số tiền rút trong mỗi tháng
            cin >> withdrawal; // nhập số tiền rút từ bàn phím
            if (withdrawal >= 0) // kiểm tra xem số tiền rút có phải là số không âm hay không
            {
                balance -= withdrawal; // trừ đi số tiền rút khỏi số dư
                total_withdrawal += withdrawal; // cộng dồn số tiền rút vào tổng số tiền rút
                interest = balance * rate / 1200; // tính lãi suất hàng tháng theo công thức interest = balance * rate / 1200
                balance += interest; // cộng dồn lãi suất vào số dư
                total_interest += interest; // cộng dồn lãi suất vào tổng lãi suất
            }
            else // nếu số tiền rút không thỏa mãn điều kiện
            {
                cout << "So tien rut nhap vao khong hop le. Vui long nhap mot so khong am.\n"; // in ra man hinh thông báo lỗi
                i--; // giảm biến đếm của vòng lặp đi 1 để nhập lại
            }
        }
        else // nếu số tiền gửi không thỏa mãn điều kiện
        {
            cout << "So tien gui nhap vao khong hop le. Vui long nhap mot so khong am.\n"; // in ra man hinh thông báo lỗi
            i--; // giảm biến đếm của vòng lặp đi 1 để nhập lại
        }
    }
    cout << fixed << setprecision(2); // định dạng số thập phân
    cout << "So du cuoi cung cua tai khoan la: " << balance << " dong\n"; // in ra man hinh số dư cuối cùng của tài khoản
    cout << "Tong so tien gui vao tai khoan la: " << total_deposit << " dong\n"; // in ra man hinh tổng số tiền gửi vào tài khoản
    cout << "Tong so tien rut tu tai khoan la: " << total_withdrawal << " dong\n"; // in ra man hinh tổng số tiền rút từ tài khoản
    cout << "Tong lai suat kiem duoc la: " << total_interest << " dong\n"; // in ra man hinh tổng lãi suất kiếm được
    return 0;
}
