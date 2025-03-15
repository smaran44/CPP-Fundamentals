#include <iostream>
using namespace std;

int main() {
    int choice;
    cout << "Menu:\n1. Coffee\n2. Tea\n3. Juice\nEnter your choice: ";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "You chose Coffee ☕" << endl;
            break;
        case 2:
            cout << "You chose Tea 🍵" << endl;
            break;
        case 3:
            cout << "You chose Juice 🧃" << endl;
            break;
        default:
            cout << "Invalid choice! ❌" << endl;
    }

    return 0;
}
