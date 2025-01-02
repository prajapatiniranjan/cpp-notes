/*
WAP to accept a number from uer. if the number is equal to 100 ,we will print hello world
*/ 

#include <iostream>
using namespace std;
int main()
{
    cout << "Enter  a number" << "\n";
    int number = 0;
    cin >> number;

    if(number == 100)
    {
        cout << "Hello World" << "\n";
    }
    return 0; 
}