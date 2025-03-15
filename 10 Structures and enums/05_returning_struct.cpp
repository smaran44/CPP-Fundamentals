#include <iostream>  
using namespace std;

// Structure definition for a Rectangle
struct Rectangle {
    int length, width; // Variables to store length and width
};

// Function that returns a structure (Rectangle)
Rectangle createRectangle(int l, int w) {
    Rectangle r;  // Create a Rectangle object
    r.length = l; // Assign the length
    r.width = w;  // Assign the width
    return r;     // Return the structure
}

int main() {
    // Call function to create a rectangle with length 10 and width 5
    Rectangle box = createRectangle(10, 5);

    // Output the dimensions of the created rectangle
    cout << "Rectangle Dimensions - Length: " << box.length << ", Width: " << box.width << endl;

    return 0;
}