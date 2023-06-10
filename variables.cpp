// Variables are like containers which are used to hold data

/*
Scope of variables: Global & Local
*/

/*
Basic Datatypes
1. Integer -> 1,2,-1,0
2. Float -> 1,21,2.21
3. Character -> 'a','b','A'
4. Double -> used to decimal number of high precision
5. Boolean -> True or False

User defined Datatypes
1. Struct
2. Union
3. Enum

Derived Datatypes
1. Pointers
2. Arrays
3. Function
*/

#include <iostream>
using namespace std;
int x = 98; // global variable
void sum()
{
    cout << x;
}
int main()
{
    // int a = 14;
    // int b = 15;
    x = 5;     // local variable
    int x = 3; // overwriting of variable
    int a = 15, b = 14;
    float pi = 3.14;
    double c = 78.28768;
    char ch = 'd';
    bool y = false;
    cout << "The value of a is " << a
         << "\nThe value of b is " << b
         << "\nThe value of pi is " << pi
         << "\nThe value of ch is " << ch
         << "\nThe value of c is " << c;
    cout << "\n"
         << x;
    sum();
    cout << "\n"
         << y;
    return 0;
}
