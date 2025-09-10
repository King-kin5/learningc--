#include <iostream>
using namespace std;
// A reference variable is an alias for an existing variable. It is created using the & operator:
string food = "Pizza";
string &meal = food;

cout << food << "\n";  // Outputs Pizza
cout << meal << "\n";  // Outputs Pizza

//Updating Through References
//If you change the value of a reference variable,
// the original variable will also change (and vice versa), 
//because they both refer to the same memory location

string food = "Pizza"; // food variable
string &meal = food;   // reference to food

meal = "Burger"; // changes both meal and food

cout << food << "\n"; // Outputs Burger
cout << meal << "\n"; // Outputs Burger

//You learned from the previous chapter, 
//that we can get the memory address of a variable by using the & operator
string food = "Pizza"; // A food variable of type string

cout << food;  // Outputs the value of food (Pizza)
cout << &food; // Outputs the memory address of food (0x6dfed4)
