#include <iostream>
using namespace std;
int main()
{
    int number =0;
   int sum = 0;
   int digit = 0;

    cout << "enter a number " << "\n";
    cin >> number;

    while (number != 0)
    {
        digit = number % 10;
        sum += digit;
        number /=10;
    }
    cout << "Sum of all digit " << sum << "\n";
    return 0;
}