#include <iostream>
#include <string>
using namespace std;

class IFace {
public:
  virtual void show() = 0;
  virtual IFace* clone() = 0;
  virtual ~IFace() {
  }
};

class Face : public IFace {
private:
  string shape;
public:
  Face(string sh) : shape(sh) {
  }
  // cài đặt lại phương thức ảo clone()
  virtual IFace* clone() {
    return new Face(shape); // tạo một đối tượng mới với cùng shape
  }
  // cài đặt lại phương thức ảo show()
  virtual void show() {
    cout << "Shape: " << shape << endl;
  }
  // định nghĩa lại phương thức getShape()
  string getShape() {
    return shape;
  }
};

void testFace(IFace* fc) {
  IFace* a[3] = { fc, fc->clone(), fc->clone() };
  for(int i=0; i<3; i++) {
    a[i]->show();
  }
  cout << "The same 3 lines?" << endl;
}

int main() {
  // truyền vào tham số cho hàm tạo của lớp Face
  Face fc("Circle");
  Face fc1("Rectangle");
  // ép kiểu địa chỉ của đối tượng fc1 thành kiểu IFace*
  testFace((IFace*)&fc1);
  return 0;
}
