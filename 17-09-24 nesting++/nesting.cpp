/* if (condition)
{
if (condition)
{
}
}
 */

// wap to check pswrd and otp using nested if else.

#include <iostream>
using namespace std;
int main()
{
    int pswd = 0;
    int otp = 0;
    cout << "enter your password" << "\n";
    cin >> pswd;
    if (pswd = 2025)
    {
        cout << "enter otp" << "\n";
        cin >> otp;
        if (otp = 2002)
        {
            cout << "u r owner" << "\n";
        }
            else
            {
                cout << "otp is not match" << "\n";
            }
        }
    

    else
    {
        cout << "password is wrong" << "\n";
    }
}
