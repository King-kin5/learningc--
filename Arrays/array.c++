#include <iostream>
using namespace std;
int main (){
    string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"};
    int myNum[3] = {10, 20, 30};

    // Acessing the elemnts of an Array
    string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"};
    cout << cars[0];
    // Outputs Volvo


    //Change an Array Element
    string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"};
    cars[0] = "Opel";
    cout << cars[0];
     // Now outputs Opel instead of Volvo

}