#include <iostream>
using namespace std;

class top1
{
public:
    int a = 10; 
};

class top2
{
public:
    int b = 30; 
};

int main()
{
    top1 obj1; 
    top2 obj2; 

    cout << "Value of a from top1: " << obj1.a << endl; 
    cout << "Value of b from top2: " << obj2.b << endl; 

    return 0;
}