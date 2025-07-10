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

};

int main ()
{    
    students mukit ;
    mukit.gpa=3.69;
    mukit.id = 103;
    mukit.display();
    

    students sorwar ;
    sorwar.gpa=3.23;
    sorwar.id = 105;
    cout << sorwar.id << "  " << sorwar.gpa;
 
    return 0;
}