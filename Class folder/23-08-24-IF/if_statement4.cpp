
#include <iostream>
using namespace std;
int main()
{
    int pin_number = 0;
    int correct_pin_number = 1234;

    cout << "Enter the pin number" << "\n";
    cin >> pin_number;

    if (pin_number == correct_pin_number)
    {
        cout << "Withdrawal Successful" << "\n";
    }
    return 0;
}