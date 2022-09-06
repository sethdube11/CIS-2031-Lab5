#include <iostream>
#include <string>
using std::cout;
using std::string;
using std::endl;

//Step 0:   Try to run the program, and see what goes wrong.

//Step 1:   DECLARE a function named cube that takes one integer as a parameter,
//          and returns an integer. Then try to run your program.

int cube(int);

//Step 2:   DEFINE (or "implement") the cube function, but JUST MAKE IT RETURN ZERO
//          Then run your program

int cube(int n){
   return n*n*n;
}

//Step 3:   In the space above, fix your cube function to return the input cubed


//Step 4:   We will work together to submit these changes to GitHub



//Don't change anything below this line, but feel free to read it and get
//a feel for what is happeining

//Define a function named test that tests the cube function with the
//given input. It prints the results out to the console
void test(int input, int expectedResult);

//The main function. Execution starts here.
void main(){
   //Test the cubed function with a handful of values
   test(0, 0);
   test(1, 1);
   test(2, 8);
   test(3, 27);
   test(10, 1000);
   test(-5, -125);
}

//The definition (or "implementation") of the test function...
void test(int input, int expectedResult){
   //Figure out
   int returned = cube(input);
   cout << "testing cube(" << input << ") = " << returned << "... " ;
   if ( expectedResult == returned ){
      cout << "Correct!" << endl;
   } else {
      cout << "Incorrect, expected " << expectedResult << endl;
   }
}
