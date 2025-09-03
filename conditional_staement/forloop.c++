#include <iostream>
#include <string>
using namespace std;
// For loop is used to iterate over a range of values or elements in a collection
// It consists of three main parts: initialization, condition, and increment/decrement
// Syntax:
// for (initialization; condition; increment/decrement) {
//     // Code to be executed in each iteration
// }
main(){
for(int i=1; i<=5; i++){
    cout << i << "\n";
}
}
// statement 1 set a variable before the loop starts (int i=1)
// statement 2 defines the condition for the loop to run (i must be less than or equal to 5)
// statement 3 increases a value (i++) each time the code block in the loop has been executed:i++

// example: Print numbers from 1 to 5 using a for loop
// Output:
// 1
// 2
// 3
// 4

//Print Even numbers from 2 to 10 using a for loop
// for(int i=2; i<=10; i+=2){
//     cout << i << "\n";
// }
// Output:
// 2
// 4
// 6
// 8
// 10
//Sum of numbers from 1 to 5
// int sum=0;
// for(int i=1; i<=5; i++){
//     sum+=i; // sum=sum+i
// }
// cout << "Sum is: " << sum << "\n"; // Output: Sum is: 15

// Countdown from 5 to 1
// for(int i=5; i>=0; i--){
//     cout << i << "\n";
// }