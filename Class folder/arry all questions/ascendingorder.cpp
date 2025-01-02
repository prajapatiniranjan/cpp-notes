// WAP TO DISPLAY THR ARRAY IN ASSCENDING ORDER

#include <iostream>
using namespace std;
int main()
{
    int arr[] = {63,4,5,6,7,6,5,4,2,7,8,9,4};
    int length = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0; i<length;i++)
    {
        cout << arr[i] << "\t";
    } 
    cout << "\after " << "\n";

    for(int i = 0;i<length;i++)
    {
        for (int j = 0; j < length - 1; j++)
        {
            int temp;
            temp = arr[j + 1];
            arr[j +1] = arr[j];
            arr[j] = temp;
        }
        
    }
    for(int j =0;j<length;j++)
    {
        cout<<arr[j] << "\t";
    }
}