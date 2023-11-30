#include <iostream>
using namespace std;

// khai báo lớp Singleton
class Singleton {
  private:
    // làm cho các hàm tạo là riêng tư
    Singleton() {
      cout << "Constructor called." << endl;
    }
    Singleton(const Singleton& obj) = delete; // xóa hàm tạo sao chép
    Singleton& operator=(const Singleton& obj) = delete; // xóa toán tử gán
    // tạo một biến thành viên tĩnh là một con trỏ tới một thể hiện của lớp Singleton
    static Singleton* instance;
  public:
    // tạo một phương thức tĩnh trả về một con trỏ tới một thể hiện của lớp Singleton
    static Singleton* getInstance() {
      // kiểm tra nếu biến instance đã được gán cho một thể hiện nào chưa
      if (instance == NULL) {
        // nếu chưa, tạo một thể hiện mới và gán cho biến instance
        instance = new Singleton();
      }
      // trả về biến instance
      return instance;
    }
};

// khởi tạo biến instance với NULL
Singleton* Singleton::instance = NULL;

int main() {
  // tạo một con trỏ tới một thể hiện của lớp Singleton
  Singleton* s1 = Singleton::getInstance();
  // in ra địa chỉ của con trỏ s1
  cout << "Address of s1: " << s1 << endl;
  // tạo một con trỏ khác tới một thể hiện của lớp Singleton
  Singleton* s2 = Singleton::getInstance();
  // in ra địa chỉ của con trỏ s2
  cout << "Address of s2: " << s2 << endl;
  // kiểm tra nếu hai con trỏ trỏ tới cùng một thể hiện
  if (s1 == s2) {
    cout << "s1 and s2 point to the same instance." << endl;
  }
  return 0;
}
