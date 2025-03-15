#include <iostream>  
using namespace std;  

// Initialize the Tic-Tac-Toe board with numbers (1-9) for user selection
char board[3][3] = {{'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}};

// Variables to store the current player's marker and turn
char currentMarker;
int currentPlayer;

// Function to draw the Tic-Tac-Toe board
void drawBoard() {
    cout << "Tic-Tac-Toe Board:\n";
    for (int i = 0; i < 3; i++) {      // Loop through rows
        for (int j = 0; j < 3; j++) {  // Loop through columns
            cout << board[i][j] << " "; // Display each cell
        }
        cout << endl; // Move to the next line for new row
    }
}

// Function to place a marker on the board
bool placeMarker(int slot) {
    int row = (slot - 1) / 3; // Determine the row index (0, 1, or 2)
    int col = (slot - 1) % 3; // Determine the column index (0, 1, or 2)

    // Check if the slot is already occupied
    if (board[row][col] != 'X' && board[row][col] != 'O') {
        board[row][col] = currentMarker; // Place the marker
        return true;
    }
    return false; // Slot is already taken
}

int main() {
    currentMarker = 'X';  // First player starts with 'X'
    currentPlayer = 1;    // Player 1 starts

    drawBoard(); // Display the initial board

    int slot;
    cout << "Enter slot (1-9): ";
    cin >> slot; // Take input from user

    if (placeMarker(slot)) {
        drawBoard(); // Update board after successful placement
    } else {
        cout << "Slot already taken!" << endl; // Show error if slot is occupied
    }

    return 0; // End of program
}

