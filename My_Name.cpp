#include <iostream>
using namespace std;

void myname (string firstname, string lastname) {
    cout << " First Name : " << firstname << endl ; 
    cout << " Last Name : " << lastname << endl ; 
    cout << " Your fullname is : " << firstname << " " << lastname << endl ;

}

int main() {
    string firstname, lastname;
    cout << " Enter your firstname: ";
    cin >> firstname;
    cout << " Enter your lastname: ";
    cin >> lastname; 
    cout << endl; 
    myname (firstname, lastname);

return 0; 
}