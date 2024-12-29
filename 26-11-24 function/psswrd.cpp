#include <iostream>
using namespace std;
#include <string.h>
int main()
{
    char repassword[20];
    char password[20];
    cout << "Enter Your repassword" << "\n";
    cin >> repassword;
    cout << "Enter Your surame" << "\n";
    cin >> password;

    if(strcmp(repassword,password)==0)
    // note str uper case or lower case compare krta hai NIRANJAN = niranjan !==0 or stri laga do to upper dalo ya lower 0 retrun krega NIRANJAN = niranjan =0;
    {
        cout << "Correct"<<"\n";

    }
    else {
        cout << "inCorrect/Not matched" << "\n";
    }
}
