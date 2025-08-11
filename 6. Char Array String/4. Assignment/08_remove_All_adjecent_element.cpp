#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

string removeDuplicates(string s, int k)
{
    int n = s.length();
    int i = 0;
    int j = 0;
    vector<int> count(n);
    while (j < s.size())
    {
        s[i] = s[j];
        count[i] = 1;
        if (i > 0 && s[i] == s[i - 1])
        {
            count[i] = count[i] + count[i - 1];
        }
        if (count[i] == k)
        {
            i = i - k;
        }
        i++;
        j++;
    }
    return s.substr(0, i);
}

int main()
{
    string s ;
    cout << "enter string : " ;
    cin >> s;
    cout << endl;
    int k;
    cout << "enter k edjacent and equal latter: ";
    cin >> k;
    cout << removeDuplicates(s, k);
    return 0;
}