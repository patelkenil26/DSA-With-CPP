#include<iostream>
#include<stack>
using namespace std;

int main()
{
    stack<int> s;

    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    
    cout << s.size() <<endl;

    s.pop();
    cout << s.size() <<endl;

    cout << s.top() <<endl;

    if(s.empty() == true){
        cout << " stack is empty"<<endl;
    }else{
        cout << "stack is not empty" << endl;
    }

    stack<int> st1;
    st1.push(11);
    st1.push(12);

    stack<int> st2;
    st2.push(21);
    st2.push(22);

    st1.swap(st2);
    cout << st1.top();
    return 0;
}