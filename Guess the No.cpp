
#include <iostream>
using namespace std;

int main() {
    int number = 50; // the number to guess
    int guess;

    cout << "Guess the number between 1 and 100: ";
    cin >> guess;

    while (guess != number) {
        if (guess < number) {
            cout << "Too low! Try again: ";
        } else {
            cout << "Too high! Try again: ";
        }
        cin >> guess;
    }

    cout << "Congratulations! You found the number.";

    return 0;
}
