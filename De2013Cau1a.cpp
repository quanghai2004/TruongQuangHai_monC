#include <iostream>
using namespace std;

// Lớp đối tượng SoPhuc để biểu diễn kiểu số có dạng a + b√7
class SoPhuc {
private:
    int a, b; // Hai thành phần dữ liệu của số phức

public:
    // Constructor mặc định
    SoPhuc() {
        a = 0;
        b = 0;
    }

    // Constructor với tham số
    SoPhuc(int a, int b) {
        this->a = a;
        this->b = b;
    }

    // Hàm nhập giá trị cho số phức
    void nhap() {
        cout << "Nhap lan luot a va b: ";
        cin >> a >> b;
    }

    // Hàm xuất giá trị của số phức
    void xuat() {
        cout << a;
        if (b > 0) {
            cout << " + " << b << "√7";
        } else if (b < 0) {
            cout << " - " << -b << "√7";
        }
        cout << endl;
    }

    // Hàm cộng hai số phức
    SoPhuc cong(SoPhuc sp) {
        SoPhuc kq;
        kq.a = a + sp.a;
        kq.b = b + sp.b;
        return kq;
    }

    // Hàm trừ hai số phức
    SoPhuc tru(SoPhuc sp) {
        SoPhuc kq;
        kq.a = a - sp.a;
        kq.b = b - sp.b;
        return kq;
    }

    // Hàm đổi dấu số phức
    SoPhuc doiDau() {
        SoPhuc kq;
        kq.a = -a;
        kq.b = -b;
        return kq;
    }

    // Hàm nhân hai số phức
    SoPhuc nhan(SoPhuc sp) {
        SoPhuc kq;
        kq.a = a * sp.a + 7 * b * sp.b;
        kq.b = a * sp.b + b * sp.a;
        return kq;
    }
};
