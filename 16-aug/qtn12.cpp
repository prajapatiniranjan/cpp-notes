/*
If you know the balance and the annual percentage interest rate,
 you can compute the interest on the next monthly payment using the following formula:

interest = balance x (annualInterestRate/1200)

Write a program that reads the balance and the annual percentage interest rate 
and displays the interest for the next month.

*/ 

#include <iostream>
using namespace std;
int main ()
{
    double balance;
    double annual_percentage;

    cout << "Enter the balance" << "\n";
    cin >> balance;

    cout << "Enter the Annual Percentage" << "\n";
    cin >> annual_percentage;

    double intrest = balance * (annual_percentage/1200);

    cout << "The interest for the next month is " << intrest << "\n";

    return 0;
}