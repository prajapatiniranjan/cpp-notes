#include <iostream>
using namespace std;

class sbi
{
public:
    sbi()
    { 
        cout << "sbi mem\n";
    }
    ~sbi()
    {
        cout << "sbi delet\n";
    }
};

class axis
{
public:
    axis()
    { 
        cout << "axis mem\n";
    }
    ~axis()
    {
        cout << "axis delet\n";
    }
};

class customer : public sbi, public axis
{ 
public:
    customer()
    { 
                cout << "customer mem\n";
    }
    ~customer()
    {
        cout << "customer delet\n";
    }
};

int main()
{
    customer ct;
    return 0;
}
