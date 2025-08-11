#include<iostream>
#include<iterator>
#include<vector>
using namespace std;

int main()
{
    // iterator : ek best eay chhe container par traverse karva mate 
    // its is pointer like object representing an element position in a container

    vector<int> arr;

    arr.push_back(10);
    arr.push_back(20);
    arr.push_back(30);
    arr.push_back(40);

    vector<int>:: iterator it = arr.begin();
    while (it != arr.end()) 
    {
        cout << *it << " ";
        it++;
    }cout << endl;
    

    return 0;
}