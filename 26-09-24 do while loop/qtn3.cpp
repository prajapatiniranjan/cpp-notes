// wap to display the odd between one to ten

#include <iostream>
using namespace std;
int main()
{
    int d = 1;
    do
    {
        if(d%2 != 0)
        {
            cout << d << "\t";
        }
        
        d++;

    } while (d <= 10);
}