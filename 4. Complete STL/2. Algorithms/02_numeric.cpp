#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>
using namespace std;

int main()
{
    vector<int> arr(5);
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    arr[3] = 40;
    arr[4] = 50;

    // accumulate() : total sum karva mate
    int totalSum = accumulate(arr.begin(),arr.end(),0);
    cout << "totalSum: " << totalSum << endl;

    // inner_product() : 2 container na element ni multiplication and sum 
    vector<int> first (3);
    first[0] = 1; 
    first[1] = 2;
    first[2] = 3;

    vector<int> second (3);
    second[0] = 3;
    second[1] = 4;
    second[2] = 5;

    /* 
        1*3 + 2*4 + 3*5 
        3 + 8 + 15
        26
    */
    int productSum  = inner_product(first.begin(),first.end(),second.begin(),0);
    cout << "Inner Product is : " << productSum << endl;

    vector<int> result(first.size());
    partial_sum(first.begin(),first.end(),result.begin());
    for(int a : result){
        cout << a << " ";
    }
    cout << endl;


    vector <int> arr1(3);
    // iota :consicutive value fill karva mate use thay chhe 
    iota(arr1.begin(),arr1.end(),255);
    for(int a : arr1){
        cout << a << " ";
    }
    cout << endl;
    return 0;
}