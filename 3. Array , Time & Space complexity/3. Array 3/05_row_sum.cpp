#include <iostream>
using namespace std;

void printRowSum(int arr[][4], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        int sum = 0;
        for (int j = 0; j < col; j++)
        {
            sum = sum + arr[i][j];
        }
        cout << sum << endl;
    }
}

int main()
{
    int arr[3][4] = {{10, 20, 130, 40},
                     {50, 60, 70, 80},
                     {90, 1100, 110, 120}};

    int row = 3;
    int col = 4;

    printRowSum(arr, row, col);
    return 0;
}