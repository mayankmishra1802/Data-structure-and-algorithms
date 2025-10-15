#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>arrival={900, 940, 950, 1100, 1500, 1800};
    vector<int>departure={910, 1200, 1120, 1130, 1900, 2000}; 
    int n=arrival.size();
    sort(arrival.begin(),arrival.end());
    sort(departure.begin(),departure.end());
    int i=0,j=0;
    int cnt=0;
    int platforms=1;
    while(i<n){
        if(arrival[i]<=departure[j]){
            cnt++;
            platforms=max(platforms,cnt);
            i++;
        }
        else{
            cnt--;
            j++;
        }
    }
    cout<<platforms;
    return 0;
}