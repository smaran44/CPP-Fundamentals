#include <iostream>  // Include the input-output stream library
#include <cstdlib>   // Include the standard library for rand() and srand()
#include <ctime>     // Include the ctime library for time()

using namespace std;  // Use the standard namespace

int main() {
    srand(time(0));  // Seed the random number generator with the current time
    
    int randomNum = rand() % 100 + 1;  // Generate a random number between 1 and 100
    
    cout << "Random number (1-100): " << randomNum << endl;  // Print the random number

    return 0;  // Return 0 to indicate successful execution
}
