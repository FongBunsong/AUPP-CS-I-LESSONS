#include <iostream>
using namespace std; 

int main () {
    int age;
    cout << "=============================="<<endl;
    cout << "Welcome to my alcoholic store "<<endl;
    cout << "=============================="<<endl;
    cout << endl; 
    cout << "Enter your age: ";
    cin >> age;

    if (age < 18) {
        cout << "Your are not eligible to buy alcoholic substances."<<endl;
    }
    else {
        cout << "Choose your drinks..."<<endl;
    }
return 0;
}