#include <iostream>
using namespace std;

// Mã nguồn minh họa 
// Lớp cơ sở
class HinhDang {
public:
    virtual void ve() const {
        cout << "Ve hinh dang." << endl;
    }
};

// Lớp dẫn xuất 1
class HinhTron : public HinhDang {
public:
    void ve() const override {
        cout << "Ve hinh tron." << endl;
    }
};

// Lớp dẫn xuất 2
class HinhVuong : public HinhDang {
public:
    void ve() const override {
        cout << "Ve hinh vuong." << endl;
    }
};

// Hàm để minh họa đa hình
void veHinh(const HinhDang& h) {
    h.ve(); // Gọi phương thức ve() tương ứng với loại hình
}

int main() {
    HinhTron tron;
    HinhVuong vuong;

    veHinh(tron);  // In ra: Ve hinh tron.
    veHinh(vuong); // In ra: Ve hinh vuong.

    return 0;
}
