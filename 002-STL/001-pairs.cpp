#include<bits/stdc++.h>
using namespace std;
int main()
{
    pair<int,int> p={1,3};
    cout<<p.first<<" "<<p.second<<endl;

    pair<int, pair<int,int>> p2={1,{3,5}}; //nested pair
    cout<<p2.first<<" "<< p2.second.first<<" "<< p2.second.second<<endl;
    
    pair<int,int>arr[]={{1,2},{3,4},{5,6}}; //array using pair
    cout<<arr[0].first<<" "<<arr[0].second<<endl;
    cout<<arr[1].first<<" "<<arr[1].second<<endl;
    cout<<arr[2].first<<" "<<arr[2].second<<endl;
    return 0;
}