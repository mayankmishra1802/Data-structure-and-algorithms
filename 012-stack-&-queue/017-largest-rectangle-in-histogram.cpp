#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>height={2,1,5,6,2,3};
    int n=height.size();
    vector<int>nse(n);
    vector<int>pse(n);
    stack<int>s;
    for(int i=0;i<n;i++){
        while(!s.empty() && height[s.top()]>=height[i]){
            s.pop();
        }
        pse[i] = s.empty() ? -1 : s.top();
        s.push(i);
    }
    while(!s.empty()){
        s.pop();
    }
    for(int i=n-1;i>=0;i--){
        while(!s.empty() && height[s.top()]>=height[i]){
            s.pop();
        }
        nse[i] = s.empty() ? n : s.top();
        s.push(i);
    }
    int maxarea=0;
    for(int i=0;i<height.size();i++){
        int width=nse[i]-pse[i]-1;
        int area=height[i]*width;
        maxarea=max(area,maxarea);
    }
    cout<<maxarea;
    return 0;
}