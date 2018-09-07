//write a c++ program to input any alphabet and then check whether it is vowel or a consonant.
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
 if ((ch =='a'|| ch == 'e'|| ch == 'i'|| ch == 'o' || ch == 'u') || (ch == 'A'|| ch =='E' || ch == 'I' || ch == 'O' || ch == 'U'))
 cout <<"The character "<<ch<<" is a vowel.";
 else
 cout <<"The character "<<ch<< " is a consonant";
//ending
return 0;
}
