#include <iostream>
using namespace std;

    int fact(int a){
    
        if (a == 0)
        {
            return 1;
        }
        return (a * fact(a - 1));

    }
int main()
{
    int a=0;
    cout << "Enter any number to find the factorial" << "\n";
    cin >>a;
    cout << fact(a)<<"\n";
}