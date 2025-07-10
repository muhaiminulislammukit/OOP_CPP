#include<bits/stdc++.h>
using namespace std;
int x=10 ; //global variable
void display(){
    cout<< "inside the display function"<< x << endl;
}
int main ()
{
 cout<< "inside the main function"<< x << endl;
 display();
    return 0;
}