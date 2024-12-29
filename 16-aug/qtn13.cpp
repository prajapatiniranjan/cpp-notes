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
int main ()
{

    // divison for the first turn
    cout << "enter the integer dividend" << "\n";
    int divident;
    cin >> divident;

    cout << "enter the integer divisor" << "\n";
    int divisor;
    cin >> divisor;

    // calculating the remainder 

    int remainder = divident % divisor;
    cout << "The remainder is = " << remainder << "\n";

    // repeat the procedure for shyaam
    cout << "enter the integer dividend  for second turn" << "\n";
    cin >> divident;

    cout << "enter the integer divisor for second turn" << "\n";
    cin >> divisor;
    
    remainder = divident % divisor;
    cout << "The remainder for second turn is = " << remainder << "\n";


    return 0;
}