#include <iostream>
using namespace std;

int main()
{
    int row, column;
    cout << "Enter row " << endl;
    cin >> row;

    for (int i = 0; i <= row; i++)
    {
        for (int j = 0; j <= row; j++)
        {
            if (i == 0 || j == 0 || i + j == row)
            { // print diagonal
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
    return 0;
}

/*

* * * * *   11 12 13 14 15
*     *     21       24
*   *       31    33
* *         41 42
*           51

*/