#include <iostream>
using namespace std;

int main() {
    string str = "Hello World";

    // Inserting "C++ " at index 6
    str.insert(6, "C++ ");
    cout << "After insertion: " << str << endl;

    // Erasing "World"
    str.erase(10, 5);//5 is the length of the string to be erased
    cout << "After erasing: " << str << endl;

    // Replacing "C++" with "Everyone"
    str.replace(6, 3, "Everyone");
    cout << "After replacing: " << str << endl;

    return 0;
}
