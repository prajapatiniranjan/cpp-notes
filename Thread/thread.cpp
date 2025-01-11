// main function call a single thread

#include <iostream>
using namespace std;
void show()
{
    for(int i=10;i<=100;i++)
    {
        cout<<i<<"\n";
    }
}

void show2()
{
    for (int i = 100; i <= 1001; i++)
    {
        cout << i << "\n";
    }
}

int main()
{
   show();
   show2(); 
}