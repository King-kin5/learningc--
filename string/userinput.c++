#include <iostream>
#include <string>
using namespace std;
int main(){

    string name;
    cout << "Enter your name: ";
    getline(cin,name); // Use getline to read a full line including spaces
    cout << "Your name is:" << name <<endl;

}
// cin considers  a space (whitespace, tabs, etc) as a 
//terminating character, which means that it can only store a single word (even if you type many words)
