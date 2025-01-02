#include <iostream>
using namespace std;
void bpl(int a){
    if (a<1)
    {
        return;
    }
    cout << a<<"\t";
    bpl(a-1);
}
int main()
{
    bpl(5);
}