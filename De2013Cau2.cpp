#include <iostream>
using namespace std;

// Lớp cơ sở Base
class Base {
public:
    Base() {
        cout << "Base constructor" << endl;
    }

    // Hàm hủy không ảo
    ~Base() {
        cout << "Base destructor" << endl;
    }
};

// Lớp dẫn xuất Derived kế thừa từ Base
class Derived : public Base {
private:
    int* m_array; // Một mảng động được cấp phát bởi lớp Derived
public:
    Derived(int length) {
        cout << "Derived constructor" << endl;
        m_array = new int[length]; // Cấp phát bộ nhớ động cho mảng
    }

    // Hàm hủy
    ~Derived() {
        cout << "Derived destructor" << endl;
        delete[] m_array; // Giải phóng bộ nhớ động cho mảng
    }
};

int main() {
    Base* base = new Derived(5); // Tạo một đối tượng của lớp Derived thông qua một con trỏ của lớp Base
    delete base; // Xóa đối tượng thông qua con trỏ
    return 0;
}
