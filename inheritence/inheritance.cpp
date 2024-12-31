#include <iostream>
using namespace std;
class RBI
{
    int t; 
    public:RBI()
    {
        cout << "Rbi memory" << "\n";
    }
    ~RBI()
    {
        cout << "Rbi memory released " << "\n";
    }
    public:void show()
    {
        cout<< "Rbi class" << "\n";
    }
};
class SBI:public RBI{
    int n;
    public:SBI()
    {
        cout<< "SBI memory" << "\n";
    }
    ~SBI()
    {
        cout<< "SBI memory released" << "\n";
    }
    public:void show()
    {
        cout<< "SBI class" << "\n";
    }
};

int main()
{
    SBI s;
    s.show();
    cout<<"size of sbi"<<sizeof(s);
}