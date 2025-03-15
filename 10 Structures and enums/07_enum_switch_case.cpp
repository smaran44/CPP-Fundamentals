#include <iostream>
using namespace std;

enum Color {RED, GREEN, BLUE};

void printColor(Color c) {
    switch (c) {
        case RED:
            cout << "Selected Color: Red" << endl;
            break;
        case GREEN:
            cout << "Selected Color: Green" << endl;
            break;
        case BLUE:
            cout << "Selected Color: Blue" << endl;
            break;
        default:
            cout << "Invalid Color" << endl;
    }
}

int main() {
    Color myColor = GREEN;
    printColor(myColor);

    return 0;
}
