#include <iostream>
using namespace std;

int main()
{
    int n, row, col, count = 0;
    cin >> n;
    for (row = 1; row <= n; row++)
    {
        for (col = 1; col <= n; col++)
        {
            cout << count++;
        }
        cout << "\n";
    }
    return 0;
}
