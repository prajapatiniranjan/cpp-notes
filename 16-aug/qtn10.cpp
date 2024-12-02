/*
Write a program to accept length and width of rectangle from user.
 And calculate area and perimeter of rectangle.
 Display the result on console. formula
*/

#include <iostream>
using namespace std;
int main()
{
    cout << "Enter the length" << "\n";
    double length;
    cin >> length;

    cout << "Enter the width" << "\n";
    double width;
    cin >> width;

    double area = length * width;
    double perimeter = 2 * (length + width);

    cout << "Area of the rectangle: " << area << "\n";
    cout << "Perimeter of the rectangle: " << perimeter << "\n";

    return 0;
}