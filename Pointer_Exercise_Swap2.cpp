// write a program that swap the value of a and b. 

#include <iostream>
using namespace std;

void change(int* a, int* b) {

    int temp;

    temp = *a;

    *a = *b;

    *b = temp;
}

int main () {

    int a, b; 

    cout << endl;
    cout << "Enter Value of 'a' and 'b' : ";
    cin >> a >> b;
    cout << endl;

    cout << "Before Swap: " << " a = " << a << "  and " << " b = " << b << " . "; 
    cout << endl; 

    change ( &a , &b );
    cout << "After  Swap: " << " a = " << a << "  and " << " b = " << b << " . "; 

    return 0;

}

