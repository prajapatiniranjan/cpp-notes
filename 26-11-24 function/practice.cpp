    // WAP to check the given sting is PALINDROME or Not

    #include <iostream>
    using namespace std;
    #include <string.h>
    int main()
    {

        char str1[20];
        char str2[20];

        cout << "Enter String 1 " << "\n";
        cin>>str1;

        strcpy(str2,strrev(str1));
        cout<<str2;

        if (strcmp(str1,str2)==0)
        {
            cout << "Yes"<<"\n";
        }
        else{
            cout << "Yes" << "\n";
        }
    }