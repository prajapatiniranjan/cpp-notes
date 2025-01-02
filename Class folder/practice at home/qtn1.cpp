/*Write a program that takes two integers as input and prints their sum.

*/

#include <iostream>
using namespace std;
int main()
{
    cout << "Enter an Integer " << "\n";
    int number1;
    cin >> number1;

    cout << "Enter an Integer" << "\n";
    int number2;
    cin >> number2;

    int sum = number1 + number2;
    cout << "The sum of " << number1 << "and " << number2 << "is =" << sum << "\n";

    return 0;


}