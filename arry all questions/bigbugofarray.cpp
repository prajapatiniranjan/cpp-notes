#include <iostream>
using namespace std;
int main()
{
    int arr[]={19,18,4,5,6};
    int length = sizeof(arr)/sizeof(arr[0]);

    for(int i = 0; i < 7;i++ )
    {
        cout<< arr[i]<<"\n";
    }
}