
#include <iostream>
using namespace std;
int main()
{
    float percent_tenth = 0;
    float percent_twelth = 0;

    cout << "enter your 10th percent" << "\n";
    cin >> percent_tenth;
    if (percent_tenth >= 65 && percent_tenth <= 100)
    {
        cout << "enter your 12th percent" << "\n";
        cin >> percent_twelth;
        if (percent_twelth >= 70 && percent_twelth <= 100)
        {
            cout << "eligble for clrk" << "\n";
        }
        else
        {
            cout << "elgble for peon" << "\n";
        }
    }
    else
    {
        cout << "you are not eligble" << "\n";
    }
}