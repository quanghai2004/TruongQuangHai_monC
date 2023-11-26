#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int floors, rooms, occupied, total_rooms = 0, total_occupied = 0; // khai báo các biến để lưu trữ số tầng, số phòng, số phòng đã được thuê, tổng số phòng và tổng số phòng đã được thuê
    double rate; // khai báo biến để lưu trữ tỷ lệ lấp đầy
    cout << "Nhap so tang cua khach san: "; // in ra man hinh yeu cau nhap so tang
    cin >> floors; // nhap so tang tu ban phim
    if (floors >= 1) // kiem tra dieu kien so tang phai lon hon hoac bang 1
    {
        for (int i = 1; i <= floors; i++) // vòng lặp for từ 1 đến floors
        {
            cout << "Nhap so phong tren tang " << i << ": "; // in ra man hinh yeu cau nhap so phong tren tung tang
            cin >> rooms; // nhap so phong tu ban phim
            if (rooms >= 10) // kiem tra dieu kien so phong phai lon hon hoac bang 10
            {
                cout << "Nhap so phong da duoc thue tren tang " << i << ": "; // in ra man hinh yeu cau nhap so phong da duoc thue tren tung tang
                cin >> occupied; // nhap so phong da duoc thue tu ban phim
                total_rooms += rooms; // cộng dồn số phòng vào tổng số phòng
                total_occupied += occupied; // cộng dồn số phòng đã được thuê vào tổng số phòng đã được thuê
            }
            else // nếu số phòng không thỏa mãn điều kiện
            {
                cout << "So phong nhap vao khong hop le. Vui long nhap mot so lon hon hoac bang 10." << endl; // in ra man hinh thong bao loi
                i--; // giảm biến đếm của vòng lặp đi 1 để nhập lại
            }
        }
        rate = static_cast<double>(total_occupied) / total_rooms; // tính tỷ lệ lấp đầy bằng cách chia tổng số phòng đã được thuê cho tổng số phòng và ép kiểu sang kiểu double
        cout << "Khach san co tong cong " << total_rooms << " phong.\n"; // in ra man hinh tong so phong cua khach san
        cout << "Trong do co " << total_occupied << " phong da duoc thue.\n"; // in ra man hinh tong so phong da duoc thue cua khach san
        cout << "Co " << total_rooms - total_occupied << " phong con trong.\n"; // in ra man hinh tong so phong con trong cua khach san
        cout << fixed << setprecision(2); // định dạng số thập phân
        cout << "Ty le lap day cua khach san la: " << rate * 100 << "%\n"; // in ra man hinh ty le lap day cua khach san theo %
    }
    else // nếu số tầng không thỏa mãn điều kiện
    {
        cout << "So tang nhap vao khong hop le. Vui long nhap mot so lon hon hoac bang 1." << endl; // in ra man hinh thong bao loi
    }
    return 0;
}
