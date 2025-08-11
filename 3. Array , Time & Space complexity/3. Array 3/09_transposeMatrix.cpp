#include <iostream>
using namespace std;

void transposeMatrix(int arr[][3], int row, int col)
{
    // same array me hi transpose kardo
    for(int i=0;i<row;i++){
        for(int j=i;j<col;j++){
            swap(arr[i][j],arr[j][i]);
        }
    }

    // printing array
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }


    // int ans[10][10] = {0};

    // for (int i = 0; i < row; i++)
    // {
    //     for (int j = 0; j < col; j++)
    //     {
    //         ans[i][j] = arr[j][i];
    //     }
    // }

    // for (int i = 0; i < row; i++)
    // {
    //     for (int j = 0; j < col; j++)
    //     {
    //         cout << ans[i][j] << " ";
    //     }
    //     cout << endl;
    // }
}

int main()
{
    int arr[3][3] = {{10, 20, 30},
                     {10, 40, 30},
                     {10, 20, 30}};

    int row = 3;
    int col = 3;

    transposeMatrix(arr, row, col);
    return 0;
}