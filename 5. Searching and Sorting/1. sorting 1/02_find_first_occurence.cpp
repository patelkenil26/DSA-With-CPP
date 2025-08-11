#include <iostream>
using namespace std;

void findFirstOccurrence(int arr[], int n, int target, int &firstIndex)
{
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;

    while (s <= e)
    {
        if (arr[mid] == target)
        {  
            //ans found -> may or may not be first occurence
            //store and compute
            firstIndex = mid;
            //kyoki first occurence ki baat hori h
            //toh batao left me jau first occ k liye ya right me 
            //left me jao
            e = mid - 1;
        }

        if (target > arr[mid])
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
}

void findLastOccurrence(int arr[], int n, int target, int &lastIndex)
{
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;

    while (s <= e)
    {
        if (arr[mid] == target)
        {
            //target k equal toh hai
            //but may or may not be last occurrence
            //store and compute
            lastIndex = mid;

            //right me jao
            s = mid + 1;
        }

        if (target > arr[mid])
        {
            s = mid + 1;
        }
        if (target < arr[mid])
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
}

void findTotalOccurrence(int &firstIndex, int &lastIndex)
{
    int totalOccurrence = lastIndex - firstIndex + 1;
    cout << "Total Occurrence: " << totalOccurrence << endl;
}

int main()
{
    int arr[10] = {20, 20, 20, 30, 30, 40, 50, 60, 70, 80};
    int size = 10;
    int target = 20;
    int firstIndex = -1;
    int lastIndex = -1;
    findFirstOccurrence(arr, size, target, firstIndex);
    findLastOccurrence(arr, size, target, lastIndex);

    cout << "First Index: " << firstIndex << endl;
    cout << "Last Index: " << lastIndex << endl;
    findTotalOccurrence(firstIndex,lastIndex);
    return 0;
}