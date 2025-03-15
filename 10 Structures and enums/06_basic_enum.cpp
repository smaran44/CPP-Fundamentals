#include <iostream>
using namespace std;

// Defining an enum
enum Day {SUNDAY, MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY};
// Enumerators are assigned values starting from 0 by default

int main() {
    Day today = WEDNESDAY;

    cout << "Today is: " << today << endl; // Outputs 3 (WEDNESDAY's index)
    
    return 0;
}
