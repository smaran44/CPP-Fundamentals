#include <iostream>
using namespace std;

// Defining a structure
struct Student {
    string name;
    int age;
    float marks;
};

int main() {
    // Creating a structure variable
    Student s1 = {"Alice", 20, 85.5};

    // Accessing structure members
    cout << "Student Name: " << s1.name << endl;
    cout << "Age: " << s1.age << endl;
    cout << "Marks: " << s1.marks << endl;

    return 0;
}
