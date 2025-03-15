#include <iostream>
using namespace std;

int main() {
    int age;
    bool hasID;

    cout << "Enter your age: ";
    cin >> age;

    cout << "Do you have an ID? (1 for Yes, 0 for No): ";
    cin >> hasID;

    if (age >= 18 && hasID) {
        cout << "You can enter the club!" << endl;
    } else {
        cout << "You cannot enter the club." << endl;
    }

    return 0;
}
