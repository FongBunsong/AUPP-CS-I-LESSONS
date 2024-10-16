#include <iostream>

using namespace std;

// Function to validate human's input
int getHumanMove(int toothpicks) {
    int move;
    do {
        cout << "Enter number of toothpicks to withdraw (1, 2, or 3): ";
        cin >> move;
        if (move < 1 || move > 3 || move > toothpicks) {
            cout << "Invalid move. Try again." << endl;
        }
    } while (move < 1 || move > 3 || move > toothpicks);
    return move;
}

// Function for computer's move
int getComputerMove(int toothpicks, int humanMove) {
    int move;
    if (toothpicks > 4) {
        move = 4 - humanMove;
    } else if (toothpicks >= 2 && toothpicks <= 4) {
        move = toothpicks - 1;
    } else {
        move = 1;
    }
    return move;
}

// Function to play the game
void playGame() {
    int toothpicks = 23;
    int humanMove, computerMove;

    cout << "Welcome to the game of 23!" << endl;

    while (toothpicks > 0) {
        // Human's turn
        cout << "Toothpicks remaining: " << toothpicks << endl;
        humanMove = getHumanMove(toothpicks);
        toothpicks -= humanMove;
        if (toothpicks == 0) {
            cout << "Human picked the last toothpick. Human loses!" << endl;
            break;
        }

        // Computer's turn
        computerMove = getComputerMove(toothpicks, humanMove);
        toothpicks -= computerMove;
        cout << "Computer withdraws " << computerMove << " toothpick(s)." << endl;
        if (toothpicks == 0) {
            cout << "Computer picked the last toothpick. Computer loses!" << endl;
            break;
        }
    }
}

// Main function
int main() {
    char playAgain;

    do {
        playGame();
        cout << "Do you want to play again? (y/n): ";
        cin >> playAgain;
    } while (playAgain == 'y' || playAgain == 'Y');

    cout << "Thank you for playing!" << endl;
    return 0;
}

// this is just a test. I will do it again before submitting it to professor. 
// Thank You. 