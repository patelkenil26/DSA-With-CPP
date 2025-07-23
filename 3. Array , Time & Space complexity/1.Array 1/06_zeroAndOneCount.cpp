#include <iostream>
using namespace std;

void printZeroAndOnes(int arr[], int size)
{
    int zeroCount = 0;
    int oneCount = 0;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == 0)
        {
            zeroCount++;
        }
        else
        {
            oneCount++;
        }
    }

    cout << "Total Zeros : " << zeroCount << endl;
    cout << "Total Ones : " << oneCount << endl;
}

int main()
{
    int arr[7] = {0, 1, 0, 0, 1, 0, 1};
    int size = 7;
    printZeroAndOnes(arr, size);
    return 0;
}