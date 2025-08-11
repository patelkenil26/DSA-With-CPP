#include <iostream>
#include <limits.h>
using namespace std;

int findMinimumIn2DArray(int arr[][4],  int row,int col)
{
    int minVal = INT_MAX;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            minVal = min(arr[i][j], minVal);
        }
    }
    return minVal;
}

int main()
{
    int arr[3][4] = {{10, 20, 30, 40},
                     {50, 60, 70, 80},
                     {90, 100, 110, 120}};

    int row = 3;
    int col = 4;

    int min = findMinimumIn2DArray(arr, row, col);
    cout << "Minimum Value is: " << min;
    return 0;
}