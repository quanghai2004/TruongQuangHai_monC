#include <iostream>
#include <iomanip>
using namespace std;

int main() 
{
    const int HIGH_SCORE = 9.5; // Điểm cao là 95 hoặc cao hơn
    int score1, score2,score3;// Để giữ ba điểm kiểm tra
    double average; // ĐỂ giữ điểm trung bình
    // Lấy ba điểm kiểm tra.
    cout << "Enter 3 test scores and I will average them:" ;
    cin >> score1 >> score2 >> score3;
    // Tính và hiển thị điểm trung bình.
    average = (score1 + score2 +score3) /3.0;
    cout <<setprecision(2) << fixed << "Your average is " << average << endl;
    // Nếu điểm trung bình cao thì xin chúc mừng người dùng
    if (average > HIGH_SCORE)
       cout <<"Congratulations! That's a high score!\n" << endl;
    return 0;
}