#include<bits/stdc++.h>
using namespace std;
bool isPossible(vector<int>&weights,int days,int mid){
    int total_days_taken=1;
    int total_weights=0;
    for(int i=0;i<weights.size();i++){
        total_weights+=weights[i];
        if(total_weights>mid){
            total_days_taken++;
            total_weights=weights[i];
        }
    }
    if(total_days_taken<=days){
        return true;
    }
    return false;
}
int shipWithinDays(vector<int>& weights, int days) {
    int s=*max_element(weights.begin(),weights.end());
    int e=accumulate(weights.begin(), weights.end(), 0);
    int ans;
    while(s<=e){
        int mid=s+(e-s)/2;
        if(isPossible(weights,days,mid)){
            ans=mid;
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }
    return ans; 
}
int main()
{
    vector<int>weights={3,2,2,4,1,4};
    int days=3;
    cout<<shipWithinDays(weights,days);
    return 0;
}