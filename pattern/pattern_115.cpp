#include <iostream>
using namespace std;

int main() {
   
    int n, row, col;
    
    cin >> n;
    for (row = 1; row <= n; row++) {
        for (col = 1; col <= n; col++) {
            cout << char(col+64) << " ";
        }
        cout << "\n";
    }

    return 0;
}
