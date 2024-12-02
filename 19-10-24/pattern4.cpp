#include <iostream>
using namespace std;
int main()
{
    int number1 = 1;
    int number2 =6;
    int count = 1;
    for(int i=1;i<=number2;i++)
    {
        for(int j =1;j<=i && count<=number2;j++)
        {
            int store = count*count;
            cout<<store<<"\t";
            count++;
        }
        cout<<"\n";
    }
}
