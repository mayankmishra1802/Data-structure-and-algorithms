#include<bits/stdc++.h>
using namespace std;
int conversion(string n){
    int length=n.size();
    int num=0,power_of_2=1;
    for(int i=length-1;i>=0;i--){
        if(n[i]=='1'){
            num+=power_of_2;
        }
        power_of_2=power_of_2*2;
    }
    return num;
}
int main()
{
    string n="1101";
    cout<<conversion(n);
    return 0;
}