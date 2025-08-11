#include <iostream>
using namespace std;

bool search2DArray(int arr[][4], int row, int col, int target)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (arr[i][j] == target)
            {
                return true;
            }
        }
    }
    return false;
}

int main()
{
    int arr[3][4] = {{10, 20, 30, 40},
                     {50, 60, 70, 80},
                     {90, 100, 110, 120}};

    int row = 3;
    int col = 4;
    int target = 210;
    bool ans = search2DArray(arr, row, col, target);
    if (ans)
    {
        cout << "Target Found";
    }
    else
    {
        cout << "Target Not Found";
    }
    return 0;
}