#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    int students[n];
    int sum = 0;
    
    for (int i = 0; i < n; i++) {
        cin >> students[i];
        sum += students[i];
    }

    cout << "Sum: " << sum << endl;

    float avg = (float)sum / n;
    cout << "Average: " << avg << endl;

    int max_val = students[0];
    int min_val = students[0];  

    for (int i = 1; i < n; i++) {
        if (max_val < students[i]) {
            max_val = students[i];
        }
        if (min_val > students[i]) {  
            min_val = students[i];
        }
    }

    cout << "Max: " << max_val << endl;
    cout << "Min: " << min_val << endl;

    return 0;
}
