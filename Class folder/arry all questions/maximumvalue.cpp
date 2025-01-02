// WAP TO CHECK MAXIMUM VALUE OF GIVEN ARRAY

#include <iostream>
using namespace std;
int main()
{
    int arr[]={232,535,598,900,24242};
    int length = sizeof(arr)/sizeof(arr[0]);

    int counter = INT_MIN;
    for(int i = 0; i<length;i++)
    {
        if (counter<arr[i])
        {
            counter = arr[i];
        }
    }

    cout << "Max Value is " << counter;
}