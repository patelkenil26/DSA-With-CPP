#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
    vector<int> arr(5);
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    arr[3] = 40;
    arr[4] = 50;

    int target = 40;
    bool ans = binary_search(arr.begin(),arr.end(),target);
    cout << ans << endl;

    // lower_bound() : if 25 find karva hoy ane 25 container ma na hoy to je 25 thi greater then or equal to value  hase te return thase
    int targ = 25;
    auto it = lower_bound(arr.begin(),arr.end(),targ);
    cout << *it << endl;

    
    // upper_bound() : if 25 find karva hoy ane 25 container ma na hoy to je 25 thi greater value  hase te return thase
    int targe = 45;
    auto it1 = upper_bound(arr.begin(),arr.end(),targe);
    cout << *it1 << endl;

    // HW: equal_range() :  
    return 0;
}