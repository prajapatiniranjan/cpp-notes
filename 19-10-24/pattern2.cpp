#include<iostream>
using namespace std;
int main()
{
    int number_c = 3;
    int number_r = 1;
    for(int i = 1; i<=number_c;i++)
    {
        for(int j =1;j<=i;j++)
        {
            cout<<number_r++<<"\t";
        }
        cout << "\n";
    }
}