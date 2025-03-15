#include <iostream>
using namespace std;

int main() {
    string name;
    int age;

    cout << "Enter your name and age: ";
    cin >> name >> age;  // Taking multiple inputs

    cout << "Hello, " << name << "! You are " << age << " years old." << endl;
    return 0;
}
