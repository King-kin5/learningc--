// You might see code that uses "using namespace std;"
// while some don't.
// using namespace std line can be omitted by using std:: before cout, cin, string, etc.
#include <iostream>
#include <string>
int main(){
    std::string name;
    std::cout << "Enter your name: ";
    std::getline(std::cin,name); // Use getline to read a full line including spaces
    std::cout << "Your name is:" << name <<std::endl;

}
