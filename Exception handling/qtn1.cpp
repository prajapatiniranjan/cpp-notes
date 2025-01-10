#include <iostream>
using namespace std;
int main()
{
    int a =9;
    int b =0;
    try{
        if(b<=0){
            throw b;
        }
        cout << a/b;
    }
    catch(int B){
        cout<< "Division by 0 " << "\n";
    }

    cout << "finished"<<"\n";
}