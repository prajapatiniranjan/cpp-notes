
// A 
// B       C 
// D       E       F 

#include <iostream>
using namespace std;
int main()
{
        int number = 3;
        for( int i=1;i<=number;i++)
        {
            char alphabate = 'A';

            for(int j=1;j<=i;j++)
            {
                cout << char(alphabate)<<" \t";
                alphabate++;
            }
            cout<<"\n";
        }
        return 0;
}