#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 10; i++) {
        if (i == 5) {
            cout << "Breaking loop at " << i << endl;
            break;
        }
        if (i == 3) {
            cout << "Skipping " << i << endl;
            continue;
        }
        cout << "Iteration: " << i << endl;
    }
    return 0;
}
