#include<bits/stdc++.h>
using namespace std;
int main ()
{
 int n, sum = 0, tem, rem;
    cin >> n;
    tem = n;

    while (tem != 0) {
        rem = tem % 10;    
        sum = sum+ rem *rem *rem ;   
        tem = tem / 10;     
        
    }
    if(sum == n ){
        cout<<"armstong number";
    }
    else
    {
cout << "not armstong number";
    }
    return 0;
}