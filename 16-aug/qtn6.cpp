/*Write a program to solve the given expression
 result = number1 + number2 - number3 * number4 / number5.
Accept number1, number2, number3, number4 and number5 of type int form user.
 Print the result on the console in the below format.
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

    cout << "Enter Number 3" << "\n";
    int number3;
    cin >> number3;

    cout << "Enter Number 4" << "\n";
    int number4;
    cin >> number4;

    cout << "Enter Number 5" << "\n";
    int number5;
    cin >> number5;

    int result = number1 + number2 - number3 * number4 / number5;
    //     10 + 20 - 5 * 10 / 2 = 5

    cout << number1 << " + "
         << number2 << " - "
         << number3 << " * "
         << number4 << " / "
         << number5 << " = "
         << result << "\n";

    return 0;
}
