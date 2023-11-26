#include <iostream>
using namespace std;

int main() 
{
    char employed,
         recentGrad;
    
    cout << "Answer the fllowing questions\n";
    cout << "With either Y for Yes or";
    cout << "N for No.\n";
    cout << "Are you employed? ";
    cin >> employed;
    cout << "Have you graduated from college ";
    cout << "in the past two years? ";
    cin >> recentGrad;

    if (employed == 'Y')
    {
        if(recentGrad == 'Y')
        {
            cout << "You qualify for the special";
            cout << "interest rate.\n";
        }
    }
    return 0;
}