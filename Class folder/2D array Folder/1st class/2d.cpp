#include <iostream>
using namespace std;
int main()
{
    int arr[2][3] = {2,34,0,6,5,8};
    // int length = sizeof(arr)/sizeof(arr[0]);
    for(int r=0;r<2;r++)
    {
        for(int c=0;c<3;c++)
        {
            cout <<arr[r][c]<<"\t";
        }
        cout << "\n";
    }
    
}