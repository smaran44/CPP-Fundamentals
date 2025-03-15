#include <iostream>
using namespace std;

int main() {
    string questions[] = {"What is 2 + 2?", "What is 5 * 3?", "What is 10 / 2?"};
    int answers[] = {4, 15, 5};
    int score = 0, userAnswer;

    for (int i = 0; i < 3; i++) {
        cout << questions[i] << endl;
        cout << "Your answer: ";
        cin >> userAnswer;

        if (userAnswer == answers[i]) {
            cout << "Correct!" << endl;
            score++;
        } else {
            cout << "Wrong! The correct answer was " << answers[i] << endl;
        }
    }

    cout << "Final Score: " << score << "/3" << endl;
    return 0;
}
