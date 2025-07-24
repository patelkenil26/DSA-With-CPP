#include<iostream>
using namespace std;

int calculateAPSeries(int a,int l,int n){
    int ans = ((n)*(a+l))/2;
    return ans;
}

int main()
{
    int ans = calculateAPSeries(2,10,5);
    cout << ans;
    return 0;
}