#include<bits/stdc++.h>
using namespace std;
int main ()
{
  int n, sum = 0, tem, rem;
    cin >> n;
    tem = n;

    while (tem != 0) {
        rem = tem % 10;    
        sum = sum*10 + rem;   
        tem = tem / 10;     
        
    }
    if(n=sum){
        cout<<"palindom number";
    }
    else{
        cout<< "Not palindom number";
    }
    return 0;
}