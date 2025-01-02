#include <iostream>
using namespace std;
void table(int a, int multiplier){
    if(multiplier>10)
    {
        return;
    }
    cout << a << "*" << multiplier << "="<< a*multiplier<<"\n";
    table(a,multiplier+1);
}
int main()
{
    int num;
    cout << "Enter any numbe rto generate the table"<<"\n";
    cin >> num;
    table(num,1);
}