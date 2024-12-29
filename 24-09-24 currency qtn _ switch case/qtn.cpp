#include <iostream>
using namespace std;

int main()
{
    int amount;
    cout << "Enter the amount: " << "\n";
    cin >> amount;

    // Currency in rupees
    int note_coins500 = 0, note_coins200 = 0, note_coins100 = 0, note_coins50 = 0, note_coins20 = 0, note_coins10 = 0, note_coins5 = 0, note_coins2 = 0, note_coins1 = 0;

    // Calculate the number of notes/coins needed for each amount
    if (amount >= 500)
    {
        note_coins500 = amount / 500;
        amount %= 500;
    }
    if (amount >= 200)
    {
        note_coins200 = amount / 200;
        amount %= 200;
    }
    if (amount >= 100)
    {
        note_coins100 = amount / 100;
        amount %= 100;
    }
    if (amount >= 50)
    {
        note_coins50 = amount / 50;
        amount %= 50;
    }
    if (amount >= 20)
    {
        note_coins20 = amount / 20;
        amount %= 20;
    }
    if (amount >= 10)
    {
        note_coins10 = amount / 10;
        amount %= 10;
    }
    if (amount >= 5)
    {
        note_coins5 = amount / 5;
        amount %= 5;
    }
    if (amount >= 2)
    {
        note_coins2 = amount / 2;
        amount %= 2;
    }
    if (amount >= 1)
    {
        note_coins1 = amount; // Remaining amount is all 1s
        // amount %= 1;
    }

    // Display the result
    cout << "Currency needed for the amount:" << "\n";
    if (note_coins500 > 0)
        cout << "500: " << note_coins500 << "\n";
    if (note_coins200 > 0)
        cout << "200: " << note_coins200 << "\n";
    if (note_coins100 > 0)
        cout << "100: " << note_coins100 << "\n";
    if (note_coins50 > 0)
        cout << "50: " << note_coins50 << "\n";
    if (note_coins20 > 0)
        cout << "20: " << note_coins20 << "\n";
    if (note_coins10 > 0)
        cout << "10: " << note_coins10 << "\n";
    if (note_coins5 > 0)
        cout << "5: " << note_coins5 << "\n";
    if (note_coins2 > 0)

        cout << "2: " << note_coins2 << "\n";

    if (note_coins1 > 0)
        cout << "1: " << note_coins1 << "\n";

    else {
        cout << "Enter valid value" << "\n";
    }

    return 0;
}
