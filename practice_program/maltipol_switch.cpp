#include<bits/stdc++.h>
using namespace std;
int main ()
{
 char ch;
 cin >> ch ;

 ch = tolower(ch);
 switch (ch)
 {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    cout <<"vowel";
    break;
 
 default:
 cout << " consonant";
    break;
 }
    return 0;
}