/* Write a program to accept two numbers numerator and denominator of type int from user. 
Perform modulo-division and store the result in remainder variable. 
Print the value of remainder on the console.*/ 

#include <iostream>
using namespace std;
int main()
{
    cout << "Enter the Numerator" << "\n";
    int numerator;
    cin >> numerator;

    cout << "Enter the Denomirator" << "\n";
    int denomirator;
    cin >> denomirator;
    
    int remainder = numerator % denomirator;
    cout << "Remainder is = " << remainder;
    return 0;

}