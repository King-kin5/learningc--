//A lambda function is a small, anonymous function you can write directly in your code. 
//It's useful when you need a quick function without naming it or declaring it separately.
//Think of it as a "mini function on the fly."

//Basic Lambda Example
int main() {
  auto message = []() {
    cout << "Hello World!\n";
  };

  message();
  return 0;
}
//Lambda with Parameters
#include <iostream>
using namespace std;

int main() {
  auto add = [](int a, int b) {
    return a + b;
  };

  cout << add(3, 4);
  return 0;
}
//Passing Lambdas to Functions

//You can also pass a lambda function as an argument to another function.
//This is useful when you want to tell a function what to do, not just what data to use.
#include <iostream>
#include <functional> // Needed for std::function
using namespace std;

// A function that takes another function as parameter
void myFunction(function<void()> func) {
  func();
  func();
}

int main() {
  auto message = []() {
    cout << "Hello World!\n";
  };

  myFunction(message);
  return 0;
}

//Using Lambdas in Loops
//You can define and use a lambda function inside a loop, which are great for quick actions:
#include <iostream>
using namespace std;

int main() {
  for (int i = 1; i <= 3; i++) {
    auto show = [i]() {
      cout << "Number: " << i << "\n";
    };
    show();
  }
  return 0;
}

//Capture Clause []
// You can use the [ ] brackets to give a lambda access to variables outside of it.

//This is called the capture clause.

//In this example, the lambda captures the variable x by value (a copy):
int main() {
  int x = 10;
  auto show = [x]() {
    cout << x;
  };

  show();
  return 0;
}

//Capture by Reference
//If you want the lambda to use the latest value of a variable (not just a copy), you can use [&] to capture it by reference.
//This means the lambda will work with the original variable, not a separate copy:
int main() {
  int x = 10;

  auto show = [&x]() {
    cout << x;
  };

  x = 20;  // Change x after the lambda is created

  show();
  return 0;
}
/*
Regular Functions vs Lambda Functions
Both regular functions and lambda functions let you group code and run it later, but they are used in slightly different situations.

Use a regular function when:
You plan to reuse the function in multiple places
You want to give the function a clear, meaningful name
The logic is long or complex
Use a lambda function when:
You only need the function once
The code is short and simple
You want to pass a quick function into another function
*/