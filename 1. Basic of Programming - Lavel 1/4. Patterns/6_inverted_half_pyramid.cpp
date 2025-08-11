#include <iostream>
using namespace std;

int main()
{
    int row, column;
    cout << "Enter row " << endl;
    cin >> row;

    cout << endl;

    // method 1 :

    // for (int i = row-1 ; i >= 0; i--)
    // {
    //     for (int j = 0; j <= i; j++)
    //     {
    //         if (j<=i)
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

    // // method 2 :

    // for (int i = row; i >= 0; i--)
    // {
    //     // for (int j = 0; j <= i; j++)
    //     for (int j = i; j >= 0; j--)
    //     {
    //         cout << " * ";
    //     }
    //     cout << endl;
    // }

    for (int i = row; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i << j << " ";
        }
        cout << endl;
    }
    return 0;
}

/*

* * * * *   51 52 53 54 55
* * * *     41 42 43 44
* * *       31 32 33
* *         21 22
*           11

*/