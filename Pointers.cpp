#include <iostream>
using namespace std;

int main() {

    string name = "Bunsong";
    string* ptr = &name;

    cout << name << endl; 

    cout << ptr << endl;
    cout << *ptr << endl;

    *ptr = "FONG";

    cout << *ptr <<endl;
    cout << name << endl;

return 0;
}
