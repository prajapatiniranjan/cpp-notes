
/*Write a program to accept three integer number1, number2 and number3 from user.
 Perform addition of number1 and number2 and store the result in sum variable.
 Perform subtraction of number3 and sum and store the result in subtraction variable.
Print the values of sum and subtraction on console.*/

#include <iostream>
using namespace std;
int main()
{
    cout << "Enter Number 1" << '\n';
    int number1;
    cin >> number1;

    cout << "Enter Number 2" << '\n';
    int number2;
    cin >> number2;

    cout << "Enter Number 3" << '\n';
    int number3;
    cin >> number3;

    int sum = number1 + number2;

    int subtraction = number3 - sum;

    cout << "Sum of number 1 and number 2: " << sum << "\n";
    cout << "Result of number 3 - sum: " << subtraction << "\n";

    return 0;
}