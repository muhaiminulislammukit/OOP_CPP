#include<bits/stdc++.h>
using namespace std;

class students
{
    public :
        int id;
        double gpa;
         
        void display(){
             cout << id << "  " << gpa <<endl;  
            

        }
        void setvallue(int x , double y){
            id = x; 
            gpa = y;
        }

};

int main ()
{    
    students mukit , sorwar ;

     mukit.setvallue(103 , 3.69);
     mukit.display();
     
    sorwar.setvallue(105 , 3.23);
    sorwar.display();
   
    
 
    return 0;
}