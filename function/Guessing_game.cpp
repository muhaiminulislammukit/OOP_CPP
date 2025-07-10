#include <bits/stdc++.h>
using namespace std;

int main() {
    srand(time(0)); // Seed for random number generation

    while (true) {
        int gessingNumber;
        int rndomNumber = rand() % 5 + 1; // Generate number between 1 and 5

        cout << "Guess the number (1 to 5): ";
        cin >> gessingNumber;

        if (gessingNumber == rndomNumber) {
            cout << "You have won!" << endl << endl;
        } else {
            cout << "You have lost. Try again." << endl;
            cout << "Random number was: " << rndomNumber << endl << endl;
        }
    }

    return 0;
}
