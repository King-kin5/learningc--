// When you do not want others (or yourself) to change existing variable values,
// use the const keyword
//(this will declare the variable as "constant", which means unchangeable and read-only)
#include <iostream>
using namespace std;
int main(){
    const int myNum = 15;  // myNum will always be 15
    myNum = 10;   // error: assignment of read-only variable 'myNum'
}