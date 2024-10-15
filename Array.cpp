#include <iostream>
using namespace std;

int main() {
    string firstname, lastname;
    string nameArray[] = { firstname, lastname } ;

    cout << "Enter your firstname: ";
    cin >> nameArray[0];
    cout << "Enter your lastname: " ;
    cin >> nameArray[1];

    cout << nameArray[0] << " " << nameArray [1];

    return 0;
}