// WAP TO DISPLY THE EVEN NUMBER ONLY IN GIVEN ARRAY

#include <iostream>
using namespace std;
int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14};
    int length = sizeof(arr)/sizeof(arr[0]);

    for(int i =0; i<length;i++)
    {
        if(arr[i]%2 == 0)
        {
            cout << arr[i] << "\t";
        }
    }
}