// /WAP to overwrithe 1 with 0 in given array

#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 5, 1, 3, 7, 1, 8};
    int length = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    for (int i = 0; i < length; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Overwrite all occurrences of 1 with 0
    for (int i = 0; i < length; i++)
    {
        if (arr[i] == 1)
        {
            arr[i] = 0;
        }
    }

    cout << "Modified array: ";
    for (int i = 0; i < length; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
