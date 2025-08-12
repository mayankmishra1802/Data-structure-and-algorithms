#include <bits/stdc++.h>
using namespace std;
int getLongestSubarray(vector<int>& a, int k) {
    int n = a.size();
    map<int, int> ps;
    int sum = 0;
    int maxLen = 0;
    for (int i = 0; i < n; i++) {
        sum += a[i];
        if (sum == k) {
            maxLen = max(maxLen, i + 1);
        }
        int r=sum-k;
        if (ps.find(r) != ps.end()) {
            int len = i - ps[r];
            maxLen = max(maxLen, len);
        }
        if (ps.find(sum) == ps.end()) {
            ps[sum] = i;
        }
    }
    return maxLen;
}

int main()
{
    vector<int> a = { -1, 1, 1};
    int k = 1;
    cout<<getLongestSubarray(a, k);
    return 0;
}
