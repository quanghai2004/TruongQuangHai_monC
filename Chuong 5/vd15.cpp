#include <iostream>
#include <fstream>
using namespace std;

int main() 
{
    ofstream outputFile;
    outputFile.open("demfile.txt");

    cout << "Now writing dateb to the file.\n";

    outputFile <<"Bach\n";
    outputFile << "Beethoven\n";
    outputFile << "Mozart\n";
    outputFile << "Schubert\n";

    outputFile.close();
    cout << "Done.\n";
    return 0;
}