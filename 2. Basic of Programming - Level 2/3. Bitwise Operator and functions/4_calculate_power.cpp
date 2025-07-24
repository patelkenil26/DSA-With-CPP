#include<iostream>
using namespace std;

int calculatePower(int a,int b){
    int ans=1;
    for(int i=1;i<=b;i++){
        ans = ans *a;
    }
    return ans;
}

int main()
{
    int a;
    int b;
    cout << "enter a: ";
    cin >> a;
    cout << "enter b: ";
    cin >> b;

    int ans = calculatePower(a,b);
    cout << "ans is: " << ans;
    return 0;
}