#include <iostream>
using namespace std;
int main()
{
    int phy = 0;
    cout << "enter number for phy" << "\n";
    cin >> phy;
    int chem = 0;
    cout << "enter number for chem" << "\n";
    cin >> chem;
    int maths = 0;
    cout << "enter number for maths" << "\n";
    cin >> maths;
    int total = 0;
    float percnt = 0;

    cout << "your total mark is = " << (total = phy + chem + maths) << "\n";

    cout << "your percentage is = " << (percnt = total % 3) << percnt << "\n";

    if (percnt >= 60 && percnt <= 100)
    {
        cout << "You have scored 1st div" << "\n";
    }

    else if (percnt >= 50 && percnt <= 59)
    {
        cout << "You have scored 2nd div" << "\n";
    }

    else if (percnt >= 35 && percnt <= 49)
    {
        cout << "You have scored 3rd div" << "\n";
    }

    else
    {
        cout << "sorry better luck for next year" << "\n";
    }
}