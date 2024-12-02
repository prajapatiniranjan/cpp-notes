#include <iostream>
using namespace std;
int main ()
{
    int arr[] = {122,3232,433434,454666};
    int lenght_of_aaray = sizeof(arr)/sizeof(arr[0]);
    int max1;
    int max2;
    max1 = max2 = INT_MIN;

    for (int i = 0;i<lenght_of_aaray;i++)
    {
        if (arr[i]>max1)
        {
            max2 = max1;
            max1 = arr[i];
        }
        else if (arr[i]>max2 && arr[i] != max1)
        {
            max2 = arr[i];
        }
    }
}