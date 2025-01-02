/*
Ravi and Shyam were playing a game. In the first turn of the game,
Ravi will give an integer dividend and an integer divisor to Shyam.
 Then Shyam has to tell him the remainder of the division. In the second turn,
 Shyam will repeat the procedure.
To help them, please write a program that accepts Dividend,
and Divisor from the user and print the remainder on the console.
*/

#include <iostream>
using namespace std;
int main()
{
    // In the first turn of the game.
    cout << "enter the dividen " << "\n";
    int dividend;
    cin >> dividend;

    cout << "enter the divisor " << "\n";
    int divisor;
    cin >> divisor;

    int remainder = dividend % divisor;
    cout << "In the first turn of the game the remiander is = " << remainder << "\n";

    // In the second turn of the game.

    cout << "enter the dividen " << "\n";
    cin >> dividend;

    cout << "enter the divisor " << "\n";
    cin >> divisor;

    remainder = dividend % divisor;
    cout << "In the second turn of the game the remiander is = " << remainder << "\n";

    return 0;
}