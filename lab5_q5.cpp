//write a c++ program to check whether a number is even or not.
//including the library
#include <iostream>
using namespace std;
//include function
int main(){
//declaring variables
int num;
cout << "enter your number\n";
cin >> num;
//stating the conditions
if (num %2 == 0){
cout << "this number is even";
}
else {
cout <<"this number is odd";
}
//ending
return 0;
}
