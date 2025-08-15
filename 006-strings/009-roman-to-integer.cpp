#include <bits/stdc++.h>
using namespace std;
int romanToInt(string s)
{
    map<string, int> m;
    m["I"] = 1;
    m["IV"] = 4;
    m["V"] = 5;
    m["IX"] = 9;
    m["X"] = 10;
    m["XL"] = 40;
    m["L"] = 50;
    m["XC"] = 90;
    m["C"] = 100;
    m["CD"] = 400;
    m["D"] = 500;
    m["CM"] = 900;
    m["M"] = 1000;
    int sum = 0, i = 0;
    while (i < s.size())
    {
        if (i + 1 < s.size())
        {
            string j = "";
            j += s[i];
            j += s[i + 1];
            if (m.find(j) != m.end())
            {
                sum += m[j];
                i = i + 2;
                continue;
            }
        }
        string k = "";
        k += s[i];
        sum += m[k];
        i++;
    }
    return sum;
}
int main()
{
    string s="MCMXCIV";
    cout<<romanToInt(s);
    return 0;
}