#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void factorialOfLargeNum(int n)
{
    vector<int> ans;
    ans.push_back(1);
    int carry = 0;
    for (int i = 2; i <= n; i++)
    {
        for (int j = 0; j < ans.size(); j++)
        {
            int x = ans[j] * i + carry;
            ans[j] = x % 10;
            carry = x / 10;
        }
        while (carry)
        {
            ans.push_back(carry % 10);
            carry /= 10;
        }
    }
    reverse(ans.begin(), ans.end());
    for (int i : ans)
    {
        cout << i << "";
    }
    cout << endl;
}

int main()
{
    int n;
    cin >> n;
    factorialOfLargeNum(n);

    return 0;
}