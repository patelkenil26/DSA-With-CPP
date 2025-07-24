#include<iostream>
using namespace std;

void checkOddEvenNumber(int n){
    if(n%2==0){
        cout << "Given number is Even";
    }else{
        cout << "Given number is odd ";
    }
}

int main()
{
    int n;
    cin >> n;
    checkOddEvenNumber(n);
    return 0;
}