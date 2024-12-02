/*
     1
    0 1
   0 1 0
  1 0 1 0
 1 0 1 0 1
0 1 0 1 0 1
*/

#include <iostream>
using namespace std;
int main()
{
    int a = 1, k = 0, d;

    for (int r = 1; r <= 5; r++)
    {
        for (int s = 5; s > r; s--)
        {
            cout << " ";
        }
        for (int c = 1; c <= r; c++)
        {
            d = a;
            a = k;
            k = d;
            cout << d << " ";
        }
        cout << "\n";
    }
}
