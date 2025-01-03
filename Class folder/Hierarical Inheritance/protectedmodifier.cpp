#include <iostream>
using namespace std;

class college
{
protected:
    void show()
    {
        cout << "college" << "\n";
    }
};

class student : public college
{
public:
    void msg()
    {
        cout << "student" << "\n";
        show(); 
    }
};

int main()
{
    student obj;
    obj.msg(); // Accessing msg() which internally calls show()
    return 0;
}
