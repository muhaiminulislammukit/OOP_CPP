#include<bits/stdc++.h>
using namespace std;
int main ()
{
  int x,y,hi;

    double trapezoid;


    cin>>x>>y>>hi;

    trapezoid=float((x+y)*hi)/2;

    cout<< setw(20)<<"trapezoid is= "<<trapezoid<<endl;

    cout<<endl;
    return 0;
}