#include <iostream>

using namespace std;

// Function to display first names and last names
void displayNames(string firstNames[], string lastNames[], int count) {
    for (int i = 0; i < count; ++i) {  // Loop through each name
        cout << "First Name: " << firstNames[i] << ", Last Name: " << lastNames[i] << endl << endl;  // Print first and last name
    }
}

int main() {
    int count;

    // Ask user how many names they want to enter
    cout << "How many names do you want to enter? ";
    cin >> count;  // Get the number of names
    cout << endl;  // Add a blank line for readability

    // Declare arrays to hold first names and last names
    string firstNames[count];
    string lastNames[count];

    // Input first names and last names
    for (int i = 0; i < count; ++i) {  // Loop to get input for each name
        cout << "Enter first name for person " << i + 1 << ": ";
        cin >> firstNames[i];  // Get the first name
        cout << "Enter last name for person " << i + 1 << ": ";
        cin >> lastNames[i];  // Get the last name
        cout << endl;  // Add a blank line for readability
    }

    // Display the names using the function
    cout << "Here are the names you have stored:"<< endl;  // Print header
    cout << "----------------------------------" << endl;
    displayNames(firstNames, lastNames, count);  // Call function to display names

    return 0;  // End of program
}

