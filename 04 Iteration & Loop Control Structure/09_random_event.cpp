#include <iostream>  // Include input-output stream library for console output
#include <cstdlib>   // Include standard library for random number functions
#include <ctime>     // Include ctime library to use time() for random seeding

using namespace std;  // Use the standard namespace

int main() {
    srand(time(0));  // Seed the random number generator with the current time
    
    // Declare and initialize an array of strings containing event messages
    string events[] = {"Win a prize!", "Lose a turn!", "Try again!"};

    int index = rand() % 3;  // Generate a random index between 0 and 2

    cout << "Event: " << events[index] << endl;  // Print a randomly selected event

    return 0;  // Return 0 to indicate successful execution
}
