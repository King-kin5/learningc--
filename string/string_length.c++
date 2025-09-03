#include <iostream>
#include <string>
using namespace std;
int main(){
    string str;
    cout << "Enter a string: ";
    getline(cin, str); // Use getline to read a full line including spaces
    int length = str.length(); // Get the length of the string
    int size=str.size(); // Get the size of the string
    cout << "Size of the string is: " << size << endl;
    cout << "Length of the string is: " << length << endl;
    return 0;
}