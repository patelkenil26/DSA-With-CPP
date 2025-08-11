#include<iostream>
using namespace std;

int main()
{
    char arr[100];

    cout << "Enter the name: " <<endl;
    // input
    // cin >> arr;
    cin.getline(arr,100,'\n');
    // cin.getline(arr,8);

    // print
    cout << "Your name is: " << arr << endl;

    return 0;
}