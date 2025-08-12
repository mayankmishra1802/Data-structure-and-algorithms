#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> merge(vector<vector<int>> &intervals)
{
    sort(intervals.begin(), intervals.end());
    vector<vector<int>> non_overlapping;
    int i = 1, s = intervals[0][0], e = intervals[0][1];
    while (i < intervals.size())
    {
        if (e >= intervals[i][0])
        {
            s = min(s, intervals[i][0]);
            e = max(e, intervals[i][1]);
            i++;
        }
        else
        {
            non_overlapping.push_back({s, e});
            s = intervals[i][0];
            e = intervals[i][1];
            i++;
        }
    }
    if (i == intervals.size())
    {
        non_overlapping.push_back({s, e});
    }
    return non_overlapping;
}
int main()
{
    vector<vector<int>>intervals = {{1, 3}, {2, 6}, {8, 10}, {15, 18}};
    vector<vector<int>>v=merge(intervals);
    return 0;
}