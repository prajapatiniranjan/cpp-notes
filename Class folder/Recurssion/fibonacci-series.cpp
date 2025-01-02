#include <iostream>
using namespace std;
int fibonacci(int a){
    if(a==0){
        return 1;
    } else if (a<0)
    {
        return 0;
    }
    return fibonacci(a-1)+fibonacci(a-2);
}
int main()
{
    int a = 0;
    cout << "Enter any number to find our the nth number of fibonacci" << '\n';
    cin>> a;
    cout << fibonacci(a);
}