#include<bits/stdc++.h>
using namespace std;
string replacePi(string s,int i){
    if(s[i+1]=='\0'){
        return s;
    }
    if(s.substr(i,2)=="pi"){
        s.replace(i,2,"3.14");
    }
    return replacePi(s,i+1);
}
int main()
{
    string s="axpiaepif";
    cout<<replacePi(s,0);
    return 0;
}