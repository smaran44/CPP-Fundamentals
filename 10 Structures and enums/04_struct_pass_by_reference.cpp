#include <iostream>
using namespace std;

struct Car {
    string brand;
    int year;
};

void updateYear(Car c) {
    c.year += 1;  // Increment year
}

// Function to modify structure data (pass by reference)
void _updateYear(Car &c) {
    c.year += 1;  // Increment year
}



int main() {
    Car car1 = {"Tesla", 2023};
    
    updateYear(car1);// Pass by value
    cout << "Before update: " << car1.year << endl;
    _updateYear(car1);// Pass by reference
    cout << "After update: " << car1.year << endl;

    return 0;
}
