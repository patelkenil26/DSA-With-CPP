#include <iostream>
using namespace std;

int main()
{
    int row, column;
    cout << "Enter row " << endl;
    cin >> row;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << j+1;
        }
        cout << endl;
    }
    return 0;
}