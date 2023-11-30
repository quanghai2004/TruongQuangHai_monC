#ifndef _PhanSo_h
#define _PhanSo_h

#include <iostream>
using namespace std;

// Lớp PhanSo đại diện cho một phân số với tử số (tu) và mẫu số (mau).
class PhanSo {
private:
    int tu, mau; // Các biến riêng tư để lưu trữ tử số và mẫu số.

public:
    // Constructor mặc định khởi tạo phân số với tử số là 0 và mẫu số là 1.
    PhanSo() : tu(0), mau(1) {}

    // Constructor có tham số cho phép tạo một phân số với tử số và mẫu số cụ thể.
    // Nếu mẫu số bằng không, nó nên được xử lý phù hợp trong cài đặt.
    PhanSo(const int& tu, const int& mau);
    
    // Nạp chồng toán tử cộng để cộng hai phân số.
    PhanSo operator+(const PhanSo& ps) const;

    // Nạp chồng toán tử cộng và gán để cộng một phân số vào phân số hiện tại.
    PhanSo& operator+=(const PhanSo& ps);

    // Nạp chồng toán tử cộng để cộng một số nguyên vào phân số hiện tại.
    PhanSo operator+(const int& iNum) const;

    // Nạp chồng toán tử tăng tiền tố để tăng giá trị của phân số lên 1.
    PhanSo operator++();

    // Toán tử chuyển đổi để chuyển đổi phân số thành một số nguyên.
    operator int() const;

    // Hàm bạn để cho phép ostream truy cập vào các thành viên riêng tư để xuất ra.
    friend ostream& operator<<(ostream& os, const PhanSo& ps);

    // Destructor để xử lý dọn dẹp nếu cần thiết.
    ~PhanSo();
};

#endif
