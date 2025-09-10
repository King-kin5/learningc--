// Nested loops can be defined as a loop inside another loop
#include <iostream>
using namespace std;

int main(){
    // Outer loop
for (int i = 1; i <= 2; ++i) {
  cout << "Outer: " << i << "\n"; // Executes 2 times

  // Inner loop
  for (int j = 1; j <= 3; ++j) {
    cout << " Inner: " << j << "\n"; // Executes 6 times (2 * 3)
  } 
 }
}
//Multiplication Table Example
//for (int i = 1; i <= 3; i++) {
 // for (int j = 1; j <= 3; j++) {
    //cout << i * j << " ";
 // }
 // cout << "\n";
//}



//int number = 2;
//int i;
// Print the multiplication table for the number 2
//for (i = 1; i <= 10; i++) {
  //cout << number << " x " << i << " = " << number * i << "\n";
//}