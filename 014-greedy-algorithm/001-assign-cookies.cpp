#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>g={1,2};
    vector<int>s={1,2,3};
    int cnt=0;
    int i=0,j=0;
    sort(g.begin(),g.end());
    sort(s.begin(),s.end());
    while(i<g.size() && j<s.size()){
        if(s[j]>=g[i]){
            cnt++;
            i++;j++;
        }
        else{
            j++;
        }
    }
    cout<<cnt;
    return 0;
}