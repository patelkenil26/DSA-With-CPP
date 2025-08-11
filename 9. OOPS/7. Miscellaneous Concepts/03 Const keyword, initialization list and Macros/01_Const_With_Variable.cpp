#include <iostream>
using namespace std;

int main()
{
    // CONST WITH VARIABLE
    const int x = 10; // x is constant  -> can't reassign value
    cout << x << endl;
    // x = 10; // give error

    // 2. CONST WITH POINTER
    const int *a = new int(10); // const data , non const pointer
    int const *c = new int(20); // means same as above line
    // *a = 2 // gives error -> can't change the content of pointer
    // data is constant but pointer can be dereference
    cout << *a << endl;
    delete a; // to avoid memory leak
    int b = 2;
    a = &b; // pointer can be reassign
    cout << *a << endl;

    // CONST POINTER BUT NON-CONSTANT DATA
    int *const p = new int(1);
    cout << *p << endl;
    *p = 10;
    cout << *p << endl;
    int q = 20;
    // p = &q; // gives error

    // BOTH POINTER AND DATA CONST
    const int *const m = new int(12);
    cout << *m << endl;
    // *m = 30 --> gives error 
    int n = 20;
    // m=&n --> gives error 
    return 0;
}