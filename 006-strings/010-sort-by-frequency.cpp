#include<bits/stdc++.h>
using namespace std;
#define p pair<char,int>
bool comparator(p &p1,p &p2){ 
    return p1.second>p2.second;
}
string frequencySort(string s) {
    vector<p>v(123,{'\0',0});
    for(int i=0;i<s.size();i++){
        int idx=int(s[i]);  
        v[idx].first=s[i];
        v[idx].second++;
    }
    sort(v.begin(),v.end(),comparator);
    string result="";
    for(int i=0;i<v.size();i++){
        if(v[i].second>0){
            char ch=v[i].first;
            int freq=v[i].second;
            string temp=string(freq,ch);
            result+=temp;
        }
    }
    return result;
}
int main()
{
    string s="tree";
    cout<<frequencySort(s);
    return 0;
}