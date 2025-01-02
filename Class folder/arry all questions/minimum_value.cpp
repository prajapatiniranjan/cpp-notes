// WAP TO DISPLQY MINIMUM VALUE OF GIVEN ARRAY

#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int length = sizeof(arr)/sizeof(arr[0]);

    int counter = INT_MAX;
    for (int i = 0; i<length;i++)
    {
      
        if(counter>arr[i])
        {
            counter = arr[i];
        }

    }
    cout << "Min value = " << counter;


}