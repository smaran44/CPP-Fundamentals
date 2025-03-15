#include <iostream>
using namespace std;

// Base case: No arguments left
void print() {
    cout << "End of parameters." << endl;
}

// Recursive variadic template function
template <typename T, typename... Args>
void print(T first, Args... rest) {
    cout << first << " ";
    print(rest...);  // Recursive call with remaining arguments
}

int main() {
    print(1, 2.5, "Hello", 'A');  
    return 0;
}
