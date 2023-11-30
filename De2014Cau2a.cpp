#include <iostream>
#include <string>
using namespace std;

class IFace {
public:
    virtual void show() = 0;
    virtual IFace* clone() = 0;
    virtual ~IFace() {}
};

class Face : public IFace {
private:
    string shape;
protected:
    string getShape() { return shape; }
public:
    Face(string sh) : shape(sh) {}
    virtual void show() {
        cout << "Shape: " << shape << endl;
    }
    virtual Face* clone() {
        return new Face(*this);
    }
};

class EyedFace : public Face {
private:
    int eyes;
public:
    EyedFace(string sh, int e) : Face(sh), eyes(e) {}
    virtual void show() {
        cout << "Shape: " << getShape() << ", Eyes: " << eyes << endl;
    }
    virtual EyedFace* clone() {
        return new EyedFace(*this);
    }
};

void display (IFace& a, IFace& b) { 
    a.show(); 
    b.show();
}

int main() { 
    EyedFace b1("Round", 2), b2("Square", 3); 
    display(b1, b2); 
    return 0;
}
