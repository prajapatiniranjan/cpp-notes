// Note Rule: matrix should be in squarre format.

// when we convert any matrix into transpose matrix, the column get converted into row & vice versa
#include <iostream>
using namespace std;

int main()
{
    int rows, columns;

    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> columns;

    if (rows != columns)
    {
        cout << "Error: Rows and columns size must be equal!" << "\n";
    }

    int array[rows][columns], transpose[columns][rows];

    cout << "Enter the elements of the " << rows << "x" << columns << " array:" << "\n";

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            cout << "Enter element at [" << i + 1 << "][" << j + 1 << "]: ";
            cin >> array[i][j];
        }
    }

    // Transpose the matrix
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            transpose[j][i] = array[i][j];
        }
    }

    cout << "\nThe Transposed matrix is:" << "\n";
    for (int i = 0; i < columns; i++)
    {
        for (int j = 0; j < rows; j++)
        {
            cout << transpose[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}
