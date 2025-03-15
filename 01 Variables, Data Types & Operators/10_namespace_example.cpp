#include <iostream>

namespace MyNamespace {
    void printMessage() {
        std::cout << "Hello from MyNamespace!" << std::endl;
    }
}

int main() {
    MyNamespace::printMessage();  // Using namespace function
    return 0;
}
