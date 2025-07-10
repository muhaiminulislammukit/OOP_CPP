#include<bits/stdc++.h>
using namespace std;
int x = 40; //global variable 
int main ()
{  
  int x=10;  //local variable 
  :: x =90; //change  global value 
  cout << ::  x ; //:: name is scope
    return 0;
}