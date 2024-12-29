#include <iostream>
using namespace std;
int main()
{
    int cybrom[5] = {23,43,443,434,343};
    // int cybrom[5]={23,43,443,434,343,434}; // error
    cout << sizeof(cybrom)<<"\n";
    cout<<cybrom[4];

    for(int i = 0; i<5;i++)
    {
        cout << cybrom[i]<<"\t";
    }
}
