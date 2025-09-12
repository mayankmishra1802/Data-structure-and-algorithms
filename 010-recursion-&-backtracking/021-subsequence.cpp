#include<bits/stdc++.h>
using namespace std;
// vector<string>s;
// void sub(string str,int i){
//     if(i==str.size()){
//         return;
//     }
//     int size=s.size();
//     for(int j=0;j<size;j++){
//         s.push_back(s[j]+str[i]);
//     }
//     sub(str,i+1);
// }
// int main()
// {
//     string str="abc";
//     s.push_back("");
//     sub(str,0);
//     for(int i=0;i<s.size();i++){
//         cout<<s[i]<<endl;
//     }

//     return 0;
// }
string str="ab";
vector<string>res;
void sub(string s,int i){
    if(i>=str.size()){
        res.push_back(s);
        return ;
    }
    s.push_back(str[i]); //take
    sub(s,i+1);
    s.pop_back();//not take //backtracking //backtrack to preivous step and explore another option
    sub(s,i+1);
}
int main(){
    sub("",0);
    for(int i=0;i<res.size();i++){
        cout<<res[i]<<endl;
    }
    return 0;
}