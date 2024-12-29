// 1
// 2 3
// 4 5 6

#include <iostream>
using namespace std;
int main()
{
    int number = 1;
    for(int i=1;i<=3;i++)
    {
        for(int j= 1;j<=i;j++)
        {
         
            cout<<number<<"\n";
            number++;
         }
            cout<<"\n";
    }
}