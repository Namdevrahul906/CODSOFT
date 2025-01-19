 #include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));
    int randomNumber = rand() % 100 + 1;
    int userGuess;
    int attempts = 0;

    cout << "Welcome to the Guessing Game!\n";
    cout << "I have generated a random number between 1 and 100. Try to guess it!\n";

    do {
        cout << "Enter your guess: ";
        cin >> userGuess;
        attempts++;

        if (userGuess < randomNumber) {
            cout << "Too low! Try again.\n";
        } else if (userGuess > randomNumber) {
            cout << "Too high! Try again.\n";
        } else {
            cout << "Congratulations! You've guessed the correct number: " << randomNumber << "\n";
            cout << "It took you " << attempts << " attempts.\n";
        }
    } while (userGuess != randomNumber);

    return 0;
}