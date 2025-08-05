#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<int,int>mpp;
    mpp[1]=2;
    mpp.insert({3,1});
    mpp.insert({2,3});

    for(auto it:mpp){ //values are stored in {key,value} pairs
        cout<<it.first<<" "<<it.second<<" "<<endl;
    }

    cout<<mpp[1]<<endl; //accessing value using key value
    return 0;
}