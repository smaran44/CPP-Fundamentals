#include <iostream>
#include <algorithm> // For reverse()
using namespace std;

bool isPalindrome(string str) {
    string reversed = str;
    reverse(reversed.begin(), reversed.end());

    return str == reversed;
}

int main() {
    string word;
    cout << "Enter a word: ";
    cin >> word;

    if (isPalindrome(word)) {
        cout << word << " is a palindrome!" << endl;
    } else {
        cout << word << " is not a palindrome!" << endl;
    }

    return 0;
}
