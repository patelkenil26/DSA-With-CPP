#include<iostream>
using namespace std;

void numericHollowHalf(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
            if(i==0||j==0||i==n-1||j==i){
                cout << j+1;
            }else{
                cout << " ";
            }
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cout << "Enter no of rows: ";
    cin >> n;
    numericHollowHalf(n);
    return 0;
}