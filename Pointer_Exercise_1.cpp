//write a program using a pointer that asks us the enter the value, and that will display the value and the address stored. 

#include <iostream>
using namespace std;

int main() {

    int x;
    int* ptr = &x;

    cout << "Enter Your Value 'X' : ";
    cin >> x; 
    cout << endl;

    cout << "Value of X = " << x << endl;
    cout << "Address of X = " << &x << endl;
    cout << "Value stored in ptr = " << ptr << endl;
    cout << "Valued pointed to by ptr = " << *ptr << endl;
    cout << endl;
    
    *ptr = x * 2;
    cout<< "Value * 2: " << *ptr << endl;

return 0;
}
