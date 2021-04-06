/*
This is a multi-line comment
It can span multiple lines
They are pretty cool.
*/

//This is a single line comment

#include <iostream>

using namespace std;

int main()
{
    /*
    C++ is a STRONGLY TYPED language. Everything that you create MUST have a type. C++ 11 introduced "auto", 
    but for now we will be using the default types.
    */

   int integer;         //This is an integer
   char character;      //This is a character
   double doubl;        //This is a double, which means it is a decimal value
   bool boolean;        //This is a boolean value, it can only be true or false.

   /*
   There is a FLOAT type in C++, but floats are automatically converted to doubles (unless you specify otherwise)
   A CHAR and an INT are related. A char has an INT value called an ASCII value. Boolean values are also ints, 
   0 is false and ANYTHING that is not 0 is true.
   */

    integer = 123;
    character = 'A';
    doubl = 3.141;
    boolean = false;

  /*
  Above we are assigning a value to each VARIABLE using the assignment operator '='. Characters MUST
  be enclosed in single qoutes ''.
  You can define and assign a variable in one line, this is called initilization.
  */
    int integer1 = 456;
    char character1 = 'B';
    double doubl1 = 1.413;
    bool boolean1 = 1;

 /*
 Variables can be inserted into cout. cout is very unforgiving. If you want a space,
 you must literally put a space. 
 */

    cout <<"Integer = "<<integer<<"\n";
    cout <<"Character = " <<character<<"\n";
    cout <<"Double = " <<doubl<<"\n";
    cout <<"Boolean = "<<boolean<<"\n";

/*
Cout can also be strung together, the only way to get a newline is to 
use a newline operator (\n or endl)
*/

    cout <<"Integer1 = " <<integer1<<"\n"<<"Charcter1 = "<<character1<<"\n"<<"Double1 = "<<doubl1<<"\n"<<"Boolean1 = " << boolean1 <<"\n";

    return 0;
}
