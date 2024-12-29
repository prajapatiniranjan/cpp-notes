#include <iostream>
using namespace std;
// int main ke uper jo bhi variable declare hoga wo global variable hoga
int a = 80;
int main()
{
int a = 90;
cout << "local = " <<a << "\n";
cout << "global =" << ::a <<"\n";
// scope resolution operator

return 0;
}