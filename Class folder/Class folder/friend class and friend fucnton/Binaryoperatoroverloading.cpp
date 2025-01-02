// WAP to sum of complex data type
#include <iostream>
    using namespace std;

class Complex
{
private:
    double real; 
    double imag; 

public:
    Complex() : real(0), imag(0) {}

    
    Complex(double r, double i) : real(r), imag(i) {}

    Complex operator+(const Complex &other)
    {
        return Complex(real + other.real, imag + other.imag);
    }

    void display() const
    {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main()
{
    Complex c1(3.5, 2.5);
    Complex c2(1.6, 4.8);

    Complex c3 = c1 + c2;

    cout << "Sum of complex numbers: ";
    c3.display();

    return 0;
}