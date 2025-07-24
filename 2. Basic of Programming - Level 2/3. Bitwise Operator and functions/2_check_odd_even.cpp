#include<iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;

    if(n&1){
        cout << "Odd Number";
    }else{
        cout << "Even Number";
    }
    return 0;
}