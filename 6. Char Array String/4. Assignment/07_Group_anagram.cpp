/*
49. Group Anagrams
Given an array of strings strs, group the anagrams together. You can return the answer in any order.

Example 1:
Input: strs = ["eat","tea","tan","ate","nat","bat"]
Output: [["bat"],["nat","tan"],["ate","eat","tea"]]
Explanation:

There is no string in strs that can be rearranged to form "bat".
The strings "nat" and "tan" are anagrams as they can be rearranged to form each other.
The strings "ate", "eat", and "tea" are anagrams as they can be rearranged to form each other.

Example 2:
Input: strs = [""]
Output: [[""]]

Example 3:
Input: strs = ["a"]
Output: [["a"]]


*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

vector<vector<string>> groupAnagram(vector<string> &strs)
{
    map<string, vector<string>> map;

    for (auto str : strs)
    {
        string s = str;
        sort(s.begin(), s.end());
        map[s].push_back(str);
    }

    vector<vector<string>> ans;
    for (auto it = map.begin(); it != map.end(); it++)
    {
        ans.push_back(it->second);
    }

    return ans;
}

int main()
{
    vector<string> strs = {"eat", "tea", "tan", "ate", "nat", "bat"};
    vector<vector<string>> result = groupAnagram(strs);

    cout << "[";
    for (auto res : result)
    {
        cout << "[ ";
        for (auto final : res)
        {

            cout << '"' << final << '"' << " ";
        }
        cout << "]";
    }
    cout << "]";
    return 0;
}