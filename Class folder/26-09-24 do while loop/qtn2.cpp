// wap to display the even d between one to ten

#include <iostream>
using namespace std;
int main()
{
    int d = 2;
    do
    {
        cout << d << "\t";

        d = d + 2;
    } while (d <= 10);
}