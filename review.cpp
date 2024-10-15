#include <iostream>
using namespace std;

double calculate ( double a_value, double b_value ) {
    return a_value + b_value;
}

int main () {
    double a_value, b_value;
    double result;
    cout << "Enter your two values: ";
    cin >> a_value >> b_value;
    result = calculate (a_value, b_value);
    cout << "Result is:" << result << "."; 
    return 0;
}