#include<iostream>
using namespace std;

bool checkPrime(int n){
    int i=2;
    for(int i=2;i<n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}

int main()
{
    int n;
    cout <<"enter number ";
    cin >> n;

    for(int i=2;i<=n;i++){
        bool isPrime = checkPrime(i);
        if(isPrime){
            cout << i << " ";
        }
    }
    return 0;
}