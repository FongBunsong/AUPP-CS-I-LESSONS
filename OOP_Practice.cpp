#include <iostream>
using namespace std;

class Car {
private:
    string brand;
    int year;

public:
    Car (string b, int y) {
        brand = b;
        year = y;
    }

void setYear (int y) {
    if ( y > 1885) {
        year = y;
    } 
    else {
        cout << "Invalid Year. Car is below year 1885";
    }
}

void displayCar () {
    cout << "Brand: " << brand << " , Year: " << year << endl;
}

};

int main () {
    Car car1 ("Toyota", 2024);

    car1.displayCar ();

    car1.setYear(2000);
    car1.displayCar();

    car1.setYear (1800);


return 0;
}
