#include <iostream>
using namespace std;

int main() {
    while (true) {
        int option;
        char choice;
        double firstdigit, seconddigit, result;

        cout << "=========================" << endl;
        cout << "Welcome to My Calculator" << endl;
        cout << "=========================" << endl;
        cout << endl;
        cout << "This is the option: " << endl;
        cout << "1. Addition" << endl;
        cout << "2. Subtraction" << endl;   
        cout << "3. Multiplication" << endl;
        cout << "4. Division" << endl;
        cout << endl;
        cout <<"Choose Your Option: ";
        cin >> option;
        cout << "-----------------------" << endl;
        cout << endl;
        cout << "Enter your first digit: ";
        cin >> firstdigit;
        cout << "Enter your second digit: ";
        cin >> seconddigit;
        cout << "-----------------------" << endl;
        cout << endl;

        switch (option) {
            case 1: 
                result = firstdigit + seconddigit;
                cout << "The Result of " << firstdigit << " + " << seconddigit << " is " << result << "." << endl; 
                break;
            case 2: 
                result = firstdigit - seconddigit;
                cout << "The Result of " << firstdigit << " - " << seconddigit << " is " << result << "." << endl; 
                break;
            case 3: 
                result = firstdigit * seconddigit;
                cout << "The Result of " << firstdigit << " * " << seconddigit << " is " << result << "." << endl; 
                break;
            case 4: 
                if (seconddigit != 0) {
                    result = firstdigit / seconddigit;
                    cout << "The Result of " << firstdigit << " / " << seconddigit << " is " << result << "." << endl; 
                } else {
                    cout << "Error: Division by Zero (0) is not allowed." << endl;
                }
                break;
            default:
                cout << "Syntax Error: Invalid option selected." << endl;
        }

        cout << endl;
        cout << "-----------------------" << endl;
        cout << "Would you like to try again (y/n)? : ";
        cin >> choice;
        if (choice != 'y' && choice != 'Y') {
            break;
        }
    }
    cout << "-----------------------" << endl;
    cout << "Thank you for using my calculator." << endl;
    return 0;
}
