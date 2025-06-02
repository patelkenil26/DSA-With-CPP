#include <iostream>
using namespace std;

int main()
{
    int row, column;
    cout << "Enter row " << endl;
    cin >> row;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < row; j++)
        {
            if (i == 0 || j == 0 || i+j < row)
            {
                cout << j+1 << " ";
            }
        }
        cout << endl;
    }
    return 0;
}


/*

r-5

1 2 3 4 5   11  12  13  14  15  r-1 c-5
1 2 3 4     21  22  23  24      r-2 c-4
1 2 3       31  32  33          r-3 c-3
1 2         41  42              r-4 c-2
1           51                  r-5 c-1

*/