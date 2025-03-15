#include <iostream>  // Include iostream for input and output

struct Student {
    std::string name;  // Variable to store student's name
    int age;  // Variable to store student's age
};

int main() {
    Student* ptr = new Student;  // Dynamically allocate memory for a Student struct

    // Assign values to the dynamically allocated Student struct
    std::cout << "Enter student name: ";
    std::cin >> ptr->name;  // Input student's name
    std::cout << "Enter student age: ";
    std::cin >> ptr->age;  // Input student's age

    // Display the stored student details
    std::cout << "Student Name: " << ptr->name << ", Age: " << ptr->age << std::endl;

    delete ptr;  // Free the allocated memory to prevent memory leaks
    return 0;  // Return 0 to indicate successful execution
}
