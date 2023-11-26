#include <iostream>
using namespace std;

int main() {
    int choice;
    do {
        cout << "Math Tutor\n";
        cout << "1. Addition\n";
        cout << "2. Subtraction\n";
        cout << "3. Multiplication\n";
        cout << "4. Division\n";
        cout << "5. Quit\n";
        cout << "Enter your choice (1-5): ";
        cin >> choice;
        if (choice < 1 || choice > 5) {
            cout << "Invalid choice. Try again.\n";
            continue;
        }
        if (choice == 5) {
            break;
        }
        int num1, num2, answer;
        char op;
        switch (choice) {
            case 1:
                op = '+';
                break;
            case 2:
                op = '-';
                break;
            case 3:
                op = '*';
                break;
            case 4:
                op = '/';
                break;
        }
        cout << "Enter two numbers: ";
        cin >> num1 >> num2;
        switch (op) {
            case '+':
                answer = num1 + num2;
                break;
            case '-':
                answer = num1 - num2;
                break;
            case '*':
                answer = num1 * num2;
                break;
            case '/':
                if (num2 == 0) {
                    cout << "Division by zero error.\n";
                    continue;
                }
                answer = num1 / num2;
                break;
        }
        cout << "The answer is: " << answer << endl << endl;
    } while (true);
    return 0;
}
