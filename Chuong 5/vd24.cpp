#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
    ifstream inputFile;
    string filenames;
    int number; 

    cout << "Enter the filaname: " ;
    cin >> filenames;

    inputFile.open(filenames);

    if(inputFile)
    {
        while (inputFile >> number)
        {
            cout << number << endl;
        }
        inputFile.close();

    }
    else
    {  
        cout << "Error opening the file.\n";
    }
    return 0;
} 

