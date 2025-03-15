#include <iostream>
using namespace std;

// Scoped enum (enum class) for traffic light signals
enum class TrafficLight { RED, YELLOW, GREEN };

// Function to display the corresponding action for each traffic light signal
void showLight(TrafficLight light) {
    if (light == TrafficLight::RED) { //is a comparison operation that checks whether the light variable holds the value TrafficLight::RED
        cout << "Stop!" << endl;  // RED means stop
    } 
    else if (light == TrafficLight::YELLOW) {
        cout << "Get Ready!" << endl;  // YELLOW means prepare to move
    } 
    else {
        cout << "Go!" << endl;  // GREEN means go
    }
}

int main() {
    // Assign the GREEN signal to the 'signal' variable
    TrafficLight signal = TrafficLight::GREEN;
    
    // Call the function to display the corresponding action
    showLight(signal);

    return 0;
}
