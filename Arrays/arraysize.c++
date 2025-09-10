#include <isostream>
using namespace std;
int main(){
    int myNumbers[5] = {10, 20, 30, 40, 50};
   cout << sizeof(myNumbers);
   // reuslt is 20
   // that is  because the sizeof() operator returns the size of a type in bytes.
   //int type is usually 4 bytes, so from the example above, 4 x 5 (4 bytes x 5 elements) = 20 bytes.

   //To find out how many elements an array has, you have to divide the size of
   // the array by the size of the first element in the array
   int myNumbers[5] = {10, 20, 30, 40, 50};
   int getArrayLength = sizeof(myNumbers) / sizeof(myNumbers[0]);
  cout << getArrayLength;

  //Loop Through an Array with sizeof()
  int myNumbers[5] = {10, 20, 30, 40, 50};
   for (int i = 0; i < sizeof(myNumbers) / sizeof(myNumbers[0]); i++) {
   cout << myNumbers[i] << "\n";
   }

   //, you can also use the "for-each" loop, which is even cleaner and simpler:
   int myNumbers[5] = {10, 20, 30, 40, 50};
for (int num : myNumbers) {
  cout << num << "\n";
}

}