#include <iostream>
#include <cstdlib> // For rand() and srand()
#include <ctime>   // For time()

using namespace std;

int main() {
    // Seed the random number generator
    srand(static_cast<unsigned>(time(0)));

    // Generate a random number between 1 and 100
    int randomNumber = rand() % 100 + 1;
    int playerGuess = 0;
    int attemptCount = 0;

    cout << "Welcome to the Number Guessing Game!" << endl;
    cout << "I have selected a number between 1 and 100." << endl;
    cout << "Can you guess what it is?" << endl;

    // Game loop
    while (true) {
        cout << "Enter your guess: ";
        cin >> playerGuess;
        attemptCount++;

        if (playerGuess < randomNumber) {
            cout << "Too low! Try again." << endl;
        } else if (playerGuess > randomNumber) {
            cout << "Too high! Try again." << endl;
        } else {
            cout << "Congratulations! You guessed the number in " 
                 << attemptCount << " attempts." << endl;
            break;
        }
    }

    cout << "Thank you for playing the Number Guessing Game!" << endl;
    return 0;
}
