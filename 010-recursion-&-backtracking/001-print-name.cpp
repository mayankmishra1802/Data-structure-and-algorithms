#include<bits/stdc++.h>
using namespace std;
int cnt=0;
void print(string s){
    if(cnt==5){
        return;
    }
    cout<<s<<endl;
    cnt++;
    print(s);
}
int main()
{
    print("mayank");
    return 0;
}