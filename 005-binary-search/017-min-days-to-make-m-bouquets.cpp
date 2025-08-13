#include<bits/stdc++.h>
using namespace std;
bool isPossible(vector<int>&bloomDay,int m,int k,int mid){
    int no_of_bouquet=0;
    int no_of_flowers=0;
    for(int i=0;i<bloomDay.size();i++){
        if(bloomDay[i]<=mid){
            no_of_flowers++;
            if(no_of_flowers==k){
                no_of_bouquet++;
                no_of_flowers=0;
            }
        } 
        else{
            no_of_flowers=0;
        }
    }
    if(no_of_bouquet>=m){
        return true;
    }
    return false;
}
int noOfDays(vector<int> &bloomDay,int m,int k){
    if((long long)m*k>bloomDay.size()){
        return -1;
    } 
    int s=0;
    int e=*max_element(bloomDay.begin(),bloomDay.end());
    int ans=-1;
    while(s<=e){
        int mid=s+(e-s)/2;
        if(isPossible(bloomDay,m,k,mid)){
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
    vector<int>bloomDay={7,7,7,7,12,7,7};
    int k=3;
    int m=2;
    cout<<noOfDays(bloomDay,m,k);
    return 0;
}