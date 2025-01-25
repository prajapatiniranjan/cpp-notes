#include <iostream>
using namespace std;
int count = 0;

void insert(int arr[], int len)
{
    int count = 0;
    // Outer loop starts from the second element (i = 1)
    for (int i = 1; i < len; i++)
    {
        int mn = i;

        // Inner while loop to shift elements if needed
        while (mn > 0 && arr[mn] < arr[mn - 1])
        {
            // Swap elements if arr[mn] is smaller than arr[mn-1]
            int tmp = arr[mn];
            arr[mn] = arr[mn - 1];
            arr[mn - 1] = tmp;

            // Move mn to the left
            mn--;
        }
        count++;
    }
    cout << count << "\n";
}

int main()
{
    int arr[] = {10, 5, 50, 2, 20};       // Initialize the array
    int s = sizeof(arr) / sizeof(arr[0]); // Calculate the number of elements

    // Call the insert function to sort the array
    insert(arr, s);

    // Print the sorted array
    for (int i = 0; i < s; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}