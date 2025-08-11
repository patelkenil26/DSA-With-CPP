#include <iostream>
#include <forward_list>
using namespace std;

int main()
{
    // Forward Iterator
    forward_list<int> list;

    list.push_front(10);
    list.push_front(20);
    list.push_front(30);

    // Traverse using iterator
    forward_list<int>::iterator it = list.begin();

    while (it != list.end())
    {
        (*it) = (*it) + 5;
        it++;
    }
    cout << endl;

    it = list.begin();
    while (it != list.end())
    {
        cout << *it << " ";
        it++;
    }cout << endl;

    return 0;
}