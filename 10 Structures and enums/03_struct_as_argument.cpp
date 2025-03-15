#include <iostream>
using namespace std;

struct Car {
    string brand;
    int year;
};

// Function to display car details (pass by value)
void displayCar(Car c) {
    cout << "Brand: " << c.brand << ", Year: " << c.year << endl;
}

int main() {
    Car car1 = {"Toyota", 2022};
    displayCar(car1);  // Passing structure to function

    return 0;
}
