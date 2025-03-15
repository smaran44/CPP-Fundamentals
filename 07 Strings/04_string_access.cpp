#include <iostream>
using namespace std;

int main() {
    string text = "Hello";
    
    cout << "First character: " << text[0] << endl;
    cout << "Last character: " << text[text.length() - 1] << endl;

    // Modifying a character
    text[0] = 'J';
    cout << "Modified String: " << text << endl;

    return 0;
}
