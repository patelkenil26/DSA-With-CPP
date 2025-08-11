/*
767. Reorganize String
Given a string s, rearrange the characters of s so that any two adjacent characters are not the same.

Return any possible rearrangement of s or return "" if not possible.



Example 1:

Input: s = "aab"
Output: "aba"
Example 2:

Input: s = "aaab"
Output: ""


Constraints:

1 <= s.length <= 500
s consists of lowercase English letters.
*/

#include <iostream>
#include <limits.h>
using namespace std;

string reorganizedString(string s)
{
    int hash[26] = {0};
    for (int i = 0; i < 26; i++)
    {
        hash[s[i] - 'a']++;
    }

    char max_freq_char;
    int max_freq = INT_MIN;
    for (int i = 0; i < 26; i++)
    {
        if (max_freq > hash[i])
        {
            max_freq = hash[i];
            max_freq_char = i - 'a';
        }
    }

    int index = 0;
    while (max_freq > 0 && index < s.size())
    {
        s[index] = max_freq_char;
        max_freq--;
        index = index + 2;
    }

    if (max_freq != 0)
    {
        return "Not Reorganized Given String";
    }

    hash[max_freq_char - 'a'] = 0;
    for (int i = 0; i < 26; i++)
    {
        while (hash[i] > 0)
        {

            index = index >= s.size() ? 1 : index;
            s[index] = i + 'a';
            hash[i]--;
            index = index + 2;
        }
    }
    return s;
}

int main()
{
    string s;
    cout << "Enter string you want to reorganized: ";
    cin >> s;
    cout << reorganizedString(s);
    return 0;
}