#include <iostream>
using namespace std;
int main()
{
    int arr[]={1,4,3,5,6,7,7};
    int length = sizeof(arr)/sizeof(arr[0]);
    cout << "forward traversing" <<"\n";
    for(int i = 0; i<length;i++)
    {
        cout <<arr[i]<<"\n";
    }

    cout << "backward traversing" <<"\n";
    for (int j = length-1; j >= 0; j--)
    {
        cout << arr[j] << "\n";
    }
}