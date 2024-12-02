#include <iostream>
using namespace std;
int main()
{
    int number = 0;
    int reverse = 0;
    int digit = 0;

    cout << "enter number"  << "\n";
    cin >> number;
    while(number != 0)
    {
        digit = number % 10; 
        reverse = reverse * 10 + digit;
        number /= 10;
    }
    cout << reverse << "\n";
    return 0;
}