#include<bits/stdc++.h>
using namespace std;
int main ()
{
 int mark;
 cin >> mark ;
    
      if (mark>100){
        cout<< "Invalid mark";
      }

       else if (mark < 0){
        cout<< "Invalid mark";
      }
      else if (mark>=80){
        cout<< "A+";
      }
      else if (mark>=70){
        cout<< "A";
      }
      else if (mark>=60){
        cout<< "A-";
      }
      else if (mark>=50){
        cout<< "B";
      }
      else if (mark>=40){
        cout<< "C";
      }
      else if (mark>=0){
        cout<< "D";
      }

      else{
        cout<<"Fail";
        cout <<"Batter try next time ";
      }
    return 0;
}