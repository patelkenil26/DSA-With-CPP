#include <iostream>
#include <algorithm>
using namespace std;

bool keyPair(int arr[], int n, int target)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] + arr[j] == target)
            {
                return true;
            }
        }
    }
    return false;
}

bool twoSum2Pointer(int arr[], int n, int x)
{
    int low = 0;
    int high = n - 1;

    while (low < high)
    {
        int currentSum = arr[low] + arr[high];

        cout << "current sum is " << currentSum << endl;

        if (currentSum == x)
        {
            return true;
        }
        else if (currentSum > x)
        {
            high--;
        }
        else
        {
            low++;
        }
        return false;
    }
}

int main()
{
    // int arr[3][3] = {   {10,20,30},
    //                     {40,50,60},
    //                     {70,80,90}
    //                 };
    // int row = 3;
    // int col = 3;

    int arr[] = {10, 40, 20, 30};
    int size = 4;
    int target = 60;

    sort(arr, arr + size);
    return twoSum2Pointer(arr, size, target);

    // return bool twoSum = keyPair(arr,size,target);
    //  if(twoSum){
    //      cout<< "target is found";
    //  }else{
    //      cout << "Target is not found";
    //  }

    return 0;
}