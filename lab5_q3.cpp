//c++ program to find whether a number is negative , positive or zero.
//including library
#include <iostream>
using namespace std;
//including function
int main()
{
//asking for condition
 int a;
 cout <<"enter the number:";
 cin >> a;
//use of if and else
 if (a > 0)
 cout<<"The number "<<a<<" is positive";
 else if (a < 0)
 cout<<"The number "<<a<<" is negative";
 else 
 cout<<"The number "<<a<<" zero";
//ending
return 0;
}
