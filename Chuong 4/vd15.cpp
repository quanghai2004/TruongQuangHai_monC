#include <iostream>
using namespace std;

int main()
{
    char employed, // Hiện đang làm việc, Y hoặc N
        recentGrad;// Mới tốt nghiệp, Y hoặc N
        // Người dùng có đang đi làm và mới tốt nghiệp không?
    cout << "Answer the following questions\n";
    cout << "with either Y for yes or N for No.\n";
    cout << "Are you employed?";
    cin >> employed;

    cout <<"Have you graduated from college " 
        << "in the past two years?";
    cin >> recentGrad;

    if (employed == 'Y'  && recentGrad == 'Y') {
        cout << " You qualify for the special" 
            << "interest rate.\n";
    }
    else
    {
        cout << "You must be employed and have\n"
            << "graduated from college in the\n"
            << "past two years to qualify.\n";
    }
    return 0;
}