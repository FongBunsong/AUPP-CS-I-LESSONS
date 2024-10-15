//Assignment : Work in 2 pairs, Write a program to swap 3 values using function & pointer. 

#include <iostream>
using namespace std; 

void change ( int* a, int* b, int* c) {

    int temp; // Declare an integer variable named temp to hold a value temporarily during the swap

    temp = *a; // Store the value pointed to by a in temp

    *a = *b; // Assign the value pointed to by b to the location pointed to by a

    *b = *c; // Assign the value pointed to by c to the location pointed to by b

    *c = temp; // Assign the value stored in temp to the location pointed to by c
}

int main () {

    int x, y, z; // Declare three integer variables x, y, and z

    cout << endl;
    cout << "Enter Your 'X' 'Y' & 'Z' Values: ";
    cin >> x >> y >> z; // Read the values entered by the user and store them in x, y, and z
    cout << endl; 

    cout << "Before Swap: " << " x = " << x << " , " << " y = " << y << " and " << " z = " << z; 
    cout << endl; 

    change ( &x , &y, &z ); // Call the change function and pass the addresses of x, y, and z

    cout << "After  Swap: " << " x = " << x << " , " << " y = " << y << " and " << " z = " << z; 
    cout << endl << endl;

    cout << "Address: " << endl;
    cout << "Address x = " << &x << endl;
    cout << "Address y = " << &y << endl; 
    cout << "Address z = " << &z << endl;

    return 0;
}
