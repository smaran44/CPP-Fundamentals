#include <iostream>

void printMessage() {
    std::cout << "Hello from Global Scope!" << std::endl;
}

int main() {
    printMessage();
    return 0;
}
