#include <iostream>
using namespace std;
int main()
{
    // << insertion operator
    // >> extraction operator
    int num1, num2;
    cout << "Enter the value of num1:\n";
    cin >> num1;
    cout << "Enter the value of num2:\n";
    cin >> num2;
    cout << "The sum is:\n"
         << num1 + num2;
    return 0;
}