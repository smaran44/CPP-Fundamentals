#include <iostream>
using namespace std;

// Structure definition
struct Employee {
    string name;
    int id;
    float salary;
};

int main() {
    Employee employees[3] = {
        {"John", 101, 50000},
        {"Emma", 102, 60000},
        {"David", 103, 55000}
    };

    // Displaying information
    for (int i = 0; i < 3; i++) {
        cout << "Employee ID: " << employees[i].id << ", Name: " << employees[i].name 
             << ", Salary: " << employees[i].salary << endl;
    }

    return 0;
}
