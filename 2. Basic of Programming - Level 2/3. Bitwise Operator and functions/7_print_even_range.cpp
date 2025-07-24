#include<iostream>
using namespace std;

void printEvenRange(int start,int end){
    for(int i=start;i<end;i++){
        int n=i;
        if(!(n&1)){
            cout << n << endl;
        }
    }
}

int main()
{
    printEvenRange(101,120);
    return 0;
}