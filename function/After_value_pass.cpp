#include<bits/stdc++.h>
using namespace std;
void display (int *num){

     *num =20;

}
int main ()
{
 int x = 10 ;
 cout << "After calling the function"<<x <<endl;
 display(&x);
 cout << "After calling the function " <<x << endl;
    return 0;
}