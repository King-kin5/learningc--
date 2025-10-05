void myFunction(int myNumbers[5]) {
  for (int i = 0; i < 5; i++) {
    cout << myNumbers[i] << "\n";
  }
}

int main() {
  int myNumbers[5] = {10, 20, 30, 40, 50};
  myFunction(myNumbers);
  return 0;
}
//
//Example Explained
//The function (myFunction) takes an array as its parameter (int myNumbers[5]), and loops through the array elements with the for loop.

//When the function is called inside main(), we pass along the myNumbers array, which outputs the array elements.

//Note that when you call the function, you only need to use the name of the array when passing it as an argument myFunction(myNumbers). However, the full declaration of the array is needed in the function parameter (int myNumbers[5]).


//C++ Pass Structures to a Function

struct Car {
  string brand;
  int year;
};

void updateYear(Car& c) {
  c.year++;""
}

int main() {
  Car myCar = {"Toyota", 2020};
  updateYear(myCar);
  cout << "The " << myCar.brand << " is now from year " << myCar.year << ".\n";
  return 0;
}