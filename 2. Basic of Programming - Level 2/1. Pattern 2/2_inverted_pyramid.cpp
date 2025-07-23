#include <iostream>
using namespace std;

void invertedHalfPyramid(int n)
{
    for(int i=0;i<n;i++){

        for(int j=0;j<i;j++){
            cout << " ";
        }
        for(int j=0;j<n-i;j++){
            cout << "* ";
        }
        
        cout << endl;
    }
}

void invertedHalfPyramid1(int n)
{
    for(int i=n;i>0;i--){

        for(int j=0;j<n-i;j++){
            cout << " ";
        }
        for(int j=n;j>n-i;j--){
            cout << "* ";
        }
        
        cout << endl;
    }
}

int main()
{
    int n;
    cout << "Enter number of rows: ";
    cin >> n;
    cout << endl;
    
    invertedHalfPyramid(n);
    invertedHalfPyramid1(n);
    return 0;
}
