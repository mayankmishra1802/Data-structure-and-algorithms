#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>start={1,3,0,5,8,5};
    vector<int>end={2,4,6,7,9,9};
    int n=start.size();
    vector<pair<int,int>>timings;
    for(int i=0;i<n;i++){
        timings.push_back({start[i],end[i]});
    }
    sort(timings.begin(), timings.end(), [](pair<int, int> &a, pair<int, int> &b) {
        return a.second < b.second; 
    });
    
    int start_time=timings[0].first;//ongoing meeting start time
    int end_time=timings[0].second; //ongoing meeting end time
    int cnt=1;
    for(int i=1;i<n;i++){
        if(end_time<timings[i].first){
            cnt++;
            start_time=timings[i].first;
            end_time=timings[i].second;
        }
    }
    cout<<cnt;
    return 0;
}