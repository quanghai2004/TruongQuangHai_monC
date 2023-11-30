#include <iostream>
using namespace std;

// Khai báo class cơ sở MayLoc
class MayLoc {
public:
    virtual void nhap() = 0;
    virtual float tinhLuongNuoc() = 0;
    virtual long tinhChiPhi() = 0;
    virtual ~MayLoc() {}
};

// Khai báo class MayLyTam kế thừa từ MayLoc
class MayLyTam : public MayLoc {
private:
    float luongXang;
    const long donGiaThue = 50000;
public:
    void nhap() override {
        cout << "Nhap luong xang cho may ly tam: ";
        cin >> luongXang;
    }
    float tinhLuongNuoc() override {
        // Giả sử công suất lọc cố định là 10m3/giờ
        return 10.0;
    }
    long tinhChiPhi() override {
        return donGiaThue + luongXang * 20000;
    }
};

// Khai báo class MayXucTac kế thừa từ MayLoc
class MayXucTac : public MayLoc {
private:
    float luongHoaChat;
    const long donGiaThue = 80000;
public:
    void nhap() override {
        cout << "Nhap luong hoa chat cho may xuc tac: ";
        cin >> luongHoaChat;
    }
    float tinhLuongNuoc() override {
        // Giả sử công suất lọc thay đổi theo lượng hóa chất
        return luongHoaChat * 2; // Ví dụ: mỗi kg hóa chất lọc được 2m3 nước
    }
    long tinhChiPhi() override {
        return donGiaThue + luongHoaChat * 10000;
    }
};

// Khai báo class DanhSachMayLoc
class DanhSachMayLoc {
private:
    MayLoc** _danhSach;
    int _N;
public:
    DanhSachMayLoc() : _N(0), _danhSach(nullptr) {}
    ~DanhSachMayLoc() {
        for (int i = 0; i < _N; ++i) {
            delete _danhSach[i];
        }
        delete[] _danhSach;
    }
    void nhap() {
        cout << "Nhap so luong may: ";
        cin >> _N;
        _danhSach = new MayLoc*[_N];
        for (int i = 0; i < _N; ++i) {
            int choice = 0;
            cout << "Nhap loai may (1 - may ly tam, 2 - may xuc tac): ";
            cin >> choice;
            if (choice == 1) {
                _danhSach[i] = new MayLyTam();
            } else {
                _danhSach[i] = new MayXucTac();
            }
            _danhSach[i]->nhap();
        }
    }
    float tinhLuongNuoc() {
        float sum = 0.0;
        for (int i = 0; i < _N; ++i) {
            sum += _danhSach[i]->tinhLuongNuoc();
        }
        return sum;
    }
    long tinhChiPhi() {
        long sum = 0;
        for (int i = 0; i < _N; ++i) {
            sum += _danhSach[i]->tinhChiPhi();
        }
        return sum;
    }
};

// Khai báo class Ao
class Ao {
private:
    int _M;
    DanhSachMayLoc _ds;
public:
    Ao() : _M(0) {}
    void nhap() {
        cout << "Nhap luong nuoc trong ao (m3): ";
        cin >> _M;
        _ds.nhap();
    }
    bool AoDuocLocHetKhong() {
        return _M <= _ds.tinhLuongNuoc();
    }
    long tongChiPhi() {
        return _ds.tinhChiPhi();
    }
};

// Hàm main để chạy chương trình
int main() {
    Ao ao;
    ao.nhap();
    if (ao.AoDuocLocHetKhong()) {
        cout << "Ao duoc loc het nuoc." << endl;
    } else {
        cout << "Ao khong duoc loc het nuoc." << endl;
    }
    cout << "Tong chi phi su dung may loc: " << ao.tongChiPhi() << " dong." << endl;
    return 0;
}

