#include <iostream>
using namespace std;
class student
{
    int rno;

public:
    student(int rollno)
    {
        rno = rollno; // Use 'this' to differentiate between the member variable and the parameter
    }
    void show()
    {
        cout << "Rno = " << rno;
    }
};
int main()
{
    student s1(67);
    s1.show();
 student s2(s1);
 s2.show();
}