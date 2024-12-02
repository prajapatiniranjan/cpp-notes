// WAP to display sum of 2d array
#include <iostream>
using namespace std;

int main()
{
    int arr[3][3];
    int length = sizeof(arr) / sizeof(arr[0]);
    int sum = 0;

    cout << "Enter the elements of the 3x3 array:" << "\n";
    for (int i = 0; i < length; i++)
    {
        for (int j = 0; j < length; j++)
        {
            cout << "Enter value for arr[" << i << "][" << j << "]: ";
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < length; i++)
    {
        for (int j = 0; j < length; j++)
        {
            sum = sum + arr[i][j];
        }
    }

    cout << "The sum of all elements in the array is: " << sum << endl;

    return 0;
}
