/*
WAP to accept a number from user, if the number is greater than 100 print greater than 100, otherwise print less than 100.

*/

#include <iostream>
using namespace std;
int main()
{
    int number = 0;
    cout << "Enter a number" << "\n";
    cin >> number;

    if (number > 100){
        cout << "the number is greater than 100" << "\n";
    }
    else{
        cout << "the number is less than 100" << "\n";
    }
    return 0;
}  