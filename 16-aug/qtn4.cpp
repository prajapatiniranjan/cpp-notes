/*Write a program to accept two numbers numerator and denominator of type float from user. 
Perform division and store the result in quotient variable. 
Print the value of quotient on the console.*/

#include <iostream>
using namespace std;
int main()
{
    cout << "Enter the numerator" << "\n";
    float numerator;
    cin >> numerator;

    cout << "Enter the denominator" << "\n";
    int denominator;
    cin >> denominator;

    int quotient = numerator / denominator ;
    cout << quotient;
    
    return 0;
}
