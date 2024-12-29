/*
q2. wap to find out the given number is prime or not
*/

#include <iostream>
using namespace std;
int main()
{

    int k = 0;
    bool f = false;

    int number = 0;
    cout << "enter any number " << "\n";
    cin >> number;

    do
    {
        k = number - 1;
        if (number % k == 0)
        {
            f = true;
            break;
        }
        k--;

    } while (k > 1);
    if (f == true)

    {
        cout << "Number is not prime" << number << "\n";
    }
    else
    {
        cout << " prime number";
    }
}