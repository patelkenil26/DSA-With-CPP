#include<iostream>
using namespace std;

int getLength(char arr[],int size){
    int count = 0;
    for(int i=0;i<size;i++){
        if(arr[i] == '\0'){
            break;
        }else{
            count ++;
        }
    }
    return count;
}

int main()
{
    char arr[10];
    cout << "enter name: "<< endl;
    cin >> arr;
    cout << getLength(arr,10) << endl;
    return 0;
}