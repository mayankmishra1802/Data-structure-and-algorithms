#include<bits/stdc++.h>
using namespace std;
bool comp(pair<int,int> p1,pair<int,int>p2){
    if(p1.second <p2.second) return true;
}
int main()
{
    vector<int>v;
    v.push_back(4);
    v.push_back(3);
    v.push_back(2);
    v.push_back(1);
    for(auto i:v){
        cout<<i<<" ";
    }
    cout<<endl;

    //sort algorithm
    sort(v.begin(),v.end());
    for(auto i:v){
        cout<<i<<" ";
    }
    cout<<endl;

    //descending sort
    sort(v.begin(),v.end(),greater<int>());
    for(auto i:v){
        cout<<i<<" ";
    }
    cout<<endl<<endl;

    
    /*sorting accoridng to the second element and if second element is same then
    sort it according to the first element but in descending*/
    pair<int,int> a[]={{1,2},{2,1},{4,1}};
    sort(a,a+3,comp);
    for(auto i:a){
        cout<<i.first<<" "<<i.second<<" ";
    }
    cout<<endl<<endl;

    //builtin_popcount for integer
    int num=7;
    int cnt=__builtin_popcount(num);
    cout<<cnt<<endl;

    //builtin_popcount for long long
    long long n=123456789123;
    int c=__builtin_popcountll(n);
    cout<<c<<endl;
    cout<<endl;
    
    //next permutation
    string s="123";
    do{
        cout<<s<<endl;
    }
    while(next_permutation(s.begin(),s.end()));
    cout<<endl;

    //max_element
    int arr[]={1,2,3,45,99};
    int m= *max_element(arr,arr+5);
    cout<<m<<endl;
    return 0;
}