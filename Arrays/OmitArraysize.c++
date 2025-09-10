#include <isostream>
using namespace std;
//Vectors 
//For operations that require adding and removing array elements, C++ provides vectors, which are resizable arrays.
//The size of a vector is dynamic, meaning it can grow and shrink as needed.
//Vectors are found in the <vector> library, and they come with many useful functions to add, remove and modify elements
int main(){
    // A vector with 3 elements
vector<string> cars = {"Volvo", "BMW", "Ford"};

// Adding another element to the vector
cars.push_back("Tesla");

}