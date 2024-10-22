#include <iostream>
using namespace std;

void playGame() {
    int sticks = 23;
    int humanPick, computerPick;

    cout << "=================================\n";
    cout << "Let's play a game of \"23\"!\n";
    cout << "=================================\n";

    while (sticks > 0) {
        // Human's turn
        do {
            cout << "Enter the number of sticks you wish to pick (1, 2, or 3): ";
            cin >> humanPick;
            if (humanPick < 1 || humanPick > 3) {
                cout << "Wrong number of sticks. Please pick 1, 2, or 3 sticks.\n";
            }
            if (humanPick > sticks) {
                cout << "You cannot pick more sticks than what are left.\n";
            }
        } while (humanPick < 1 || humanPick > 3 || humanPick > sticks);

        sticks -= humanPick;
        cout << "You picked " << humanPick << " stick(s). " << sticks << " left.\n";
        cout << "---------------------------------\n";
        if (sticks == 0) {
            cout << "You picked the last stick.\n";
            cout << "Sorry, the computer beat you!\n";
            cout << "You lose, Try harder next time...\n";
            break;
        }

        // Computer's turn
        if (sticks > 4) {
            computerPick = 4 - humanPick;
        } else if (sticks >= 2 && sticks <= 4) {
            computerPick = sticks - 1;
        } else if (sticks == 1) {
            computerPick = 1;
        }

        // Ensure the computer never picks 0 sticks
        if (computerPick == 0) {
            computerPick = 1;
        }

        sticks -= computerPick;
        cout << "Computer picked " << computerPick << " stick(s). " << sticks << " left.\n";
        cout << "=================================\n";
        if (sticks == 0) {
            cout << "Computer picked the last stick.\n";
            cout << "Congratulations, you beat the computer!\n";
            cout << "You are the champion!\n";
            break;
        }
    }
}

int main() {
    char playAgain;

    do {
        playGame();
        cout << "Do you want to play another game? <Y/N>: ";
        cin >> playAgain;
        cout << "=================================\n";
    } while (playAgain == 'Y' || playAgain == 'y');

    cout << "Thank you for playing our game!\n";
    return 0;
}
