#include <iostream>
using namespace std;
// return function 
// without parameter & return value

int roi()
{
    return 3;
}

int balance(int psw)
{
    if (psw == 204)
    {
        return 130249;
   }
   else {
    return 0;
   }
   
}

int main()
{
    cout << balance(204);
}
