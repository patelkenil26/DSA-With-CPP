#include <iostream>
#include <queue>
using namespace std;

int main()
{
    // creation
    queue<int> q;

    // insertion
    q.push(10);
    // 10
    q.push(20);
    // 10,20
    q.push(30);
    // 10,20,30
    q.push(40);
    // 10,20,30,40

    cout << q.size() << endl;

    q.pop();
    // 20,30,40
    cout << q.size() << endl;

    if (q.empty() == true)
    {
        cout << "queue is empty" << endl;
    }
    else
    {
        cout << "queue is not empty" << endl;
    }

    cout << "Front element of queue is : " << q.front() << endl;
    cout << "Back element of queue is : " << q.back() << endl;

    queue<int> first;
    first.push(10);
    first.push(20);

    queue<int> second;
    second.push(100);
    second.push(200);

    first.swap(second);
    cout << first.front() << " " << first.back() << endl;

    return 0;
}