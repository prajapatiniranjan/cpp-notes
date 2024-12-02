#include <iostream>
using namespace std;
int main()
{
    int bill = 0;
    int unit = 0;
    int sr_charge;
    cout << "Enter elec. unit" << "\n";
    cin >> unit;

    if (unit >= 1 && unit <= 100)
    {
        bill = unit * 3;
        sr_charge = bill * 0.2;
        cout << sr_charge;
    }

    else if (unit >= 101 && unit <= 200)
    {
        bill = unit * 5;
        sr_charge = bill * 0.2;
    }

    else if (unit > 200 && unit < 500)
    {
        bill = unit * 2;
        sr_charge = bill * 20 / 100;
        cout << sr_charge;
    }
    else if (unit > 500)
    {
        bill = unit * 10;
        sr_charge = bill * 0.20;
        cout << sr_charge;
    }
    else
    {
        cout << "invalid";
    }

    cout << "Your bill including charges is = " << bill + sr_charge << "\n";
}