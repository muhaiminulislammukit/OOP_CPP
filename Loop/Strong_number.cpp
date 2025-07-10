#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, sum = 0, rem, temp, i, fact;
    cin >> n;
    temp = n;

    while (temp != 0) {
        rem = temp % 10;
        fact = 1;

        for (i = 1; i <= rem; i++) {
            fact = fact * i;
        }

        sum = sum + fact;
        temp = temp / 10; 
    }

    if (sum == n) {
        cout << "Strong number" << endl;
    } else {
        cout << "Not strong number" << endl;
    }

    return 0;
}
