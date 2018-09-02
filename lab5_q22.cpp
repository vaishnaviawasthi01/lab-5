//write a c++ program to print all natural numbers from 1 to n.-using while loop
//include library
#include <iostream>
using namespace std;
//including function
int main(){
//declaring variables
int n, sum =0;
//stating conditions
cout <<"enter a positive integer:";
cin >> n;
for (int a = 1; a <= n; ++a)
{sum += a;
}
cout <<"sum = "<< sum;
//ending
return 0;
}

