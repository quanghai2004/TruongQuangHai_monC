#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    const int NUM_COINT = 5;
    double coints[NUM_COINT] = {0.05, 0.1, 0.25, 0.5, 1.0};
    double *doublePtr;
    int count;
    doublePtr = coints;
    cout << "Here are the values in the coins array:\n";
    for (count = 0; count < NUM_COINT; count++)
        cout << doublePtr[count] << setw(4);
    cout << "\nAnd here they are again:\n";
    for (count = 0; count < NUM_COINT; count++)
        cout << *( coints + count) << setw(4);
    cout << endl;
    return 0;
}