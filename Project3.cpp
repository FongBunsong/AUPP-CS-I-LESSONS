#include <iostream>
using namespace std;

int main() {
    char playAgain;
    do {
        int sticks = 23; // Initial number of sticks
        int playerPick, computerPick;

        cout << "Let's play a game of \"23\"!" << endl;

        while (sticks > 0) {
            // Player's turn
            cout << "Enter the number of sticks you wish to pick (1, 2, or 3): ";
            cin >> playerPick;

            // Input validation for player's pick
            while (playerPick < 1 || playerPick > 3 || playerPick > sticks) {
                cout << "Wrong number of sticks. Please pick 1, 2, or 3 sticks: ";
                cin >> playerPick;
            }

            // Update the number of sticks
            sticks -= playerPick;
            cout << "You picked " << playerPick << " stick" << (playerPick > 1 ? "s" : "") << ". " << sticks << " left." << endl;

            // Check if the player picked the last stick
            if (sticks == 0) {
                cout << "You picked the last stick." << endl;
                cout << "Sorry, the computer beat you!" << endl;
                break;
            }

            // Computer's turn
            if (sticks > 4) {
                computerPick = 4 - playerPick;
            } else {
                computerPick = sticks - 1;
            }

            // Update the number of sticks
            sticks -= computerPick;
            cout << "Computer picked " << computerPick << " stick" << (computerPick > 1 ? "s" : "") << ". " << sticks << " left." << endl;

            // Check if the computer picked the last stick
            if (sticks == 0) {
                cout << "Computer picked the last stick." << endl;
                cout << "Congratulations! You beat the computer!" << endl;
                break;
            }
        }

        // Prompt to play again
        cout << "Do you want to play another game? <Y/N>: ";
        cin >> playAgain;

    } while (playAgain == 'Y' || playAgain == 'y');

    return 0;
}