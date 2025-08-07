#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>arr={14,9,15,12,8,13};
    int n=arr.size();
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j>0;j--){
            if(arr[j]<arr[j-1]){
                swap(arr[j],arr[j-1]);
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
