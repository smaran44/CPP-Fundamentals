#include <iostream>
#include <algorithm> // For reverse()
using namespace std;

int main() {
    string str = "Programming";

    reverse(str.begin(), str.end());

    cout << "Reversed string: " << str << endl;

    return 0;
}
