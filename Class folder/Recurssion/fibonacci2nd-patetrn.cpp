#include <iostream>
using namespace std;
int fib(int a)
{
    if (a==0)
    {
        return 1;
    }else if (a<0)
    {
        return 0;
    }
return fib(a-1)+fib(a-2);    
} 
int main()
{
    int a;
    cout << "enter any number" << "\t";
    cin>>a;
    cout << fib(a);
}