#include <iostream>
using namespace std;

int main() {
    string name;
    cout << "Enter your name: ";
    cin >> name;  // Only takes first word
    cout << "Hello, " << name << "!" << endl;
    return 0;
}
