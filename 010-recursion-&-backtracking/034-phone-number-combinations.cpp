#include<bits/stdc++.h>
using namespace std;
vector<string> s={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
vector<string> res;
void com(string digits,int i,string str){
    if(i>=digits.size()){
        res.push_back(str);
        return;
    }
    int idx=digits[i]-'0';
    for(int k=0;k<s[idx].size();k++){  
        str=str+s[idx][k]; //take one option
        com(digits,i+1,str);
        str.pop_back();//leave that option
    }
}
int main()
{
    string digits="23";
    com(digits,0,"");
    return 0;
}