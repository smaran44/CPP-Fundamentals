#include <iostream>  // Include input-output stream library
using namespace std; // Use the standard namespace

// Function to validate a credit card number using Luhn's Algorithm
bool validateCard(long long cardNumber) {
    int sum = 0;              // Sum to store the computed checksum
    bool alternate = false;   // Boolean flag to track every second digit from the right

    // Process each digit of the card number
    while (cardNumber > 0) {
        int digit = cardNumber % 10;  // Extract the last digit
        
        if (alternate) {  // Double every second digit from the right
            digit *= 2;  
            if (digit > 9) digit -= 9;  // If the result is two digits, subtract 9
        }

        sum += digit;   // Add the digit to the total sum
        alternate = !alternate;  // Toggle the flag for alternate digit processing
        cardNumber /= 10;  // Remove the last digit
    }

    // If the sum is a multiple of 10, the card is valid
    return (sum % 10 == 0);
}

int main() {
    long long cardNumber;  // Variable to store the user's input
    
    // Prompt the user to enter a credit card number
    cout << "Enter credit card number: ";
    cin >> cardNumber;

    // Check if the card number is valid using Luhn's Algorithm
    if (validateCard(cardNumber)) {
        cout << "Valid Card!" << endl;
    } else {
        cout << "Invalid Card!" << endl;
    }

    return 0;  // Return 0 to indicate successful execution
}

/*Let's check if 4539 1488 0343 6467 is valid.

Step 1: Double every second digit from the right
Digits:    4 5 3 9  1 4 8 8  0 3 4 3  6 4 6 7
Doubled:   8 5 6 9  2 4 16 8  0 3 8 3  12 4 12 7
Step 2: Subtract 9 from values > 9
Modified:  8 5 6 9  2 4 7 8  0 3 8 3  3 4 3 7
Step 3: Add all digits
8 + 5 + 6 + 9 + 2 + 4 + 7 + 8 + 0 + 3 + 8 + 3 + 3 + 4 + 3 + 7 = 80
Step 4: Check if sum is a multiple of 10
80 is a multiple of 10 → ✅ Valid card! 🎉*/