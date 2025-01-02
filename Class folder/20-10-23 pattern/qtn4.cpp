// to check ASCII value 

#include <iostream>
using namespace std;
int main()
{
    for( int r=1;r<=255;r++)
    {
        cout << r <<"="<<char(r)<<",";
    } 
}