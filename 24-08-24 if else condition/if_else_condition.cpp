/*
        if else condition statement:-
        syntax:-

        if (condition)
        {
        //statement
        }
        else
        {
        //statement
        }
*/

/*
 WAP to accept a number from user and check whether the given number is even or odd.
 if the number is even print even number otherwise odd number.

*/

#include <iostream>
using namespace std;
int main()
{
    int number = 0;
    cout << "Enter a number" << "\n";
    cin >> number;

    if (number % 2 == 0){
        cout << "The number is even" << "\n";
    }

    else{
        cout << "The number is odd" << "\n";
    }
    return 0;
}