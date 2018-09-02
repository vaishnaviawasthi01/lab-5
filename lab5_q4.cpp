//write a c++ program to check whether a number is divisible by 5 and 11 or not.
//including the library
#include <iostream>
using namespace std;
//include function
int main(){
//declaring the variable
int num;
//stating conditions
cout <<"enter your number\n";
cin >> num;
if (num % 5 == 0 && num % 11 == 0)
{
cout << "this number is divisible by 5 and 11";
}
else{
cout <<"this number is not divisible by 5 and 11";
}
//ending
return 0;
}
