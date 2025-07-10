#include<bits/stdc++.h>
using namespace std;
int main ()
{/* A
    A B
    A B C
    */
   int n, row, col;
   
   cin >> n ;
   for ( row=1; row<=n;row++){
         for (col=1; col<=row; col++){
           cout << char(row + 96)  << " "; 
         }
         cout << endl;
   }

    return 0;
}