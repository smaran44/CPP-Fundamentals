#include <iostream>
#include <cstdlib> // For rand()
#include <ctime>   // For seeding rand()
using namespace std;

// Function to get computer's choice
string getComputerChoice() {
    int choice = rand() % 3; // Generates 0, 1, or 2
    if (choice == 0) return "Rock";
    if (choice == 1) return "Paper";
    return "Scissors";
}

// Function to determine winner
void determineWinner(string player, string computer) {
    cout << "Player: " << player << " | Computer: " << computer << endl;

    if (player == computer) {
        cout << "It's a tie!" << endl;
    } else if ((player == "Rock" && computer == "Scissors") ||
               (player == "Paper" && computer == "Rock") ||
               (player == "Scissors" && computer == "Paper")) {
        cout << "You win!" << endl;
    } else {
        cout << "Computer wins!" << endl;
    }
}

int main() {
    srand(time(0)); // Seed random number generator

    string playerChoice;
    cout << "Enter Rock, Paper, or Scissors: ";
    cin >> playerChoice;

    // Convert input to lowercase for case insensitivity
    for (char &c : playerChoice) c = tolower(c);

    if (playerChoice != "rock" && playerChoice != "paper" && playerChoice != "scissors") {
        cout << "Invalid input! Try again." << endl;
        return 1;
    }

    // Convert back to first letter uppercase for display consistency
    playerChoice[0] = toupper(playerChoice[0]);

    string computerChoice = getComputerChoice();
    determineWinner(playerChoice, computerChoice);
    
    return 0;
}
