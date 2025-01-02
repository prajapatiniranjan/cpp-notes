#include <iostream>
using namespace std;

class Parent1
{
public:
    void method1()
    {
        cout << "Method from Parent1" << endl;
    }
};

class Parent2
{
public:
    void method2()
    {
        cout << "Method from Parent2" << endl;
    }
};

class Child : public Parent1, public Parent2
{
public:
    void method3()
    {
        cout << "Method from Child" << endl;
    }
};

int main()
{
    Child obj;
    obj.method1(); // From Parent1
    obj.method2(); // From Parent2
    obj.method3(); // From Child
    return 0;
}
