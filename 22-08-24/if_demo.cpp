/*
WAP to print hello world if user enter number greater than 10
*/

#include <iostream>
using namespace std;
int main()
{
    cout << "Enter the number greater than 10 to print hello world" << "\n";
    int number = 0;
    cin >> number;

    if (number > 10)
    {
        cout << "Hello World" << "\n";
    }
}
