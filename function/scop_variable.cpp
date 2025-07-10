#include<bits/stdc++.h>
using namespace std;
int x = 40; //global variable 
int main ()
{  
  int x=10;  //local variable 
  cout << ::  x ; //:: name is scope
    return 0;
}