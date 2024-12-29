// Q1.WAP TO GENERATE THE SQUARE ROOT OF INPUT NUMBER

#include <iostream>
using namespace std;
int main ()
{
    int i = 1;
    int number = 0;
    bool f = false;
    cout <<"Enter the number to find out the square root of number"
    cin >> number;

    do{
        if (i * i == number)
        {
            f = true;
            break;
        }  
        i++;
    }while(i <= number/2 );
    if(f == true)
    {
        cout << "Valid square root = " << i << "\n";

    }

    else{
        cout << "not valid "
    }
    return 0;

}