#include<bits/stdc++.h>
using namespace std;
int longestConsecutive(vector<int>& nums) {
    set<int>s;
    for(int i=0;i<nums.size();i++){
        s.insert(nums[i]);
    }
    int cnt=0,maxcnt=0;
    int value=*(s.begin());
    for(auto i=s.begin();i!=s.end();i++){
        if(*(i)==value){
            cnt++;
            value++;
        }
        else{
            maxcnt=max(maxcnt,cnt);
            value=*(i)+1;
            cnt=1;
        }
    }
    maxcnt=max(cnt,maxcnt);
    return maxcnt;
}
int main(){
    vector<int>nums={100,4,200,1,3,2};
    cout<<longestConsecutive(nums);
    return 0;
}