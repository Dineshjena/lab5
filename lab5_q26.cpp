//write a c++ program to print all odd numbers from 1 to 100.
//include library
#include <iostream>
using namespace std;
//including function
int main()
{
//declaring variables
 int a;
//stating conditions
for (a=1; a <= 99; a++)
 { if (a%2 == 0)
   a++;
   cout<<a<<" ";
 }
//ending
return 0;
}


