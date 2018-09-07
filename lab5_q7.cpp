//c++ program to check whether character is an alphabet or not.
//including the library
#include<iostream>
using namespace std;
//include the function
int main()
{
//declaring variables
 char ch;
 cout <<"enter a character:";
 cin >>ch;
 if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <='Z'))
 cout <<"The character "<<ch<< " is an alphabet";
 else 
 cout <<"The character "<<ch<<" is not an alphabet";
//ending
return 0;
}
