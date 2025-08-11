/*
242. Valid Anagram
Given two strings s and t, return true if t is an anagram of s, and false otherwise.

Example 1:
Input: s = "anagram", t = "nagaram"
Output: true

Example 2:
Input: s = "rat", t = "car"
Output: false

*/

#include <iostream>
using namespace std;

bool isAnagram(string s, string t)
{
    int freqTable[256] = {0};

    for (int i = 0; i < s.size(); i++)
    {
        freqTable[s[i]]++;
    }

    for (int i = 0; i < t.size(); i++)
    {
        freqTable[t[i]]--;
    }

    for (int i = 0; i < 256; i++)
    {
        if (freqTable[i] != 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    string s = "anagram";
    string t = "nagaram";
    bool ans = isAnagram(s, t);
    if (ans)
    {
        cout << "true";
    }
    else
    {
        cout << " false";
    }
    return 0;
}