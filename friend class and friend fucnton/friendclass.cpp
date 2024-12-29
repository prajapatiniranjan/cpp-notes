#include <iostream>
using namespace std;

class RBI;

class AXIS
{
    int amount = 1000;
    friend class RBI;
};

class SBI
{
    int amount = 3000;
    friend class RBI;
};

class RBI
{
public:
    void balance(AXIS a)
    {
        cout << "Balance of AXIS = " << a.amount << "\n";
    }

    void balance(SBI s)
    {
        cout << "Balance of SBI = " << s.amount << "\n";
    }
};

int main()
{
    AXIS axisBank;
    SBI sbiBank;
    RBI rbi;

    rbi.balance(axisBank);
    rbi.balance(sbiBank);

    return 0;
}

