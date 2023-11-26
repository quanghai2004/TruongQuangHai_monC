#include <iostream>
using namespace std;

int main(){
    int a,b;
    cout << "Nhap vao so a: ";
    cin >> a;
    cout << " nhap vao so b: ";
    cin >> b;
    if (a > b){
        cout << a << " lon hon " << b << " nho hon"<< endl; 
    }
    else
        cout << b << "lon hon " << a << "nho hon"<< endl;
}