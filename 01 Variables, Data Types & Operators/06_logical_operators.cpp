#include <iostream>
using namespace std;

int main() {
    int a = 10, b = 5;
    cout << "Logical AND: " << (a > 5 && b < 10) << endl;
    cout << "Logical OR: " << (a > 5 || b > 10) << endl;
    cout << "Logical NOT: " << !(a > 5) << endl;

    return 0;
}
