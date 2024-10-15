#include <iostream>
using namespace std;

double PI = 3.141;

// Function to calculate the area of a pizza in square meters
double calculatePizzaArea(double radius_m) {
    // Calculate the area in square meters
    double area_m2 = PI * (radius_m * radius_m );
    return area_m2;
}

int main() {
    double radius1_m, radius2_m;

    // Prompt user for the radius of the pizzas in meters
    cout << endl;
    cout << "Enter the radius of the first pizza in meters: ";
    cin >> radius1_m;

    cout << "Enter the radius of the second pizza in meters: ";
    cin >> radius2_m;

    // Calculate the areas in square meters
    double area1_m2 = calculatePizzaArea(radius1_m);
    double area2_m2 = calculatePizzaArea(radius2_m);

    // Output the results
    cout << "The area of the first pizza is " << area1_m2 << " square meters." << endl;
    cout << "The area of the second pizza is " << area2_m2 << " square meters." << endl;

    return 0;
} 

