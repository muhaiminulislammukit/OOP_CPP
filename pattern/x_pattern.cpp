#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    // Ensure odd n for perfect symmetry (optional)
    for (int row = 1; row <= n; row++) {
        for (int col = 1; col <= n; col++) {
            if (col == row || col == (n - row + 1)) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << "\n";
    }

    return 0;
}
