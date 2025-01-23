#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n)
{
    int counter = 0; // for checking time management to make sure the data is already sorted
    bool swapped;
    for (int i = 0; i < n - 1; i++)
    {
        counter++;
        swapped = false;
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = true;
            }
        }
        if (!swapped)
            break;
    }
    cout << "Counter hit " << counter << "\n";
}

void printArray(int arr[], int n)
{
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[] = {56, 1, 2, 3, 4, 56};
    int s = sizeof(arr) / sizeof(arr[0]);

    bubbleSort(arr, s);
    printArray(arr, s);

    return 0;
}
