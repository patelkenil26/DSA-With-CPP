#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void printDouble(int a)
{
    cout << 2 * a << " ";
}

bool findEven(int a)
{
    return a % 2 == 0;
}

int main()
{
    vector<int> v(6);
    v[0] = 30;
    v[1] = 20;
    v[2] = 10;
    v[3] = 20;
    v[4] = 50;
    v[5] = 20;

    // for_each() : container me kisi range of element pe specific function apply karna hai to for_each
    for_each(v.begin(), v.end(), printDouble);
    cout << endl;

    // find() : find ek iterator return kare chhe. if target madse to iterator return karse nai to 0.
    int target = 40;
    auto it = find(v.begin(), v.end(), target);
    cout << *it << endl;

    /* find_if() : aa function ma container ni range define karvani k aa
    range ma find karvanu chhe and kya find karna hai vo criteria ek
    function me likhate hai ane je bi first element container mathi madse
    je aa criteria ne follow karto hase te aa function  return karse */
    auto it1 = find_if(v.begin(), v.end(), findEven);
    cout << *it1 << endl;

    // count() : koi element container me ketali var repeat thay chhe tene count kare chhe
    int target1 = 20;
    int ans = count(v.begin(), v.end(), target1);
    cout << ans << endl;

    // count_if() :
    int ans1 = count_if(v.begin(), v.end(), findEven);
    cout << ans1 << endl;

    // sort() : a method ni help thi ascending order ma element ne sort kari shakay chhe
    sort(v.begin(), v.end());
    for (int a : v)
    {
        cout << a << " ";
    }
    cout << endl;

    reverse(v.begin(), v.end());
    for (int a : v)
    {
        cout << a << " ";
    }
    cout << endl;

    // rotate(v.begin(), v.begin() + 3, v.end());
    // for (int a : v)
    // {
    //     cout << a << " ";
    // }
    // cout << endl;
    // HW: Left Rotate

    // Unique() : if sorted element chhe to temathi duplicate element ne remove kari de chhe
    auto it3 = unique(v.begin(),v.end());
    v.erase(it3,v.end());
    for(int a : v){
        cout << a << " ";
    }
    cout << endl;

    vector<int> arr(5);
    arr[0] = 11;
    arr[1] = 12;
    arr[2] = 13;
    arr[3] = 14;
    arr[4] = 15;

    // partition()
    auto it5 = partition(arr.begin(),arr.end(),findEven);
    for(int a : arr){
        cout << a << " ";
    }
    cout << endl;

    return 0;
}