#include <cmath>
#include <iostream>

// Lớp trừu tượng Function
class Function {
public:
    virtual double Value(double x) = 0;
    virtual double Derive(double x) = 0;
    virtual ~Function() {}
};

// Lớp Cos kế thừa từ Function và cung cấp cài đặt cụ thể cho hàm cos(x)
class Cos : public Function {
public:
    // Cài đặt phương thức Value để trả về giá trị cos(x)
    double Value(double x) override {
        return std::cos(x);
    }

    // Cài đặt phương thức Derive để trả về giá trị đạo hàm của cos(x), là -sin(x)
    double Derive(double x) override {
        return -std::sin(x);
    }
};

void main() {
    double x = M_PI / 6; // PI/6
    Cos* c = new Cos();
    std::cout << "cos(x) = " << c->Value(x) << "; cos'(x) = " << c->Derive(x) << std::endl;
    return ;
}

