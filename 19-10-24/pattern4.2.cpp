#include <iostream>
using namespace std;

int main()
{
    int number1 = 1;
    int number2 = 6;
    int count = 1;

    for (int i = 1;i<=number2; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            int store = count * count;
            cout << store << "\t";
            if (store == 36)
            {
                break;
            }
            count++;
        }
        cout << "\n";
        if (count * count > 36)
        {
            break;
        }
    }

    return 0;
}
