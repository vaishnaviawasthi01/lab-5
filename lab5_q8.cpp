//write a c++ program to input any alphabet and check whether it is vowel or consonant.
//including the library
#include <iostream>
using namespace std;
//including function
int main (){
//declaring variables
char ch;
cout <<" enter a character:";
cin >> ch;
if ((ch =='a'|| ch == 'e'|| ch == 'i'|| ch == 'o' || ch == 'u') || (ch == 'A'|| ch =='E' || ch == 'I' || ch == 'O' || ch == 'U')){
cout <<ch<<" -it's a vowel.";
}
else
{
cout <<ch<< " -it is not a vowel";
}
//ending
return 0;
}
