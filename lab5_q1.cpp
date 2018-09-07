//c++ program to find the maximum between two numbers.
//including library
#include <iostream>
using namespace std;
//including function
int main()
{
//asking for condition
 int a,b;
 cout <<"enter the first number:";
 cin >> a;
 cout << "enter the second number:";
 cin >> b;
//use of if and else
 if ( a > b)
 cout<<"The largest number is "<<a;
 else if (b > a)
 cout<<"The largest number is "<<b;
 else 
 cout<<"The numbers are equal";
 return 0;
}
