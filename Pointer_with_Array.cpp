#include <iostream>
using namespace std;

int main() {

    int numbers[] = {10, 20, 30, 40, 50};

    int* ptr = numbers;

    cout << "Array elements using pointers: \n";
    for ( int i = 0; i<5; i++ ) {
        cout << "Element " << i << " :" << *(ptr+i) << endl;
    }

    cout << endl;
    cout << "Original array elements before modification: \n";
    for (int i=0; i<5; i++) {
        cout << "Element " << i << " :" << numbers [i] << endl;
    }
    
    // Modify the array elements using the pointer
    for (int i = 0; i <5; i++) {
        *(ptr+i) = *(ptr+i) * 2;
    }

    cout << endl;
    cout << "Modified array elements using pointers by 2 times: \n";
    for (int i=0; i<5; i++) {
        cout << "Element " << i << " :" << *(ptr+i) << endl;
    }

    cout << endl;
    cout << "Original array elements after modification (It also changes the original value): \n";
    for (int i=0; i<5; i++) {
        cout << "Element " << i << " :" << numbers [i] << endl;
    }

    return 0;
}
