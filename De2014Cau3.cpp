#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Phone_Fee{
	private:
		float _time;
	public:
		static long PRICE_PHONE;
		long calFee(){
			return PRICE_PHONE* this->_time;
		}
		// hàm tạo nhận tham số là thời gian gọi
		Phone_Fee(float t) {
			_time = t;
		}
	};
	long Phone_Fee::PRICE_PHONE = 1000;
	
	class Internet_Fee{
	private:
		long _luongTruyCap;
	public:
		static long PRICE_INTERNET;
		long calFee(){
			return PRICE_INTERNET*this->_luongTruyCap;
		}
		// hàm tạo nhận tham số là lượng truy cập
		Internet_Fee(long l) {
			_luongTruyCap = l;
		}
	};
	long Internet_Fee::PRICE_INTERNET = 200;
	
	class Customer{
	private:
		string FullName;
		string ID;
		string Address;
	public:
		void dangKy(){
			cout<<"Nhap ho va ten:";
			getline(cin,this->FullName);
			cin.ignore();
			cin.clear();
			cout<<"Nhap so chung minh:";
			cin>>this->ID;
			cout<<"Nhap dia chi:";
			getline(cin,this->Address);
		}
		// phương thức xuất thông tin khách hàng
		void xuat() {
			cout << "Ho va ten: " << FullName << endl;
			cout << "So chung minh: " << ID << endl;
			cout << "Dia chi: " << Address << endl;
		}
	};
	
	
	class Cost{
	protected:
		Phone_Fee _phone_fee;
	public:
		static long VAT;
		virtual long calFee()=0;
		// hàm tạo nhận tham số là thời gian gọi
		Cost(float t) : _phone_fee(t) {
		}
	};
	long Cost::VAT = 10000;
	
	
	class Basic:public Cost{
	private:
		Internet_Fee _internet_fee;
	public:
		long calFee(){
			return this->_phone_fee.calFee()+this->_internet_fee.calFee() + 0.1 * VAT;
		}
		// hàm tạo nhận hai tham số là thời gian gọi và lượng truy cập
		Basic(float t, long l) : Cost(t), _internet_fee(l) {
		}
	};
	
	
	class Data_Fee:public Cost{
	private:
		long _luongTruyCap;
	public:
		static long NGUONG_MIEN_PHI;
		static long CUOC_THUE_BAO;
		long calFee(){
			long phone_fee=this->_phone_fee.calFee();
			long internet_fee=0;
			if(_luongTruyCap<=NGUONG_MIEN_PHI){
				internet_fee=CUOC_THUE_BAO;
			}
			else {
				Internet_Fee temp(this->_luongTruyCap-NGUONG_MIEN_PHI);
				internet_fee=CUOC_THUE_BAO+temp.calFee();
			}
			return phone_fee+internet_fee;
		}
		// hàm tạo nhận hai tham số là thời gian gọi và lượng truy cập
		Data_Fee(float t, long l) : Cost(t), _luongTruyCap(l) {
		}
	};
	long Data_Fee::NGUONG_MIEN_PHI = 1000;
	long Data_Fee::CUOC_THUE_BAO = 50000;
	
	
	class Data_Fix:public Cost{
	public:
		static long MUC_CO_DINH;
		long calFee(){
			return (float)0.9*(this->_phone_fee.calFee())+ MUC_CO_DINH;
		}
		// hàm tạo nhận tham số là thời gian gọi
		Data_Fix(float t) : Cost(t) {
		}
	};
	long Data_Fix::MUC_CO_DINH = 1000000;
	
	class Contract{
	private:
		Customer _cus;
		Cost* _cost;
	public:
		void dangKy(){
			this->_cus.dangKy();
			cout<<"Chon goi cuoc: 1-Basic,2-Data_Fee, 3-Data_Fix:\n";
			int choice;
			cin>>choice;
			float t; // thời gian gọi
			long l; // lượng truy cập
			cout << "Nhap thoi gian goi (phut): ";
			cin >> t;
			cout << "Nhap luong truy cap (MB): ";
			cin >> l;
			if (choice==1){
				this->_cost=new Basic(t, l);
			}
			else if(choice==2){
				this->_cost=new Data_Fee(t, l);
			}
			else if(choice==3){
				this->_cost=new Data_Fix(t);
			}
			else {
				this->_cost =new Basic(t, l);
			}
		}
		void thongBao(){
			cout<<"Khach hang:\n";
			this->_cus.xuat();
			cout<<"Tien cuoc goi cuoc la:"<<this->_cost->calFee();
			cout<<endl;
		}
		~Contract(){
			if(this->_cost){
				delete this->_cost;
				this->_cost=NULL;
			}
		}
	};
	class QuanLy{
		vector<Contract*> _ds;
	public:
		void dangKy(){
			int n;
			cout<<"Nhap luong hop dong:";
			cin>>n;
			for(int i=0;i<n;i++){
				Contract* c=new Contract();
				c->dangKy();
				this->_ds.push_back(c);
			}
		}
		void thongBao(){
			for(int i=0;i<this->_ds.size();i++){
				this->_ds[i]->thongBao();
			}
		}
		~QuanLy(){
			for(int i=0;i<this->_ds.size();i++){
				if(this->_ds[i]){
					delete this->_ds[i];
					this->_ds[i]=NULL;
				}
			}
			this->_ds.resize(0);
		}
	};
	
	int main() {
		QuanLy ql;
		ql.dangKy();
		ql.thongBao();
		return 0;
	}
