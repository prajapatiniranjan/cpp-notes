#include <iostream>
using namespace std;

int main()
{
    int num, sum = 0, i = 1;

    // Taking input from the user
    cout << "Enter a number: ";
    cin >> num;

    // Using a while loop to find divisors and calculate their sum
    while (i < num)
    {
        if (num % i == 0)
        {
            sum += i;
        }
        i++;
    }

    // Checking if the sum of divisors is equal to the original number
    if (sum == num)
    {
        cout << num << " is a perfect number." << endl;
    }
    else
    {
        cout << num << " is not a perfect number." << endl;
    }

    return 0;
}
