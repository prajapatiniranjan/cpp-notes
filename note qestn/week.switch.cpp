/*
Q.2 Write a Simple program in C++ to print Day of the Week using switch statements taking input as number .
*/

#include <iostream>
using namespace std;
int main()
{
    int day = 0;
    cout << "enter day (1-7) to get the day of the week" << "\n";
    cin >> day;
    switch (day)
    {
    case 1:
        cout << "Sunday" << "\n";
        break;
    case 2:
        cout << "monday" << "\n";
        break;
    case 3:
        cout << "Tuesday" << "\n";
        break;
    case 4:
        cout << "Wednesday" << "\n";
        break;
    case 5:
        cout << "Thursday" << "\n";
        break;
    case 6:
        cout << "Friday" << "\n";
        break;
    case 7:
        cout << "Saturday" << "\n";
        break;
    default:
        cout << "invailid input " << "\n";
    }
    return 0;
}