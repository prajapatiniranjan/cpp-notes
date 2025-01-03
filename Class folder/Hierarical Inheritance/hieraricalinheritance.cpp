#include <iostream>
using namespace std;

class RBI
{
public:
    virtual void msg()
    {
        cout << "Message from RBI: Guidelines for All Banks." << endl;
    }
};

class Axis : public RBI
{
public:
    void msg() 
    {
        cout << "Message from Axis Bank: Your Banking Partner." << endl;
    }
};

class PNB : public RBI
{
public:
    void msg() 
    {
        cout << "Message from PNB: The Name You Can Bank Upon." << endl;
    }
};

int main()
{
    RBI *bank;

    // Axis axis;
    // bank = &axis;
    // bank->msg();

    PNB pnb;
    bank = &pnb;
    bank->msg();

    // RBI rbi;
    // bank = &rbi;
    // bank->msg();

    return 0;
}
