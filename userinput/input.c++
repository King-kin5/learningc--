//You have already learned that cout is used to output (print) values. 
//Now we will use cin to get user input
//cin is a predefined variable that reads data 
//from the keyboard with the extraction operator (>>)
//cout is pronounced "see-out". Used for output, and uses the insertion operator (<<
//cin is pronounced "see-in". Used for input, and uses the extraction operator (>>)

# include <iostream>
using namespace std;

int main(){
    int x,y;
    int sum;
    cout << "Enter a number";
    cin >> x;
    cout  << "Type another number: ";
    cin >> y;
    sum=x+y;
    cout << "Sum is: " << sum;
}