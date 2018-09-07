//write a c++ program to find whether a year is a leap year or not.
//including library
#include <iostream>
using namespace std;
//including function
int main()
{
//asking for condition
 int year;
 cout <<"Enter year ";
 cin >>year;
//use of if and else
 if (year % 4 == 0)
 cout<<"The year "<<year<<" is a leap year";
 else
 cout<<"The year "<<year<<" is not a leap year";
 return 0;
}
