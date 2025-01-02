// function should always and it should be always declare out side of main function
// function calls in two way implicit and explicit
// Implicit call :- no need to call function it will automatically call
// Explicit call :- need to call function

// Explicit function example:-
#include <iostream>
using namespace std;
void fun()
{
    
    cout <<"Hello World"<< "\n";
}
int main()
{

    for(int i=0;i<=10;i++)
    {
      
        fun();
    }
}