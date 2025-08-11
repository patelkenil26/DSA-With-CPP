#include <iostream>
#include <vector>
using namespace std;

void print(vector<int> v)
{
    cout << "Printing Array" << endl;
    int size = v.size();
    for (int i = 0; i < size; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}
int main()
{
    vector<int> v;

    // insert element
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v.push_back(6);
    // print(v);

    // pop element
    v.pop_back();
    // print(v);

    // input element
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int d;
        cin >> d;
        v.push_back(d);
    }

    for (int i = 0; i < 5; i++)
    {
        v.push_back(i + 10);
    }
    print(v);

    // copy vector
    vector<int> arr = {10, 20, 30, 40};
    vector<int> arr2(arr);
    print(arr2);

        return 0;
}