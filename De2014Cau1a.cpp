#include <iostream>
#include <cstring>
using namespace std;

class Bike {
private:
    char* brand; // hiệu xe
public:
    Bike() {
        const char s[5] = "Bike";
        this->brand = new char[5];
        strcpy(this->brand, s);
    }

    Bike(char s[]) {
        this->brand = new char[strlen(s) + 1];
        strcpy(this->brand, s);
    }

    virtual ~Bike() {
        if (this->brand) {
            delete[] this->brand;
        }
    }

    virtual void move(int t1) {
        cout << brand << ":" << t1 * 12 << " ";
    }
};

class EBike : public Bike {
public:
    EBike() : Bike("EBike") {}

    void move(int t2) override {
        Bike::move(t2 * 2);
    }
};

void display(Bike& a, EBike& b) {
    a.move(2);
    b.move(2);
}

int main() {
    EBike b1, b2;
    display(b1, b2);
    return 0;
}
