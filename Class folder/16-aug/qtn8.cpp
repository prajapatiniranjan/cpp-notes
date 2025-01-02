/*
Write a program to accept two floating point numbers from user.
And perform multiplication and division on the numbers.
Display the result on console.
*/

#include <iostream>
using namespace std;
int main()
{
    cout << "Enter any decimal Number 1"
            "\n";
    float number1;
    cin >> number1;

    cout << "Enter any decimal Number 2"
            "\n";
    float number2;
    cin >> number2;

    int division = number1 / number2;

    int multiplication = number1 * number2;

    cout << division << "\n";
    cout << multiplication << "\n";

    return 0;
}