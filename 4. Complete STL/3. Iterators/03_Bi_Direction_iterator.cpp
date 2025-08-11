#include <iostream>
#include <list>
using namespace std;

int main()
{
    list<int> myList;
    myList.push_back(10);
    myList.push_back(20);
    myList.push_back(30);
    myList.push_back(40);

    list<int>::iterator it = myList.begin();
    cout << "Forward Move: ";
    while (it != myList.end())
    {
        // writing
        (*it) = (*it) + 5;
        // read
        cout << (*it) << " ";
        // forward move
        it++;
    }cout << endl;

    list<int> :: iterator it1 = myList.end();
    cout << "Backword Move: ";
    while (it1 != myList.begin())
    {
        it1--;
        cout << (*it1) << " ";
    }
    cout << endl;

    return 0;
}