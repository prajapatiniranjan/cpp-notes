/*

invert pattern
    * * *
    * * 
    * 

*/

#include <iostream>
using namespace std;
int main()
{
for(int r = 5; r>=1;r--)
{
    for (int c = r;c>=1;c--)
    {
        cout << "*";
    }
    cout << "\n";
}
}