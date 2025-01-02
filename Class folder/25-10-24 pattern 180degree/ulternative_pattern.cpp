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
    int t = 0;
    for (int r = 1; r <= 6; r++)
    {
        
        for (int s = 6; s > r; s--)
        {
            cout << " ";
        }

        for (int c = 1; c <= r; c++)
        {
            if (t == 0)
            {
                cout << "1 ";
                t = 1;
            }
            else
            {
                cout << "0 ";
                t = 0;
            }
        }
        cout << "\n";
    }
}
