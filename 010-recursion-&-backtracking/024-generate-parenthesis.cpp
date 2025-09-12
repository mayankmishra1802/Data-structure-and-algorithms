#include<bits/stdc++.h>
using namespace std;
void generate(int n,int open,int close,string s){
    if(open+close==2*n){
        cout<<s<<endl;
        return;
    }
    if(s.empty()){
        generate(n,open+1,close,s+"(");
    }
    else if(open==n){
        generate(n,open,close+1,s+")");
    }
    else if(open>close){
        generate(n,open,close+1,s+")");
        generate(n,open+1,close,s+"(");
    }
    else{
        generate(n,open+1,close,s+"(");
    }
}
int main()
{
    int n=3;
    generate(n,0,0,"");
    return 0;
}