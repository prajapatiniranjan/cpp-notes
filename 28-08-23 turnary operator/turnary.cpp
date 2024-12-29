/*

turnary condition :-


condition ? ontruevalue : onfalsevalue
*/

#include <iostream>
using namespace std;
int main()
{
    int age;
    cout << "Enter your age" << "\n";
    cin >> age;
    int k;
    k = age >= 18 ? 1 : 0;
    cout << k;
}
