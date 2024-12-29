
#include <iostream>
using namespace std;
int c = 0;
void sum(int a, int b)
{

    c = a + b;
}
void show()
{
    cout << c << '\n';
}

int main()
{
    int w, p;
    cout << "Enter 2 number" << "\n";
    cin >> w>> p;
    sum(w, p); // call by value
    show();
}