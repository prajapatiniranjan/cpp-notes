#include <iostream>
using namespace std;
void tail(int a){
    if (a<1){
        return;
    }
    tail(a-1);
    cout << a << "\t";
}

int main()
{
tail(5);
}