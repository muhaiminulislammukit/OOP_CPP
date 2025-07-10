#include <bits/stdc++.h>
using namespace std;

void displayArray(int num[], int size) {
    for (int i = 0; i < size; i++) {
        cout << num[i] << " ";
    }
    cout << endl;
}

int main() {
    int n[5] = {10, 20, 30, 40, 50};
    displayArray(n, 5);
    return 0;
}
