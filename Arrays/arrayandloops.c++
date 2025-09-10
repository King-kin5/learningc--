#include <iostream>
using namespace std;

//You can loop through the array elements with the for loop.

int main(){
    // Create an array of strings
    string cars[5] = {"Volvo", "BMW", "Ford", "Mazda", "Tesla"};
    // Loop through strings
    for (int i = 0; i < 5; i++) {
     cout << cars[i] << "\n"; 
    }
    //This example outputs the index of each element together with its value
    string cars[5] = {"Volvo", "BMW", "Ford", "Mazda", "Tesla"};
    for (int i = 0; i < 5; i++) {
     cout << i << " = " << cars[i] << "\n";
    }
    //And this example shows how to loop through an array of integers:
    int myNumbers[5] = {10, 20, 30, 40, 50};
    for (int i = 0; i < 5; i++) {
    cout << myNumbers[i] << "\n";
    }
    
}