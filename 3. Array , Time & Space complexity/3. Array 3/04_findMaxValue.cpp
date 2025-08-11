#include <iostream>
#include <limits.h>
using namespace std;

int findMaximumIn2DArray(int arr[][4], int row, int col)
{
    int maxValue = INT_MIN;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            maxValue = max(arr[i][j], maxValue);
        }
    }
    return maxValue;
}

int main()
{
    int arr[3][4] = {{10, 20, 130, 40},
                     {50, 60, 70, 80},
                     {90, 1100, 110, 120}};

    int row = 3;
    int col = 4;

    int max = findMaximumIn2DArray(arr, row, col);
    cout << "Maximum Value is: " << max;
    return 0;
}