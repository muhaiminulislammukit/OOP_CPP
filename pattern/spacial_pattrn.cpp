#include <iostream>
using namespace std;

int main() {
    int n;
    
    cin >> n;

    for (int i = 1; i <= n; i++) {
        // Print spaces to center the pyramid
        for (int space = 1; space <= n - i; space++) {
            cout << " ";
        }
        
        // Print ascending numbers 1 to i
        for (int j = 1; j <= i; j++) {
            cout << j;
        }

        // Print descending numbers i-1 down to 1
        for (int j = i - 1; j >= 1; j--) {
            cout << j;
        }

        cout << "\n";
    }

    return 0;
}
