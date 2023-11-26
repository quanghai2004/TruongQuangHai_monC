#include <iostream>
using namespace std;

int main()
{
    const double MAX_TEMP = 102.5;
    double temperature;

    cout << "Enter the substance's Celsius temperature: " << temperature << endl;
    cin >> temperature;

    while (temperature > MAX_TEMP);
    {
        cout << "The temperature is to high. Turn the\n";
        cout << "theremostat down and wait 5 minutes.\n";
        cout << "Then take the Celsius temperature again\n";
        cin >> temperature;
    }
    cout <<"The temperature is acceptable.\n";
    cout << "Check it again in 15 minutes.\n";
    return 0;
}
