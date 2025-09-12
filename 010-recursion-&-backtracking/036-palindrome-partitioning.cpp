#include<bits/stdc++.h>
using namespace std;
vector<vector<string>>pal;
bool check(string s1){
    int i=0;
    int j=s1.size()-1;
    while(i<j){
        if(s1[i]!=s1[j]){
            return false;
        }
        i++;j--;
    }
    return true;
}
void partition(string str,vector<string>s){
    if(str.size()==0){
        pal.push_back(s);
        return;
    }
    for(int i=0;i<str.size();i++){
        if(check(str.substr(0,i+1))){ //check if the left part is palindrome or not
            s.push_back(str.substr(0,i+1)); //store left part
            partition(str.substr(i+1),s); //recursion call for the remaining string
            s.pop_back(); //remove the stroed part //backtrack
        }
    }

}
int main()
{
    string str="aab";
    partition(str,{});
    for(int i=0;i<pal.size();i++){
        for(int j=0;j<pal[i].size();j++){
            cout<<pal[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}