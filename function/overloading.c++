//Function overloading allows multiple functions to have the same name, as long as their parameters are different in type or number:
int myFunction(int x)
float myFunction(float x)
double myFunction(double x, double y)
//Using Function Overloading
//Instead of defining two functions that should do the same thing, it is better to overload one.
//In the example below, we overload the plusFunc function to work for both int and double:
int plusFunc(int x, int y) {
  return x + y;
}

double plusFunc(double x, double y) {
  return x + y;
}

int main() {
  int myNum1 = plusFunc(8, 5);
  double myNum2 = plusFunc(4.3, 6.26);

  cout << "Int: " << myNum1 << "\n";
  cout << "Double: " << myNum2;
  return 0;
}
//In this example, we overload a function by using a different number of parameters:
int plusFunc(int x, int y) {
  return x + y;
}

int plusFunc(int x, int y, int z) {
  return x + y + z;
}

int main() {
  int result1 = plusFunc(3, 7);
  int result2 = plusFunc(1, 2, 3);

  cout << "Sum of 2 numbers: " << result1 << "\n";
  cout << "Sum of 3 numbers: " << result2;
  return 0;
}