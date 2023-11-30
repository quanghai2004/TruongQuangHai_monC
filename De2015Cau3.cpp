#include <iostream>
#include <vector>
using namespace std;

// khai báo lớp Sap để biểu diễn các thông tin chung của một sạp
class Sap {
	protected:
		int _stt; // số thứ tự của sạp
		float _dt; // diện tích của sạp
		long _doanhThu; // doanh thu của sạp
	public:
		static long DON_GIA_THUE; // đơn giá thuê sạp
		// phương thức ảo tính tiền thuê sạp
		virtual long tinhTienThue() {
			return DON_GIA_THUE * this->_dt;
		}
		// phương thức ảo tính thuế doanh thu
		virtual long tinhThueDoanhThu() = 0;
		// phương thức ảo tính tổng tiền phải trả
		virtual long tinhTongTien() = 0;
		// phương thức ảo nhập thông tin sạp
		virtual void nhapThongTin() {
			cin >> this->_stt;
			cin >> this->_dt;
			cin >> this->_doanhThu;
		}
		// hàm hủy ảo
		virtual ~Sap() {
			this->_stt = 0;
			this->_dt = 0;
			this->_doanhThu = 0;
		}
};

// khởi tạo đơn giá thuê sạp
long Sap::DON_GIA_THUE = 40000000;

// khai báo lớp SapThucPham kế thừa từ lớp Sap
class SapThucPham : public Sap {
	private:
		long _phiDongLanh; // phí dùng điện đông lạnh
	public:
		static float PHAN_TRAM_THUE_SAP_THUC_PHAM; // phần trăm thuế sạp thực phẩm
		// cài đặt lại phương thức ảo tính thuế doanh thu
		long tinhThueDoanhThu() {
			return (float) PHAN_TRAM_THUE_SAP_THUC_PHAM * this->_doanhThu;
		}
		// cài đặt lại phương thức ảo tính tổng tiền
		long tinhTongTien() {
			return this->_phiDongLanh + this->tinhThueDoanhThu() + this->tinhTienThue();
		}
		// cài đặt lại phương thức ảo nhập thông tin
		virtual void nhapThongTin() {
			Sap::nhapThongTin(); // gọi phương thức nhập thông tin của lớp cha
			cin >> _phiDongLanh; // nhập phí dùng điện đông lạnh
		}
};

// khởi tạo phần trăm thuế sạp thực phẩm
float SapThucPham::PHAN_TRAM_THUE_SAP_THUC_PHAM = 0.05;

// khai báo lớp SapQuanAo kế thừa từ lớp Sap
class SapQuanAo : public Sap {
	public:
		static float PHAN_TRAM_THUE_SAP_QUAN_AO; // phần trăm thuế sạp quần áo
		// cài đặt lại phương thức ảo tính thuế doanh thu
		long tinhThueDoanhThu() {
			return (float) PHAN_TRAM_THUE_SAP_QUAN_AO * this->_doanhThu;
		}
		// cài đặt lại phương thức ảo tính tổng tiền
		long tinhTongTien() {
			return this->tinhThueDoanhThu() + this->tinhTienThue();
		}
};

// khởi tạo phần trăm thuế sạp quần áo
float SapQuanAo::PHAN_TRAM_THUE_SAP_QUAN_AO = 0.1;

// khai báo lớp SapTrangSuc kế thừa từ lớp Sap
class SapTrangSuc : public Sap {
	public:
		static long GIOI_HAN_DOANH_THU; // giới hạn doanh thu để áp dụng thuế
		static float PHAN_TRAM_THUE_DUOI_GION_HAN; // phần trăm thuế dưới giới hạn
		static float PHAN_TRAM_THUE_TREN_GION_HAN; // phần trăm thuế trên giới hạn
		// cài đặt lại phương thức ảo tính thuế doanh thu
		long tinhThueDoanhThu() {
			if (this->_doanhThu < GIOI_HAN_DOANH_THU) {
				return PHAN_TRAM_THUE_DUOI_GION_HAN * this->_doanhThu;
			}
			else {
				return PHAN_TRAM_THUE_TREN_GION_HAN * this->_doanhThu;
			}
		}
		// cài đặt lại phương thức ảo tính tổng tiền
		long tinhTongTien() {
			return this->tinhThueDoanhThu() + this->tinhTienThue();
		}
};

// khởi tạo các giá trị liên quan đến thuế sạp trang sức
long SapTrangSuc::GIOI_HAN_DOANH_THU = 100000000;
float SapTrangSuc::PHAN_TRAM_THUE_DUOI_GION_HAN = 0.2;
float SapTrangSuc::PHAN_TRAM_THUE_TREN_GION_HAN = 0.3;

// khai báo lớp QuanLyDanhSach để quản lý danh sách các sạp
class QuanLyDanhSach {
	private:
		vector<Sap*> _ds; // một vector lưu trữ các con trỏ tới các sạp
	public:
		void nhapThongTin() {
			cout << "Nhap so luong sap duoc thue: ";
			int n;
			cin >> n;
			for (int i = 0; i < n; i++) {
				int choice;
				cout << "1-Sap Thuc Pham, 2-Sap Quan Ao, 3-Sap Trang Suc\n";
				cin >> choice;
				Sap* p = NULL; // một con trỏ tới sạp
				if (choice == 1) {
					p = new SapThucPham(); // cấp phát động cho sạp thực phẩm
				}
				else if (choice == 2) {
					p = new SapQuanAo(); // cấp phát động cho sạp quần áo
				}
				else if (choice == 3) {
					p = new SapTrangSuc(); // cấp phát động cho sạp trang sức
				}
				else {
					cout << "Nhap sai! Nhap lai!\n";
					i--;
					continue;
				}
				this->_ds.push_back(p); // thêm con trỏ p vào vector
				this->_ds[i]->nhapThongTin(); // nhập thông tin cho sạp
			}
		}
		long tinhTongTien() {
			long sum = 0; // biến lưu trữ tổng tiền
			for (int i = 0; i < this->_ds.size(); i++) {
				sum += this->_ds[i]->tinhTongTien(); // cộng dồn tiền của từng sạp
			}
			return sum; // trả về tổng tiền
		}
};
