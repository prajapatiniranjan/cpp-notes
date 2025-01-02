/*
Q1. WAP TO GENERATE THE SQUARE ROOT OF INPUT NUMBER 
*/


// #include <iostream>
// using namespace std;
// int main ()
// {
//     int n,i = 1;
//     int c;
//     cout << "enter  any valid number to find out the square root of  number" <<"\n";
//     cin >> n;
//     do {
//         if(i * i == n)
//         {
//             cout << i << "\n";
//             break;
//         }
//         c++;
//         i++;
//     } while (i <=  n/2);
//     cout << "counting = " << c << "\n";
    
// }

#include <iostream>
 using namespace std;
 int main ()
{
    int n = 0;
    int i = 1;
    // int c = 0;
    bool f = false; //flag 
    cout << "enter any number " << "\n";
    cin >> n;
    do 
    {
        if (i * i == n)
    {
        f = true;
        break;
    }
    i++;
    } while (i <=n/2);
    if (f == true)
    {
        cout << "Valid square root = " << i << "\n";
    }
    else
    {
        cout << "not valid";
    }
    return 0;
}

