/*
A cricketer is playing the next game, we need to congratulate, if he is playing his 100th game.
ask the user to enter number of the games played, if the next game is 100th game print "congratulation"
*/

#include <iostream>
using namespace std;
int main()
{
    int game_played = 0;
    cout << "Enter number of the games played" << "\n";
    cin >> game_played;

    if (game_played == 99)
    {
        cout << "CONGRATULATION" << "\n";
    }

}