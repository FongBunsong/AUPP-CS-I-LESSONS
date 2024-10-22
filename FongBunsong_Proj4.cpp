#include <iostream>
using namespace std;

void print_introduction() {
    cout << "Hello! The program will tell you the temperature of the earth at any depth.\n";
}

double celsius_at_depth(double depth) {
    return 10 * depth + 20;  // Example formula for Celsius temperature
}

double celsius_to_fahrenheit(double celsius) {
    return (celsius * 9/5) + 32;  // Convert Celsius to Fahrenheit
}

void print_conclusion(double depth) {
    double celsius = celsius_at_depth(depth);
    double fahrenheit = celsius_to_fahrenheit(celsius);
    
    cout << "The temperature of the earth at a depth of " << depth << " KM is "
              << static_cast<int>(celsius) << " in Celsius, and "
              << static_cast<int>(fahrenheit) << " in Fahrenheit.\n";
}

int main() {
    char continue_choice;
    double depth;

    print_introduction();  // Print introduction once at the start

    do {
        cout << "Enter a depth in KM: ";
        cin >> depth;
        
        print_conclusion(depth);
        
        cout << "Would you like to do it again? (Y/N): ";
        cin >> continue_choice;
    } while (continue_choice == 'Y' || continue_choice == 'y');

    return 0;
}