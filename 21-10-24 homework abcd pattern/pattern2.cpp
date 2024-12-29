
#include <iostream>
using namespace std;
int main()
{
    char alphabate = 'A';
    int number = 3;
    for (int i = 1; i <= number; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << char(alphabate++) << " \t";
            
        }
        cout << "\n";
    }
    return 0;
}


