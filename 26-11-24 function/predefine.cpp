#include <iostream>
using namespace std;
#include <string.h>
int main()
{
    char name[20];
    char surname[20];
    cout << "Enter Your Name" << "\n";
    cin>>name;
    cout << "Enter Your surame" << "\n";
    cin >> surname;
    cout << strlen(name)<<"\t"; // count length of string
    cout << "Uppercase " << strupr(name) << "\n"; //capittal
    cout << "Loweercase " << strlwr(name) << "\n";//samll
    cout << "String Merg/concatenation" << strcat(name,surname);
    cout<<"\n";
    cout << "\nnmae=" << strlwr(name) << "\n";
    cout << "\nsurname=" << strlwr(surname) << "\n";
    cout << "\nsurname=" << strcpy(name,surname) << "\n"; //string cpoy
    cout << "\nname=" << name << "\n";
    cout << "\nsurname=" << surname << "\n";
}