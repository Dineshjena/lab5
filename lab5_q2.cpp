//write a c++ program in which bigger between three numbers.
//including library
#include <iostream>
using namespace std;
//including function
int main()
{
//asking for condition
 int a,b,c;
 cout <<"enter first number:";
 cin >> a;
 cout << "enter second number:";
 cin >> b;
 cout << "enter third number:";
 cin >> c;
//use of if and else
 if (a > b && a > c)
 {cout<<"The largest number is "<<a;}
 if (b > a && b > c)
 {cout<<"The largest number is "<<b;}
 else 
 cout<<"The largest number is "<<c;
//ending
return 0; 
}
