#include <iostream>
#include <iomanip>
using namespace std;

int main() 
{
    const int HIGH_SCORE = 9.5;
    int score1,score2,score3;
    double average;

    cout << "Enter 3 test score and I will average them:";
    cin >> score1 >> score2 >> score3;
    average = (score1 + score2 +score3) /3.0;
    cout << fixed << "Your average is " << average <<endl;
    
    if(average > HIGH_SCORE)
        cout << "Congratulations!\n";
        cout << "That's a high score.\n";
        cout << "You deserve a pat on the back!\n";
    return 0;

}