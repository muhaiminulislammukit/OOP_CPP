#include<bits/stdc++.h>
using namespace std;
int fact (int n){
    if (n==1)
    return 1;
    else 
    return n *fact (n-1);
}

int main ()
{   int factorial = fact (8);
    cout << factorial << endl;
 
    return 0;
}