#include <iostream>
using namespace std;
int main()
{
    int hours = 0;
    cout << "Enter hour (0-23)" << "\n";
    cin >> hours;
    int minutes = 0;
    cout << "Enter minute (0-59)" << "\n";
    cin >> minutes;

    if (hours >= 0 && hours < 24 && minutes >= 0 && minutes < 60)
    {
        switch (hours / 12)
        {
        case 0:
        {
            ((hours >= 0 && hours < 12) && (minutes >= 0 && minutes < 60));
            cout << hours << ":" << minutes << "A.M";
        }

        break;
        case 1:
        {
            ((hours >= 12 && hours < 23) && (minutes >= 0 && minutes < 60));
            cout << hours << ":" << minutes << "p.M";
        }
        break;
        default:
            cout << "oops";
        }
    }
}