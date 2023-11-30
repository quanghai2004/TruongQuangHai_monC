#include <cmath>
#include <iostream>

class Function {
public:
    virtual double Value(double x) = 0;
    virtual double Derive(double x) = 0;
    virtual ~Function() {}
};

class Sin : public Function {
private:
    static Sin* instance; // Con trỏ duy nhất đến thể hiện của lớp Sin

    // Constructor được đánh dấu là private để ngăn việc tạo đối tượng từ bên ngoài
    Sin() {}

public:
    // Hàm getInstance cung cấp một điểm truy cập toàn cục đến thể hiện duy nhất của lớp Sin
    static Sin* getInstance() {
        if (instance == nullptr) {
            instance = new Sin();
        }
        return instance;
    }

    double Value(double x) override {
        return std::sin(x);
    }

    double Derive(double x) override {
        return std::cos(x);
    }
};

// Khởi tạo con trỏ thể hiện ban đầu là nullptr
Sin* Sin::instance = nullptr;

int main() {
    double x = M_PI / 6; // PI/6
    Sin* s = Sin::getInstance(); // Lấy thể hiện duy nhất của lớp Sin
    std::cout << "sin(x) = " << s->Value(x) << "; sin'(x) = " << s->Derive(x) << std::endl;

    // Không cần giải phóng bộ nhớ vì chúng ta sẽ sử dụng thể hiện này suốt chương trình
    // Nếu cần giải phóng, hãy thêm phương thức phá hủy và gọi nó ở cuối chương trình
    return 0;
}
