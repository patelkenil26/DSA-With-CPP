#include <iostream>
using namespace std;

int main()
{
    int row, column;
    cout << "Enter row " << endl;
    cin >> row;

    cout << "enter column " << endl;
    cin >> column;

    cout << endl;

    // method 1 :

    // for (int i = 0; i < row; i++)
    // {
    //     for (int j = 0; j < column; j++)
    //     {
    //         if (i >= j)
    //         {
    //             cout << " * ";
    //         }
    //         else
    //         {
    //             cout << "   ";
    //         }
    //     }
    //     cout << endl;
    // }

    // method 2 :

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << " * ";
        }
        cout << endl;
    }

    return 0;
}

/*

*           11
* *         21 22
* * *       31 32 33
* * * *     41 42 43 44
* * * * *   51 52 53 54 55

*/