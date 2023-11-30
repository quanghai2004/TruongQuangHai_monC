#include <cmath>
#include <iostream>

// Lớp trừu tượng Function
class Function {
public:
    virtual double Value(double x) = 0;
    virtual double Derive(double x) = 0;
    virtual ~Function() {}
};

// Lớp Sin kế thừa từ Function và cung cấp cài đặt cụ thể cho hàm sin(x)
class Sin : public Function {
public:
    double Value(double x) override {
        return std::sin(x);
    }
    double Derive(double x) override {
        return std::cos(x);
    }
};

// Hàm tính đạo hàm của hàm thương (f/g)'(x) = (f'(x)g(x) - f(x)g'(x)) / g^2(x)
double DeriveQuotient(Function* f, Function* g, double x) {
    if (f != NULL && g != NULL && g->Value(x) != 0) {
        return (f->Derive(x) * g->Value(x) - f->Value(x) * g->Derive(x)) / (g->Value(x) * g->Value(x));
    }
    return 0;
}

// Hàm tính đạo hàm của hàm hợp (f ∘ g)'(x) = f'(g(x)) * g'(x)
double DeriveComposite(Function* f, Function* g, double x) {
    if (f != NULL && g != NULL) {
        return f->Derive(g->Value(x)) * g->Derive(x);
    }
    return 0;
}

// Hàm main để thử nghiệm
int main() {
    double x = M_PI / 6; // PI/6
    Sin* s = new Sin();
    // Thử nghiệm tính đạo hàm của hàm thương và hàm hợp
    double quotientDerivative = DeriveQuotient(s, s, x);
    double compositeDerivative = DeriveComposite(s, s, x);
    std::cout << "sin(x) = " << s->Value(x) << "; sin'(x) = " << s->Derive(x) << std::endl;
    std::cout << "Derivative of the quotient (sin/sin)'(x) = " << quotientDerivative << std::endl;
    std::cout << "Derivative of the composite (sin ∘ sin)'(x) = " << compositeDerivative << std::endl;
    delete s; // Giải phóng bộ nhớ
    return 0;
}
