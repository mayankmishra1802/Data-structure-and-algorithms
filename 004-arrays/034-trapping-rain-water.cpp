#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>height={0,1,0,2,1,0,1,3,2,1,2,1};
    int n=height.size();
        int left[n],right[n];
        left[0]=0;
        int max_left=height[0];
        for(int i=0;i<n;i++){
            left[i]=max_left;
            max_left=max(height[i],max_left);
        }
        right[n-1]=0;
        int max_right=height[n-1];
        for(int i=n-2;i>=0;i--){
            right[i]=max_right;
            max_right=max(height[i],max_right);
        }
    
        int water,total_water=0;
        for(int i=0;i<n;i++){
            water=(min(right[i],left[i]))-height[i];
            if(water>0){
                total_water+=water;
            }
        }
        cout<<total_water;
    return 0;
}