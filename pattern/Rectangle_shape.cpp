#include <iostream>
using namespace std;

int main() {
    int n, col, row;
    cin >> n;

    for (row = 1; row <= n; row++) {
        for (col = 1; col <= n; col++) {
            if (row == 1 || row == n || col == 1 || col == n) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << "\n";  // Now only one newline per row
    }

    return 0;
}
