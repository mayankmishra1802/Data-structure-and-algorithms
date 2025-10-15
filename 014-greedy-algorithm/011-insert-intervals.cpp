#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<vector<int>>intervals={{1,2},{3,5},{6,7},{8,10},{12,16}};
    vector<int>newInterval={4,8};
    int n=intervals.size();
    vector<vector<int>>ans;
    int start=INT_MAX,end=INT_MIN;
    int i = 0;
    //Add all non-overlapping intervals before newInterval
    while(i < n && intervals[i][1] < newInterval[0]) {
        ans.push_back(intervals[i]);
        i++;
    }
    //Merge all overlapping intervals with newInterval
    while(i < n && intervals[i][0] <= newInterval[1]) {
        newInterval[0] = min(newInterval[0], intervals[i][0]);
        newInterval[1] = max(newInterval[1], intervals[i][1]);
        i++;
    }
    ans.push_back(newInterval);
    // Add the remaining intervals
    while(i < n) {
        ans.push_back(intervals[i]);
        i++;
    }
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<2;j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}