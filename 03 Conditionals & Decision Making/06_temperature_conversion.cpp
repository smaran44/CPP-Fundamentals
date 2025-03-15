#include <iostream>
using namespace std;

int main() {
    double temp;
    char unit;

    cout << "Enter temperature (C for Celsius, F for Fahrenheit): ";
    cin >> temp >> unit;

    if (unit == 'C' || unit == 'c') {
        double fahrenheit = (temp * 9/5) + 32;
        cout << "Temperature in Fahrenheit: " << fahrenheit << "°F" << endl;
    } 
    else if (unit == 'F' || unit == 'f') {
        double celsius = (temp - 32) * 5/9;
        cout << "Temperature in Celsius: " << celsius << "°C" << endl;
    } 
    else {
        cout << "Invalid unit entered!" << endl;
    }

    return 0;
}
