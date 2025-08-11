#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr;
    arr.push_back(10);
    arr.push_back(20);
    arr.push_back(30);
    arr.push_back(40);

    vector<int>::iterator it = arr.begin();
    cout << "Forward Move: ";
    while (it != arr.end())
    {
        // writing
        (*it) = (*it) + 3;
        // read
        cout << (*it) << " ";
        // forward move
        it++;
    }
    cout << endl;

    vector<int>::iterator it1 = arr.end();
    cout << "Backword Move: ";
    while (it1 != arr.begin())
    {
        it1--;
        cout << (*it1) << " ";
    }
    cout << endl;

    vector<int>::iterator it2 = arr.begin() + 2;
    cout << "Random Access: " <<*it2 << endl;

    return 0;
}