//write a c++ program to find sum of all prime numbers between 1 to n.
//including the library
#include <iostream>
using namespace std;
//include the function
int main(){
//declaring variables
int n, sum = 0;
cout << "enter a positive integer: ";
cin >> n;
//dtating conditions
for (int a = 1; a <= n; ++a){
sum += a;
}
cout << "sum = " << sum;
//ending
return 0;
}
