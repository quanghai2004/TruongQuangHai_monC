#include <iostream>
using namespace std;

// Lớp trừu tượng HinhHoc
class HinhHoc {
public:
    // Constructor
    HinhHoc() {}

    // Phương thức trừu tượng để tính diện tích
    virtual float tinhDienTich() = 0;

    // Phương thức trừu tượng để tính chu vi
    virtual float tinhChuVi() = 0;

    // Destructor
    virtual ~HinhHoc() {}
};

// Lớp con HinhChuNhat kế thừa từ lớp trừu tượng HinhHoc
class HinhChuNhat : public HinhHoc {
private:
    float chieuDai;
    float chieuRong;

public:
    // Constructor với tham số
    HinhChuNhat(float dai, float rong) : chieuDai(dai), chieuRong(rong) {}

    // Cài đặt phương thức tinhDienTich
    float tinhDienTich() override {
        return chieuDai * chieuRong;
    }

    // Cài đặt phương thức tinhChuVi
    float tinhChuVi() override {
        return 2 * (chieuDai + chieuRong);
    }
};

int main() {
    // Không thể tạo đối tượng từ lớp trừu tượng HinhHoc
    // HinhHoc h; // Lỗi: không thể tạo đối tượng

    // Tạo đối tượng từ lớp con HinhChuNhat
    HinhChuNhat hcn(10.0, 5.0);
    cout << "Dien tich Hinh Chu Nhat: " << hcn.tinhDienTich() << endl;
    cout << "Chu vi Hinh Chu Nhat: " << hcn.tinhChuVi() << endl;

    return 0;
}
