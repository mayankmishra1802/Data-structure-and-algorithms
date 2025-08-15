#include <bits/stdc++.h>
using namespace std;
bool findKeyByValue(unordered_map<char, char> &m, char Value)
{
    for (auto it : m)
    {
        if (it.second == Value)
        {
            return true;
        }
    }
    return false;
}
bool isIsomorphic(string s, string t)
{
    if (s.size() != t.size())
        return false;
    unordered_map<char, char> m;
    m.insert({s[0], t[0]});
    for (int i = 1; i < s.size(); i++)
    {
        auto it = m.find(s[i]);
        if (it != m.end())
        {
            if (it->second != t[i])
            {
                return false;
            }
        }
        else if (it == m.end() && findKeyByValue(m, t[i]))
        {
            return false;
        }
        else
        {
            m.insert({s[i], t[i]});
        }
    }
    return true;
}
int main()
{
    string s="egg";
    string t="add";
    cout<<isIsomorphic(s,t);
    return 0;
}