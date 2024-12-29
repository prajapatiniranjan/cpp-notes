#include <iostream>
using namespace std;
int main()
{
    int arr[8] = {2,33,2,3,5,0,6,7};
    // int arr[8] = {2,33,2,3,5,0,6,7,4,4}; error

    int length = sizeof(arr)/sizeof(arr[0]);

    cout << sizeof(arr)<<"\n";
    cout << arr[3];
    for (int i = 0; i<length;i++)
    {
        cout << arr[i]<<"\t";
    }

 }