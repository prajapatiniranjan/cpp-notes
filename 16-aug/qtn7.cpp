/*
Write a program to accept two integer numbers from user.
And perform addition and substraction.
Display the reuslts of the operation on console.
*/

#include <iostream>
using namespace std;
int main()
{
    cout << "Enter Number 1" << "\n";
    int number1;
    cin >> number1;

    cout << "Enter Number 2" << "\n";
    int number2;
    cin >> number2;

    int addition = number1 + number2;
    cout << addition << "\n";

    int substracttion = number1 - number2;
    cout << "Additon of " << number1 << " and " << number2 << "is =" << addition << "\n";
    cout << "Substracttion of " << number1 << " and " << number2 << "is =" << substracttion << "\n";

    return 0;
}