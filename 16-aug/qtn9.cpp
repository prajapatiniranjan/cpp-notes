/*Write a program to accept radius of circle from user.
 And calculate area and perimeter of circle. 
Display the result on console. Hint value of PI = 3.14
 */

#include <iostream>
using namespace std;
int main()
{
    cout << "Enter the radius of circle" << "\n";
    float r;
    cin >> r;

    float area = 3.14 * r * r;

    float perimeter = 2 * 3.14 * r;

    cout << area << "\n";
    cout << perimeter << "\n";

    return 0;
}