#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>arr={13,46,24,52,20,9};
    int n=arr.size();
    int minimum_value_index,minimum_value;
    for(int i=0;i<n-1;i++){
        minimum_value_index=i;
        minimum_value=arr[i];
        for(int j=i+1;j<n;j++){
            if(arr[j]<minimum_value){
                minimum_value=arr[j];
                minimum_value_index=j;
            }
        }
        swap(arr[minimum_value_index],arr[i]);
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}