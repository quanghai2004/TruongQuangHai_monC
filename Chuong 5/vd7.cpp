#include <iostream>
using namespace std;

int main()
{
    int score1, score2, score3;
    double average;
    char again;
    
    do
    {
        // Nhận được ba điểm.
        cout << "Enter 3 scores and I will average them:";
        cin >> score1 >> score2 >> score3;
        // Tính toán và hiển thị giá trị trung bình.
        average = (score1 + score2 +score3) / 3.0;
        cout << "The average is " << average <<".\n";
        // Người dùng có muốn tính trung bình cho một tập hợp khác không?
        cout << "Do you want to average another set? (Y/N)";
        cin >> again;

    } while(again == 'Y' || again =='Y');
    return 0;
}