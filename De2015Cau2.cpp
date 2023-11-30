#include <iostream>
#include <string>
using namespace std;

// khai báo lớp BigInterger để biểu diễn số nguyên lớn
class BigInterger{
		string _bigNum; // thuộc tính để lưu số nguyên lớn dưới dạng chuỗi
	public:
		// hàm tạo mặc định, khởi tạo chuỗi rỗng
		BigInterger(){
			this->_bigNum="";
		}
		// hàm tạo có tham số, nhận một chuỗi làm đối số
		BigInterger(string s){
			// loại bỏ các khoảng trắng trong chuỗi
			for(int i=0;i<s.size();i++){
				if(s[i]==' '){
					for(int j=i;j<s.size();j++){
						s[i]=s[i+1];
					}
					i--;
					s[s.size()-1]=0;
				}
			}
			// gán chuỗi đã xử lý cho thuộc tính _bigNum
			this->_bigNum=s;
		}
		// khai báo hàm bạn (friend) để định nghĩa toán tử nhập >> cho lớp BigInterger
		friend istream& operator>>(istream& is, BigInterger& bigNum){
			// nhập một dòng từ luồng nhập is và gán cho thuộc tính _bigNum của đối tượng bigNum
			getline(is,bigNum._bigNum);
			// trả về luồng nhập is
			return is;
		}
		// định nghĩa toán tử so sánh bằng == cho lớp BigInterger
		bool operator==(const BigInterger& bNum){
			// so sánh thuộc tính _bigNum của đối tượng hiện tại (this) và đối tượng bNum
			if(this->_bigNum==bNum._bigNum){
				// nếu bằng nhau, trả về true
				return true;
			}
			else {
				// nếu khác nhau, trả về false
				return false;
			}
		}
	};
