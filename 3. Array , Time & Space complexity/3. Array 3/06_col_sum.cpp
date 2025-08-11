#include <iostream>
using namespace std;

void printColSum(int arr[3][4], int row, int col)
{
    for (int i = 0; i < col; i++)
    {
        int sum = 0;
        for (int j = 0; j < row; j++)
        {
            sum = sum + arr[j][i];
        }

        cout << sum << endl;
    }
}

int main()
{
    int arr[3][4] = {{10, 20, 30, 40},
                     {10, 20, 30, 40},
                     {10, 20, 30, 40}};

    int row = 3;
    int col = 4;

    printColSum(arr, row, col);
    return 0;
}