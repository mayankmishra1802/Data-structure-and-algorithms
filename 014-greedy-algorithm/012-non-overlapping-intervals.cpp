#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<vector<int>>intervals={{1,2},{2,3},{3,4},{1,3}};
    int n=intervals.size();
    sort(intervals.begin(),intervals.end(),[](vector<int> &a, vector<int> &b){
        return a[1] < b[1];
    });
    for(int i=0;i<n;i++){
        cout<<intervals[i][0]<<" "<<intervals[i][1]<<" "<<endl;
    }
    int non_overlapping_cnt=1;
    int end=intervals[0][1];
    for(int i=1;i<n;i++){
        if(intervals[i][0]>=end){
            non_overlapping_cnt++;
            end=intervals[i][1];
        }
    }
    cout<<n-non_overlapping_cnt;
    return 0;
}