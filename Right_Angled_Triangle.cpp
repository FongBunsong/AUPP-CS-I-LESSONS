//Date : 23 / 09 / 2024
//Draw a right-angled triangle with the height of 35. Document the (a).Code & (b). Output : 

#include <iostream>
using namespace std;

// Function to draw a right-angled triangle
void drawRightAngledTriangle(int height) {

    // Outer loop: Iterate over each line of the triangle
    for (int i = 1; i <= height; ++i) {

        // Inner loop: Print asterisks for the current line
        for (int j = 0; j < i; ++j) {

            cout << "*" << " "; // Print an asterisk
        }
        cout << endl; // Move to the next line after printing the current line
    }
}

int main() {

    int height = 35; // Height of the right-angled triangle

    drawRightAngledTriangle(height); // Draw the triangle with the specified height

    return 0;
} 