// WAP TO SHIFT ALL THE SHIFT AT THE END OF ARRAY
#include <iostream>
using namespace std;

int main()
{
    int arr[] = {4, 0, 6, 9, 0, 7, 0, 6, 5, 0, 9};
    int length = sizeof(arr) / sizeof(arr[0]);
    int arr2[length];
    int k = 0;

    for (int i = 0; i < length; i++)
    {
        cout << arr[i] << "\t";
    }

    cout << "\nAfter shifting" << "\n";

    for (int j = 0; j < length; j++)
    {
        if (arr[j] != 0)
        {
            arr2[k] = arr[j];
            k++;
        }
    }

    while (k < length)
    {
        arr2[k] = 0;
        k++;
    }

    for (int i = 0; i < length; i++)
    {
        cout << arr2[i] << "\t";
    }

    return 0;
}
