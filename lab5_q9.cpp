//write a c++ program to input any character and then check whether it is an alphabet or a digit or a special character.
//including the library
#include <iostream>
using namespace std;
//including function
int main ()
{
//declaring variables
 char ch;
 cout <<" enter a character:";
 cin >> ch;
 if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
 cout<<"The character "<<ch<<" is an alphabet";
 else if ( ch >= 0 || ch <= 9)
 cout<<"The character "<<ch<<" is a digit";
 else  
 cout<<"The character "<<ch<<" is a special character";
 return 0;
}
