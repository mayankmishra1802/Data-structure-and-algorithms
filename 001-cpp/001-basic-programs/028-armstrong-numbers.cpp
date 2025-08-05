#include<bits/stdc++.h>
using namespace std;
bool armstrongNumber(int n) {
    int num=n,m=0;
    while(num!=0){
        int a=num%10;
        m=m+(a*a*a);
        num=num/10; 
    }
    if(m==n){
        return true;
    }
    else{
        return false;
    }
        
}
int main()
{
    int n=153;
    cout<<armstrongNumber(n);
    cout<<endl;
    int m=372;
    cout<<armstrongNumber(m);
    return 0;
}