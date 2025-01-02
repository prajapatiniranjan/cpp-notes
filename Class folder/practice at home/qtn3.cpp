#include <iostream>
using namespace std;
int main ()
{

float physics = 0;
cout << "enter physics number" << "\n";
cin >> physics;
float chemistry = 0;
cout << "enter chemistry number" << "\n";
cin >> chemistry;

float maths = 0;
cout << "enter maths number" << "\n";
cin >> maths;

float percentage =0;
float total = 0;

cout << "Your total marks = " << (total = physics + chemistry + maths ) << total << "\n";
cout << "your percentage is = " << (percentage = total * 3)  << "\n";

if (physics <= 35 && chemistry <= 35 && maths <35)
{
    cout << " you've supply in maths" << "\n";
}

else if (physics <= 35 && chemistry < 35 && maths <= 35)

{
    cout << "you've supply in chemistry " << "\n";
}

else if (physics < 35 && chemistry <= 35 && maths <=35)
{
    cout << "you've supply in physics" << "\n";
}

else if (physics <= 35 && chemistry < 35 && maths <35)
{
    cout << "  you are fail because,you've supply in maths and chemistry" << "\n";
}

else if (physics < 35 && chemistry <= 35 && maths < 35)
{
    cout << "  you are fail because,you've supply in maths and physics" << "\n";
}

else if (physics < 35 && chemistry < 35 && maths <= 35)
{
    cout << "  you are fail because,you've supply in physics and chemistry" << "\n";

}

else{
    cout << "You've entered wrong numbers" << "\n";
}
}
