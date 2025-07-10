#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, sum = 0, tem, rem;
    cin >> n;
    tem = n;

    while (tem != 0) {
        rem = tem % 10;    
        sum = sum + rem;   
        tem = tem / 10;     
        
    }

    cout << sum << endl;
    return 0;
}
