#include <iostream>
using namespace std;

int main() {
    string str1 = "Apple";
    string str2 = "Banana";

    // Using == and != operators
    if (str1 == str2) {
        cout << "Strings are equal" << endl;
    } else {
        cout << "Strings are not equal" << endl;
    }

    // Using compare() function
    int result = str1.compare(str2);
    if (result == 0) {
        cout << "Strings are equal" << endl;
    } else if (result < 0) {
        cout << str1 << " comes before " << str2 << endl;
    } else {
        cout << str1 << " comes after " << str2 << endl;
    }

    return 0;
}
