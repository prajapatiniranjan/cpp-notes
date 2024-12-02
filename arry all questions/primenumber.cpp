// //  WAP TO CHECK NUMBER ARE PRIME OR NOT IN GIVEN ARRAY.av
// #include <iostream>
// using namespace std;
// int main()
// {
//     int arr[] = {232, 535, 598, 900, 24242};
//     int length = sizeof(arr) / sizeof(arr[0]);
//     for(int i = 0; i<length; i++)
//     {
//         cout << arr[i];
//     }

//     cout <<"Prime numbers are " << "\n";




// }

#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int length = sizeof(arr) / sizeof(arr[0]);

    cout << "Prime numbers are: ";

    for (int i = 0; i < length; i++)
    {
        int num = arr[i];
        bool isPrime = true;

        if (num <= 1)
        {
            isPrime = false;
        }
        else
        {
            for (int j = 2; j * j <= num; j++)
            {
                if (num % j == 0)
                {
                    isPrime = false;
                    break;
                }
            }
        }

        if (isPrime)
        {
            cout << num << " ";
        }
    }

    return 0;
}
