#include<bits/stdc++.h>
using namespace std;
int main ()
{
 int i, n, count=0;
 cin >> n;
 for(i=2;i<n;i++){
    
    if (count%i==0){
        count++;
        break;
    }
 }
 if(count==0){
    cout<<"Prime number"<<endl;
 }
 else{
    cout<<"Not prime number"<<endl;
 }
    return 0;
}