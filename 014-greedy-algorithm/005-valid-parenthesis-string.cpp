#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s="(*))";
    int n=s.size();
    int min=0,max=0;
    bool flag=true;
    for(int i=0;i<n;i++){
        if(s[i]=='('){
            min++;
            max++;
        }
        else if(s[i]==')'){
            min--;
            max--;
        }
        else{
            min--;
            max++;
        }
        if(min<0){
            min=0;
        }
        if(max<0){
            flag=false;
            break;
        }
    }
    if(min!=0){
        flag=false;
    }
    if(flag){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
    return 0;
}