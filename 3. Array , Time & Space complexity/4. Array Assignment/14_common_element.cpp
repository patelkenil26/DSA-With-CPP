#include <iostream>
#include <vector>
#include <set>
using namespace std;

int commonElement(int a[], int b[], int c[], int n1, int n2, int n3)
{
    vector<int> ans;
    set<int> st;
    int i = 0, j = 0, k = 0;

    while (i < n1 && j < n2 && k < n3)
    {
        if (a[i] == b[j] && b[j] == c[k])
        {
            st.insert(a[i]);
            i++;
            j++;
            k++;
        }
        else if (a[i] < b[j])
        {
            i++;
        }
        else if (b[j] < c[k])
        {
            j++;
        }
        else
        {
            k++;
        }
    }

    for (auto i : st)
    {
        ans.push_back(i);
    }
    return ans;
}

int main()
{
    int arr1[] = {1, 5, 10, 20, 40, 80};
    int arr2[] = {6, 7, 20, 80, 100};
    int arr3[] = {3, 4, 15, 20, 30, 70, 80, 120};
    int n1 = 6;
    int n2 = 5;
    int n3 = 8;
    
    commonElement(arr1, arr2, arr3, n1, n2, n3);
    
    return 0;
}