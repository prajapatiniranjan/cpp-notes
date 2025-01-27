#include <iostream>
using namespace std;

void selectionsort(int arr[], int s)
{
    int chotu;
    for (int i = 0; i < s-1; i++)
    {              // Outer loop for each element
        chotu = i; // Assume the current index as the minimum
        for (int j = i + 1; j < s; j++)
        { // Inner loop to find minimum element
            if (arr[chotu] > arr[j])
            {
                chotu = j; // Update the index of the smallest element
            }
        }

        // Swap if the found minimum element is not at the current position
        if (chotu != i)
        {
            swap(arr[i], arr[chotu]);
        }
    }
}

int main()
{
    int arr[] = {9,2,1,6,7};      // Example array
    int s = sizeof(arr) / sizeof(arr[0]); // Size of the array

    selectionsort(arr, s); // Calling the selectionsort function

    // Printing the sorted array
    cout << "Sorted array: ";
    for (int i = 0; i < s; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
