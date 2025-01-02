#include <iostream>
using namespace std;
int main()
{

int number;
 cout << "enter an number" << "\n";
 cin >> number;

int result = number % 2 == 0 ?1:0;
cout << result;

}