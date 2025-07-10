#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;  // Number of rows

    int num = 1;  // Start from 1

    for (int row = 1; row <= n; row++) {
        for (int col = 1; col <= row; col++) {
            cout << num << " ";
            num++;
        }
        cout << "\n";
    }

    return 0;
}
