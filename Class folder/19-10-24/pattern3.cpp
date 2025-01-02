#include <iostream>
using namespace std;
int main()
{
    int number = 0;
    int number2 = 3;
    for(int i=1;i<=number2;i++)
    {
        for(int j=1;j<=i;j++)
        {
            number++;
            cout << number<<"\t";
        }
        cout << "\n";
    }
}