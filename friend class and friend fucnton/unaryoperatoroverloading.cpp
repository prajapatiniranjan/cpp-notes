// #include <iostream>
// using namespace std;

// class Number
// {
// private:
//     int value;

// public:
//     // Constructor
//     Number(int v) : value(v) {}

//     // Overloading the unary - operator
//     Number operator-()
//     {
//         return Number(-value);
//     }

//     // Function to display the value
//     void display()
//     {
//         cout << "Value: " << value << endl;
//     }
// };

// int main()
// {
//     Number num(10);
//     cout << "Original number: ";
//     num.display();

//     Number neg = -num;
//     cout << "Negated number: ";
//     neg.display();

//     return 0;
// }
#include <iostream>
using namespace std;

class top
{
    int a = 10; 
public:
    
    top &operator++()
    {
        a++;
        cout << a << "\n";
        return *this;
    }


    void setValue(int val)
    {
        a = val;
    }
};

int main()
{
    top p;
    p.setValue(90); 
    ++p;            
    return 0;
}
