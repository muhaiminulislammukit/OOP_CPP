#include<bits/stdc++.h>
using namespace std;
int main ()
{
    char ch ;
    cin >>ch ;
    ch =toupper(ch);
    if (ch=='A'|| ch=='R'|| ch=='I'|| ch=='O'||ch=='U'){
            cout<< "vowel";
    }

    else {
        cout << "consonant";
    }
    return 0;
}