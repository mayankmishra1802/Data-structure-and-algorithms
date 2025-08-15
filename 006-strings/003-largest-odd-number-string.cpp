#include<bits/stdc++.h>
using namespace std;
string largestOddNumber(string num) {
    string m="";
    for(int i=num.size();i>=0;i--){ 
        if((num[i]-'0')%2!=0){
            m=num.substr(0,i+1);
            return m;
        }
    }
    return "";
}
int main()
{
    string num="52";
    cout<<largestOddNumber(num);
    return 0;
}