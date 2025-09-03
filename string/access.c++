#include <iostream>
#include <string>
using namespace std;
int main(){
    string str="Hello, World!";
    cout << str[1] << endl; // Accessing the second character (index 1)
    cout << str[7] << endl; // Accessing the eighth character (index 7)
    return 0;
}
// note you can also use the at( function to access characters in a string)
// example: cout << str.at(1) << endl; // Accessing the second character (index 1)
// example: cout << str.at(7) << endl; // Accessing the eighth character (index 7)