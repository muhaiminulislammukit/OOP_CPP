#include <bits/stdc++.h>
using namespace std;

int main ()
{
    srand(time(0)); // Seed the random number generator once
    while (1)
    {
        int guessingNumber, randomNumber;

        cout << "Enter your guess (1 to 5): ";
        cin >> guessingNumber;

        randomNumber = rand() % 5 + 1; // Random number between 1 and 5

        if (guessingNumber == randomNumber) {
            cout << "You have won!" << endl << endl;
        }
        else {
            cout << "You have lost. Try again." << endl;
            cout << "Random number was: " << randomNumber << endl << endl;
        }
    }

    return 0;
}
