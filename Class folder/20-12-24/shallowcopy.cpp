#include <iostream>
using namespace std;
class student
{
    int rno;

public:
    student(int rno)
    {
        this->rno = rno; // Use 'this' to differentiate between the member variable and the parameter
    }
    void show()
    {
        cout << "Rno = " << rno;
    }
};
int main()
{
    student s(67);
    s.show();
}