#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int row = 1; row <= n; row++) {
        for (int col = 1; col <= row; col++) {
            // Print '*' at the border positions
            if (col == 1 || col == row || row == n) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << "\n";
    }

    return 0;
}
