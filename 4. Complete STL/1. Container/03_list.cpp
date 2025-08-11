#include <iostream>
#include <list>
using namespace std;

int main()
{
    // creation
    list<int> l;


    // insertion
    l.push_back(10);
    // 10
    l.push_back(20);
    // 10 -> 20
    l.push_back(30);
    // 10 -> 20 -> 30
    l.push_back(40);
    // 10 -> 20 -> 30 -> 40

    l.push_front(40);
        // 40-> 10 -> 20 -> 30 -> 40
    l.push_front(100);
        // 100 ->40-> 10 -> 20 -> 30 -> 40

    l.pop_back();
        // 100 ->40-> 10 -> 20 -> 30
    l.pop_front();
        // 40-> 10 -> 20 -> 30
    l.push_back(40);
        // 40-> 10 -> 20 -> 30 -> 40


    // front and back method thi pahelo and last element ne find kari shakay chhe
    cout << l.front() << endl; // 10
    cout << l.back() << endl;  // 30


    // begin and end : aa method thi linked list na first and last element ne point kari shakay chhe and akhi linked list per travarse kari shakay chhe
    list<int>::iterator it = l.begin();
    while (it != l.end())
    {
        cout << *it << " ";
        it++;
    }

    cout << endl;


    // remove() : aa method ek value le chhe e value jya jya present hase tya badhe thi j remove thai jase
    l.remove(40); 
    list<int>::iterator it1 = l.begin();
    while (it1 != l.end())
    {
        cout << *it1 << " ";
        it1++;
    }
    cout << endl;


    // swap
    list<int> first;
    first.push_back(10);
    first.push_back(20);
    first.push_back(30);

    list<int> second;
    second.push_back(100);
    second.push_back(200);
    second.push_back(300);

    cout << "before swaping: " ;
    list<int> :: iterator it3 =first.begin();
    while (it3!= first.end())
    {
        cout << *it3 << " " ;
        it3++;
    }
    cout << endl;

    first.swap(second);

    cout << "after swaping: ";
    list<int> :: iterator it4 = first.begin();
    while (it4 != first.end())
    {
        cout << *it4 << " ";
        it4++;
    }
    cout << endl;
    
    list<int> fir;
    fir.push_back(10);
    fir.push_back(20);
    fir.push_back(30);

    fir.insert(fir.begin(),100);
    list<int> :: iterator i = fir.begin();
    while (i!= fir.end())
    {   
        cout << *i << " ";
        i++;
    }
    cout << endl;


    cout << "size of fir before erase : " << fir.size()<<endl;
    fir.erase(fir.begin(),fir.end());
    cout << "size of fir after erase : " << fir.size()<<endl;

    
    // size
    cout << "size of list is : " << l.size() << endl;
    l.clear(); // size = 0

    cout << "size of list is after clear function" << l.size() << endl;

    if (l.empty() == true)
    {
        cout << "List is empty" << endl;
    }
    else
    {
        cout << "List is not empty" << endl;
    }

    return 0;
}