//write a c++ program to print all even numbers between 1 to 100.-using while loop
//including library
#include <iostream>
using namespace std;
//include function
int main (){
//declaring variables
int a = 1;
//stating conditions
while ( a <= 100) {
if (a % 2 == 0){
cout << a<<endl;
}
a++ ;
}
//ending
return 0;
}
