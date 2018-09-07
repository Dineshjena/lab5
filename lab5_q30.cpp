//write a c++ program to print the multiplication table of a number.
//include library
#include <iostream>
using namespace std;
//including function
int main()
{
//declaring variables
 int n;
//stating conditions
 cout <<"enter a number: ";
 cin >> n;
 for (int a = 1; a <= 10; a++)
 {  
   cout<<" "<<'\n'<<n<<" "<<"*"<<a<<" "<<"="<<n*a;
 }
//ending
return 0;
}


