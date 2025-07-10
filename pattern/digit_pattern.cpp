#include<bits/stdc++.h>
using namespace std;
int main ()
{/* 1
    1 2
    1 2 3
    */
   int n, row, col;
   cin >> n ;
   for ( row=1; row<=n;row++){
         for (col=1; col<=row; col++){
           cout << col << " ";
         }
         cout << endl;
   }

    return 0;
}