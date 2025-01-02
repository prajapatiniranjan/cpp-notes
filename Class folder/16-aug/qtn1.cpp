/*
Write a program to accept three integer number1, number2 and number3 from user.
 Print the values of number1, number2 and number3 on console.
*/

#include <iostream>
using namespace std;
int main()
{
    cout << "Enter an integer number1" << "\n";
    int number1;
    cin >> number1;

    cout << "Enter an integer number1" << "\n";
    int number2;
    cin >> number2;

    int result = number1 + number2;
    cout << result;

    return 0;
}