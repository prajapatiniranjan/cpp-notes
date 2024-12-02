
// 1
// 4  9 
// 16 25 36
// how to use goto in loop to come out from multiple value.
#include <iostream>
using namespace std;

int main()
{
    int number1 = 1;
    int number2 = 6;
    int count = 1;
    int store = 0;

        for (int i = 1; i <= number2; i++)
    {
        for (int j = 1; j <= i; j++)
        {
             store = count * count;
            cout << store << "\t";
            if (store == 36)
            {
                goto out;
            }
            count++;
        }
        cout << "\n";
    }
    out:

    return 0;
}
