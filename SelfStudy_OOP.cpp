#include <iostream>
using namespace std;

class Car {
public:
    string brand;
    string model;
    int year;

    void displayInfo () {
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
        cout << "Year : " << year << endl;
    }

};

int main() {
    Car myCar;

    myCar.brand = "Toyota";
    myCar.model = "Raize";
    myCar.year = 2024;

    myCar.displayInfo ();

    return 0;
}
