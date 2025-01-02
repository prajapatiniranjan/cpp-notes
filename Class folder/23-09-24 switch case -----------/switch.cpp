// switch case used for choice based programming and menu based programming

// difference between nested if and switch case

// 1) nested if condition is a step by step procedure while switch case is a choice base programming.
// 2)nested if condition is slower than switch case statement.
// 3) imp:- if condition supports all types of operators, while switch case only support arithmatic operators.

// NOTE :- switch case does'nt support float value.

//  syntax of switch case :-

/*
    switch( condition /expression)
 {
    case value1:
    {
    statement;
     break;
      }
      case value2:
      {
       statement;
     break;
      }
      default:
      {
      statement/code
      break;
      }
    }
*/

#include <iostream>
using namespace std;
int main()
{

    int num1 = 0;
    cout << "Enter number 1" << "\n";
    cin >> num1;
    int num2 = 0;
    cout << "Enter number 2" << "\n";
    cin >> num2;

    int result =0;
    cout << "Press 1 for +" << "\n";
    cout << "Press 2 for -" << "\n";
    cout << "Press 3 for /" << "\n";
    cout << "Press 4 for *" << "\n";

    cin >> result;

    switch (result)
    {
        case 1:
        {
            cout << "Result = " << (result = (num1 + num2));
            break;
        }
        case 2:
        {
            cout << "Result = " << (result = (num1 - num2));
            break;
        }
        case 3:
        {
            if (num1 > num2)
            {
                cout << "Result = " << (num1 / num2) << "\n";
            }
            else if (num2 > num1){
                cout << "Result = " << (num2 / num1) << "\n";
            }
            else {
                cout << "wrong input" << "\n";
            }

        }

        case 4:
        {
            cout << "Result = "  << (result = (num1 * num2));
            break;
        }

        default:
        {
            cout << "Oppss" << "\n";
        }
    }
    

}