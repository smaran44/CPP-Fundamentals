#include <iostream>
using namespace std;

int main() {
    int num;

    do {
        cout << "Enter a number greater than 10: ";
        cin >> num;
    } while (num <= 10);

    cout << "You entered: " << num << endl;

    return 0;
}
// The do-while loop is similar to the while loop, but the condition is checked after executing the loop body.