#include <iostream>
using namespace std;
int main()
{
    int number = 0;
    cout << "Enter a number" << "\n";
    cin >> number;

    if (number % 5 == 0)
    {
        cout << "The number is divisible by 5" << "\n";
    }
    else
    {
        cout << "The number is not divisible by 5" << "\n";
    }
    return 0;
}
