//write a c++ program to enter any number and check whether the number is palindrime or not.
//including the library
#include <iostream>
using namespace std;
//include function
int main(){
//declaring the variables
int n, num, digit, rev = 0;
cout << "enter a positive integer: ";
cin >> num;
do
{
//stating the conditions 
digit = num % 10;
rev = (rev*10) + digit;
num = num/10;
}
while (num != 0);
cout << " the reverse of the number is: "<< rev<< endl;
if (n == rev)
cout << " the number is a palindrome";
else
cout <<"the number is not a palindrome";
//ending
return 0;
}
