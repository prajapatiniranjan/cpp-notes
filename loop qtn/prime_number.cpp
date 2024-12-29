#include <iostream>
using namespace std;
int main()
{
    int a = 7;
    int b = 0;
    int r = a - 1;
    do
    {
        if (a % r  == 0)
        {
            b = 0;
            break;

        }
        r--;
    }while(r>1);

    if(b == 0)
    {
        cout << "Not prime" << "\n";

    }

    else 
    {
        cout << "prime" << "\n";
    }


}