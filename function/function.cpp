#include <iostream>
using namespace std;

int calculateSellingPrice( int liters)
{
    return 90 * liters;
}

int main()
{
    int liters;

    cout << "Enter liters: ";
    cin >> liters;

    int finalSellPrice = calculateSellingPrice( liters)+(5*liters);
    cout << "Selling Price of petrol is: Rs. " << finalSellPrice << "\n";

    return 0;
}
