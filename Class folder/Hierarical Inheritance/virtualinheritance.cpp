#include <iostream>
using namespace std;

class RBI
{
public:
    void rbiGuidelines()
    {
        cout << "RBI: Follow these banking guidelines." << endl;
    }
};

class Axis : virtual public RBI
{
public:
    void axisServices()
    {
        cout << "Axis Bank: Offering personalized banking services." << endl;
    }
};

class SBI : virtual public RBI
{
public:
    void sbiServices()
    {
        cout << "SBI: The banker to every Indian." << endl;
    }
};

class Customer : public Axis, public SBI
{
public:
    void customerInfo()
    {
        cout << "Customer: Accessing services of both Axis and SBI banks." << endl;
    }
};

int main()
{
    Customer customer;

    customer.rbiGuidelines();

    customer.axisServices();

    customer.sbiServices();

    customer.customerInfo();

    return 0;
}
