#include <iostream>
using namespace std;

int main(){
    double BMI, chieucao,cannang;
    cout << "chieu cao cua ban la: ";
    cin >> chieucao;
    cout << "can nang cua ban la: ";
    cin >> cannang;
    BMI = cannang * 703/chieucao;
    if (18.5 <= BMI >= 25){
        cout << "ban co chi so BMI tot!";
    }
    else if (BMI < 18.5){
        cout << "ban bi thieu can!";
    }
    else
        cout << "ban bi thua can!";
    return 0;
}