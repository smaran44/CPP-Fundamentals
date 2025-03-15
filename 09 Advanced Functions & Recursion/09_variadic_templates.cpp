#include <iostream>
using namespace std;

// Base case: No arguments left to process
void print() {
    cout << "End of parameters." << endl;
}

// Recursive variadic template function
template <typename T, typename... Args> // Template to accept multiple arguments of different types
void print(T first, Args... rest) {
    cout << first << " ";   // Print the first argument
    print(rest...);         // Recursive call with the remaining arguments
}

int main() {
    // Calling the print function with different types of arguments
    print(1, 2.5, "Hello", 'A');  
    return 0;
}
/*Variadic Template Function (template <typename T, typename... Args>)

T first → Represents the first argument.
Args... rest → A parameter pack that holds the remaining arguments.
The function prints the first argument and recursively calls itself with the rest.*/
