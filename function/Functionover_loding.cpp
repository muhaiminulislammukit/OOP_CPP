#include<bits/stdc++.h>
using namespace std;
void sum (int x, int y){
    int add = x+y;
    cout << add <<endl;
}
void sum (int a, int b , int c){
 int result = a+b-c;
 cout <<  result << endl;
}
int main (){
 sum (34,56);
sum (34,56,76);
 
    return 0;
}