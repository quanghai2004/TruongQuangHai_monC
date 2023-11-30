#include <iostream>
using namespace std;

// Class PhanSo với hai thuộc tính private là tu (tử số) và mau (mẫu số).
class PhanSo {
private:
    int tu;
    int mau;

public:
    // Constructor mặc định khởi tạo phân số là 0/1.
    PhanSo() : tu(0), mau(1) {}

    // Constructor với tham số cho phép khởi tạo phân số với tử số và mẫu số cụ thể.
    // Nếu mẫu số bằng 0, sẽ in ra thông báo lỗi và thiết lập phân số về giá trị mặc định.
    PhanSo(const int &tu, const int &mau) : tu(tu), mau(mau) {
        if (this->mau == 0) {
            cout << "Mau khong duoc bang 0\n";
            this->tu = 0;
            this->mau = 1; 
        }
    }

    // Operator + để cộng hai phân số.
    PhanSo operator+(const PhanSo &ps) {
        PhanSo newPhanSo(this->tu * ps.mau + this->mau * ps.tu, this->mau * ps.mau);
        return newPhanSo;
    }

    // Operator += để cộng một phân số vào phân số hiện tại.
    PhanSo &operator+=(const PhanSo &ps) {
        this->tu = this->tu * ps.mau + this->mau * ps.tu;
        this->mau *= ps.mau;
        return *this;
    }

    // Operator + để cộng một số nguyên vào phân số.
    PhanSo operator+(const int &iNum) {
        PhanSo newPhanSo(this->tu + iNum * this->mau, this->mau);
        return newPhanSo;
    }

    // Operator ++ để tăng giá trị của phân số lên 1 (tử số tăng thêm mẫu số).
    PhanSo &operator++() {
        this->tu += this->mau;
        return *this;
    }

    // Operator chuyển đổi kiểu để chuyển một phân số thành số nguyên (lấy phần nguyên của phân số).
    explicit operator int() const {
        return this->tu / this->mau;
    }

    // Operator << để in phân số ra màn hình.
    friend ostream &operator<<(ostream &os, const PhanSo &ps) {
        os << ps.tu << "/" << ps.mau;
        return os;
    }

    // Destructor không làm gì cả.
    ~PhanSo() 
    {
    }
};

// Hàm main để thực hiện các thao tác trên phân số.
int main() {
    PhanSo a(3, 4), b(2, 5); // Khởi tạo hai phân số a và b.
    PhanSo c = a + b; // Cộng hai phân số a và b.
    cout << "Sum: " << c << endl; // In ra tổng của hai phân số.
    return 0;
}
