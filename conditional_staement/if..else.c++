
//You already know that C++ supports familiar comparison conditions from mathematics, such as:

//Less than: a < b
//Less than or equal to: a <= b
//Greater than: a > b
//Greater than or equal to: a >= b
//Equal to a == b
//Not Equal to: a != b

//C++ has the following conditional statements:

//Use if to specify a block of code to be executed, if a specified condition is true
//Use else to specify a block of code to be executed, if the same condition is false
//Use else if to specify a new condition to test, if the first condition is false
//Use switch to specify many alternative blocks of code to be executed

#include <iostream>
#include <string>
using namespace std;
int main(){
int myNum = 10; // Is this a positive or negative number?

if (myNum > 0) {
  cout << "The value is a positive number.\n";
} else if (myNum < 0) {
  cout << "The value is a negative number.\n";
} else {
  cout << "The value is 0.\n";
}
}