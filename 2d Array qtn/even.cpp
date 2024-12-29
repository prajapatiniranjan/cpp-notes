// WAP to display even value in 2d array
#include <iostream>
using namespace std;

int main()
{
    int arr[3][3];
    int lenght = sizeof(arr)/sizeof(arr[0]);

    // Input values into the 2D array
    cout << "Enter the elements of the 3x3 array:" << "\n";
    for (int i = 0; i < lenght; i++)
    {
        for (int j = 0; j < lenght; j++)
        {
            cout <<"Enter value";
            cin >> arr[i][j];
        }
    }

    // Display even values from the array
    cout << "Even values in the array are: ";
    for (int i = 0; i < lenght; i++)
    {
        for (int j = 0; j < lenght; j++)
        {
            if (arr[i][j] % 2 == 0)
            { // Check if the element is even
                cout << arr[i][j] << " ";
            }
        }
    }

    return 0;
}
