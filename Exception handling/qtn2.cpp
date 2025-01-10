#include <iostream>
using namespace std;

int main()
{
    int b;
    cout << "Enter option: ";
    cin >> b;

    try
    {
        if (b == 1)
        {
            throw 'a'; // Throwing a char
        }
        else if (b == 2)
        {
            throw 23.67; // Throwing a double
        }
        else if (b == 3)
        {
            throw 3; // Throwing an int
        }
        cout << "Welcome!" << '\n';
    }
    catch (char c)
    {
        cout << "Caught a char exception: " << c << "\n";
    }
    catch (double d)
    {
        cout << "Caught a double exception: " << d << "\n";
    }
    catch (int n)
    {
        cout << "Caught an int exception: " << n << "\n";
    }

    cout << "Finished" << "\n";
    return 0;
}
