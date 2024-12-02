//  WAP  TO DISPLAY SUM OF GIVEN ARRAY

#include <iostream>
using namespace std;
int main()
{
    int arr[]={233,33,0,44,4};
    int length = sizeof(arr)/sizeof(arr[0]);
    int sum = 0;

    for(int i = 0; i<length; i++)
    {
        (sum = sum+arr[i]);

    }

    cout << "Sum of Given Array " <<sum;
}