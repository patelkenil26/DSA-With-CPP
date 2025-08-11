#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
    int a =12;
    int b= 23;
    cout << "Min Value is: " << min(a,b) << endl;
    cout << "Max Value is: " << max(a,b) << endl;


    // if muje container mathi min max find karvu hoy to 
    vector<int> arr(5);
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    arr[3] = 40;
    arr[4] = 50;

    auto it = min_element(arr.begin(),arr.end());
    cout << *it << endl;

    auto it1 = max_element(arr.begin(),arr.end());
    cout << *it1 << endl;
    return 0;
}