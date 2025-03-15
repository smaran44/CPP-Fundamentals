#include <iostream>
using namespace std;

void printMessage(const string &message) {
    // message = "New Message"; // ❌ ERROR! Cannot modify a const parameter
    cout << "Message: " << message << endl;
}

int main() {
    string text = "Hello, World!";
    printMessage(text);
    return 0;
}
