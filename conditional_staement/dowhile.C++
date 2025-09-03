#include <iostream>
#include <string>
using namespace std;
// The do...while loop is a variant of the while loop.
// This loop will execute the code block once, before checking if the condition is true,
// then it will repeat the loop as long as the condition is true.
main(){
    int i=1;
    do{
        cout << i << "\n";
        i++;
    }while(i<=5);
}