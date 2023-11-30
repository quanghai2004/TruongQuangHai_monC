#include<iostream>
using namespace std;

      // Class cơ sở MayLoc chứa thông tin về thời gian hoạt động của máy lọc
class MayLoc {
protected:
    float m_tgian; // Biến lưu trữ thời gian hoạt động của máy

public:
    // Phương thức thiết lập thời gian hoạt động
    void setTgian(float tgian) {
        m_tgian = tgian;
    }

    // Phương thức lấy thời gian hoạt động
    float getThoiGian() {
        return this->m_tgian;
    }
};

// Class MayXucTac kế thừa từ MayLoc và thêm các thuộc tính và phương thức cụ thể
class MayXucTac : public MayLoc {
private:
    int _luongHoaChat; // Lượng hóa chất sử dụng
    float _congSuatLoc; // Công suất lọc của máy

public:
    // Phương thức nhập thông tin cho máy xúc tác
    void nhap(){
        float thoiGian=0;
        cout<<"Nhap thoi gian hoat dong:";
        cin>>thoiGian;
        this->setTgian(thoiGian); // Thiết lập thời gian hoạt động

        cout<<"Nhap Luong hoa chat:";
        cin>>this->_luongHoaChat; // Nhập lượng hóa chất

        cout<<"Nhap cong suat loc cua may:";
        cin>>this->_congSuatLoc; // Nhập công suất lọc
    }

    // Phương thức tính công suất lọc thực tế dựa trên thời gian và lượng hóa chất
    float CongSuatThucTe(){
        if (this->getThoiGian()>=10){
            return this->_congSuatLoc * (this->_luongHoaChat/100)/(this->getThoiGian()/10);
        }
        else {
            return this->_congSuatLoc * (this->_luongHoaChat/100);
        }
    }

    // Biến static lưu trữ đơn giá hóa chất và đơn giá thuê máy
    static long DON_GIA_HOA_CHAT;
    static long DON_GIA_THUE;

    // Phương thức tính chi phí thuê máy
    long tinhChoPhiThueMoiMay(){
        return DON_GIA_THUE * this->getThoiGian();
    }

    // Phương thức tính tổng chi phí sử dụng máy
    long tinhChiPhi(){
        return tinhChoPhiThueMoiMay() + this->_luongHoaChat*10000;
    }

    // Phương thức tính lượng nước lọc được
    float tinhLuongNuoc(){
        return this->getThoiGian()*this->CongSuatThucTe();
    }
};

// Khởi tạo giá trị cho các biến static
long MayXucTac::DON_GIA_HOA_CHAT=10000;
long MayXucTac::DON_GIA_THUE=80000;

// Hàm main để chạy chương trình
int main() {
    MayXucTac may1;
    may1.nhap(); // Nhập thông tin cho máy
    cout << "Luong nuoc loc duoc: " << may1.tinhLuongNuoc() << endl; // In ra lượng nước lọc được
    cout << "Chi phi su dung may: " << may1.tinhChiPhi() << endl; // In ra chi phí sử dụng máy
    return 0;
}
