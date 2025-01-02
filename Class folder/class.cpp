#include <iostream>
using namespace std;

class Addition
{
public:
    int num1, num2, sum;

    void input()
    {
        cout << "Enter first number: ";
        cin >> num1;
        cout << "Enter second number: ";
        cin >> num2;
    }

    void calculateSum()
    {
        sum = num1 + num2;
    }

    void displaySum()
    {
        cout << "The sum of " << num1 << " and " << num2 << " is " << sum << endl;
    }
};

int main()
{
    Addition add;
    add.input();
    add.calculateSum();
    add.displaySum();

    return 0;
}
