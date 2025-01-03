#include <iostream>
using namespace std;

class RBI
{
public:
    void guidelines()
    {
        cout << "RBI: Follow these banking guidelines." << endl;
    }
};

class Axis : public RBI
{
public:
    void axisServices()
    {
        cout << "Axis Bank: Offering personalized banking services." << endl;
    }
};

class PNB : public RBI
{
public:
    void pnbServices()
    {
        cout << "PNB: Trusted banking for generations." << endl;
    }
};

class Customer : public Axis, public PNB
{
public:
    void customerInfo()
    {
        cout << "Customer: Accessing multiple banking services." << endl;
    }
};

int main()
{
    Customer customer;

    // Accessing Axis Bank services
    customer.axisServices();

    // Accessing PNB services
    customer.pnbServices();

   
    customer.Axis::guidelines(); // From Axis
    customer.PNB::guidelines();  // From PNB

    customer.customerInfo();

    return 0;
}
