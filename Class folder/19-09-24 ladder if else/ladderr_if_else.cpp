#include <iostream>
using namespace std;
int main()
{
    int bill = 0;
    int unit = 0;
    int src_chrge = 0;

    cout << "Enter electricity unit" << "\n";
    cin >> unit;

    if (unit >= 1 && unit <= 100)
    {
        bill = unit * 3;
        src_chrge = bill * 0.2;
    }

    else if (unit >= 101 && unit <= 200)
    {
        bill = unit * 5;
        src_chrge = bill * 0.2;
    }

    else if (unit >= 201 && unit <= 500)
    {
        bill = unit * 7;
        src_chrge = bill * 0.2;
    }

    else if (unit >= 501)
    {
        bill = unit * 10;
        src_chrge = bill * 0.2;
    }

    else
    {
        cout << "Invalid input" << "\n";
    }

    cout << "Your bill amount is = " << bill + src_chrge << "\n";
}