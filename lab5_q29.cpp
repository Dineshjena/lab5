//write a c++ program to find sum of odd natural numbers from 1 to n.
//include library
#include <iostream>
using namespace std;
//including function
int main()
{
//declaring variables
 int n, sum =0;
//stating conditions
 cout <<"enter a number:";
 cin >> n;
 for (int a = 1; a <= n; a++)
 { if (a % 2 != 0) 
  sum += a;
 }
cout <<"Sum = "<< sum;
//ending
return 0;
}


