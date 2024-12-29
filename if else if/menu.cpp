#include <iostream>
using namespace std;
int main()
{

    int paneer_tikka = 100;
    int dry_manchurian = 200;
    int paneer_69 = 249;
    int choice = 0;
    cout << "Paneer tikka 100 " << "\n";
    cout << "dry manchurian 200 " << "\n";
    cout << "Paneer 69 249 " << "\n";
    cout << "Choose any starter by pressing number 1 to 3 " << "\n";
    cin >> choice;

    if (choice == 1)
    {
        cout << "You've selected PANEER TIKKA" << "\n"
             << "total bill is Rs." << paneer_69;
    }

    else if (choice == 2)
    {
        cout << "You've selected DRY MANCHURIAN" << "\n";
        cout << "Total = " << dry_manchurian << "\n";
    }
    else if (choice == 3)
    {
        cout << "You've selected PANEER 69" << "\n";
        cout << "Total = " << paneer_69 << "\n";
    }

    else
    {
        cout << "you have enter wrong chocie";
    }
}