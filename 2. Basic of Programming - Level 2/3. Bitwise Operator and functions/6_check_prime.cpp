#include<iostream>
using namespace std;

bool isPrime(int n){
    for(int i=2;i<n-1;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}

int main()
{
    int n;
    cout << "enter number: ";
    cin >> n;
    bool num = isPrime(n);
    if(num == true){
        cout << "Prime";
    }
    else{
        cout <<"Not Prime";
    }
    return 0;
}