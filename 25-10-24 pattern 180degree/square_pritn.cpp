/*
***************
*             *
*             *
*             *
*             *
***************



*/

#include <iostream>
using namespace std;

int main()
{
    int r = 10;
    int c = 10;

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (i == 0 || i == r - 1 || j == 0 || j == c - 1)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << "\n";
    }

    return 0;
}
