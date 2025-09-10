#include <isostream>
using namespace std;
//for-each loop" , which is used exclusively to loop through elements in an array
int main(){
    // Create an array of strings
  string cars[5] = {"Volvo", "BMW", "Ford", "Mazda", "Tesla"};

  // Loop through strings
  for (string car : cars) {
  cout << car << "\n";
  }
}