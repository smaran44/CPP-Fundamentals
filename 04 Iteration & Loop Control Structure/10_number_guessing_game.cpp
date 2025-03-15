#include <iostream>  // Include input-output stream library for console input/output
#include <cstdlib>   // Include standard library for rand() and srand()
#include <ctime>     // Include ctime library to use time() for random number seeding

using namespace std;  // Use the standard namespace

int main() {
    srand(time(0));  // Seed the random number generator with the current time
    
    int target = rand() % 100 + 1;  // Generate a random number between 1 and 100
    int guess, attempts = 0;  // Declare variables: guess for user input, attempts to count tries

    cout << "Guess the number (1-100): " << endl;  // Prompt the user to start guessing

    do {
        cout << "Enter your guess: ";
        cin >> guess;  // Take user input for their guess
        attempts++;  // Increment the attempt counter

        if (guess > target) {  
            cout << "Too high! Try again." << endl;  // Inform user if the guess is too high
        } 
        else if (guess < target) {
            cout << "Too low! Try again." << endl;  // Inform user if the guess is too low
        } 
        else {
            cout << "Correct! You guessed it in " << attempts << " tries." << endl;  // Correct guess message
        }

    } while (guess != target);  // Continue looping until the correct number is guessed

    return 0;  // Return 0 to indicate successful execution
}
